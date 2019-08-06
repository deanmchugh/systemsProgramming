// Introduction to memory management in C
// NOTE: this is C99 code, compile with c99 instead of gcc, or pass -std=c99 to gcc as a parameter

#include <stdio.h>
#include <stdlib.h>

#define ARRAY_LENGTH_1 10
#define ARRAY_LENGTH_2 20

int main(int argc, char **argv) {
    // type "man malloc" at a linux terminal to read about malloc and friends

    // TODO: allocate an array of 10 integers using malloc()
    int *a = (int *)malloc(sizeof(int) * ARRAY_LENGTH_1);

    // TODO: print array of 10 integers
    for (int i = 0; i < ARRAY_LENGTH_1; i++){
        printf("%d", a[i]);
    }
    printf("\n\n");

    // TODO: initialise array with values 0 through 9
    for (int i = 0; i < ARRAY_LENGTH_1; i++){
        a[i] = i;
    }

    // TODO: print array of 10 integers
    for (int i = 0; i < ARRAY_LENGTH_1; i++){
        printf("%d", a[i]);
    }
    printf("\n\n");

    // TODO: reallocate the array of 10 integers to 20 integers using realloc()
    a = realloc(a, sizeof(int) * ARRAY_LENGTH_2);

    // TODO: print array of 20 integers
    for (int i = 0; i < ARRAY_LENGTH_2; i++){
        printf("%d", a[i]);
    }
    printf("\n\n");

    // TODO: free memory for 20 integers allocated by realloc()
    free(a);

    // TODO: print pointer to free'd memory as an integer, what happens if you dereference this pointer?
    printf("%p\n\n", a);

    // TODO: allocate an array of 20 integers using calloc()
    a = (int *)calloc(ARRAY_LENGTH_2, sizeof(int));
    
    // TODO: print array of 20 integers
    for (int i = 0; i < ARRAY_LENGTH_2; i++){
        printf("%d", a[i]);
    }
    printf("\n\n");

    // TODO; free memory for 20 integers allocated by calloc()
    free(a);

    return EXIT_SUCCESS;
}
