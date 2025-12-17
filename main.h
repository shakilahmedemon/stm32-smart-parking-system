/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  * This file contains the common defines of the application.
  ******************************************************************************
  * @author         : AHMED MD SHAKIL
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* Private defines -----------------------------------------------------------*/
#define SENSOR_0_Pin GPIO_PIN_0
#define SENSOR_0_GPIO_Port GPIOA
#define SENSOR_1_Pin GPIO_PIN_1
#define SENSOR_1_GPIO_Port GPIOA
#define SENSOR_2_Pin GPIO_PIN_2
#define SENSOR_2_GPIO_Port GPIOA
#define SENSOR_3_Pin GPIO_PIN_3
#define SENSOR_3_GPIO_Port GPIOA

#define USART_TX_Pin GPIO_PIN_2
#define USART_TX_GPIO_Port GPIOA
#define USART_RX_Pin GPIO_PIN_3
#define USART_RX_GPIO_Port GPIOA

#define LED_0_Pin GPIO_PIN_0
#define LED_0_GPIO_Port GPIOB
#define LED_1_Pin GPIO_PIN_1
#define LED_1_GPIO_Port GPIOB
#define LED_2_Pin GPIO_PIN_2
#define LED_2_GPIO_Port GPIOB
#define LED_3_Pin GPIO_PIN_3
#define LED_3_GPIO_Port GPIOB

#define STATUS_LED_Pin GPIO_PIN_13
#define STATUS_LED_GPIO_Port GPIOC

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
