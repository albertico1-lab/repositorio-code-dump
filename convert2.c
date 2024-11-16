#include <stdio.h>
#include <stdlib.h> // Para las funciones exit() y atoi()

void usage(char *program_name) {
    printf("Usage: %s <message> <# of times to repeat>\n", program_name);
    exit(1);
}

int main(int argc, char *argv[]) {
    int i, count;

    // Verificar si se pasaron suficientes argumentos
    if (argc < 3) { // Si hay menos de 3 argumentos, mostrar mensaje de uso y salir
        usage(argv[0]);
    }

    // Convertir el segundo argumento a entero
    count = atoi(argv[2]);
    printf("Repeating %d times..\n", count);

    // Imprimir el mensaje el número de veces indicado
    for (i = 0; i < count; i++) {
        printf("%3d - %s\n", i, argv[1]);
    }

    return 0;
}
