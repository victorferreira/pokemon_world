// implement #ifdef
#include "../lib/pokedex.h"

int test_insert_one_pokemon() {
  char* name = "Pikachu";
  int number = 25;
  double size = 0.4;
  double weight = 6.0;
  char* type = "PSYCHIC";

  tPokemon Pk;
  Pk = cretatePokemon(number, name, size, weight, type);

  addPokemonToPokedex(Pk.number, Pk.name, Pk.size, Pk.weight, Pk.pType);

  if (Px.items[number].number == number
    // && Px.items[number].name == name
    && Px.items[number].size == size
    && Px.items[number].weight == weight
    && Px.items[number].pType == type) {
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
  Pk = cretatePokemon(25, "Pikachu", 0.4, 6.0, "PSYCHIC");

  tPokemon Pk2;
  Pk2 = cretatePokemon(1, "Bulbasaur", 0.6, 6.9, "GRASS");

  addPokemonToPokedex(Pk.number, Pk.name, Pk.size, Pk.weight, Pk.pType);
  addPokemonToPokedex(Pk2.number, Pk2.name, Pk2.size, Pk2.weight, Pk2.pType);

  if (Px.items[Pk.number].number == Pk.number
    // && Px.items[Pk.number].name == Pk.name
    && Px.items[Pk.number].size == Pk.size
    && Px.items[Pk.number].weight == Pk.weight
    && Px.items[Pk.number].pType == Pk.pType
    && Px.items[Pk2.number].number == Pk2.number
    // && Px.items[Pk2.number].name == Pk2.name
    && Px.items[Pk2.number].size == Pk2.size
    && Px.items[Pk2.number].weight == Pk2.weight
    && Px.items[Pk2.number].pType == Pk2.pType) {
    printf("test_insert_two_pokemons   passes\n");
    // printPokedex();
    return 0;
  } else {
    printf("test_insert_two_pokemons   fails\n");
    return 1;
  }
}


int main() {
  test_insert_one_pokemon();
  test_insert_two_pokemons();
}
