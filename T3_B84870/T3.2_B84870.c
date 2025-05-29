#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

// Función para leer una línea de longitud indefinida desde stdin
char *leer_linea(void) {
    int capacidad = 100;
    char *linea = malloc(capacidad);
    if (!linea) return NULL;

    int c, i = 0;
    while ((c = getchar()) != EOF && c != '\n') {
        if (i >= capacidad - 1) {
            capacidad *= 2;
            char *nueva_linea = realloc(linea, capacidad);
            if (!nueva_linea) {
                free(linea);
                return NULL;
            }
            linea = nueva_linea;
        }
        linea[i++] = (char)c;
    }

    if (i == 0 && c == EOF) {
        free(linea);
        return NULL;
    }

    linea[i] = '\0';
    return linea;
}

// Verifica si la línea contiene solo dígitos del 1 al 9
int es_numero_valido(const char *linea) {
    for (int i = 0; linea[i] != '\0'; i++) {
        if (!isdigit(linea[i])) {
            return 0;
        }
    }
    return 1;
}

int main() {
    char *linea;

    while ((linea = leer_linea()) != NULL) {
        if (es_numero_valido(linea)) {
            printf("Número: %s\n", linea);           // stdout
        } else {
            fprintf(stderr, "Error - Línea inválida: %s\n", linea);  // stderr
        }
        free(linea);
    }

    return 0;
}