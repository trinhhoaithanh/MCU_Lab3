/*
 * button.h
 *
 *  Created on: Oct 22, 2023
 *      Author: Hoai Thanh
 */

#ifndef INC_BUTTON_H_
#define INC_BUTTON_H_

#include "main.h"

#define NORMAL_STATE GPIO_PIN_SET
#define PRESSED_STATE GPIO_PIN_RESET

void getKeyInput();

#endif /* INC_BUTTON_H_ */
