#include <stdio.h>
#include <stdlib.h>

int main() {
  printf("%f\n", 8.9 + 3.0);
  printf("%f\n", 8.9 - 3.0);
  printf("%f\n", 8.9 * 3.0);
  printf("%f\n", 8.9 / 3.0);
 
 //working with int and float- ans returns a float no
 printf("%f\n", 5 - 3.0);
 printf("%f\n", 5 / 4.0);
 
 //more complex math functions
 printf("%f\n", pow(2, 3));
 printf("%f\n", sqrt(36));
 printf("%f\n", ceil(36.656));
 printf("%f\n", floor(36.656));
  return 0;
}
// google more c math functions