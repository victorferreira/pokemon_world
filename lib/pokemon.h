// TODO: Implement #ifdef
#include <stdio.h>
#include <string.h>

typedef struct {
  int number;
  char* name;
  int size;
} tPokemon;


int printPokemon(tPokemon* p) {
  printf("Number: %d\n", p->number);
  printf("Name: %s\n", p->name);
}
