// TODO: implement #ifdef
#include "../lib/pokemon.h"

struct tPokedex{
  struct tPokemon items[150];
};

struct tPokedex Px;

void addPokemonToPokedex(struct tPokemon *pokemon) {
  Px.items[pokemon->number].number = pokemon->number;
  Px.items[pokemon->number].name = pokemon->name;
  Px.items[pokemon->number].size = pokemon->size;
  Px.items[pokemon->number].weight = pokemon->weight;
  Px.items[pokemon->number].pType = pokemon->pType;
}

void addPokemonToPokedexByValue(int number, char* name, double size, double weight, char* pType) {
  char * realName = (char *) malloc(100);
  char * realType = (char *) malloc(100);
  strcpy(realName, name);
  strcpy(realType, pType);
  Px.items[number].number = number;
  Px.items[number].name = realName;
  Px.items[number].size = size;
  Px.items[number].weight = weight;
  Px.items[number].pType = realType;
}

void printPokedex() {
  printf("|Number\t| Name\t\t| Size\t| Weigth | Type \t|");
  printf("\n");
  for (int i = 1; i < 151; i++) {
    if (Px.items[i].number != 0) {
      // printf("%3.d: ", i);
      printPokemon(&Px.items[i]);
      printf("\n");
    } else {
      printf("%3.d: Empty [%d]\n", i, Px.items[i].number);
    }
  }
}
