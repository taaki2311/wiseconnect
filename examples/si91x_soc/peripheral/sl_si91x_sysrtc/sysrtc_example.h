/***************************************************************************/ /**
* @file sysrtc_example.h
* @brief Sysrtc examples functions
*******************************************************************************
* # License
* <b>Copyright 2023 Silicon Laboratories Inc. www.silabs.com</b>
*******************************************************************************
*
* The licensor of this software is Silicon Laboratories Inc. Your use of this
* software is governed by the terms of Silicon Labs Master Software License
* Agreement (MSLA) available at
* www.silabs.com/about-us/legal/master-software-license-agreement. This
* software is distributed to you in Source Code format and is governed by the
* sections of the MSLA applicable to Source Code.
*
******************************************************************************/

#ifndef SL_SI91X_SYSRTC_EXAMPLE_H_
#define SL_SI91X_SYSRTC_EXAMPLE_H_

// -----------------------------------------------------------------------------
// Prototypes
/***************************************************************************/ /**
* Sysrtc example initialization function
*
* @param none
* @return none
******************************************************************************/
void sysrtc_example_init(void);

/***************************************************************************/ /**
* Function will run continuously and will wait for interrupt
*
* @param none
* @return none
******************************************************************************/
void sysrtc_example_process_action(void);

#endif /* SL_SI91X_SYSRTC_EXAMPLE_H_ */
