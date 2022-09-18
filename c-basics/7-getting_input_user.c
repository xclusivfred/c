#include <stdio.h>
#include <stdlib.h>
//scanf - allows users input something into the program
int main() {
  //user gives this a value
  int age;
  double gpa;
  char pet[20];
  char names[20];
  
  printf("enter your names: ");
  fgets(names, 20, stdin);
  
  printf("enter your pet: ");
  scanf("%s", pet);
  
  printf("enter your age: ");
  scanf("%d", &age);
  
  printf("enter your gpa: ");
  scanf("%lf", &gpa);
  
  printf("your names are %s\n", names);
  printf("your pet is %s\n", pet);
  printf("you are %d years old\n", age);
  printf("your gpa is %f\n", gpa);
  
  return 0;
}