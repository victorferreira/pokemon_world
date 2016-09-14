#include "../lib/pokemon.h"

int test_create_pokemon() {
  char* name = "pikachu";
  int number = 25;

  tPokemon Pk;
  Pk.name = name;
  Pk.number = number;

  if (Pk.name == name
    && Pk.number == number) {
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
