#include "../lib/pokemon.h"

int test_create_pokemon() {
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

  if (Pk.name == name
    && Pk.number == number
    && Pk.pType == type
    && Pk.size == size
    && Pk.weight == weight) {
    printf("test_create_pokemon   passes\n");
    // printPokemon(&Pk);
    return 0;
  } else {
    printf("test_create_pokemon   fails\n");
    return 1;
  }
}

int main() {
  test_create_pokemon();
}
