#include <stdio.h>

int main(void)
{
  FILE *fp;

  fp = fopen("subject.c", "r");

  if(fp = NULL)
    printf("ファイルをオープンできませんでした\n");
  else{
    printf("ファイルをオープンしました\n");
    fclose(fp);
  }
  return 0;
}
