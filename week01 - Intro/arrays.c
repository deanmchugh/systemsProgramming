#include <stdio.h>

void print_array(int array[]){
    int i;
    int length = sizeof(array) / sizeof(array[0]);
    for (i = 0; i < length; i++){
        printf("%d", array[i]);
    }
}

int main(){
    int list[] = {1, 3, 6, 0};
    print_array(list);

    list[2] = 5;
    print_array(list);

    return 0;
}