
#include <stdio.h>

 int main(void)
{
	printf("%d", 15 + 37 );

	printf("%d", 15 - 37 );

	printf("15と37の和は%dです", 15 + 37 );

	printf("15と37の差は%dです\a\a\a\n\n\n", 15 - 37);

	printf("天\n地\n人\n");

	int vx = 57;
	int vy = vx + 10;

	printf("vxの値は%dです\n", vx);
	printf("vyの値は%dです\n", vy);

	int xx = 3.14;
	int yy = 5.7;

	printf("%d\n", xx);
	printf("%d\n", yy);

	int no;

	printf("整数値を入力して下さい:");
	scanf("%d", &no);

	printf("その数の五倍は%dです\n", 5 * no);

	int nn;

	printf("整数値を入力してください:");
	scanf("%d" , &nn);

	printf("その数に１２足した数は%dです\n", nn + 12 );
	printf("その数から6引いた数は%d です\n", nn - 6 );

	int n1, n2;
	int wa; /* 和*/
	
	puts("二つの整数を入力してください");
	printf("整数1:"); scanf("%d", &n1);
	printf("整数2:"); scanf("%d", &n2);

	wa = n1 + n2;
	
	printf("それらの和は%dです \n", wa);

	puts("天");
	puts("地");
	puts("人");

	int n3, n4;
	puts("二つの整数を入力してください");
	printf("整数:");   scanf("%d", &n3);
	printf("整数:");   scanf("%d", &n4);

	printf("それらの積は%dです\n",n3 * n4);

	int n5, n6, n7;
	puts("三つの整数を入力してください");
	printf("整数1:");   scanf("%d", &n5);
	printf("整数2:");   scanf("%d", &n6);
	printf("整数3:");   scanf("%d", &n7);

	printf("それらの合計は%dです\n",n5 + n6 + n7);
	
	return 0;
}
