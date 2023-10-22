/*
 * global.h
 *
 *  Created on: Oct 22, 2023
 *      Author: Hoai Thanh
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include "software_timer.h"
#include "global.h"
#include "main.h"

/*định nghĩa trạng thái*/
#define INIT 1
#define AUTO_RED 2
#define AUTO_GREEN 3
#define AUTO_YELLOW 4

#define MAN_RED 22
#define MAN_GREEN 13
#define MAN_YELLOW 14


extern int status;

#endif /* INC_GLOBAL_H_ */
