BIN = Calculadora.exe
OBJ = calculadora.o char.o get.o pila.o
CC = gcc
CFLAGS = -std=c18
RM = rm -f
$(BIN): $(OBJ)	
	$(CC) $(OBJ) -o $(BIN) $(CFLAGS)

calculadora.o: calculadora.c get.h pila.h
	$(CC) -c calculadora.c -o calculadora.o $(CFLAGS)

get.o: get.h get.c char.h
	$(CC) -c get.c -o get.o $(CFLAGS)

pila.o: pila.h pila.c
	$(CC) -c pila.c -o pila.o $(CFLAGS)

char.o: char.h char.c
	$(CC) -c char.c -o char.o $(CFLAGS)

clean:
	rm -rf *.o Calculadora.exe