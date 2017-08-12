#include <stdio.h>

int compare_string(const char *str_1, const char *str_2)
{
  int i;
  for(i = 0; str_1[i] != '\0' && str_2[i] != '\0'; i++){
    if(str_1[i] == str_2[i])continue;
    else return(str_1[i] < str_2[i])? 1: 0;
  }
  if(str_1[i] == '\0' && str_2[i] =='\0') return 0;
  else return (str_1[i] == '\0')? 1: 0;
}

void swap_string(char **str_1, char **str_2){

  char *buff;
  buff = *str_1;
  *str_1 = *str_2;
  *str_2 = buff;
}

int main(void)
{
  char* list[]= {//NULLの時指定の数はいらない
    "grapefruit",
    "apple",
    "watermelon",
    "pear",
    "grape",
    "banana",
    "cherry",
    NULL
  };
  
  int n;
  for(n = 0; list[n] != NULL; n++)
    printf("%s\n", list[n]);
  printf("\n");
  
  int min, i, j;
  for(i = 0; list[i] != NULL; i++){
    min = i;
    for(j = i; list[j] != NULL; j++)
      if(compare_string(list[j], list[min]))
        min = j;
    swap_string(&list[i], &list[min]);    
  }
  
  int t;
  for(t = 0; list[t] != NULL; t++)
    printf("%s\n",list[t]);
  printf("\n");
  
}
