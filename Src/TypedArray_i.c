

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 7.00.0555 */
/* at Wed Aug 11 09:05:47 2021
 */
/* Compiler settings for TypedArray\TypedArray.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 7.00.0555 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


#ifdef __cplusplus
extern "C"{
#endif 


#include <rpc.h>
#include <rpcndr.h>

#ifdef _MIDL_USE_GUIDDEF_

#ifndef INITGUID
#define INITGUID
#include <guiddef.h>
#undef INITGUID
#else
#include <guiddef.h>
#endif

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)

#else // !_MIDL_USE_GUIDDEF_

#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, IID_IJSObject,0x96796261,0x491B,0x4026,0xB5,0xBD,0xAB,0xE2,0x12,0x90,0x8B,0x3E);


MIDL_DEFINE_GUID(IID, IID_IArrayBuffer,0x2680D4E8,0x4474,0x4B47,0x9E,0x3F,0x05,0xF3,0x85,0xE9,0xFC,0xF8);


MIDL_DEFINE_GUID(IID, IID_IArrayBufferView,0x20BA6882,0x1CC8,0x4E86,0xAB,0x77,0x4E,0xFF,0x85,0xF6,0xC0,0xC3);


MIDL_DEFINE_GUID(IID, IID_ITypedArrayBufferView,0xCF72AD82,0x359F,0x432A,0x9E,0xD6,0x58,0x98,0x30,0x41,0x87,0x51);


MIDL_DEFINE_GUID(IID, IID_IInt8Array,0x7E91334D,0x695D,0x491E,0xBC,0x09,0x52,0x91,0xC0,0x6A,0x23,0x3A);


MIDL_DEFINE_GUID(IID, IID_IUint8Array,0x5B0BEBA6,0x3CEB,0x48B7,0x90,0x47,0xA6,0xE1,0xD0,0x1D,0xF0,0x54);


MIDL_DEFINE_GUID(IID, IID_IInt16Array,0xE48BDB2F,0x6C95,0x4679,0xAD,0x39,0xF7,0xD0,0x80,0xB1,0x0D,0x50);


MIDL_DEFINE_GUID(IID, IID_IUint16Array,0x2760D39B,0xF0C5,0x4616,0x88,0xC4,0xF0,0x2F,0xEF,0x95,0xAF,0xEA);


MIDL_DEFINE_GUID(IID, IID_IInt32Array,0x4014EF1F,0xB2EC,0x4CCD,0x8E,0xA9,0xFB,0xE3,0xAE,0x02,0xFE,0x5D);


MIDL_DEFINE_GUID(IID, IID_IUint32Array,0x190F92F7,0xF4EF,0x4689,0xA7,0x53,0x95,0x66,0xE6,0x20,0x15,0x3F);


MIDL_DEFINE_GUID(IID, IID_IFloat32Array,0x718E17BF,0x737B,0x42FE,0xA7,0x7F,0xE3,0xAC,0x34,0xE4,0xDD,0x7C);


MIDL_DEFINE_GUID(IID, IID_IFloat64Array,0x3EEF1A4A,0x1B11,0x49A3,0x9C,0x1F,0x94,0xED,0xC2,0xB1,0x89,0xF6);


MIDL_DEFINE_GUID(IID, IID_IDataArrayView,0xB058D4CD,0xFD1C,0x4E00,0x94,0xE4,0x9D,0x94,0x28,0xA0,0xBC,0x6C);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



