/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2019 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Includes ------------------------------------------------------------------*/
#include "main.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
#include <string.h>
#include <float.h>
/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */

/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/
UART_HandleTypeDef huart1;
UART_HandleTypeDef huart2;

/* USER CODE BEGIN PV */
const uint8_t SSID[] = "KIAKIA-2.4";
const uint8_t PASSWORD[] ="M206F29685k0073k0077";

#define NumByte 3
uint8_t Rdata[NumByte];
enum State {Start = 1, Stop = 0};
enum State state = Stop;
/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
static void MX_GPIO_Init(void);
static void MX_USART1_UART_Init(void);
static void MX_USART2_UART_Init(void);
/* USER CODE BEGIN PFP */

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */
void HAL_UART_RxCpltCallback(UART_HandleTypeDef *huart)
{
  HAL_UART_Transmit(&huart1, "incomming: ", 11, 12);
  HAL_UART_Transmit(&huart1, Rdata, NumByte, 12);
  HAL_UART_Transmit(&huart1, "\n", 1, 12);

  if(!strcmp(Rdata, "sta"))
	  state = Start;
  else if(!strcmp(Rdata, "stp"))
	  state = Stop;
  else if(!strcmp(Rdata, "esp"))
  {
	  state = Stop;
	  ESP_Configure();
  }

}

void ESP_Configure()
{
	//OK	->	+7
	HAL_UART_Transmit(&huart1, "********************\n", 21, 12);
	HAL_UART_Transmit(&huart1, "ESP Configure:\n", 15, 12);
	const int mySize = 150;
	uint8_t str[mySize];

	HAL_UART_Transmit(&huart2, "AT+CWMODE=3\r\n", 13, 12);
	HAL_UART_Receive(&huart2, str, 13 + 7, 700);
	HAL_UART_Transmit(&huart1, str, 13 + 7, 12);

	char* wifi;
	uint8_t wifi_size = 10+strlen(SSID)+3+strlen(PASSWORD)+3;
	wifi = malloc(wifi_size + 1);
	strcpy(wifi, "AT+CWJAP=\"");
	strcat(wifi, SSID);
	strcat(wifi, "\",\"");
	strcat(wifi, PASSWORD);
	strcat(wifi, "\"\r\n");

	//connected	->	+32
	HAL_UART_Transmit(&huart2, wifi, wifi_size, 12);
	HAL_UART_Receive(&huart2, str, wifi_size + 15 + 16 + 13 + 9, 10000);
	HAL_UART_Transmit(&huart1, str, wifi_size + 15 + 16 + 13 + 9, 12);
	free(wifi);

	HAL_UART_Transmit(&huart2, "AT+CIFSR\r\n", 10, 12);
	HAL_UART_Receive(&huart2, str, 10 + 27 + 34 + 30 + 35 + 7, 5000);
	HAL_UART_Transmit(&huart1, str, 10 + 27 + 34 + 30 + 35 + 7, 12);
	HAL_UART_Transmit(&huart1, "\n", 1, 12);
	HAL_UART_Transmit(&huart1, "********************\n", 21, 12);

}

void ESP_Client_Send(double speed, double position)
{

    uint8_t speed_integer = (uint8_t)speed;
    uint8_t speed_decimal = (speed - speed_integer)*100;
    char speed_ii [5];
    char speed_dd [5];
    char speed_dd_tmp [5];
    sprintf(speed_ii, "%i", speed_integer);
    sprintf(speed_dd_tmp, "%i", speed_decimal);
    // in case of having 0 after .
    if(speed_decimal < 10)
    {
    	strcpy(speed_dd, "0");
    	strcat(speed_dd, speed_dd_tmp);
    }
    else
    	strcpy(speed_dd, speed_dd_tmp);
    const uint8_t speed_intSize = strlen(speed_ii);
    const uint8_t speed_decSize = strlen(speed_dd);
    uint8_t speed_c[speed_intSize + speed_decSize];
    strcpy(speed_c, speed_ii);
    strcat(speed_c, ".");
    strcat(speed_c, speed_dd);

    uint8_t position_integer = (uint8_t)position;
    uint8_t position_decimal = (position - position_integer)*100;
    char position_ii [5];
    char position_dd [5];
    char position_dd_tmp [5];
    sprintf(position_ii, "%i", position_integer);
    sprintf(position_dd_tmp, "%i", position_decimal);
    // in case of having 0 after .
    if(position_decimal < 10)
	{
		strcpy(position_dd, "0");
		strcat(position_dd, position_dd_tmp);
	}
	else
		strcpy(position_dd, position_dd_tmp);
    const uint8_t position_intSize = strlen(position_ii);
    const uint8_t position_decSize = strlen(position_dd);
    uint8_t position_c[position_intSize + position_decSize];
    strcpy(position_c, position_ii);
    strcat(position_c, ".");
    strcat(position_c, position_dd);

    //	GET /plotter/?speed=9&position=8 HTTP/1.1		20 + speed + 10 + position + 9
    char request[20 + strlen(speed_c) + 10 + strlen(position_c) + 9];
    strcpy(request, "GET /plotter/?speed=");
    strcat(request, speed_c);
    strcat(request, "&position=");
    strcat(request, position_c);
    strcat(request, " HTTP/1.1");

	HAL_UART_Transmit(&huart1, request, strlen(request), 12);


}
/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{
  /* USER CODE BEGIN 1 */

  /* USER CODE END 1 */
  

  /* MCU Configuration--------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */

  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  MX_USART1_UART_Init();
  MX_USART2_UART_Init();
  /* USER CODE BEGIN 2 */
//  ESP_Configure();
  ESP_Client_Send(3.000, 1.00);
  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  while (1)
  {
      HAL_UART_Receive_IT(&huart1,Rdata,NumByte);
      if(state == Stop)
    	  continue;
      HAL_UART_Transmit(&huart1, "start\n", 6, 12);
	  HAL_Delay(1000);
    /* USER CODE END WHILE */

    /* USER CODE BEGIN 3 */
  }
  /* USER CODE END 3 */
}

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

  /** Initializes the CPU, AHB and APB busses clocks 
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_NONE;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }
  /** Initializes the CPU, AHB and APB busses clocks 
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_HSI;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV1;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_0) != HAL_OK)
  {
    Error_Handler();
  }
}

/**
  * @brief USART1 Initialization Function
  * @param None
  * @retval None
  */
static void MX_USART1_UART_Init(void)
{

  /* USER CODE BEGIN USART1_Init 0 */

  /* USER CODE END USART1_Init 0 */

  /* USER CODE BEGIN USART1_Init 1 */

  /* USER CODE END USART1_Init 1 */
  huart1.Instance = USART1;
  huart1.Init.BaudRate = 115200;
  huart1.Init.WordLength = UART_WORDLENGTH_8B;
  huart1.Init.StopBits = UART_STOPBITS_1;
  huart1.Init.Parity = UART_PARITY_NONE;
  huart1.Init.Mode = UART_MODE_TX_RX;
  huart1.Init.HwFlowCtl = UART_HWCONTROL_NONE;
  huart1.Init.OverSampling = UART_OVERSAMPLING_16;
  if (HAL_UART_Init(&huart1) != HAL_OK)
  {
    Error_Handler();
  }
  /* USER CODE BEGIN USART1_Init 2 */

  /* USER CODE END USART1_Init 2 */

}

/**
  * @brief USART2 Initialization Function
  * @param None
  * @retval None
  */
static void MX_USART2_UART_Init(void)
{

  /* USER CODE BEGIN USART2_Init 0 */

  /* USER CODE END USART2_Init 0 */

  /* USER CODE BEGIN USART2_Init 1 */

  /* USER CODE END USART2_Init 1 */
  huart2.Instance = USART2;
  huart2.Init.BaudRate = 115200;
  huart2.Init.WordLength = UART_WORDLENGTH_8B;
  huart2.Init.StopBits = UART_STOPBITS_1;
  huart2.Init.Parity = UART_PARITY_NONE;
  huart2.Init.Mode = UART_MODE_TX_RX;
  huart2.Init.HwFlowCtl = UART_HWCONTROL_NONE;
  huart2.Init.OverSampling = UART_OVERSAMPLING_16;
  if (HAL_UART_Init(&huart2) != HAL_OK)
  {
    Error_Handler();
  }
  /* USER CODE BEGIN USART2_Init 2 */

  /* USER CODE END USART2_Init 2 */

}

/**
  * @brief GPIO Initialization Function
  * @param None
  * @retval None
  */
static void MX_GPIO_Init(void)
{

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOC_CLK_ENABLE();
  __HAL_RCC_GPIOD_CLK_ENABLE();
  __HAL_RCC_GPIOA_CLK_ENABLE();

}

/* USER CODE BEGIN 4 */

/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */

  /* USER CODE END Error_Handler_Debug */
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{ 
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     tex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
