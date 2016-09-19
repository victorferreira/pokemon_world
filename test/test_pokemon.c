#include "../lib/pokemon.h"

int test_create_pokemon() {
  int number = 25;
  char name[] = "Pikachu";
  double size = 0.4;
  double weight = 6.0;
  char* type = "PSYCHIC";

  tPokemon Pk;
  Pk = cretatePokemon(number, name, size, weight, type);

// FIX: name comparasion
  if (Pk.number == number
    && Pk.name == name
    && Pk.size == size
    && Pk.weight == weight
    && Pk.pType == type) {
    printf("test_create_pokemon   passes\n");
    // printPokemon(Pk);
    return 0;
  } else {
    printf("test_create_pokemon   fails\n");
    return 1;
  }
}

int main() {
  test_create_pokemon();
}
