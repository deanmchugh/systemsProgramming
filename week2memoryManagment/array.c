// Purpose:  Introduction to arrays and strings in C
// NOTE: this is C99 code, compile with c99 instead of gcc, or pass -std=c99 to gcc as a parameter

#include <stdio.h>
#include <stdlib.h>

#define TEXT_SIZE 15 // length of text array
#define NUMBER_SIZE 7 // length of number array

char text[] = {'B','R','A','D','L','E','Y',' ', 'J','O','N','E','S', 0, 'X'};
int number[] = {66, 82, 65, 68, 76, 69, 89};

int main(int argc, char **argv) {
   // type 'man -s 3 printf' at the linux terminal to learn how printf() works
   printf("Print name of program using printf()...\n");
   printf("%s", argv[0]);

   printf("\n\nPrint program arguments using printf()...\n");
   //printf("%s\n", argv[1]);

   printf("\nIterate over text array and print characters using array index operator []...\n");
   int i;
   for (i = 0; i < TEXT_SIZE; ++i){
      printf("%c", text[i]);
   }

   printf("\n\nIterate over text array and print chracters using offsets *(text + offset)...\n");
  int offset = sizeof(i) * (text[i] + sizeof(i));
  for (i = 0; i < offset; ++i){
      printf("%c", text[i]);
   }

   printf("\n\nIterate over text array and print characters by incrementing pointer...\n");
   int *ptr = text;
   for (i = 0; i < TEXT_SIZE; ++i){
      printf("%c", *ptr++);
   }

   printf("\n\nPrint text array as string using printf()...\n");
   printf("%s", text);

   printf("\n\nPrint number array as decimals...\n");
   for (i = 0; i < NUMBER_SIZE; ++i){
      printf("%d ", number[i]);
   }

   printf("\n\nPrint number array as characters...\n");
   for (i = 0; i < NUMBER_SIZE; ++i){
      printf("%c", number[i]);
   }

   return EXIT_SUCCESS;
}
