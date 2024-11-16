#include <stdio.h>
int main() {
    int i;

    char char_array[5] = {'a', 'b', 'c', 'd', 'e'};
    int int_array[5] = {1, 2, 3, 4, 5};
 
    char *char_pointer;
    int *int_pointer;
 
    char_pointer = int_array; // Asignación incompatible
    int_pointer = char_array; // Asignación incompatible
 
    for(i = 0; i < 5; i++) { // Iterar sobre el arreglo int con int_pointer
        printf("[integer pointer] points to %p, which contains the char '%c'\n",
            int_pointer, *int_pointer);
        int_pointer = int_pointer + 1;
    }
 
    for(i = 0; i < 5; i++) { // Iterar sobre el arreglo char con char_pointer
        printf("[char pointer] points to %p, which contains the integer %d\n",
            char_pointer, *char_pointer);
        char_pointer = char_pointer + 1;
    }
}
