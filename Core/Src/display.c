/*
 * display.c
 *
 *  Created on: Dec 6, 2023
 *      Author: Admin
 */

#include "main.h"


void setNumberOnClock(int num){
	switch(num){
	case 1:
		HAL_GPIO_WritePin ( CLOCK1_GPIO_Port , CLOCK1_Pin ,GPIO_PIN_RESET );
		break;
	case 2:
		HAL_GPIO_WritePin ( CLOCK2_GPIO_Port , CLOCK2_Pin ,GPIO_PIN_RESET );
		break;
	case 3:
		HAL_GPIO_WritePin ( CLOCK3_GPIO_Port , CLOCK3_Pin ,GPIO_PIN_RESET );
		break;
	case 4:
		HAL_GPIO_WritePin ( CLOCK4_GPIO_Port , CLOCK4_Pin ,GPIO_PIN_RESET );
		break;
	case 5:
		HAL_GPIO_WritePin ( CLOCK5_GPIO_Port , CLOCK5_Pin ,GPIO_PIN_RESET );
		break;
	case 6:
		HAL_GPIO_WritePin ( CLOCK6_GPIO_Port , CLOCK6_Pin ,GPIO_PIN_RESET );
		break;
	case 7:
		HAL_GPIO_WritePin ( CLOCK7_GPIO_Port , CLOCK7_Pin ,GPIO_PIN_RESET );
		break;
	case 8:
		HAL_GPIO_WritePin ( CLOCK8_GPIO_Port , CLOCK8_Pin ,GPIO_PIN_RESET );
		break;
	case 9:
		HAL_GPIO_WritePin ( CLOCK9_GPIO_Port , CLOCK9_Pin ,GPIO_PIN_RESET );
		break;
	case 10:
		HAL_GPIO_WritePin ( CLOCK10_GPIO_Port , CLOCK10_Pin ,GPIO_PIN_RESET );
		break;
	case 11:
		HAL_GPIO_WritePin ( CLOCK11_GPIO_Port , CLOCK11_Pin ,GPIO_PIN_RESET );
		break;
	case 12:
		HAL_GPIO_WritePin ( CLOCK12_GPIO_Port , CLOCK12_Pin ,GPIO_PIN_RESET );
		break;
	default:
		break;
	}
}

void clearAllClock() {
	HAL_GPIO_WritePin ( CLOCK1_GPIO_Port , CLOCK1_Pin ,GPIO_PIN_SET );
	HAL_GPIO_WritePin ( CLOCK2_GPIO_Port , CLOCK2_Pin ,GPIO_PIN_SET );
	HAL_GPIO_WritePin ( CLOCK3_GPIO_Port , CLOCK3_Pin ,GPIO_PIN_SET );
	HAL_GPIO_WritePin ( CLOCK4_GPIO_Port , CLOCK4_Pin ,GPIO_PIN_SET );
	HAL_GPIO_WritePin ( CLOCK5_GPIO_Port , CLOCK5_Pin ,GPIO_PIN_SET );
	HAL_GPIO_WritePin ( CLOCK6_GPIO_Port , CLOCK6_Pin ,GPIO_PIN_SET );
	HAL_GPIO_WritePin ( CLOCK7_GPIO_Port , CLOCK7_Pin ,GPIO_PIN_SET );
	HAL_GPIO_WritePin ( CLOCK8_GPIO_Port , CLOCK8_Pin ,GPIO_PIN_SET );
	HAL_GPIO_WritePin ( CLOCK9_GPIO_Port , CLOCK9_Pin ,GPIO_PIN_SET );
	HAL_GPIO_WritePin ( CLOCK10_GPIO_Port , CLOCK10_Pin ,GPIO_PIN_SET );
	HAL_GPIO_WritePin ( CLOCK11_GPIO_Port , CLOCK11_Pin ,GPIO_PIN_SET );
	HAL_GPIO_WritePin ( CLOCK12_GPIO_Port , CLOCK12_Pin ,GPIO_PIN_SET );
}

void AnalogClock(int num){
	switch(num){
	case 1:
		HAL_GPIO_WritePin ( CLOCK1_GPIO_Port , CLOCK1_Pin ,GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( CLOCK2_GPIO_Port , CLOCK2_Pin ,GPIO_PIN_SET );
		HAL_GPIO_WritePin ( CLOCK3_GPIO_Port , CLOCK3_Pin ,GPIO_PIN_SET );
		HAL_GPIO_WritePin ( CLOCK4_GPIO_Port , CLOCK4_Pin ,GPIO_PIN_SET );
		HAL_GPIO_WritePin ( CLOCK5_GPIO_Port , CLOCK5_Pin ,GPIO_PIN_SET );
		HAL_GPIO_WritePin ( CLOCK6_GPIO_Port , CLOCK6_Pin ,GPIO_PIN_SET );
		HAL_GPIO_WritePin ( CLOCK7_GPIO_Port , CLOCK7_Pin ,GPIO_PIN_SET );
		HAL_GPIO_WritePin ( CLOCK8_GPIO_Port , CLOCK8_Pin ,GPIO_PIN_SET );
		HAL_GPIO_WritePin ( CLOCK9_GPIO_Port , CLOCK9_Pin ,GPIO_PIN_SET );
		HAL_GPIO_WritePin ( CLOCK10_GPIO_Port , CLOCK10_Pin ,GPIO_PIN_SET );
		HAL_GPIO_WritePin ( CLOCK11_GPIO_Port , CLOCK11_Pin ,GPIO_PIN_SET );
		HAL_GPIO_WritePin ( CLOCK12_GPIO_Port , CLOCK12_Pin ,GPIO_PIN_SET );
		break;
	case 2:
		HAL_GPIO_WritePin ( CLOCK1_GPIO_Port , CLOCK1_Pin ,GPIO_PIN_SET );
		HAL_GPIO_WritePin ( CLOCK2_GPIO_Port , CLOCK2_Pin ,GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( CLOCK3_GPIO_Port , CLOCK3_Pin ,GPIO_PIN_SET );
		HAL_GPIO_WritePin ( CLOCK4_GPIO_Port , CLOCK4_Pin ,GPIO_PIN_SET );
		HAL_GPIO_WritePin ( CLOCK5_GPIO_Port , CLOCK5_Pin ,GPIO_PIN_SET );
		HAL_GPIO_WritePin ( CLOCK6_GPIO_Port , CLOCK6_Pin ,GPIO_PIN_SET );
		HAL_GPIO_WritePin ( CLOCK7_GPIO_Port , CLOCK7_Pin ,GPIO_PIN_SET );
		HAL_GPIO_WritePin ( CLOCK8_GPIO_Port , CLOCK8_Pin ,GPIO_PIN_SET );
		HAL_GPIO_WritePin ( CLOCK9_GPIO_Port , CLOCK9_Pin ,GPIO_PIN_SET );
		HAL_GPIO_WritePin ( CLOCK10_GPIO_Port , CLOCK10_Pin ,GPIO_PIN_SET );
		HAL_GPIO_WritePin ( CLOCK11_GPIO_Port , CLOCK11_Pin ,GPIO_PIN_SET );
		HAL_GPIO_WritePin ( CLOCK12_GPIO_Port , CLOCK12_Pin ,GPIO_PIN_SET );
		break;
	case 3:
		HAL_GPIO_WritePin ( CLOCK1_GPIO_Port , CLOCK1_Pin ,GPIO_PIN_SET );
		HAL_GPIO_WritePin ( CLOCK2_GPIO_Port , CLOCK2_Pin ,GPIO_PIN_SET );
		HAL_GPIO_WritePin ( CLOCK3_GPIO_Port , CLOCK3_Pin ,GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( CLOCK4_GPIO_Port , CLOCK4_Pin ,GPIO_PIN_SET );
		HAL_GPIO_WritePin ( CLOCK5_GPIO_Port , CLOCK5_Pin ,GPIO_PIN_SET );
		HAL_GPIO_WritePin ( CLOCK6_GPIO_Port , CLOCK6_Pin ,GPIO_PIN_SET );
		HAL_GPIO_WritePin ( CLOCK7_GPIO_Port , CLOCK7_Pin ,GPIO_PIN_SET );
		HAL_GPIO_WritePin ( CLOCK8_GPIO_Port , CLOCK8_Pin ,GPIO_PIN_SET );
		HAL_GPIO_WritePin ( CLOCK9_GPIO_Port , CLOCK9_Pin ,GPIO_PIN_SET );
		HAL_GPIO_WritePin ( CLOCK10_GPIO_Port , CLOCK10_Pin ,GPIO_PIN_SET );
		HAL_GPIO_WritePin ( CLOCK11_GPIO_Port , CLOCK11_Pin ,GPIO_PIN_SET );
		HAL_GPIO_WritePin ( CLOCK12_GPIO_Port , CLOCK12_Pin ,GPIO_PIN_SET );
		break;
	case 4:
		HAL_GPIO_WritePin ( CLOCK1_GPIO_Port , CLOCK1_Pin ,GPIO_PIN_SET );
		HAL_GPIO_WritePin ( CLOCK2_GPIO_Port , CLOCK2_Pin ,GPIO_PIN_SET );
		HAL_GPIO_WritePin ( CLOCK3_GPIO_Port , CLOCK3_Pin ,GPIO_PIN_SET );
		HAL_GPIO_WritePin ( CLOCK4_GPIO_Port , CLOCK4_Pin ,GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( CLOCK5_GPIO_Port , CLOCK5_Pin ,GPIO_PIN_SET );
		HAL_GPIO_WritePin ( CLOCK6_GPIO_Port , CLOCK6_Pin ,GPIO_PIN_SET );
		HAL_GPIO_WritePin ( CLOCK7_GPIO_Port , CLOCK7_Pin ,GPIO_PIN_SET );
		HAL_GPIO_WritePin ( CLOCK8_GPIO_Port , CLOCK8_Pin ,GPIO_PIN_SET );
		HAL_GPIO_WritePin ( CLOCK9_GPIO_Port , CLOCK9_Pin ,GPIO_PIN_SET );
		HAL_GPIO_WritePin ( CLOCK10_GPIO_Port , CLOCK10_Pin ,GPIO_PIN_SET );
		HAL_GPIO_WritePin ( CLOCK11_GPIO_Port , CLOCK11_Pin ,GPIO_PIN_SET );
		HAL_GPIO_WritePin ( CLOCK12_GPIO_Port , CLOCK12_Pin ,GPIO_PIN_SET );
		break;
	case 5:
		HAL_GPIO_WritePin ( CLOCK1_GPIO_Port , CLOCK1_Pin ,GPIO_PIN_SET );
		HAL_GPIO_WritePin ( CLOCK2_GPIO_Port , CLOCK2_Pin ,GPIO_PIN_SET );
		HAL_GPIO_WritePin ( CLOCK3_GPIO_Port , CLOCK3_Pin ,GPIO_PIN_SET );
		HAL_GPIO_WritePin ( CLOCK4_GPIO_Port , CLOCK4_Pin ,GPIO_PIN_SET );
		HAL_GPIO_WritePin ( CLOCK5_GPIO_Port , CLOCK5_Pin ,GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( CLOCK6_GPIO_Port , CLOCK6_Pin ,GPIO_PIN_SET );
		HAL_GPIO_WritePin ( CLOCK7_GPIO_Port , CLOCK7_Pin ,GPIO_PIN_SET );
		HAL_GPIO_WritePin ( CLOCK8_GPIO_Port , CLOCK8_Pin ,GPIO_PIN_SET );
		HAL_GPIO_WritePin ( CLOCK9_GPIO_Port , CLOCK9_Pin ,GPIO_PIN_SET );
		HAL_GPIO_WritePin ( CLOCK10_GPIO_Port , CLOCK10_Pin ,GPIO_PIN_SET );
		HAL_GPIO_WritePin ( CLOCK11_GPIO_Port , CLOCK11_Pin ,GPIO_PIN_SET );
		HAL_GPIO_WritePin ( CLOCK12_GPIO_Port , CLOCK12_Pin ,GPIO_PIN_SET );
		break;
	case 6:
		HAL_GPIO_WritePin ( CLOCK1_GPIO_Port , CLOCK1_Pin ,GPIO_PIN_SET );
		HAL_GPIO_WritePin ( CLOCK2_GPIO_Port , CLOCK2_Pin ,GPIO_PIN_SET );
		HAL_GPIO_WritePin ( CLOCK3_GPIO_Port , CLOCK3_Pin ,GPIO_PIN_SET );
		HAL_GPIO_WritePin ( CLOCK4_GPIO_Port , CLOCK4_Pin ,GPIO_PIN_SET );
		HAL_GPIO_WritePin ( CLOCK5_GPIO_Port , CLOCK5_Pin ,GPIO_PIN_SET );
		HAL_GPIO_WritePin ( CLOCK6_GPIO_Port , CLOCK6_Pin ,GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( CLOCK7_GPIO_Port , CLOCK7_Pin ,GPIO_PIN_SET );
		HAL_GPIO_WritePin ( CLOCK8_GPIO_Port , CLOCK8_Pin ,GPIO_PIN_SET );
		HAL_GPIO_WritePin ( CLOCK9_GPIO_Port , CLOCK9_Pin ,GPIO_PIN_SET );
		HAL_GPIO_WritePin ( CLOCK10_GPIO_Port , CLOCK10_Pin ,GPIO_PIN_SET );
		HAL_GPIO_WritePin ( CLOCK11_GPIO_Port , CLOCK11_Pin ,GPIO_PIN_SET );
		HAL_GPIO_WritePin ( CLOCK12_GPIO_Port , CLOCK12_Pin ,GPIO_PIN_SET );
		break;
	case 7:
		HAL_GPIO_WritePin ( CLOCK1_GPIO_Port , CLOCK1_Pin ,GPIO_PIN_SET );
		HAL_GPIO_WritePin ( CLOCK2_GPIO_Port , CLOCK2_Pin ,GPIO_PIN_SET );
		HAL_GPIO_WritePin ( CLOCK3_GPIO_Port , CLOCK3_Pin ,GPIO_PIN_SET );
		HAL_GPIO_WritePin ( CLOCK4_GPIO_Port , CLOCK4_Pin ,GPIO_PIN_SET );
		HAL_GPIO_WritePin ( CLOCK5_GPIO_Port , CLOCK5_Pin ,GPIO_PIN_SET );
		HAL_GPIO_WritePin ( CLOCK6_GPIO_Port , CLOCK6_Pin ,GPIO_PIN_SET );
		HAL_GPIO_WritePin ( CLOCK7_GPIO_Port , CLOCK7_Pin ,GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( CLOCK8_GPIO_Port , CLOCK8_Pin ,GPIO_PIN_SET );
		HAL_GPIO_WritePin ( CLOCK9_GPIO_Port , CLOCK9_Pin ,GPIO_PIN_SET );
		HAL_GPIO_WritePin ( CLOCK10_GPIO_Port , CLOCK10_Pin ,GPIO_PIN_SET );
		HAL_GPIO_WritePin ( CLOCK11_GPIO_Port , CLOCK11_Pin ,GPIO_PIN_SET );
		HAL_GPIO_WritePin ( CLOCK12_GPIO_Port , CLOCK12_Pin ,GPIO_PIN_SET );
		break;
	case 8:
		HAL_GPIO_WritePin ( CLOCK1_GPIO_Port , CLOCK1_Pin ,GPIO_PIN_SET );
		HAL_GPIO_WritePin ( CLOCK2_GPIO_Port , CLOCK2_Pin ,GPIO_PIN_SET );
		HAL_GPIO_WritePin ( CLOCK3_GPIO_Port , CLOCK3_Pin ,GPIO_PIN_SET );
		HAL_GPIO_WritePin ( CLOCK4_GPIO_Port , CLOCK4_Pin ,GPIO_PIN_SET );
		HAL_GPIO_WritePin ( CLOCK5_GPIO_Port , CLOCK5_Pin ,GPIO_PIN_SET );
		HAL_GPIO_WritePin ( CLOCK6_GPIO_Port , CLOCK6_Pin ,GPIO_PIN_SET );
		HAL_GPIO_WritePin ( CLOCK7_GPIO_Port , CLOCK7_Pin ,GPIO_PIN_SET );
		HAL_GPIO_WritePin ( CLOCK8_GPIO_Port , CLOCK8_Pin ,GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( CLOCK9_GPIO_Port , CLOCK9_Pin ,GPIO_PIN_SET );
		HAL_GPIO_WritePin ( CLOCK10_GPIO_Port , CLOCK10_Pin ,GPIO_PIN_SET );
		HAL_GPIO_WritePin ( CLOCK11_GPIO_Port , CLOCK11_Pin ,GPIO_PIN_SET );
		HAL_GPIO_WritePin ( CLOCK12_GPIO_Port , CLOCK12_Pin ,GPIO_PIN_SET );
		break;
	case 9:
		HAL_GPIO_WritePin ( CLOCK1_GPIO_Port , CLOCK1_Pin ,GPIO_PIN_SET );
		HAL_GPIO_WritePin ( CLOCK2_GPIO_Port , CLOCK2_Pin ,GPIO_PIN_SET );
		HAL_GPIO_WritePin ( CLOCK3_GPIO_Port , CLOCK3_Pin ,GPIO_PIN_SET );
		HAL_GPIO_WritePin ( CLOCK4_GPIO_Port , CLOCK4_Pin ,GPIO_PIN_SET );
		HAL_GPIO_WritePin ( CLOCK5_GPIO_Port , CLOCK5_Pin ,GPIO_PIN_SET );
		HAL_GPIO_WritePin ( CLOCK6_GPIO_Port , CLOCK6_Pin ,GPIO_PIN_SET );
		HAL_GPIO_WritePin ( CLOCK7_GPIO_Port , CLOCK7_Pin ,GPIO_PIN_SET );
		HAL_GPIO_WritePin ( CLOCK8_GPIO_Port , CLOCK8_Pin ,GPIO_PIN_SET );
		HAL_GPIO_WritePin ( CLOCK9_GPIO_Port , CLOCK9_Pin ,GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( CLOCK10_GPIO_Port , CLOCK10_Pin ,GPIO_PIN_SET );
		HAL_GPIO_WritePin ( CLOCK11_GPIO_Port , CLOCK11_Pin ,GPIO_PIN_SET );
		HAL_GPIO_WritePin ( CLOCK12_GPIO_Port , CLOCK12_Pin ,GPIO_PIN_SET );
		break;
	case 10:
		HAL_GPIO_WritePin ( CLOCK1_GPIO_Port , CLOCK1_Pin ,GPIO_PIN_SET );
		HAL_GPIO_WritePin ( CLOCK2_GPIO_Port , CLOCK2_Pin ,GPIO_PIN_SET );
		HAL_GPIO_WritePin ( CLOCK3_GPIO_Port , CLOCK3_Pin ,GPIO_PIN_SET );
		HAL_GPIO_WritePin ( CLOCK4_GPIO_Port , CLOCK4_Pin ,GPIO_PIN_SET );
		HAL_GPIO_WritePin ( CLOCK5_GPIO_Port , CLOCK5_Pin ,GPIO_PIN_SET );
		HAL_GPIO_WritePin ( CLOCK6_GPIO_Port , CLOCK6_Pin ,GPIO_PIN_SET );
		HAL_GPIO_WritePin ( CLOCK7_GPIO_Port , CLOCK7_Pin ,GPIO_PIN_SET );
		HAL_GPIO_WritePin ( CLOCK8_GPIO_Port , CLOCK8_Pin ,GPIO_PIN_SET );
		HAL_GPIO_WritePin ( CLOCK9_GPIO_Port , CLOCK9_Pin ,GPIO_PIN_SET );
		HAL_GPIO_WritePin ( CLOCK10_GPIO_Port , CLOCK10_Pin ,GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( CLOCK11_GPIO_Port , CLOCK11_Pin ,GPIO_PIN_SET );
		HAL_GPIO_WritePin ( CLOCK12_GPIO_Port , CLOCK12_Pin ,GPIO_PIN_SET );
		break;
	case 11:
		HAL_GPIO_WritePin ( CLOCK1_GPIO_Port , CLOCK1_Pin ,GPIO_PIN_SET );
		HAL_GPIO_WritePin ( CLOCK2_GPIO_Port , CLOCK2_Pin ,GPIO_PIN_SET );
		HAL_GPIO_WritePin ( CLOCK3_GPIO_Port , CLOCK3_Pin ,GPIO_PIN_SET );
		HAL_GPIO_WritePin ( CLOCK4_GPIO_Port , CLOCK4_Pin ,GPIO_PIN_SET );
		HAL_GPIO_WritePin ( CLOCK5_GPIO_Port , CLOCK5_Pin ,GPIO_PIN_SET );
		HAL_GPIO_WritePin ( CLOCK6_GPIO_Port , CLOCK6_Pin ,GPIO_PIN_SET );
		HAL_GPIO_WritePin ( CLOCK7_GPIO_Port , CLOCK7_Pin ,GPIO_PIN_SET );
		HAL_GPIO_WritePin ( CLOCK8_GPIO_Port , CLOCK8_Pin ,GPIO_PIN_SET );
		HAL_GPIO_WritePin ( CLOCK9_GPIO_Port , CLOCK9_Pin ,GPIO_PIN_SET );
		HAL_GPIO_WritePin ( CLOCK10_GPIO_Port , CLOCK10_Pin ,GPIO_PIN_SET );
		HAL_GPIO_WritePin ( CLOCK11_GPIO_Port , CLOCK11_Pin ,GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( CLOCK12_GPIO_Port , CLOCK12_Pin ,GPIO_PIN_SET );
		break;
	case 12:
		HAL_GPIO_WritePin ( CLOCK1_GPIO_Port , CLOCK1_Pin ,GPIO_PIN_SET );
		HAL_GPIO_WritePin ( CLOCK2_GPIO_Port , CLOCK2_Pin ,GPIO_PIN_SET );
		HAL_GPIO_WritePin ( CLOCK3_GPIO_Port , CLOCK3_Pin ,GPIO_PIN_SET );
		HAL_GPIO_WritePin ( CLOCK4_GPIO_Port , CLOCK4_Pin ,GPIO_PIN_SET );
		HAL_GPIO_WritePin ( CLOCK5_GPIO_Port , CLOCK5_Pin ,GPIO_PIN_SET );
		HAL_GPIO_WritePin ( CLOCK6_GPIO_Port , CLOCK6_Pin ,GPIO_PIN_SET );
		HAL_GPIO_WritePin ( CLOCK7_GPIO_Port , CLOCK7_Pin ,GPIO_PIN_SET );
		HAL_GPIO_WritePin ( CLOCK8_GPIO_Port , CLOCK8_Pin ,GPIO_PIN_SET );
		HAL_GPIO_WritePin ( CLOCK9_GPIO_Port , CLOCK9_Pin ,GPIO_PIN_SET );
		HAL_GPIO_WritePin ( CLOCK10_GPIO_Port , CLOCK10_Pin ,GPIO_PIN_SET );
		HAL_GPIO_WritePin ( CLOCK11_GPIO_Port , CLOCK11_Pin ,GPIO_PIN_SET );
		HAL_GPIO_WritePin ( CLOCK12_GPIO_Port , CLOCK12_Pin ,GPIO_PIN_RESET );
		break;
	default:
		break;
	}
}

void clearNumberOnClock(int num){
	switch(num){
	case 1:
		HAL_GPIO_WritePin ( CLOCK1_GPIO_Port , CLOCK1_Pin ,GPIO_PIN_SET );
		break;
	case 2:
		HAL_GPIO_WritePin ( CLOCK2_GPIO_Port , CLOCK2_Pin ,GPIO_PIN_SET );
		break;
	case 3:
		HAL_GPIO_WritePin ( CLOCK3_GPIO_Port , CLOCK3_Pin ,GPIO_PIN_SET );
		break;
	case 4:
		HAL_GPIO_WritePin ( CLOCK4_GPIO_Port , CLOCK4_Pin ,GPIO_PIN_SET );
		break;
	case 5:
		HAL_GPIO_WritePin ( CLOCK5_GPIO_Port , CLOCK5_Pin ,GPIO_PIN_SET );
		break;
	case 6:
		HAL_GPIO_WritePin ( CLOCK6_GPIO_Port , CLOCK6_Pin ,GPIO_PIN_SET );
		break;
	case 7:
		HAL_GPIO_WritePin ( CLOCK7_GPIO_Port , CLOCK7_Pin ,GPIO_PIN_SET );
		break;
	case 8:
		HAL_GPIO_WritePin ( CLOCK8_GPIO_Port , CLOCK8_Pin ,GPIO_PIN_SET );
		break;
	case 9:
		HAL_GPIO_WritePin ( CLOCK9_GPIO_Port , CLOCK9_Pin ,GPIO_PIN_SET );
		break;
	case 10:
		HAL_GPIO_WritePin ( CLOCK10_GPIO_Port , CLOCK10_Pin ,GPIO_PIN_SET );
		break;
	case 11:
		HAL_GPIO_WritePin ( CLOCK11_GPIO_Port , CLOCK11_Pin ,GPIO_PIN_SET );
		break;
	case 12:
		HAL_GPIO_WritePin ( CLOCK12_GPIO_Port , CLOCK12_Pin ,GPIO_PIN_SET );
		break;
	default:
		break;
	}
}

void clockDisplay(int hour, int min, int sec){
	  int hourDis, minDis, secDis;
	  if(sec%5 >= 3){
	  	  secDis = sec/5+1;
	  }
	  else{
          if(sec/5 == 0) secDis = 12;
  	      else secDis = sec/5;
	  }
	  if(min%5 >= 3){
		  minDis = min/5+1;
	  }
	  else{
  	      if(min/5 == 0) minDis = 12;
	 	  else minDis = min/5;
	  }
	  if(hour%12 == 0){
	  	  hourDis = 12;
	  }
	  else hourDis = hour%12;

	  clearAllClock();
	  setNumberOnClock(secDis);
	  setNumberOnClock(minDis);
	  setNumberOnClock(hourDis);
}
