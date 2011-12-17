CC = gcc
all: sortshell
         $(CC) sortshell.c -o sortshell
clean:
        rm -f sortshell.o