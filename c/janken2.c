#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main(){

  srand((unsigned int)time(NULL));
  
  puts("welcome to the janken game!!");
  

  const int rock = 1;
  const int scissors = 2;
  const int paper = 3;
  
  int user_hand;
  char input_hand[10];
  user_hand =0;
  int n = 0;

  do{
  
    while (user_hand == 0){
      printf("please input your hand\n> ");
      scanf("%s", input_hand);

      if (!strcmp(input_hand,"rock"))user_hand = 1;
      else if (!strcmp(input_hand,"scissors"))user_hand = 2;
      else if (!strcmp(input_hand,"paper"))user_hand = 3;
    }

    int cpu_hand = (int)rand() % 3 + 1;
 
    int judge = (user_hand - cpu_hand + 3) % 3;
  
    switch (judge){
    case 0:
      printf("user = %d : cpu = %d\n", user_hand, cpu_hand);
      puts("DRAW!!");
      break;
    case 1:
      printf("user = %d : cpu = %d\n", user_hand, cpu_hand);
      puts("YOU LOSE");
      break;
    case 2:
      printf("user = %d : cpu = %d\n", user_hand, cpu_hand);
      puts("YOU WIN !!");
    }
    
    printf("play again?[yes...0/no...9] \n> ");
    scanf("%d", &n);
    user_hand = 0;
    
  }while(n < 1);
  
  return 0;
}
