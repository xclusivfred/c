#include <stdio.h>
#include <stdlib.h>
//constant are variables that can't be modified 
int main() {
  const int NUM = 5;
  // or 
  //int const num = 5;
  printf("%d\n", NUM);
  
  //this is also considered a const
  printf("hi, alfred\n");
  
  //program below won't run
  /*NUM = 8
  printf("%d\n", NUM);*/
  //the above won't run
  return 0;
}