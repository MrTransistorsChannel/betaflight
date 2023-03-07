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

#define FC_TARGET_MCU     STM32F405

#define BOARD_NAME        DYSF4PRO
#define MANUFACTURER_ID   DYST

#define USE_GYRO
#define USE_GYRO_SPI_MPU6500
#define USE_ACC
#define USE_ACC_SPI_MPU6500
#define USE_GYRO_SPI_MPU6000
#define USE_ACC_SPI_MPU6000
#define USE_MAX7456

#define BEEPER_PIN           PB4
#define MOTOR1_PIN           PB0
#define MOTOR2_PIN           PB1
#define MOTOR3_PIN           PA3
#define MOTOR4_PIN           PA2
#define MOTOR5_PIN           PA1
#define MOTOR6_PIN           PA8
#define RX_PPM_PIN           PB14
#define RX_PWM1_PIN          PB14
#define RX_PWM2_PIN          PB15
#define RX_PWM3_PIN          PC6
#define RX_PWM4_PIN          PC7
#define RX_PWM5_PIN          PC8
#define RX_PWM6_PIN          PC9
#define SONAR_TRIGGER_PIN    PA1
#define SONAR_ECHO_PIN       PA8
#define LED_STRIP_PIN        PA1
#define UART1_TX_PIN         PA9
#define UART3_TX_PIN         PB10
#define UART6_TX_PIN         PC6
#define UART1_RX_PIN         PA10
#define UART3_RX_PIN         PB11
#define UART6_RX_PIN         PC7
#define INVERTER1_PIN        PC0
#define LED0_PIN             PB5
#define SPI1_SCK_PIN         PA5
#define SPI3_SCK_PIN         PC10
#define SPI1_SDI_PIN         PA6
#define SPI3_SDI_PIN         PC11
#define SPI1_SDO_PIN         PA7
#define SPI3_SDO_PIN         PC12
#define ESCSERIAL_PIN        PB14
#define ADC_VBAT_PIN         PC2
#define ADC_RSSI_PIN         PC3
#define ADC_CURR_PIN         PC1
#define FLASH_CS_PIN         PB3
#define MAX7456_SPI_CS_PIN   PA15
#define GYRO_1_EXTI_PIN      PC4
#define GYRO_1_CS_PIN        PA4
#define USB_DETECT_PIN       PC5

#define TIMER_PIN_MAPPING \
    TIMER_PIN_MAP( 0, PB14, 3, -1) \
    TIMER_PIN_MAP( 1, PB15, 3, -1) \
    TIMER_PIN_MAP( 2, PC6 , 2,  0) \
    TIMER_PIN_MAP( 3, PC7 , 2,  0) \
    TIMER_PIN_MAP( 4, PC8 , 2,  0) \
    TIMER_PIN_MAP( 5, PC9 , 2,  0) \
    TIMER_PIN_MAP( 6, PB0 , 2,  0) \
    TIMER_PIN_MAP( 7, PB1 , 2,  0) \
    TIMER_PIN_MAP( 8, PA3 , 1,  1) \
    TIMER_PIN_MAP( 9, PA2 , 1,  0) \
    TIMER_PIN_MAP(10, PA1 , 2,  0) \
    TIMER_PIN_MAP(11, PA8 , 1,  0) \
    TIMER_PIN_MAP(12, PA9 , 1,  0) \
    TIMER_PIN_MAP(13, PA10, 1,  0)



#define ADC2_DMA_OPT        1

//TODO #define MAG_BUSTYPE I2C
#define MAG_I2C_INSTANCE (I2CDEV_2)
#define USE_BARO
#define BARO_I2C_INSTANCE (I2CDEV_2)
#define USE_ADC
#define ADC_INSTANCE ADC2
#define DEFAULT_BLACKBOX_DEVICE     BLACKBOX_DEVICE_FLASH
#define ENABLE_DSHOT_DMAR DSHOT_DMAR_ON
#define DEFAULT_CURRENT_METER_SOURCE CURRENT_METER_ADC
#define DEFAULT_VOLTAGE_METER_SOURCE VOLTAGE_METER_ADC
#define BEEPER_INVERTED
#define SYSTEM_HSE_MHZ 8
#define MAX7456_SPI_INSTANCE SPI3
//TODO #define DASHBOARD_I2C_BUS 2
#define FLASH_SPI_INSTANCE SPI3
#define USE_SPI_GYRO
#define GYRO_1_SPI_INSTANCE SPI1
#define GYRO_1_ALIGN CW180_DEG
#define GYRO_2_SPI_INSTANCE SPI1
