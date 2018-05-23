#ifndef CLIENT_DISPATCHER_H
#define CLIENT_DISPATCHER_H

#include <stdint.h>
#include "ReturnCodes.h"
#include "Serializer_Struct.h"
#include "FunctionCodes.h"
#include "UART_Connector.h"

FLR_RESULT CLIENT_dispatcher(uint32_t seqNum, FLR_FUNCTION fnID, const uint8_t *sendData, const uint32_t sendBytes, const uint8_t *receiveData, uint32_t *receiveBytes);


#endif
