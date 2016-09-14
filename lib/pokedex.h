// TODO: implement #ifdef
#include "../lib/pokemon.h"

typedef struct {
  tPokemon* pokemon[150]; // TODO: implement an array of pokemons
} tPokedex;

// TODO: insert pokemon
// void insertPokemon(tPokedex* pokedex, tPokemon* pokemon) {
// }

// FIX: pokedex should start at one instead of zero
void printPokedex(tPokedex pokedex) {
  for (int i = 0; i < 151; i++) {
    if (pokedex.pokemon[i] != 0) {
      printf("%d: %s\n", i, pokedex.pokemon[i]->name);;
    } else {
      printf("%d: Empty\n", i);
    }
  }
}
