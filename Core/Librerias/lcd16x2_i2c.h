/*
 * lcd16x2_i2c.h
 *
 *  Created on: May 9, 2023
 *      Author: Admin
 */

#ifndef LIBRERIAS_LCD16X2_I2C_H_
#define LIBRERIAS_LCD16X2_I2C_H_

#include "main.h"
#include <stdbool.h>

/* Function prototypes */
/**
 * @brief Initialise LCD16x2
 * @param[in] *pI2cHandle - pointer to HAL I2C handle
 */
bool lcd16x2_i2c_init(I2C_HandleTypeDef *pI2cHandle);

/**
 * @brief Set cursor position
 * @param[in] row - 0 or 1 for line1 or line2
 * @param[in] col - 0 - 15 (16 columns LCD)
 */
void lcd16x2_i2c_setCursor(uint8_t row, uint8_t col);
/**
 * @brief Move to beginning of 1st line
 */
void lcd16x2_i2c_1stLine(void);
/**
 * @brief Move to beginning of 2nd line
 */
void lcd16x2_i2c_2ndLine(void);

/**
 * @brief Select LCD Number of lines mode
 */
void lcd16x2_i2c_TwoLines(void);
void lcd16x2_i2c_OneLine(void);

/**
 * @brief Cursor ON/OFF
 */
void lcd16x2_i2c_cursorShow(bool state);

/**
 * @brief Display clear
 */
void lcd16x2_i2c_clear(void);

#endif /* LCD16X2_I2C_H_ */
