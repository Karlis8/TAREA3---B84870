# TAREA3--B84870
#  Programas en C – Laboratorio

**Autor:** Karla Méndez, B84870  
**Curso:** Programación Bajo Plataformas Abiertas  
**Repositorio:** Contiene los programas desarrollados como parte de ejercicios de la Tarea 3

##  Contenido

Este repositorio incluye dos programas escritos en C:

- `T3.1_B84870.c`  
  Invierte una cadena de caracteres leída desde la entrada estándar (stdin), utilizando memoria dinámica y punteros.

- `T3.2_B84870.c`  
  Lee líneas desde un archivo de texto (redirigido como stdin) y verifica si contienen exclusivamente números válidos (solo dígitos del 1 al 9). Imprime los válidos al stdout y los inválidos al stderr. Usa `ctype.h` para la validación.

---

##  Descripción de los programas

###  Inversor

Este programa lee una cadena de longitud arbitraria desde stdin, la almacena dinámicamente, y luego imprime su reverso. La memoria se libera correctamente al final del programa.

####  Cómo compilar y ejecutar:

```bash
gcc -o inversor T3.1_B84870.c
./problema1
```
El programa esperará la entrada por teclado. Por ejemplo:
```
Entrada:  Hola Mundo
Salida:   odnuM aloH
```
### Validador
Este programa valida si cada línea de un archivo contiene solo dígitos del 0 al 9 (no se permiten caracteres no numéricos). Las líneas válidas se imprimen al stdout y las líneas inválidas se imprimen al stderr. 

####  Cómo compilar y ejecutar:
Este programa se compila:
```bash
gcc -Wall T3.2_B84870.c -o 2problema
```
Y se ejecuta:
```bash
./2problema < archivo.txt > output.txt 2> error.txt
```
### Notas
En este repositorio se incluyen tres archivos .txt que se utilizaron como prueba del prograa validador.


