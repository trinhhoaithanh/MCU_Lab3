/*
 * fsm_automatic.c
 *
 *  Created on: Oct 22, 2023
 *      Author: Hoai Thanh
 */

#include "fsm_automatic.h"

void fsm_automatic_run(){
	switch(status){
	case INIT:
		//TODO
		HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, GPIO_PIN_SET);

		status = AUTO_RED;
		setTimer1(500);
		break;
	case AUTO_RED:
		HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, GPIO_PIN_SET);

		if(timer1_flag == 1){
			status = AUTO_GREEN;
			setTimer1(300);
		}
		if(isButton1Pressed() == 1){
			status = MAN_RED;
			setTimer1(1000);
		}
		break;
	case AUTO_GREEN:
		HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, GPIO_PIN_SET);

		if(timer1_flag == 1){
			status = AUTO_YELLOW;
			setTimer1(200);
		}
		break;
	case AUTO_YELLOW:
		HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, GPIO_PIN_RESET);

		if(timer1_flag == 1){
			status = AUTO_RED;
			setTimer1(500);
		}
		break;
	default:
		break;
	}



}

