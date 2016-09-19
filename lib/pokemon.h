// TODO: Implement #ifdef
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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
  double weight;
  char* pType; // TODO: implement dual type pokemon
} tPokemon;

void printPokemon(tPokemon p) {
  printf("Number: %d\n", p.number);
  printf("Name: %s\n", p.name);
  printf("Size: %.2fm\n", p.size);
  printf("Weigth: %.2fkg\n", p.weight);
  printf("Type: %s\n", p.pType); // TODO: print the actual type of the pkemon instead of a number
}

tPokemon cretatePokemon(int number, char* name, double size, double weight, char* pType) {
  tPokemon pokemon;
  pokemon.number = number;
  pokemon.name   = name;
  pokemon.size   = size;
  pokemon.weight = weight;
  pokemon.pType  = pType;

  return pokemon;
}
