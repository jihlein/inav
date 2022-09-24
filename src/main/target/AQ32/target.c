/*
 * This file is part of Cleanflight.
 *
 * Cleanflight is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Cleanflight is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Cleanflight.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <stdint.h>

#include <platform.h>
#include "drivers/io.h"
#include "drivers/pwm_mapping.h"
#include "drivers/timer.h"

timerHardware_t timerHardware[] = {
	DEF_TIM(TIM8, CH4, PC9,  TIM_USE_MC_MOTOR, 0, 0), // S1         D(2, 7, 7)
	DEF_TIM(TIM8, CH3, PC8,  TIM_USE_MC_MOTOR, 0, 1), // S2         D(2, 4, 7)
	
	DEF_TIM(TIM2, CH1, PA15, TIM_USE_MC_MOTOR, 0, 0), // S3         D(1, 5, 3)
	DEF_TIM(TIM2, CH2, PB3,  TIM_USE_MC_MOTOR, 0, 0), // S4         D(1, 6, 3)

	DEF_TIM(TIM3, CH1, PB4,  TIM_USE_MC_MOTOR, 0, 0), // S5         D(1, 4, 5)
	DEF_TIM(TIM3, CH2, PB5,  TIM_USE_MC_MOTOR, 0, 0), // S6         D(1, 5, 5)
	
	DEF_TIM(TIM4, CH1, PD12, TIM_USE_MC_MOTOR, 0, 0), // S7         D(1, 0, 2)
	DEF_TIM(TIM4, CH2, PD13, TIM_USE_MC_MOTOR, 0, 0), // S8         D(1, 3, 2)
	
	DEF_TIM(TIM5, CH1, PA0,  TIM_USE_MC_SERVO, 0, 0), // S9
	DEF_TIM(TIM5, CH2, PA1,  TIM_USE_MC_SERVO, 0, 0), // S10
    DEF_TIM(TIM5, CH3, PA2,  TIM_USE_MC_SERVO, 0, 0), // S11

	DEF_TIM(TIM1, CH1, PE9,  TIM_USE_LED,      0, 0), // Led Strip  D(2, 6, 0)
};

const int timerHardwareCount = sizeof(timerHardware) / sizeof(timerHardware[0]);
