/*******************************************************************************
*//**
* @mainpage
* @section section1 Introduction:
*         Having studied this LAB you will able to: \n
*         -   Understand the general Timer functions \n
*         -   Study the programs related to the General timer
*
* @section section2 Example3 :
*    Objective: Write a Program to use Timer Match to generate specific frequency using Hardware toggle pin.(Timer2)
*
* @section section3 Program Description:
*    This program demonstrates generation of specific frequency using general timer.
*
* @section section4 Included Files:
*
*   | Header Files           	        | Source Files           	       |
*   | :------------------------------:| :----------------------------: |
*   | @ref stm32f4xx_hal_conf.h       | @ref stm32f4xx_hal_msp.c       |
*   | @ref stm32f4xx_it.h 		        | @ref stm32f4xx_it.c	 	         |
*   | @ref stm32f4_discovery.h        | @ref stm32f4_discovery.c       |
*   | @ref stm32f4_discovery_timer.h  | @ref stm32f4_discovery_timer.c |
*   |                                 | @ref main.c                    |
*
* \n
* @section section5 Pin Assignments
*
*   | STM32F407 Reference | Peripheral |
*   | :------------------:|-----------:|
*   | GPIOA.05            | TIM2_CH1   |
*
*
* @section section6 Program Folder Location
*       <Eg3>
*
*
* @section section7 Part List
*   - STM32F4Discovery Board \n
*   - USB cable \n
*   - Eclipse IDE \n
*   - PC \n
*
* @section section8 Hardware Configuration
*   - Connect the board using USB port of PC using USB cable.
*   - Apply Reset condition by pressing the Reset switch to ensure proper communication.
*   - Using download tool (STM ST-LINK Utility) download the .hex file developed using available tools.
*   - Reset the board.
*   - Observe the Output.

*
* @section section9 Output:
*    100KHZ will be generated on the Timer2 channel1 port pin(Frequency range is 1HZ-2MHZ).
*\n
*\n
*******************************************************************************/
