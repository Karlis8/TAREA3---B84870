#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Función para leer un string de cualquier longitud desde stdin
char* leer_string_dinamico() {
    int capacidad = 10;
    int longitud = 0;
    char *texto = malloc(capacidad * sizeof(char));
    if (texto == NULL) {
        fprintf(stderr, "Error: no se pudo asignar memoria\n");
        exit(1);
    }

    int c;
    while ((c = getchar()) != '\n' && c != EOF) {
        texto[longitud++] = (char)c;

        // Expandir capacidad si es necesario
        if (longitud >= capacidad) {
            capacidad *= 2;
            char *nuevo_texto = realloc(texto, capacidad * sizeof(char));
            if (nuevo_texto == NULL) {
                free(texto);
                fprintf(stderr, "Error: no se pudo reasignar memoria\n");
                exit(1);
            }
            texto = nuevo_texto;
        }
    }

    texto[longitud] = '\0'; // Agrega el carácter nulo al final
    return texto;
}

int main() {
    printf("Ingrese un texto:\n");
    char *texto = leer_string_dinamico();

    printf("Ingrese el carácter a contar:\n");
    char caracter;
    scanf(" %c", &caracter);

    // Contar ocurrencias
    int contador = 0;
    for (char *ptr = texto; *ptr != '\0'; ptr++) {
        if (*ptr == caracter) {
            contador++;
        }
    }

    printf("El carácter '%c' aparece %d veces.\n", caracter, contador);

    // Imprimir string al revés
    int longitud = strlen(texto);
    printf("Texto invertido: ");
    for (char *ptr = texto + longitud - 1; ptr >= texto; ptr--) {
        putchar(*ptr);
    }
    printf("\n");

    free(texto); // Liberar memoria
    return 0;
}