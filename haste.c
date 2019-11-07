#include "haste.h"

int haste(int tam, int preco[]){
  int max = 0;
  int res[tam];
  res[0] = 0;
  for(int i = 1; i <= tam; i++){
    int temp = preco[i] + preco[tam-i];
      if(temp>max) max = temp;
      res[i] = max;
  } 
  return res[tam];
}