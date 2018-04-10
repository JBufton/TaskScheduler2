CC = g++

TARGET = main

FILES = ./src/taskscheduler.cpp ./src/task.cpp

STDFLAGS = c++11

all: $(TARGET)

$(TARGET): $(TARGET).cpp
	$(CC) -o $(TARGET) --std=$(STDFLAGS) $(TARGET).cpp $(FILES)

clean:
	$(RM) $(TARGET) $(OBJECTS)

