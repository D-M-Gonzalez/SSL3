BIN = Prueba.exe
OBJ = prueba.o Scanner.o
CC = gcc
CFLAGS = -std=c18
RM = rm -f
$(BIN): $(OBJ)	
	$(CC) $(OBJ) -o $(BIN) $(CFLAGS)

calculadora.o: prueba.c Scanner.h
	$(CC) -c prueba.c -o prueba.o $(CFLAGS)

Scanner.o: Scanner.h
	$(CC) -c Scanner.c -o Scanner.o $(CFLAGS)

clean:
	rm -rf *.o Prueba.exe