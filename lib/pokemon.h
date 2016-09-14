// TODO: Implement #ifdef
#include <stdio.h>
#include <string.h>

typedef enum {NORMAL,
              FIRE,
              WATER,
              GRASS,
              ELECTRIC,
              ICE,
              FIGHTING,
              POISON,
              GROUND,
              FLYING,
              PSYCHIC,
              BUG,
              ROCK,
              GHOST,
              DARK,
              DRAGON,
              STEEL,
              FAIRY
} pokemon_type;

typedef struct {
  int number;
  char* name;
  double size;
  pokemon_type pType; // TODO: implement dual type pokemon
} tPokemon;


int printPokemon(tPokemon* p) {
  printf("Number: %d\n", p->number);
  printf("Name: %s\n", p->name);
  printf("Size: %.2fm\n", p->size);
  printf("Type: %d\n", p->pType);
}
