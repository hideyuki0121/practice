#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
int set_hand(const char* src){
  static const  char* check_list[][5] = {
    {"rock", "Rock", "ROCK", "goo", NULL},
    {"scissors","Scissors", "SCISSORS", "choki",NULL},
    {"paper", "Paper", "PAPER", "paa", NULL },
  };
  for(int i = 0; i < 3; i++)
    for(int j = 0; check_list[i][j] != NULL; j++)
      if(!strmp(src,check_list[i][j])) return i+1;
  return HAND_FALSE;
}

int main(){

  srand((unsigned int)time(NULL));
  
  puts("welcome to the janken game!!");
  

  const int rock = 1;
  const int scissors = 2;
  const int paper = 3;
  
  int user_hand;
  char input_hand[10];
  user_hand = 0;
  int n = 0; //続けるか判断
  int w = 0; //勝った場合
  int l = 0; //負けた場合
  int d = 0; //引き分け
  
  do{
  
    while (user_hand == 0){
      puts("----------------------------");
      printf("please input your hand\n> ");
      scanf("%s", input_hand);

      // if (!strcmp(input_hand,"rock"))user_hand = 1;
      //else if (!strcmp(input_hand,"scissors"))user_hand = 2;
      //else if (!strcmp(input_hand,"paper"))user_hand = 3;
      user_hand = set_hand(input_hand);
    }

    int cpu_hand = (int)rand() % 3 + 1;
 
    int judge = (user_hand - cpu_hand + 3) % 3;
  
    switch (judge){
    case 0:
      printf("user = %d : cpu = %d\n", user_hand, cpu_hand);
      puts("DRAW!!");
      d++;
      break;
    case 1:
      printf("user = %d : cpu = %d\n", user_hand, cpu_hand);
      puts("YOU LOSE");
      l++;
      break;
    case 2:
      printf("user = %d : cpu = %d\n", user_hand, cpu_hand);
      puts("YOU WIN !!");
      w++;
      break;
    }

    printf("#your score#\n[WIN  :%d]\n[LOSE :%d]\n[DRAW :%d]\n", w, l, d);
    
    printf("play again?[yes...0/no...9] \n> ");
    scanf("%d", &n);
    user_hand = 0;
    
  }while(n < 1);
  
  return 0;
}
