/***************************************************************************/ /**
 * @file sl_si91x_config_timer_config.h
 * @brief Config Timer configuration file.
 *******************************************************************************
 * # License
 * <b>Copyright 2023 Silicon Laboratories Inc. www.silabs.com</b>
 *******************************************************************************
 *
 * SPDX-License-Identifier: Zlib
 *
 * The licensor of this software is Silicon Laboratories Inc.
 *
 * This software is provided 'as-is', without any express or implied
 * warranty. In no event will the authors be held liable for any damages
 * arising from the use of this software.
 *
 * Permission is granted to anyone to use this software for any purpose,
 * including commercial applications, and to alter it and redistribute it
 * freely, subject to the following restrictions:
 *
 * 1. The origin of this software must not be misrepresented; you must not
 *    claim that you wrote the original software. If you use this software
 *    in a product, an acknowledgment in the product documentation would be
 *    appreciated but is not required.
 * 2. Altered source versions must be plainly marked as such, and must not be
 *    misrepresented as being the original software.
 * 3. This notice may not be removed or altered from any source distribution.
 *
 ******************************************************************************/

#ifndef SL_SI91X_CONFIG_TIMER_CONFIG_H
#define SL_SI91X_CONFIG_TIMER_CONFIG_H

// <<< Use Configuration Wizard in Context Menu >>>

/******************************* CT Configuration **************************/
// <h> CT Configuration

// <o SL_CT_MODE_32BIT_ENABLE_MACRO> CT Mode
//   <SL_COUNTER_16BIT=> 16-Bit Mode
//   <SL_COUNTER_32BIT=> 32-Bit Mode
// <i> Default: SL_COUNTER_16BIT
#define SL_CT_MODE_32BIT_ENABLE_MACRO SL_COUNTER_16BIT

// <o SL_COUNTER0_DIRECTION_MACRO> Counter-0 : Direction
//   <SL_COUNTER0_UP=> Up Counter
//   <SL_COUNTER0_DOWN=> Down Counter
//   <SL_COUNTER0_UP_DOWN=> Up-Down Counter
// <i> Default: SL_COUNTER1_UP
#define SL_COUNTER0_DIRECTION_MACRO SL_COUNTER0_UP

// <o SL_COUNTER1_DIRECTION_MACRO> Counter-1 : Direction
//   <SL_COUNTER1_UP=> Up Counter
//   <SL_COUNTER1_DOWN=> Down Counter
//   <SL_COUNTER1_UP_DOWN=> Up-Down Counter
// <i> Default: SL_COUNTER1_UP
#define SL_COUNTER1_DIRECTION_MACRO SL_COUNTER1_UP

// <q SL_COUNTER0_PERIODIC_ENABLE_MACRO> Counter0 : Enable Periodic mode
// <i> Default: 1
#define SL_COUNTER0_PERIODIC_ENABLE_MACRO 1

// <q SL_COUNTER1_PERIODIC_ENABLE_MACRO> Counter1 : Enable Periodic mode
// <i> Default: 1
#define SL_COUNTER1_PERIODIC_ENABLE_MACRO 1

// <q SL_COUNTER0_SYNC_TRIGGER_ENABLE_MACRO> Counter0 : Enable sync trigger
// <i> Default: 1
#define SL_COUNTER0_SYNC_TRIGGER_ENABLE_MACRO 1

// <q SL_COUNTER1_SYNC_TRIGGER_ENABLE_MACRO> Counter1 : Enable sync trigger
// <i> Default: 1
#define SL_COUNTER1_SYNC_TRIGGER_ENABLE_MACRO 1

// </h>
// <<< end of configuration section >>>

sl_config_timer_config_t ct_configuration = {
  .is_counter_mode_32bit_enabled    = SL_CT_MODE_32BIT_ENABLE_MACRO,
  .is_counter0_soft_reset_enabled   = false,
  .is_counter0_periodic_enabled     = SL_COUNTER0_PERIODIC_ENABLE_MACRO,
  .is_counter0_trigger_enabled      = false,
  .is_counter0_sync_trigger_enabled = SL_COUNTER0_SYNC_TRIGGER_ENABLE_MACRO,
  .is_counter0_buffer_enabled       = false,
  .is_counter1_soft_reset_enabled   = false,
  .is_counter1_periodic_enabled     = SL_COUNTER1_PERIODIC_ENABLE_MACRO,
  .is_counter1_trigger_enabled      = false,
  .is_counter1_sync_trigger_enabled = SL_COUNTER1_SYNC_TRIGGER_ENABLE_MACRO,
  .is_counter1_buffer_enabled       = false,
  .counter0_direction               = SL_COUNTER0_DIRECTION_MACRO,
  .counter1_direction               = SL_COUNTER1_DIRECTION_MACRO,
};

#endif /* SL_SI91X_CONFIG_TIMER_CONFIG_H */