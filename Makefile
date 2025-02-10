TARGET=auto_clean
SRC=src/main.cpp src/services/CacheCleaner.cpp src/utils/Logger.cpp
CC=g++
CFLAGS=-Wall -std=c++17

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET)

clean:
	rm -f $(TARGET)
