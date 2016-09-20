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
  int image;
};

void printPokemon(struct tPokemon *pokemon) {
  printf("|%d\t| %s\t| %.2fm\t| %.2fkg | %s\t|", pokemon->number, pokemon->name, pokemon->size, pokemon->weight, pokemon->pType);
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
