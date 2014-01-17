#ifndef ST_MESSAGE_H
#define ST_MESSAGE_H

#pragma  pack (push,1)

#if defined(__GNUC__)
#include <stdint.h>
typedef struct tag_smartlink_message{
    unsigned __INT16_TYPE__ Mark;    //Always be "0xAA55"
    unsigned __INT16_TYPE__ version; //Structure Version
    unsigned __INT8_TYPE__ Priority;
    unsigned __INT8_TYPE__	Reserved1;
    unsigned __INT32_TYPE__ SerialNum;
    unsigned __INT32_TYPE__ source_id ; //0xffffffff means from server
    unsigned __INT32_TYPE__ destin_id ; //0xffffffff means to server
    unsigned __INT16_TYPE__ data_length; //Data at least have 2 byte, for heart-beating counter.
    unsigned __INT16_TYPE__ Reserved2;
    __UINT8_TYPE__ data[1];
   } SMARTLINK_MSG;
#endif

#if defined(_MSC_VER)
typedef struct tag_smartlink_message{
    unsigned __int16 Mark;    //Always be 0xAA55
    unsigned __int16 version; //Structure Version
    unsigned __int8 Priority;
    unsigned __int8	Reserved1;
    unsigned __int32 SerialNum;
    unsigned __int32 source_id ; //0xffffffff means from server
    unsigned __int32 destin_id ; //0xffffffff means to server
    unsigned __int16 data_length; //Data at least have 2 byte, for heart-beating counter.
    unsigned __int16 Reserved2;
    unsigned __int8 data[1];
   } SMARTLINK_MSG;
#endif



#pragma pack(pop)

#endif // ST_MESSAGE_H
