# TAREA3--B84870
# 🧠 Programas en C – Laboratorio

**Autor:** Karla Méndez, B84870  
**Curso:** Programación Bajo Plataformas Abiertas  
**Repositorio:** Contiene los programas desarrollados como parte de ejercicios de la Tarea 3

## 📂 Contenido

Este repositorio incluye dos programas escritos en C:

- `T3.1_B84870.c`  
  Invierte una cadena de caracteres leída desde la entrada estándar (stdin), utilizando memoria dinámica y punteros.

- `T3.2_B84870.c`  
  Lee líneas desde un archivo de texto (redirigido como stdin) y verifica si contienen exclusivamente números válidos (solo dígitos del 1 al 9). Imprime los válidos al stdout y los inválidos al stderr. Usa `ctype.h` para la validación.

---

## 🧾 Descripción de los programas

### 🔁 inversor.c

Este programa lee una cadena de longitud arbitraria desde stdin, la almacena dinámicamente, y luego imprime su reverso. La memoria se libera correctamente al final del programa.

#### 📌 Cómo compilar y ejecutar:

```bash
gcc -o inversor T3.1_B84870.c
./problema1
```
El programa esperará la entrada por teclado. Por ejemplo:
```
Entrada:  Hola Mundo
Salida:   odnuM aloH
```

