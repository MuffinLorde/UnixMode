CC = gcc
CFlags = -Wall
TARGET = wbash.exe
SRC = wbash.c startup.c startup.h simple-commands.c simple-commands.h file-manage.c file-manage.h help.c help.h
UNIXSRC = unix.c
TARGETUNIX = unix.exe

all: $(TARGET) $(TARGETUNIX)

$(TARGET): $(SRC)
	$(CC) $(SRC) -o $(TARGET)

$(TARGETUNIX): $(UNIXSRC)
	$(CC) $(CFlags) $(UNIXSRC) -o $(TARGETUNIX)

clean:
	rm $(TARGET)
	rm $(TARGETUNIX)
