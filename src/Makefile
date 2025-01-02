CC = gcc
CFlags = -Wall
TARGET = wbash.exe
SRC = wbash.c startup.c startup.h simple-commands.c simple-commands.h file-manage.c file-manage.h help.c help.h
UNIXSRC = unix.c
TARGETUNIX = unix.exe

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(SRC) -o $(TARGET)

unix:
	gcc $(UNIXSRC) -o $(TARGETUNIX)

clean:
	rm $(TARGET)
