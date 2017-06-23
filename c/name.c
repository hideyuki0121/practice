#include <stdio.h>

int main()
{

  char name[15] = "fujiihideyuki";

  char sample[30] = "abcdefghijklmnopqrstuvwxyz";
  
  int i;
  int j;
  
  for(i = 0; sample[i] != '\0'; i++){
    for(j = 0; name[j] != '\0'; j++){
      if(sample[i] == name[j] )
        printf("%c", name[j] );      
    }
  }

  printf("\n");
}
