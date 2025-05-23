/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2025 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
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
#include "stm32g4xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define RCC_OSC32_IN_Pin GPIO_PIN_14
#define RCC_OSC32_IN_GPIO_Port GPIOC
#define RCC_OSC32_OUT_Pin GPIO_PIN_15
#define RCC_OSC32_OUT_GPIO_Port GPIOC
#define RCC_OSC_IN_Pin GPIO_PIN_0
#define RCC_OSC_IN_GPIO_Port GPIOF
#define RCC_OSC_OUT_Pin GPIO_PIN_1
#define RCC_OSC_OUT_GPIO_Port GPIOF
#define LED_Pin GPIO_PIN_3
#define LED_GPIO_Port GPIOC
#define BUTTON_MODE1_Pin GPIO_PIN_0
#define BUTTON_MODE1_GPIO_Port GPIOA
#define BUTTON_MODE1_EXTI_IRQn EXTI0_IRQn
#define BUTTON_MODE2_Pin GPIO_PIN_1
#define BUTTON_MODE2_GPIO_Port GPIOA
#define BUTTON_MODE2_EXTI_IRQn EXTI1_IRQn
#define BUTTON_EMERGENCY_Pin GPIO_PIN_2
#define BUTTON_EMERGENCY_GPIO_Port GPIOA
#define BUTTON_EMERGENCY_EXTI_IRQn EXTI2_IRQn
#define BUTTON_SC_CLOSE_Pin GPIO_PIN_3
#define BUTTON_SC_CLOSE_GPIO_Port GPIOA
#define BUTTON_SC_CLOSE_EXTI_IRQn EXTI3_IRQn
#define LCD_SPI_SCK_Pin GPIO_PIN_5
#define LCD_SPI_SCK_GPIO_Port GPIOA
#define LCD_SPI_MISO_Pin GPIO_PIN_6
#define LCD_SPI_MISO_GPIO_Port GPIOA
#define LCD_SPI_MOSI_Pin GPIO_PIN_7
#define LCD_SPI_MOSI_GPIO_Port GPIOA
#define LCD_CS_Pin GPIO_PIN_0
#define LCD_CS_GPIO_Port GPIOB
#define LCD_RST_Pin GPIO_PIN_1
#define LCD_RST_GPIO_Port GPIOB
#define LCD_DC_Pin GPIO_PIN_2
#define LCD_DC_GPIO_Port GPIOB
#define BUTTON_HORN_Pin GPIO_PIN_15
#define BUTTON_HORN_GPIO_Port GPIOB
#define BUTTON_HORN_EXTI_IRQn EXTI15_10_IRQn
#define BUTTON_TIME_RESET_Pin GPIO_PIN_8
#define BUTTON_TIME_RESET_GPIO_Port GPIOA
#define BUTTON_TIME_RESET_EXTI_IRQn EXTI9_5_IRQn
#define BUTTON_FULL_GAS_Pin GPIO_PIN_9
#define BUTTON_FULL_GAS_GPIO_Port GPIOA
#define BUTTON_FULL_GAS_EXTI_IRQn EXTI9_5_IRQn
#define BUTTON_HALF_GAS_Pin GPIO_PIN_10
#define BUTTON_HALF_GAS_GPIO_Port GPIOA
#define BUTTON_HALF_GAS_EXTI_IRQn EXTI15_10_IRQn
#define T_SWDIO_Pin GPIO_PIN_13
#define T_SWDIO_GPIO_Port GPIOA
#define T_SWCLK_Pin GPIO_PIN_14
#define T_SWCLK_GPIO_Port GPIOA
#define T_SWO_Pin GPIO_PIN_3
#define T_SWO_GPIO_Port GPIOB
#define BUTTON_FC_RACE_MODE_Pin GPIO_PIN_5
#define BUTTON_FC_RACE_MODE_GPIO_Port GPIOB
#define BUTTON_FC_RACE_MODE_EXTI_IRQn EXTI9_5_IRQn
#define BUTTON_FC_PREPARE_TO_RACE_MODE_Pin GPIO_PIN_6
#define BUTTON_FC_PREPARE_TO_RACE_MODE_GPIO_Port GPIOB
#define BUTTON_FC_PREPARE_TO_RACE_MODE_EXTI_IRQn EXTI9_5_IRQn
#define BUTTON_FC_OFF_MODE_Pin GPIO_PIN_7
#define BUTTON_FC_OFF_MODE_GPIO_Port GPIOB
#define BUTTON_FC_OFF_MODE_EXTI_IRQn EXTI9_5_IRQn

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
