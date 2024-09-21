/*
 * This file is part of Cleanflight and Betaflight.
 *
 * Cleanflight and Betaflight are free software. You can redistribute
 * this software and/or modify this software under the terms of the
 * GNU General Public License as published by the Free Software
 * Foundation, either version 3 of the License, or (at your option)
 * any later version.
 *
 * Cleanflight and Betaflight are distributed in the hope that they
 * will be useful, but WITHOUT ANY WARRANTY; without even the implied
 * warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this software.
 *
 * If not, see <http://www.gnu.org/licenses/>.
 */

#include <stdint.h>

#include "platform.h"
#include "drivers/io.h"

#include "drivers/dma.h"
#include "drivers/timer.h"
#include "drivers/timer_def.h"

const timerHardware_t timerHardware[USABLE_TIMER_CHANNEL_COUNT] = {
    DEF_TIM(TMR5, CH1, PA0, TIM_USE_ANY | TIM_USE_SERVO, 0, 11, 0), // servo 1
    DEF_TIM(TMR2, CH2, PA1, TIM_USE_ANY | TIM_USE_LED, 0, 7, 0),    // PWM1 - OUT1 MCO1 DMA1 CH2
    // DEF_TIM(TMR5, CH2, PH3, TIM_USE_ANY | TIM_USE_SERVO, 0, 6, 0),  // servo 2

    DEF_TIM(TMR8, CH4, PC9, TIM_USE_MOTOR, 0, 0, 1),                 // motor1 DMA1 CH1
    DEF_TIM(TMR8, CH3, PC8, TIM_USE_MOTOR, 0, 2, 1),                 // motor2 DMA1 CH3
    DEF_TIM(TMR8, CH2, PC7, TIM_USE_MOTOR, 0, 1, 0),                 // motor3 DMA1 CH1
    DEF_TIM(TMR8, CH1, PC6, TIM_USE_MOTOR, 0, 3, 0),                 // motor4 DMA1 CH4
    DEF_TIM(TMR4, CH1, PB6, TIM_USE_ANY | TIM_USE_SERVO, 0, 11, 10), // servo 3
    DEF_TIM(TMR4, CH2, PB7, TIM_USE_ANY | TIM_USE_SERVO, 0, 10, 10), // servo 4
    DEF_TIM(TMR3, CH4, PB1, TIM_USE_ANY | TIM_USE_SERVO, 0, 8, 10),  // servo 5
    DEF_TIM(TMR3, CH3, PB0, TIM_USE_ANY | TIM_USE_SERVO, 0, 9, 10),  // servo 6
    DEF_TIM(TMR4, CH3, PB8, TIM_USE_ANY | TIM_USE_SERVO, 0, 11, 10), // servo 7

};
