/*
 * This file is part of Betaflight.
 *
 * Betaflight is free software. You can redistribute this software
 * and/or modify this software under the terms of the GNU General
 * Public License as published by the Free Software Foundation,
 * either version 3 of the License, or (at your option) any later
 * version.
 *
 * Betaflight is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public
 * License along with this software.
 *
 * If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#define FC_TARGET_MCU     STM32F7X2

#define BOARD_NAME        CLRACINGF7
#define MANUFACTURER_ID   CLRA

#define USE_GYRO
#define USE_GYRO_SPI_MPU6500
#define USE_ACC
#define USE_ACC_SPI_MPU6500
#define USE_GYRO_SPI_MPU6000
#define USE_ACC_SPI_MPU6000
#define USE_FLASH_W25Q128FV
#define USE_FLASH_W25N01G
#define USE_MAX7456

#define BEEPER_PIN           PB4
#define MOTOR1_PIN           PB6
#define MOTOR2_PIN           PB7
#define MOTOR3_PIN           PB8
#define MOTOR4_PIN           PB9
#define MOTOR5_PIN           PA1
#define MOTOR6_PIN           PC8
#define MOTOR7_PIN           PC9
#define MOTOR8_PIN           PB1
#define LED_STRIP_PIN        PB1
#define UART1_TX_PIN         PA9
#define UART2_TX_PIN         PA2
#define UART3_TX_PIN         PB10
#define UART4_TX_PIN         PA0
#define UART5_TX_PIN         PC12
#define UART6_TX_PIN         PC6
#define UART1_RX_PIN         PA10
#define UART2_RX_PIN         PA3
#define UART3_RX_PIN         PB11
#define UART4_RX_PIN         PA1
#define UART5_RX_PIN         PD2
#define UART6_RX_PIN         PC7
#define LED0_PIN             PB0
#define SPEKTRUM_RX_BIND_PIN PB2
#define SPI1_SCK_PIN         PA5
#define SPI2_SCK_PIN         PB13
#define SPI3_SCK_PIN         PC10
#define SPI1_SDI_PIN         PA6
#define SPI2_SDI_PIN         PB14
#define SPI3_SDI_PIN         PC11
#define SPI1_SDO_PIN         PA7
#define SPI2_SDO_PIN         PB15
#define SPI3_SDO_PIN         PB5
#define CAMERA_CONTROL_PIN   PB3
#define ADC_VBAT_PIN         PC2
#define ADC_RSSI_PIN         PC3
#define ADC_CURR_PIN         PC1
#define SDCARD_CS_PIN        PB12
#define SDCARD_DETECT_PIN    PC3
#define PINIO1_PIN           PA14
#define FLASH_CS_PIN         PB12
#define MAX7456_SPI_CS_PIN   PA15
#define GYRO_1_EXTI_PIN      PC4
#define GYRO_2_EXTI_PIN      PC14
#define GYRO_1_CS_PIN        PA4
#define GYRO_2_CS_PIN        PC13
#define USB_DETECT_PIN       PC5

#define TIMER_PIN_MAPPING \
    TIMER_PIN_MAP( 0, PA3 , 3, -1) \
    TIMER_PIN_MAP( 1, PB0 , 1,  0) \
    TIMER_PIN_MAP( 2, PB1 , 2,  0) \
    TIMER_PIN_MAP( 3, PA1 , 2,  0) \
    TIMER_PIN_MAP( 4, PA0 , 2,  0) \
    TIMER_PIN_MAP( 5, PC6 , 1,  0) \
    TIMER_PIN_MAP( 6, PC7 , 2,  0) \
    TIMER_PIN_MAP( 7, PB5 , 1,  0) \
    TIMER_PIN_MAP( 8, PB9 , 1, -1) \
    TIMER_PIN_MAP( 9, PB8 , 1,  0) \
    TIMER_PIN_MAP(10, PB3 , 1,  0) \
    TIMER_PIN_MAP(11, PB6 , 1,  0) \
    TIMER_PIN_MAP(12, PB7 , 1,  0) \
    TIMER_PIN_MAP(13, PC8 , 2,  0) \
    TIMER_PIN_MAP(14, PC9 , 2,  0)



#define ADC1_DMA_OPT        1

//TODO #define MAG_BUSTYPE I2C
#define MAG_I2C_INSTANCE (I2CDEV_2)
#define USE_BARO
#define BARO_I2C_INSTANCE (I2CDEV_1)

#define DEFAULT_BLACKBOX_DEVICE     BLACKBOX_DEVICE_FLASH
#define ENABLE_DSHOT_DMAR DSHOT_DMAR_ON
//TODO #define MOTOR_PWM_PROTOCOL DSHOT600
#define DEFAULT_CURRENT_METER_SOURCE CURRENT_METER_ADC
#define DEFAULT_VOLTAGE_METER_SOURCE VOLTAGE_METER_ADC
#define DEFAULT_CURRENT_METER_SCALE 250
#define BEEPER_INVERTED
//TODO #define PID_PROCESS_DENOM 1
//TODO #define SDCARD_DETECT_INVERTED ON
#define USE_SDCARD_SPI
#define SDCARD_SPI_INSTANCE SPI2
#define MAX7456_SPI_INSTANCE SPI3
#define FLASH_SPI_INSTANCE SPI2
#define USE_SPI_GYRO
#define GYRO_1_SPI_INSTANCE SPI1
#define GYRO_2_SPI_INSTANCE SPI1
#define GYRO_2_ALIGN CW90_DEG
#define GYRO_2_ALIGN_YAW 900
//TODO #define GYRO_TO_USE BOTH
#define PINIO1_BOX 40
//TODO #define MCO2_ON_PC9 ON
