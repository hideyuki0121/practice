#include <stdio.h>
/*
  方針
  1,ファイルを読み込んで表示
  2,ファイルを編集
  3,編集したファイルを表示
  →方針変更　編集しつつ表示するようにする
  前提として、文法的に間違いのないプログラムを並べ替えるもの作成するものとする

  probrems
  ファイルの読み込み方法については勉強する
  →読み込みはできたが編集についてはまだ
  肝心の編集部分の関数について考えてない
  モチベーションが最底辺だったから少しでも考え続ける

  以上

*/


int main(void)
{
  // int ch;
  FILE *fp;
  char *p = 0;
  
  fp = fopen("subject.c", "r");

  if(fp == NULL) {
    printf("ファイルをオープンできませんでした\n");
    return 1;
  }
  printf("ファイルをオープンしました\n");
  /*  while ((ch = fgetc(fp)) != EOF)
      putchar(ch);
    
      fclose(fp);
  */

  char input_s[3072];
  int i;
  int buff;
  char ch;
  for (i = 0; i < 3071 && (buff = fgetc(fp)) != EOF; i++) {
    ch = (char)buff;
    input_s[i] = ch;
  }
  input_s[i] = '\0';
  printf("%s", input_s);
  /* while(1){ */
  /*   if((ch = fgetc(fp)) == ' '); */
  /*   else if((buff = fgetc(fp)) != EOF) */
  /*     ch  = (char)buff; */
  /*     putchar(ch); */
  /* } */
  fclose(fp);

  char input[3072];//受け皿を設けてこっちに書く？
  int n = 0;
  for (i = 0; input_s[i] != '\0' ; i++)
    if(input_s[i] == ' ') ;
    else if(input_s[i] == '\n');
    else{
      input[n] = input_s[i];
      n++;
    }
  input[n] = '\0';
  printf("%s", input);
  
  return 0;
}
