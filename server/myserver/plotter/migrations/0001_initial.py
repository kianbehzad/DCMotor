# Generated by Django 3.0 on 2019-12-15 15:36

from django.db import migrations, models
import django.db.models.deletion


class Migration(migrations.Migration):

    initial = True

    dependencies = [
    ]

    operations = [
        migrations.CreateModel(
            name='Experiment',
            fields=[
                ('id', models.AutoField(auto_created=True, primary_key=True, serialize=False, verbose_name='ID')),
                ('number', models.IntegerField()),
                ('Datetime', models.DateTimeField()),
            ],
        ),
        migrations.CreateModel(
            name='Properties',
            fields=[
                ('id', models.AutoField(auto_created=True, primary_key=True, serialize=False, verbose_name='ID')),
                ('speed', models.FloatField(default=0.0)),
                ('position', models.FloatField(default=0.0)),
                ('experiment', models.ForeignKey(on_delete=django.db.models.deletion.CASCADE, to='plotter.Experiment')),
            ],
        ),
    ]
