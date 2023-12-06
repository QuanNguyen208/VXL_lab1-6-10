/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2023 STMicroelectronics.
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
#include "stm32f1xx_hal.h"

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
#define CLOCK1_Pin GPIO_PIN_4
#define CLOCK1_GPIO_Port GPIOA
#define CLOCK2_Pin GPIO_PIN_5
#define CLOCK2_GPIO_Port GPIOA
#define CLOCK3_Pin GPIO_PIN_6
#define CLOCK3_GPIO_Port GPIOA
#define CLOCK4_Pin GPIO_PIN_7
#define CLOCK4_GPIO_Port GPIOA
#define CLOCK5_Pin GPIO_PIN_8
#define CLOCK5_GPIO_Port GPIOA
#define CLOCK6_Pin GPIO_PIN_9
#define CLOCK6_GPIO_Port GPIOA
#define CLOCK7_Pin GPIO_PIN_10
#define CLOCK7_GPIO_Port GPIOA
#define CLOCK8_Pin GPIO_PIN_11
#define CLOCK8_GPIO_Port GPIOA
#define CLOCK9_Pin GPIO_PIN_12
#define CLOCK9_GPIO_Port GPIOA
#define CLOCK10_Pin GPIO_PIN_13
#define CLOCK10_GPIO_Port GPIOA
#define CLOCK11_Pin GPIO_PIN_14
#define CLOCK11_GPIO_Port GPIOA
#define CLOCK12_Pin GPIO_PIN_15
#define CLOCK12_GPIO_Port GPIOA

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
