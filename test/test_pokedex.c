// implement #ifdef
#include "../lib/pokedex.h"

int test_insert_one_pokemon() {

  struct tPokemon Pk;
  Pk = createPokemon(25, "Pikachu", 0.4, 6.0, "PSYCHIC");

  addPokemonToPokedex(&Pk);

  if (Px.items[Pk.number].number == Pk.number
    && Px.items[Pk.number].name == Pk.name
    && Px.items[Pk.number].size == Pk.size
    && Px.items[Pk.number].weight == Pk.weight
    && Px.items[Pk.number].pType == Pk.pType) {
    printf("test_insert_one_pokemon   passes\n");
    return 0;
  } else {
    printf("test_insert_one_pokemon   fails\n");
    return 1;
  }
}

int test_insert_two_pokemons() {
  struct tPokemon Pk;
  Pk = createPokemon(25, "Pikachu", 0.4, 6.0, "PSYCHIC");

  struct tPokemon Pk2;
  Pk2 = createPokemon(1, "Bulbasaur", 0.6, 6.9, "GRASS");

  addPokemonToPokedex(&Pk);
  addPokemonToPokedex(&Pk2);

  if (Px.items[Pk.number].number == Pk.number
    && Px.items[Pk.number].name == Pk.name
    && Px.items[Pk.number].size == Pk.size
    && Px.items[Pk.number].weight == Pk.weight
    && Px.items[Pk.number].pType == Pk.pType
    && Px.items[Pk2.number].number == Pk2.number
    && Px.items[Pk2.number].name == Pk2.name
    && Px.items[Pk2.number].size == Pk2.size
    && Px.items[Pk2.number].weight == Pk2.weight
    && Px.items[Pk2.number].pType == Pk2.pType) {
    printf("test_insert_two_pokemons   passes\n");
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
