# Objetivos

- Estudiar los fundamentos de los scanner aplicados a una calculadora con
notación polaca inversa que utiliza un stack.
- Implementar modularización mediante los módulos Calculator,
StackOfDoublesModule, y Scanner.

## Temas

- Módulos.
- Interfaz.
- Stack.
- Ocultamiento de información.
- Encapsulamiento.
- Análisis léxico.
- Lexema.
- Token.
- Scanner.
- enum

## Tareas

1. Estudiar la implementación de las sección 4.3 de [KR1988].
2. Construir los siguientes componentes, con las siguientes entidades públicas:

### Calculator

- Qué hace: Procesa entrada y muestra resultado.
- Usa de stdio EOF printf atof

- Desarrollar:

    Función MAIN con interface para la toma de datos. Dar la bienvenida, dar mensaje pidiendo la operación a calcular y guardar la entrada en un array de caracteres.

    Función CALCULO con WHILE hasta EOF, dentro un SWITCH para evaluar el siguiente token, si es un número push a la pila, si es un operador, realiza la operación y pop de los operandos + operación con push del resultado.

    Función imprimir resultado para dar por mensaje el string = resultado

### StackOfDoublesModule

- Qué hace: módulo para manejar la pila

- Desarrollar:

    Función StackItem que crea la pila y el puntero base, puntero tope

    Función Push que agrega un elemento al tope de la pila, utilizar puntero para no perder el índice

    Función Pop que saca un elemento del tope de la pila, utilizar puntero para no perder el índice

    Función IsEmpty que verifica que el stack no esté vacío

    Función IsFull que verifica que el stack no esté lleno

### Scanner

- Qué hace: Obtiene operadores y operandos
- Usa de stdio getchar EOF isdigit ungetc

- Desarrollar:

    Función GetNextToken que lee el puntero de la pila e identifica que tipo de Token es. Analiza los operandos para saber si se trata de un entero o un double y concatena los caracteres en este último caso.

    Tipo Token que guarda el tipo y su valor como propiedades TokenType y TokenValue