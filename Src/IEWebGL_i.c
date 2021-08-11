

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 7.00.0555 */
/* at Wed Aug 11 09:05:43 2021
 */
/* Compiler settings for IEWebGL.idl:
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


MIDL_DEFINE_GUID(IID, IID_IWebGLObject,0x789B00A8,0x6108,0x4AA3,0xA3,0x7A,0xA1,0x17,0xED,0x78,0x2D,0x73);


MIDL_DEFINE_GUID(IID, IID_IWebGLBuffer,0xF0C3A028,0x4B0F,0x40B9,0xA8,0x1D,0x38,0x94,0xD6,0x2B,0xCB,0xEF);


MIDL_DEFINE_GUID(IID, IID_IWebGLFramebuffer,0x60B196E5,0xB244,0x4216,0x9F,0x4C,0xD6,0x83,0x9E,0xB1,0x29,0x7D);


MIDL_DEFINE_GUID(IID, IID_IWebGLShader,0x1D7536F5,0x82A5,0x4A36,0x8F,0x95,0xC5,0xC4,0xBC,0xE1,0xD4,0x10);


MIDL_DEFINE_GUID(IID, IID_IWebGLProgram,0xE6F9DD9E,0xA066,0x4FBF,0xB2,0x52,0x71,0x20,0x00,0x7A,0x49,0xC5);


MIDL_DEFINE_GUID(IID, IID_IWebGLRenderbuffer,0x66FD3A8F,0xBD05,0x4F92,0x90,0xFB,0xB0,0xCC,0x42,0x5F,0xE2,0x93);


MIDL_DEFINE_GUID(IID, IID_IWebGLTexture,0x3DB713CF,0x263B,0x4AAF,0xB1,0x07,0x0B,0xC4,0x51,0x5B,0xAE,0x84);


MIDL_DEFINE_GUID(IID, IID_IWebGLUniformLocation,0x36DD7F98,0x156D,0x4A1D,0xA3,0xBD,0xCF,0x89,0x79,0x6D,0x78,0xB2);


MIDL_DEFINE_GUID(IID, IID_IWebGLActiveInfo,0x41C94606,0xD923,0x407C,0xBD,0xD9,0x8C,0xF6,0xD9,0xDD,0x16,0x19);


MIDL_DEFINE_GUID(IID, IID_IWebGLShaderPrecisionFormat,0x47E629D7,0x62C1,0x46C9,0x91,0x13,0x85,0x17,0x6A,0x97,0xA3,0x60);


MIDL_DEFINE_GUID(IID, IID_IWebGLContextAttributes,0x76E43B1A,0x9D20,0x4C64,0xBD,0x58,0xBC,0xDD,0x21,0xB8,0xA8,0xA9);


MIDL_DEFINE_GUID(IID, IID_IWebGLRCConstants,0xD0291412,0x9F48,0x4300,0x8A,0xA8,0x38,0xE0,0x30,0x47,0x7E,0x77);


MIDL_DEFINE_GUID(IID, IID_IWebGLRenderingContext,0x4444FB36,0x946C,0x4ED8,0xB2,0xEB,0xB3,0x90,0x8D,0x1E,0x33,0xAF);


MIDL_DEFINE_GUID(IID, IID_IWebGLPlugin,0x4A670C5D,0xBB06,0x41A8,0xA2,0x88,0xE0,0x01,0xA4,0xA5,0x9C,0xBA);


MIDL_DEFINE_GUID(IID, IID_IIEWebGLBHO,0x637009F6,0x37A9,0x4D27,0x85,0xBC,0xB4,0x36,0x4E,0x07,0x87,0xBF);


MIDL_DEFINE_GUID(IID, LIBID_IEWebGLLib,0x8AEB0ADD,0x9C74,0x4113,0xB8,0xD4,0x56,0xB4,0x24,0xB2,0x01,0xF1);


MIDL_DEFINE_GUID(CLSID, CLSID_WebGLPlugin,0xD694F78F,0xA696,0x4A03,0x98,0x41,0x24,0xBB,0x33,0xAF,0x9F,0x48);


MIDL_DEFINE_GUID(CLSID, CLSID_IEWebGLBHO,0x424F5422,0xEFE8,0x4BBE,0xBC,0xBC,0x8E,0xC0,0x95,0xEC,0x9A,0x8F);


MIDL_DEFINE_GUID(CLSID, CLSID_ArrayBuffer,0x425DF043,0x792B,0x4C23,0x8E,0x57,0xD1,0xCC,0xBF,0x8C,0x16,0x87);


MIDL_DEFINE_GUID(CLSID, CLSID_Uint8Array,0x71D927BC,0xF79E,0x4BC3,0x8D,0x46,0xAC,0xB2,0xDB,0x62,0x12,0x82);


MIDL_DEFINE_GUID(CLSID, CLSID_Int8Array,0x254BFE05,0x0837,0x48C2,0xA2,0x43,0x7B,0x5C,0xC2,0x9E,0x7C,0xC5);


MIDL_DEFINE_GUID(CLSID, CLSID_Uint16Array,0xFB50E7D2,0xD09E,0x4A6B,0x93,0x96,0xA5,0x8F,0x5A,0xC0,0x99,0x44);


MIDL_DEFINE_GUID(CLSID, CLSID_Int16Array,0x0E710FA3,0x4858,0x46AE,0x86,0x09,0x3D,0x95,0x9B,0x17,0xD2,0x57);


MIDL_DEFINE_GUID(CLSID, CLSID_Uint32Array,0x1D45621F,0x8601,0x434A,0x9C,0xDC,0x61,0xC8,0x9B,0x96,0xE7,0x6C);


MIDL_DEFINE_GUID(CLSID, CLSID_Int32Array,0xF078A1CD,0x3355,0x47E0,0x88,0x88,0x04,0xE1,0xCC,0x9E,0x93,0x8F);


MIDL_DEFINE_GUID(CLSID, CLSID_Float32Array,0x1C59BAB2,0x21F0,0x467C,0xA4,0x1A,0x32,0x69,0x25,0x38,0x9D,0x5E);


MIDL_DEFINE_GUID(CLSID, CLSID_Float64Array,0x605CFDFF,0x26C1,0x4293,0x8C,0x45,0xAA,0xEF,0x4D,0xE4,0x9C,0x83);


MIDL_DEFINE_GUID(CLSID, CLSID_DataArrayView,0xCB600F32,0x7513,0x4615,0xA8,0x41,0x4F,0x40,0xFD,0xC0,0x3E,0x4D);


MIDL_DEFINE_GUID(CLSID, CLSID_WebGLRenderingContext,0xE864B09B,0xCED5,0x4439,0xB4,0xFA,0x8E,0x9E,0x7E,0x84,0x05,0x95);


MIDL_DEFINE_GUID(CLSID, CLSID_WebGLShaderPrecisionFormat,0x0D5CE1B4,0x22A0,0x4E80,0xAA,0x48,0xA0,0xB3,0xB9,0x51,0x5E,0x07);


MIDL_DEFINE_GUID(CLSID, CLSID_WebGLContextAttributes,0xB2838EB2,0x6FFF,0x411F,0xA5,0xC6,0x18,0xA8,0x1D,0x38,0x66,0xD9);


MIDL_DEFINE_GUID(IID, IID_IOESTextureFloat,0xCC2B8A2D,0x82BC,0x4014,0x8B,0xB5,0x0E,0x78,0x8E,0xB0,0xDA,0x6B);


MIDL_DEFINE_GUID(IID, IID_IOESStandardDerivatives,0x2CE2C63A,0x2526,0x4D8C,0x8B,0x0B,0xDA,0x29,0x05,0xCD,0x8B,0x95);


MIDL_DEFINE_GUID(IID, IID_IWebGLCompressedTextureS3TC,0x43B375EA,0x3236,0x427F,0xA7,0x1D,0xD4,0x5C,0xF2,0xB7,0x1D,0xD7);


MIDL_DEFINE_GUID(IID, IID_IEXTTextureFilterAnisotropic,0xD79EE8BF,0xF2E2,0x46DA,0x91,0xF0,0x4D,0x29,0x26,0x8C,0x15,0xFC);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



