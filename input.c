#include <stdio.h>
#include <string.h>

int main() {
    char message[14]; // Espacio suficiente para "Hello, world!" y '\0'
    int count, i;

    strcpy(message, "Hello, world!"); // Copiar cadena segura
    printf("Repeat how many times? ");
    scanf("%d", &count);

    for(i = 0; i < count; i++)
        printf("%3d - %s\n", i, message);

    return 0;
}
