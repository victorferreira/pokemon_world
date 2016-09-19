// TODO: implement #ifdef
#include "../lib/pokemon.h"

typedef struct {
  tPokemon items[150];
} tPokedex;

tPokedex Px;

void addPokemonToPokedex(int number, char* name, double size, double weight, char* pType) {
  Px.items[number].number = number;
  strcpy(Px.items[number].name, name);
  Px.items[number].size = size;
  Px.items[number].weight = weight;
  Px.items[number].pType = pType;
}

void printPokedex() {
  for (int i = 1; i < 151; i++) {
    if (Px.items[i].number != 0) {
      printf("%3.d: %s\n", i, Px.items[i].name);;
    } else {
      printf("%3.d: Empty [%d]\n", i, Px.items[i].number);
    }
  }
}
