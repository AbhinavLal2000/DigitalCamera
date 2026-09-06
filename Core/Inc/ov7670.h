/*
 * ov7670.h
 *
 *  Created on: Sep 5, 2026
 *      Author: Abhinav
 */

#ifndef OV7670_INC_OV7670_H_
#define OV7670_INC_OV7670_H_

#define OV7670_ADDRESS 0x42
#define REG_DUMMY 0xFF

#include "main.h"

typedef struct
{
	uint8_t ready;
	I2C_HandleTypeDef * hi2c;
	GPIO_TypeDef* reset_port;
	uint16_t reset_pin;

} ov7670_t;

uint8_t ov7670_init(ov7670_t *obj, GPIO_TypeDef *reset_port, uint16_t reset_pin, I2C_HandleTypeDef *hi2c);

#endif /* OV7670_INC_OV7670_H_ */
