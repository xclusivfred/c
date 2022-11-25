#include <stdio.h>
#include <stdlib.h>

int main() {
  char characterName[] = "Alfred";
  int characterAge = 50;

  printf("There was a guy named %s\n", characterName);
  printf("he was %d years old.\n", characterAge);

  characterAge = 30;
  printf("He liked the name %s\n", characterName);
  printf("but did not like being %d.\n", characterAge);
  return 0;
}