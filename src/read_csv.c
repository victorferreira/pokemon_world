#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "../lib/pokedex.h"
int main() {
  char buffer[1024] ;
  char *record,*line;
  int i=0,j=1;

  int number;
  char* name;
  double size;
  double weight;
  char* pType;

  FILE *fstream = fopen("input","r");
  if(fstream == NULL) {
    printf("\n file opening failed ");
    return 1 ;
  }
  while((line=fgets(buffer,sizeof(buffer),fstream))!=NULL) {
    record = strtok(line,";");
    while(record != NULL) {
      // printf("record %d: %s\n", j, record);

      if (j == 1) {
        number = atoi(record);
      } else if (j == 2) {
        name = record;
      } else if (j ==3) {
        size = atof(record);
      } else if (j ==4) {
        weight = atof(record);
      } else if (j == 5) {
        pType = record;
      }
      // printPokemon(pokemon);
      record = strtok(NULL,";");
      j++;
    }
    addPokemonToPokedex(number, name, size, weight, pType);
    j = 1;
    ++i ;
  }
  printPokedex();
  return 0 ;
}
