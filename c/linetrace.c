/*インクルード***********************************************************/
#include "lpc13xx.h"
#include "gpio.h"
#include "vs-wrc103.h"
#include "ixbus.h"

int border_a;

border_a = 200;

int traceLine(int border,int power){
  if(ADRead(0) < border && ADRead(1) > border ){//右が黒、左が白だと判断
    Mtr_Run_lv(power,-power * 2,0,0,0,0);
  }
  else if(ADRead(0) > border && ADRead(1) < border ){//右が白、左が黒だと判断
    Mtr_Run_lv(power * 2,-power,0,0,0,0);
  }
  else if(ADRead(0) < border && ADRead(1) < border ){//両方白だと判断
    Mtr_Run_lv(power,-power,0,0,0,0);
  }
  else if(ADRead(0) > border && ADRead(1) > border ){//両方黒だと判断
    Mtr_Run_lv(0,0,0,0,0,0);
    LED(3);
    Wait(1000);
    LED(0);
  }
}

/*マクロ***********************************************************/

/*グローバル変数***********************************************************/

/*メイン関数***********************************************************/
int main(void)
{
  //制御周期の設定[単位：Hz　範囲：30.0~]
  const unsigned short MainCycle = 60;
  Init(MainCycle);		//CPUの初期設定

  /*これもコメント*/
  /*
    while(getSW() != 1);	//ボタンが押されるまで待つ
    while(getSW() == 1);	//ボタンが離されるまで待つ

    //ループ
    while(1){
    //前進
    Mtr_Run_lv(10000,-10000,0,0,0,0);
    Wait(1000);
    //停止
    Mtr_Run_lv(0,0,0,0,0,0);
    Wait(1000);
    //後進
    Mtr_Run_lv(-10000,10000,0,0,0,0);
    Wait(1000);
    //停止
    Mtr_Run_lv(0,0,0,0,0,0);
    Wait(1000);
    }
  */
  //制御文 if while
  //if(ここが評価されりゅ){
  //   ここが実行される
  //}
  /*
    while(1){
    if ( ADRead(0) < 200 ){
    LED(3);//両方点灯
    } else {
    LED(0);//両方消灯
    }
    }
  */
  int i = 0;
  while(1){
    if (i == 0) {
      //一つ目の作業:右が白、左が黒になるまで直進  0が左1が右
      if (ADRead(1) < 200){//右が白
	if (ADRead(0) < 200){//左が白
	  Mtr_Run_lv(10000,-10000,0,0,0,0);
	}else{//左が黒
	  Mtr_Run_lv(0,0,0,0,0,0);
	  i++;
	}
      } else {//右が黒
	if (ADRead(0) < 200){//左が白
	  Mtr_Run_lv(-10000,0,0,0,0,0);
	  Wait(500);
	} else {//左が黒
	  Mtr_Run_lv(-10000,5000,0,0,0,0);
	  Wait(500);
	}
      }
      /*if(ADRead(0) > 200 && ADRead(1) > 200 ){//両方白だと判断
	Mtr_Run_lv(10000,-10000,0,0,0,0);
	}
	else if(ADRead(0) > 200 && ADRead(1) < 200 ){//右が白、左が黒だと判断
	Mtr_Run_lv(0,0,0,0,0,0);
	Wait(100);
	i++;
	}*/
    }else if(i == 1){
      //二つ目の作業:両方黒になるまで直進
      Mtr_Run_lv(10000,-10000,0,0,0,0);
      Wait(1000);
      if(ADRead(0) < 200 && ADRead(1) < 200 ){//両方白のとき
	Mtr_Run_lv(10000,-10000,0,0,0,0);
      }
      else if(ADRead(0) > 200 && ADRead(1) > 200 ){//両方黒のとき
	Mtr_Run_lv(10000,-10000,0,0,0,0);
	wait(1000);
	i++
      }
      else if(ADRead(0) > 200 && ADRead(1) < 200 ){//右が黒、左が白のとき
	Mtr_Run_lv(0,-5000,0,0,0,0);
	wait(500);
      }
      else if(ADRead(0) < 200 && ADRead(1) > 200){//右が白、左が黒のとき
	Mtr_Run_lv(5000,0,0,0,0,0);
      }
    }else if(i == 2){
      //三：直角に曲がる
      if (ADRead(0) > 200){//右が白
	if (ADRead(1) > 200){//左が白
	  Mtr_Run_lv(10000,-10000,0,0,0,0);
	}else{//左が黒
	  Mtr_Run_lv(0,0,0,0,0,0);
	  wait(1000);
	}
      } else {//右が黒
	if (ADRead(1) > 200){//左が白
	  Mtr_Run_lv(0,-5000,0,0,0,0);
	  wait(500);
	} else {//左が黒
	  Mtr_Run_lv(-7000,5000,0,0,0,0);
	  wait(1000);
	}
      }
    }
    return 0;
  }
}
//while(1)Mtr_Run_lv(10000,5000,0,0,0,0);//右、マイナス左の順
/*
  while (1){
  if (ADRead(0) < 200){//右が白
  if (ADRead(1) < 200){//左が白
  Mtr_Run_lv(0,0,0,0,0,0);
  }else{//左が黒
  Mtr_Run_lv(0,0,0,0,0,0);
  }
  } else {//右が黒
  if (ADRead(1) < 200){//左が白
  Mtr_Run_lv(0,0,0,0,0,0);
  } else {左が黒
  Mtr_Run_lv(0,0,0,0,0,0);
  }
  }
  }*/


