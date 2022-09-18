#include <stdio.h>
#include <stdlib.h>

int main() {
  //variables 
  char name[] = "alfred";
  int age = 8;
  
  printf("hi, I'm %s\n", name);
  printf("I'm %d years old\n", age);
  
  age = 10;
  printf("i like the name %s\n", name);
  printf("but i dont like being %d years.\n", age);
  return 0;
}