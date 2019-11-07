#include <stdio.h>
#include "haste.h"

int main(void){
  int p[] = {0,1,5,8,9,10,17,17,20,24,30};
  for(int i = 0;i<=10;i++)
    printf("Maior[%d] = %d\n",i,haste(i,p));
    
  return 0;
}
