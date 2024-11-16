#include <stdio.h>
#include <stdint.h> // Para uintptr_t

int main() {
    int i;
    char char_array[5] = {'a', 'b', 'c', 'd', 'e'};
    int int_array[5] = {1, 2, 3, 4, 5};
    uintptr_t hacky_nonpointer; // Cambiado a uintptr_t

    hacky_nonpointer = (uintptr_t) char_array; // Conversión segura
    for(i = 0; i < 5; i++) {
        printf("[hacky_nonpointer] points to %p, which contains the char '%c'\n",
            (void *) hacky_nonpointer, *((char *) hacky_nonpointer));
        hacky_nonpointer = hacky_nonpointer + sizeof(char);
    }

    hacky_nonpointer = (uintptr_t) int_array; // Conversión segura
    for(i = 0; i < 5; i++) {
        printf("[hacky_nonpointer] points to %p, which contains the integer %d\n",
            (void *) hacky_nonpointer, *((int *) hacky_nonpointer));
        hacky_nonpointer = hacky_nonpointer + sizeof(int);
    }

    return 0;
}
