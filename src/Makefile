CC = gcc 
CFLAGS = 
LIB = 

all: main 

string:
	$(CC) $(CFLAGS) -c string.c

main:string
	$(CC) $(CFLAGS) string.o main.c -o main

run:
	.\main.exe

clean:
	rm main.exe