CC = gcc
CFlags = -Wall
TARGET = unix.exe
SRC = unix.c startup.c startup.h simple-commands.c simple-commands.h file-manage.c file-manage.h help.c help.h

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(SRC) -o $(TARGET)

clean:
	rm $(TARGET)