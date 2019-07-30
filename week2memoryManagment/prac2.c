#include <stdio.h>

int main(int argc, char *argv[]){

    printf("The number of command line arguments is %d\n", argc);
    printf("The name of the program in %s\n", argv[1]);

    return 0;
}