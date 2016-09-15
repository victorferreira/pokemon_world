// TODO: implement #ifdef
#include "../lib/pokemon.h"

typedef struct {
  tPokemon* pokemon[150];
} tPokedex;

void insertPokemon(tPokedex* pokedex, tPokemon* pokemon) {
  pokedex->pokemon[pokemon->number] = pokemon;
}

// FIX: pokedex should start at one instead of zero
void printPokedex(tPokedex pokedex) {
  for (int i = 1; i < 151; i++) {
    if (pokedex.pokemon[i] != 0) {
      printf("%3.d: %s\n", i, pokedex.pokemon[i]->name);;
    } else {
      printf("%3.d: Empty\n", i);
    }
  }
}
