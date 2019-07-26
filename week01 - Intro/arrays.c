#include <stdio.h>

void print_array(int array[], int length){
    int i;
    printf("Length of array is %d\n", length);
    for (i = 0; i < length; i++){
        printf("%d\n", array[i]);
    }
}

int main(){
    int list[] = {1, 3, 6, 0};
    int size = sizeof(list) / sizeof(list[0]);
    
    print_array(list, size);

    list[2] = 5;
    print_array(list, size);

    list[0] = list[0] * 8;
    print_array(list, size);

    return 0;
}