// implement #ifdef
#include "../lib/pokedex.h"

int test_insert_one_pokemon() {
  char* name = "Pikachu";
  int number = 25;
  double size = 0.4;
  double weight = 6.0;
  int type = PSYCHIC;

  tPokemon Pk;
  Pk.name = name;
  Pk.number = number;
  Pk.pType = type;
  Pk.size = size;
  Pk.weight = weight;

  tPokedex Px;
  Px.pokemon[number] = &Pk;

  if (Px.pokemon[number]->name == name
    && Px.pokemon[number]->number == number
    && Px.pokemon[number]->pType == type
    && Px.pokemon[number]->size == size
    && Px.pokemon[number]->weight == weight) {
    printf("test_insert_one_pokemon   passes\n");
    // printPokemon(Px.pokemon[number]);
    return 0;
  } else {
    printf("test_insert_one_pokemon   fails\n");
    return 1;
  }
}

int test_insert_two_pokemons() {

  tPokemon Pk;
  Pk.name = "Pikachu";
  Pk.number = 25;
  Pk.pType = 0.4;
  Pk.size = 6.0;
  Pk.weight = PSYCHIC;

  tPokemon Pk2;
  Pk2.name = "Bulbasaur";
  Pk2.number = 1;
  Pk2.pType = 0.6;
  Pk2.size = 6.9;
  Pk2.weight = GRASS;

  tPokedex Px;
  Px.pokemon[Pk.number] = &Pk;
  Px.pokemon[Pk2.number] = &Pk2;

  if (Px.pokemon[Pk.number]->name == Pk.name
    && Px.pokemon[Pk.number]->number == Pk.number
    && Px.pokemon[Pk.number]->pType == Pk.pType
    && Px.pokemon[Pk.number]->size == Pk.size
    && Px.pokemon[Pk.number]->weight == Pk.weight
    && Px.pokemon[Pk2.number]->name == Pk2.name
    && Px.pokemon[Pk2.number]->number == Pk2.number
    && Px.pokemon[Pk2.number]->pType == Pk2.pType
    && Px.pokemon[Pk2.number]->size == Pk2.size
    && Px.pokemon[Pk2.number]->weight == Pk2.weight) {
    printf("test_insert_two_pokemon   passes\n");
    // printPokemon(Px.pokemon[Pk.number]);
    // printPokemon(Px.pokemon[Pk2.number]);
    return 0;
  } else {
    printf("test_insert_two_pokemon   fails\n");
    return 1;
  }
}

int main() {
  test_insert_one_pokemon();
  test_insert_two_pokemons();
}
