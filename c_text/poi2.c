#include <stdio.h>

int main(void)
{
  /*
  int n;
  double x;
  int a[3];

  printf("nのアドレス    %p\n", &n);
  printf("xのアドレス    %p\n", &x);
  printf("a[0]のアドレス %p\n", &a[0]);
  printf("a[1]のアドレス %p\n", &a[1]);
  printf("a[2]のアドレス %p\n", &a[2]);
  //＆によってそのオブジェクトのアドレスを取り出す
  
  return 0;
  */

  int sato  = 178;
  int sanaka = 175;
  int masaki = 179;

  int *isako, *hiroko;//int へのポインタ型を定義

  isako = &sato;  // A = &BっていうのはAイコールBのような意味合い？
  hiroko = &masaki;// 代入だがアドレスが格納されるのでは？
  //intへのポインタには整数を格納するオブジェクトのアドレスを入れる
  
  printf("いさ子さんの好きな人の身長  %d\n", *isako);
  printf("ひろこさんの好きな人の身長  %d\n", *hiroko);

  isako = &sanaka;

  *hiroko = 180;

  putchar('\n');
  printf("佐藤くんの身長: %d\n", sato);
  printf("最中くんの身長: %d\n", sanaka);
  printf("真崎くんの身長: %d\n", masaki);
  printf("いさ子さんの好きな人の身長: %d\n", *isako);
  printf("ひろこさんの好きな人の身長: %d\n", *hiroko);

  return 0;
  
}
