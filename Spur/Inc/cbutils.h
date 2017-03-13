/**
  ******************************************************************************
  * @file    cbutils.h
  * @brief   ContinuumBridge utilities
  ******************************************************************************
  *
  * 
  ******************************************************************************
  */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __CBUTILS_H
#define __CBUTILS_H

#ifdef __cplusplus
 extern "C" {
#endif 

#include "stm32l1xx_hal.h"
#include "usart.h"

#define CB_DEBUG 1

#define Delay_ms(ms) HAL_Delay(ms)
#define Delay_us(us) DWT_Delay(us)

#define COUNTOF(x)  		(sizeof(x) / sizeof((x)[0]))
#define TXBUFFERSIZE 		(COUNTOF(aTxBuffer) - 1)
#define RXBUFFERSIZE 		8

#define BEACON_ADDRESS      0xBBBB
#define GRANT_ADDRESS       0xBB00
#define RIGHT_SIDE			0
#define LEFT_SIDE			1
#define BOTH_SIDES			2

#define LPRS_HEADER_LENGTH 	6
#define ARRAY_CONCAT(TYPE, A, An, B, Bn) \
  (TYPE *)array_concat((const void *)(A), (An), (const void *)(B), (Bn), sizeof(TYPE));
//#define DEBUG_TX(MESSAGE)  (Debug_Tx(&huart1, (uint8_t*)MESSAGE, (COUNTOF(MESSAGE) - 1)))
#define DEBUG_TX(MESSAGE)  (Debug_Tx(&huart1, (uint8_t*)MESSAGE, (strlen(MESSAGE))))
#define RADIO_TXS(MESSAGE, LENGTH)  (Radio_Tx(&huart3, (uint8_t*)MESSAGE, LENGTH))
#define RADIO_TXIT(MESSAGE, LENGTH)  (Radio_Tx_IT(&huart3, (uint8_t*)MESSAGE, LENGTH))
#define DEBUG_TXS(MESSAGE, LENGTH)  (Debug_Tx(&huart1, (uint8_t*)MESSAGE, LENGTH))
#define DEBUG_RX(MESSAGE, LENGTH)  (UART_Rx_IT(&huart1, (uint8_t*)MESSAGE, LENGTH))
#define RADIO_RXIT(MESSAGE, LENGTH)  (Radio_Rx_IT(&huart3, (uint8_t*)MESSAGE, LENGTH))
#define RADIO_RX(MESSAGE, LENGTH, TIMEOUT)  (Radio_Rx(&huart3, (uint8_t*)MESSAGE, LENGTH, TIMEOUT))
#define SPI_TX(MESSAGE, LENGTH)  (SPI_Tx(&hspi1, (uint8_t*)MESSAGE, LENGTH))
#define SPI_RX(MESSAGE, LENGTH)  (SPI_Rx(&hspi1, (uint8_t*)MESSAGE, LENGTH))
#define SPI_TXRX(TXMESSAGE, RXMESSAGE, LENGTH)  (SPI_TxRx(&hspi1, (uint8_t*)TXMESSAGE, (uint8_t*)RXMESSAGE, LENGTH))
#define UART1_Write_Text(MESSAGE) (Debug_Tx(&huart1, (uint8_t*)MESSAGE, (COUNTOF(MESSAGE) - 1)))
#define SIXTEENTHS_NOW (DWT_Get() >> 21)

extern uint8_t 			button_irq;
extern char 			debug_buff[128];
extern int8_t 			temperature;
extern uint8_t			using_side;
extern uint8_t			display_irq_enabled;

void *array_concat(const void *a, size_t an, const void *b, size_t bn, size_t s);
HAL_StatusTypeDef Radio_Tx(UART_HandleTypeDef *uart, uint8_t *buffer, uint16_t buffer_size);
void Debug_Tx(UART_HandleTypeDef *uart, uint8_t *buffer, uint16_t buffer_size);
void Radio_Rx_IT(UART_HandleTypeDef *uart, uint8_t *buffer, uint16_t buffer_size);
HAL_StatusTypeDef Radio_Tx(UART_HandleTypeDef *uart, uint8_t *buffer, uint16_t buffer_size);
uint16_t Radio_Rx(UART_HandleTypeDef *uart, uint8_t *buffer, uint16_t buffer_size, uint16_t timeout);

void DWT_Init(void);
uint32_t DWT_Get(void);
void DWT_Delay(uint32_t us); // microseconds

uint16_t SPI_Rx(SPI_HandleTypeDef *hspi, uint8_t *buffer, uint16_t buffer_size);
uint16_t SPI_Tx(SPI_HandleTypeDef *hspi, uint8_t *buffer, uint16_t buffer_size);
uint16_t SPI_TxRx(SPI_HandleTypeDef *hspi, uint8_t *aTxBuffer, uint8_t *aRxBuffer, uint16_t buffer_size);

void RTC_TimeShow(void);
void RTC_Delay(uint32_t delay);
uint32_t Cbr_Now(void);
uint32_t Cbr_Time(uint8_t h, uint8_t m, uint8_t s);
void HMS(uint32_t e, uint8_t *h, uint8_t *m, uint8_t *s);
void Enable_IRQ(uint8_t using_sode);
void Print_To_Debug(uint8_t *buffer, int length);

#ifdef __cplusplus
}
#endif

#endif /* __CBUTILS_H */

/*****************************END OF FILE****/
