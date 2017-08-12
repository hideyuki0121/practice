#include <stdio.h>

void swap(int *a, int *b)
{
  int buff;
  buff = *a;

  *a = *b;
  *b = buff;

}

int main(void){

  int ary[6] = { 2, 5, 4, 1, 9, 8 };
  /* int a = 2, b = 3; 
     printf("a = %d, b = %d", a, b);

     swap(&a, &b);

     printf("a = %d, b = %d", a, b);
  */
  int n;
  for(n = 0; n < 6; n++)
    printf("%d", ary[n]);
  printf("\n");
  
  int min, i, j;
  for(i = 0; i < 6; i++){
    min = i;
    for(j =i; j < 6; j++ )
      if(ary[j] < ary[min]) min = j;
    
    swap(&ary[i], &ary[min]);
  }
  
  int t;
  for(t = 0; t < 6; t++)
    printf("%d", ary[t]);
  printf("\n");
}
