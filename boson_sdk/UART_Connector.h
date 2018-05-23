#ifndef UART_CONNECTOR_H
#define UART_CONNECTOR_H

#include <libusb-1.0/libusb.h>
#include <stdint.h>
#include "ReturnCodes.h"

void SendToCamera( uint8_t channelID,  uint32_t sendBytes, uint8_t *sendData);
void ReadFrame( uint8_t channelID, uint32_t *receiveBytes, uint8_t *receiveData);
void ReadUnframed(uint32_t *receiveBytes, uint8_t *receiveData);
FLR_RESULT Initialize(libusb_device_handle *devh);
void Close();

#endif //UART_CONNECTOR_H
