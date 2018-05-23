#ifndef __CRC16_H__
#define __CRC16_H__

#ifdef __cplusplus
extern "C"
{
#endif

typedef unsigned short CRC16;

int ByteCRC16(int value, int crcin);
CRC16 CalcCRC16Words(unsigned int count, short *buffer);
CRC16 CalcCRC16Bytes(unsigned int count, char *buffer);

#ifdef __cplusplus
}
#endif

#endif /* __CRC16_H__ */
