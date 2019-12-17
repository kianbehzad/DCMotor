#/bin/sh

mkdir -p cpp
protoc --python_out=cpp *.proto
