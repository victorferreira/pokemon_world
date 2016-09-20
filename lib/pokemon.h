// TODO: Implement #ifdef
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// typedef enum {NORMAL,
//               FIRE,
//               WATER,
//               GRASS,
//               ELECTRIC,
//               ICE,
//               FIGHTING,
//               POISON,
//               GROUND,
//               FLYING,
//               PSYCHIC,
//               BUG,
//               ROCK,
//               GHOST,
//               DARK,
//               DRAGON,
//               STEEL,
//               FAIRY
// } pokemon_type;

struct tPokemon {
  int number;
  char* name;
  double size;
  double weight;
  char* pType; // TODO: implement dual type pokemon
};

void printPokemon(struct tPokemon *pokemon) {
  printf("Number: %d\n", pokemon->number);
  printf("Name: %s\n", pokemon->name);
  printf("Size: %.2fm\n", pokemon->size);
  printf("Weigth: %.2fkg\n", pokemon->weight);
  printf("Type: %s\n", pokemon->pType);
}

struct tPokemon createPokemon(int number, char* name, double size, double weight, char* pType) {
  struct tPokemon *pokemon;
  pokemon = (struct tPokemon *) malloc( sizeof(struct tPokemon) );
  pokemon->number = number;
  pokemon->name = name;
  pokemon->size = size;
  pokemon->weight = weight;
  pokemon->pType = pType;
  return *pokemon;
}
