

/* this ALWAYS GENERATED file contains the proxy stub code */


 /* File created by MIDL compiler version 7.00.0555 */
/* at Wed Aug 11 09:05:51 2021
 */
/* Compiler settings for WebGL\WebGL.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 7.00.0555 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#if !defined(_M_IA64) && !defined(_M_AMD64)


#pragma warning( disable: 4049 )  /* more than 64k source lines */
#if _MSC_VER >= 1200
#pragma warning(push)
#endif

#pragma warning( disable: 4211 )  /* redefine extern to static */
#pragma warning( disable: 4232 )  /* dllimport identity*/
#pragma warning( disable: 4024 )  /* array to pointer mapping*/
#pragma warning( disable: 4152 )  /* function/data pointer conversion in expression */
#pragma warning( disable: 4100 ) /* unreferenced arguments in x86 call */

#pragma optimize("", off ) 

#define USE_STUBLESS_PROXY


/* verify that the <rpcproxy.h> version is high enough to compile this file*/
#ifndef __REDQ_RPCPROXY_H_VERSION__
#define __REQUIRED_RPCPROXY_H_VERSION__ 475
#endif


#include "rpcproxy.h"
#ifndef __RPCPROXY_H_VERSION__
#error this stub requires an updated version of <rpcproxy.h>
#endif /* __RPCPROXY_H_VERSION__ */


#include "WebGL_i.h"

#define TYPE_FORMAT_STRING_SIZE   1763                              
#define PROC_FORMAT_STRING_SIZE   18205                             
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   2            

typedef struct _WebGL_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } WebGL_MIDL_TYPE_FORMAT_STRING;

typedef struct _WebGL_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } WebGL_MIDL_PROC_FORMAT_STRING;

typedef struct _WebGL_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } WebGL_MIDL_EXPR_FORMAT_STRING;


static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};


extern const WebGL_MIDL_TYPE_FORMAT_STRING WebGL__MIDL_TypeFormatString;
extern const WebGL_MIDL_PROC_FORMAT_STRING WebGL__MIDL_ProcFormatString;
extern const WebGL_MIDL_EXPR_FORMAT_STRING WebGL__MIDL_ExprFormatString;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IJSObject_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IJSObject_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IArrayBuffer_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IArrayBuffer_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IArrayBufferView_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IArrayBufferView_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ITypedArrayBufferView_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ITypedArrayBufferView_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IInt8Array_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IInt8Array_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IUint8Array_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IUint8Array_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IInt16Array_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IInt16Array_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IUint16Array_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IUint16Array_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IInt32Array_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IInt32Array_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IUint32Array_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IUint32Array_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IFloat32Array_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IFloat32Array_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IFloat64Array_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IFloat64Array_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IDataArrayView_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IDataArrayView_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IWebGLObject_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IWebGLObject_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IWebGLBuffer_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IWebGLBuffer_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IWebGLFramebuffer_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IWebGLFramebuffer_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IWebGLShader_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IWebGLShader_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IWebGLProgram_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IWebGLProgram_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IWebGLRenderbuffer_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IWebGLRenderbuffer_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IWebGLTexture_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IWebGLTexture_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IWebGLUniformLocation_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IWebGLUniformLocation_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IWebGLActiveInfo_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IWebGLActiveInfo_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IWebGLShaderPrecisionFormat_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IWebGLShaderPrecisionFormat_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IWebGLContextAttributes_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IWebGLContextAttributes_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IWebGLRCConstants_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IWebGLRCConstants_ProxyInfo;

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_INT_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[5628],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_UNSIGNED_INT_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[5664],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_FLOAT_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[5700],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_DEPTH_COMPONENT_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[5736],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_ALPHA_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[5772],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_RGB_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[5808],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_RGBA_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[5844],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_LUMINANCE_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[5880],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_LUMINANCE_ALPHA_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[5916],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_UNSIGNED_SHORT_4_4_4_4_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[5952],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_UNSIGNED_SHORT_5_5_5_1_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[5988],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_UNSIGNED_SHORT_5_6_5_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[6024],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_FRAGMENT_SHADER_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[6060],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_VERTEX_SHADER_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[6096],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_MAX_VERTEX_ATTRIBS_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[6132],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_MAX_VERTEX_UNIFORM_VECTORS_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[6168],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_MAX_VARYING_VECTORS_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[6204],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_MAX_COMBINED_TEXTURE_IMAGE_UNITS_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[6240],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_MAX_VERTEX_TEXTURE_IMAGE_UNITS_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[6276],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_MAX_TEXTURE_IMAGE_UNITS_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[6312],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_MAX_FRAGMENT_UNIFORM_VECTORS_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[6348],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_SHADER_TYPE_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[6384],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_DELETE_STATUS_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[6420],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_LINK_STATUS_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[6456],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_VALIDATE_STATUS_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[6492],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_ATTACHED_SHADERS_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[6528],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_ACTIVE_UNIFORMS_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[6564],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_ACTIVE_ATTRIBUTES_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[6600],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_SHADING_LANGUAGE_VERSION_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[6636],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_CURRENT_PROGRAM_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[6672],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_NEVER_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[6708],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_LESS_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[6744],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_EQUAL_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[6780],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_LEQUAL_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[6816],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_GREATER_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[6852],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_NOTEQUAL_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[6888],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_GEQUAL_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[6924],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_ALWAYS_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[6960],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_KEEP_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[6996],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_REPLACE_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[7032],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_INCR_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[7068],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_DECR_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[7104],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_INVERT_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[7140],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_INCR_WRAP_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[7176],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_DECR_WRAP_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[7212],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_VENDOR_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[7248],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_RENDERER_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[7284],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_VERSION_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[7320],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_NEAREST_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[7356],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_LINEAR_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[7392],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_NEAREST_MIPMAP_NEAREST_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[7428],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_LINEAR_MIPMAP_NEAREST_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[7464],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_NEAREST_MIPMAP_LINEAR_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[7500],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_LINEAR_MIPMAP_LINEAR_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[7536],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_TEXTURE_MAG_FILTER_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[7572],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_TEXTURE_MIN_FILTER_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[7608],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_TEXTURE_WRAP_S_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[7644],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_TEXTURE_WRAP_T_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[7680],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_TEXTURE_2D_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[7716],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_TEXTURE_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[7752],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_TEXTURE_CUBE_MAP_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[7788],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_TEXTURE_BINDING_CUBE_MAP_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[7824],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_TEXTURE_CUBE_MAP_POSITIVE_X_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[7860],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_TEXTURE_CUBE_MAP_NEGATIVE_X_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[7896],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_TEXTURE_CUBE_MAP_POSITIVE_Y_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[7932],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_TEXTURE_CUBE_MAP_NEGATIVE_Y_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[7968],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_TEXTURE_CUBE_MAP_POSITIVE_Z_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[8004],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_TEXTURE_CUBE_MAP_NEGATIVE_Z_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[8040],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_MAX_CUBE_MAP_TEXTURE_SIZE_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[8076],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_TEXTURE0_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[8112],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_TEXTURE1_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[8148],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_TEXTURE2_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[8184],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_TEXTURE3_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[8220],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_TEXTURE4_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[8256],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_TEXTURE5_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[8292],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_TEXTURE6_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[8328],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_TEXTURE7_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[8364],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_TEXTURE8_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[8400],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_TEXTURE9_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[8436],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_TEXTURE10_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[8472],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_TEXTURE11_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[8508],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_TEXTURE12_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[8544],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_TEXTURE13_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[8580],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_TEXTURE14_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[8616],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_TEXTURE15_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[8652],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_TEXTURE16_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[8688],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_TEXTURE17_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[8724],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_TEXTURE18_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[8760],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_TEXTURE19_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[8796],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_TEXTURE20_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[8832],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_TEXTURE21_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[8868],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_TEXTURE22_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[8904],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_TEXTURE23_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[8940],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_TEXTURE24_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[8976],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_TEXTURE25_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[9012],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_TEXTURE26_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[9048],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_TEXTURE27_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[9084],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_TEXTURE28_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[9120],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_TEXTURE29_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[9156],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_TEXTURE30_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[9192],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_TEXTURE31_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[9228],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_ACTIVE_TEXTURE_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[9264],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_REPEAT_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[9300],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_CLAMP_TO_EDGE_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[9336],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_MIRRORED_REPEAT_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[9372],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_FLOAT_VEC2_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[9408],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_FLOAT_VEC3_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[9444],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_FLOAT_VEC4_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[9480],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_INT_VEC2_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[9516],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_INT_VEC3_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[9552],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_INT_VEC4_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[9588],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_BOOL_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[9624],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_BOOL_VEC2_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[9660],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_BOOL_VEC3_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[9696],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_BOOL_VEC4_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[9732],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_FLOAT_MAT2_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[9768],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_FLOAT_MAT3_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[9804],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_FLOAT_MAT4_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[9840],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_SAMPLER_2D_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[9876],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_SAMPLER_CUBE_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[9912],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_VERTEX_ATTRIB_ARRAY_ENABLED_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[9948],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_VERTEX_ATTRIB_ARRAY_SIZE_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[9984],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_VERTEX_ATTRIB_ARRAY_STRIDE_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[10020],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_VERTEX_ATTRIB_ARRAY_TYPE_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[10056],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_VERTEX_ATTRIB_ARRAY_NORMALIZED_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[10092],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_VERTEX_ATTRIB_ARRAY_POINTER_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[10128],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[10164],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_COMPILE_STATUS_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[10200],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_LOW_FLOAT_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[10236],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_MEDIUM_FLOAT_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[10272],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_HIGH_FLOAT_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[10308],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_LOW_INT_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[10344],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_MEDIUM_INT_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[10380],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_HIGH_INT_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[10416],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_FRAMEBUFFER_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[10452],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_RENDERBUFFER_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[10488],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_RGBA4_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[10524],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_RGB5_A1_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[10560],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_RGB565_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[10596],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_DEPTH_COMPONENT16_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[10632],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_STENCIL_INDEX_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[10668],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_STENCIL_INDEX8_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[10704],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_DEPTH_STENCIL_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[10740],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_RENDERBUFFER_WIDTH_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[10776],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_RENDERBUFFER_HEIGHT_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[10812],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_RENDERBUFFER_INTERNAL_FORMAT_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[10848],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_RENDERBUFFER_RED_SIZE_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[10884],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_RENDERBUFFER_GREEN_SIZE_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[10920],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_RENDERBUFFER_BLUE_SIZE_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[10956],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_RENDERBUFFER_ALPHA_SIZE_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[10992],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_RENDERBUFFER_DEPTH_SIZE_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[11028],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_RENDERBUFFER_STENCIL_SIZE_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[11064],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[11100],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_FRAMEBUFFER_ATTACHMENT_OBJECT_NAME_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[11136],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[11172],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[11208],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_COLOR_ATTACHMENT0_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[11244],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_DEPTH_ATTACHMENT_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[11280],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_STENCIL_ATTACHMENT_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[11316],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_DEPTH_STENCIL_ATTACHMENT_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[11352],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_NONE_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[11388],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_FRAMEBUFFER_COMPLETE_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[11424],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_FRAMEBUFFER_INCOMPLETE_ATTACHMENT_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[11460],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[11496],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_FRAMEBUFFER_INCOMPLETE_DIMENSIONS_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[11532],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_FRAMEBUFFER_UNSUPPORTED_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[11568],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_FRAMEBUFFER_BINDING_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[11604],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_RENDERBUFFER_BINDING_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[11640],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_MAX_RENDERBUFFER_SIZE_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[11676],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_INVALID_FRAMEBUFFER_OPERATION_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[11712],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_UNPACK_FLIP_Y_WEBGL_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[11748],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_UNPACK_PREMULTIPLY_ALPHA_WEBGL_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[11784],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_CONTEXT_LOST_WEBGL_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[11820],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_UNPACK_COLORSPACE_CONVERSION_WEBGL_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[11856],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_BROWSER_DEFAULT_WEBGL_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[11892],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IWebGLRenderingContext_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IWebGLRenderingContext_ProxyInfo;

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_get_canvas_Proxy( 
    IWebGLRenderingContext * This,
    /* [retval][out] */ IDispatch **retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[11928],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_get_drawingBufferWidth_Proxy( 
    IWebGLRenderingContext * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[11964],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_get_drawingBufferHeight_Proxy( 
    IWebGLRenderingContext * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[12000],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_getContextAttributes_Proxy( 
    IWebGLRenderingContext * This,
    /* [retval][out] */ IWebGLContextAttributes **retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[12036],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_isContextLost_Proxy( 
    IWebGLRenderingContext * This,
    /* [retval][out] */ VARIANT *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[12072],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_getSupportedExtensions_Proxy( 
    IWebGLRenderingContext * This,
    /* [retval][out] */ IDispatch **retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[12108],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_getExtension_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ BSTR name,
    /* [retval][out] */ IDispatch **retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[12144],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_activeTexture_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ ULONG texture)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[12186],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_attachShader_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ IWebGLProgram *program,
    /* [in] */ IWebGLShader *shader)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[12222],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_bindAttribLocation_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ IWebGLProgram *program,
    /* [in] */ ULONG index,
    /* [in] */ BSTR name)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[12264],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_bindBuffer_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ ULONG target,
    /* [in] */ IWebGLBuffer *buffer)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[12312],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_bindFramebuffer_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ ULONG target,
    /* [in] */ IWebGLFramebuffer *framebuffer)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[12354],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_bindRenderbuffer_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ ULONG target,
    /* [in] */ IWebGLRenderbuffer *renderbuffer)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[12396],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_bindTexture_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ ULONG target,
    /* [in] */ IWebGLTexture *texture)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[12438],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_blendColor_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ FLOAT red,
    /* [in] */ FLOAT green,
    /* [in] */ FLOAT blue,
    /* [in] */ FLOAT alpha)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[12480],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_blendEquation_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ ULONG mode)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[12534],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_blendEquationSeparate_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ ULONG modeRGB,
    /* [in] */ ULONG modeAlpha)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[12570],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_blendFunc_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ ULONG sfactor,
    /* [in] */ ULONG dfactor)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[12612],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_blendFuncSeparate_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ ULONG srcRGB,
    /* [in] */ ULONG dstRGB,
    /* [in] */ ULONG srcAlpha,
    /* [in] */ ULONG dstAlpha)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[12654],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_bufferData_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ ULONG target,
    /* [in] */ VARIANT arg1,
    /* [in] */ VARIANT arg2)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[12708],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_bufferSubData_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ ULONG target,
    /* [in] */ LONG offset,
    /* [in] */ IDispatch *data)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[12756],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_checkFramebufferStatus_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ ULONG target,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[12804],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_clear_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ ULONG mask)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[12846],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_clearColor_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ FLOAT red,
    /* [in] */ FLOAT green,
    /* [in] */ FLOAT blue,
    /* [in] */ FLOAT alpha)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[12882],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_clearDepth_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ FLOAT depth)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[12936],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_clearStencil_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ LONG s)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[12972],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_colorMask_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ BOOL red,
    /* [in] */ BOOL green,
    /* [in] */ BOOL blue,
    /* [in] */ BOOL alpha)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[13008],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_compileShader_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ IWebGLShader *shader)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[13062],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_compressedTexImage2D_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ ULONG target,
    /* [in] */ LONG level,
    /* [in] */ ULONG internalformat,
    /* [in] */ LONG width,
    /* [in] */ LONG height,
    /* [in] */ LONG border,
    /* [in] */ IArrayBufferView *data)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[13098],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_compressedTexSubImage2D_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ ULONG target,
    /* [in] */ LONG level,
    /* [in] */ LONG xoffset,
    /* [in] */ LONG yoffset,
    /* [in] */ LONG width,
    /* [in] */ LONG height,
    /* [in] */ ULONG format,
    /* [in] */ IArrayBufferView *data)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[13170],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_copyTexImage2D_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ ULONG target,
    /* [in] */ LONG level,
    /* [in] */ ULONG internalformat,
    /* [in] */ LONG x,
    /* [in] */ LONG y,
    /* [in] */ LONG width,
    /* [in] */ LONG height,
    /* [in] */ LONG border)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[13248],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_copyTexSubImage2D_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ ULONG target,
    /* [in] */ LONG level,
    /* [in] */ LONG xoffset,
    /* [in] */ LONG yoffset,
    /* [in] */ LONG x,
    /* [in] */ LONG y,
    /* [in] */ LONG width,
    /* [in] */ LONG height)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[13326],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_createBuffer_Proxy( 
    IWebGLRenderingContext * This,
    /* [retval][out] */ IWebGLBuffer **retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[13404],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_createFramebuffer_Proxy( 
    IWebGLRenderingContext * This,
    /* [retval][out] */ IWebGLFramebuffer **retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[13440],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_createProgram_Proxy( 
    IWebGLRenderingContext * This,
    /* [retval][out] */ IWebGLProgram **retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[13476],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_createRenderbuffer_Proxy( 
    IWebGLRenderingContext * This,
    /* [retval][out] */ IWebGLRenderbuffer **retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[13512],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_createShader_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ ULONG type,
    /* [retval][out] */ IWebGLShader **retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[13548],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_createTexture_Proxy( 
    IWebGLRenderingContext * This,
    /* [retval][out] */ IWebGLTexture **retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[13590],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_cullFace_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ ULONG mode)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[13626],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_deleteBuffer_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ IWebGLBuffer *buffer)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[13662],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_deleteFramebuffer_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ IWebGLFramebuffer *framebuffer)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[13698],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_deleteProgram_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ IWebGLProgram *program)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[13734],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_deleteRenderbuffer_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ IWebGLRenderbuffer *renderbuffer)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[13770],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_deleteShader_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ IWebGLShader *shader)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[13806],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_deleteTexture_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ IWebGLTexture *texture)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[13842],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_depthFunc_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ ULONG func)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[13878],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_depthMask_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ BOOL flag)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[13914],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_depthRange_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ FLOAT zNear,
    /* [in] */ FLOAT zFar)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[13950],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_detachShader_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ IWebGLProgram *program,
    /* [in] */ IWebGLShader *shader)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[13992],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_disable_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ ULONG cap)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[14034],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_disableVertexAttribArray_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ ULONG index)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[14070],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_drawArrays_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ ULONG mode,
    /* [in] */ LONG first,
    /* [in] */ LONG count)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[14106],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_drawElements_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ ULONG mode,
    /* [in] */ LONG count,
    /* [in] */ ULONG type,
    /* [in] */ LONG offset)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[14154],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_enable_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ ULONG cap)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[14208],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_enableVertexAttribArray_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ ULONG index)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[14244],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_finish_Proxy( 
    IWebGLRenderingContext * This)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[14280],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_flush_Proxy( 
    IWebGLRenderingContext * This)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[14310],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_framebufferRenderbuffer_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ ULONG target,
    /* [in] */ ULONG attachment,
    /* [in] */ ULONG renderbuffertarget,
    /* [in] */ IWebGLRenderbuffer *renderbuffer)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[14340],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_framebufferTexture2D_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ ULONG target,
    /* [in] */ ULONG attachment,
    /* [in] */ ULONG textarget,
    /* [in] */ IWebGLTexture *texture,
    /* [in] */ LONG level)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[14394],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_frontFace_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ ULONG mode)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[14454],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_generateMipmap_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ ULONG target)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[14490],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_getActiveAttrib_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ IWebGLProgram *program,
    /* [in] */ ULONG index,
    /* [retval][out] */ IWebGLActiveInfo **retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[14526],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_getActiveUniform_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ IWebGLProgram *program,
    /* [in] */ ULONG index,
    /* [retval][out] */ IWebGLActiveInfo **retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[14574],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_getAttachedShaders_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ IWebGLProgram *program,
    /* [retval][out] */ IDispatch **retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[14622],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_getAttribLocation_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ IWebGLProgram *program,
    /* [in] */ BSTR name,
    /* [retval][out] */ LONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[14664],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_getParameter_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ ULONG pname,
    /* [retval][out] */ VARIANT *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[14712],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_getBufferParameter_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ ULONG target,
    /* [in] */ ULONG pname,
    /* [retval][out] */ VARIANT *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[14754],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_getError_Proxy( 
    IWebGLRenderingContext * This,
    /* [retval][out] */ ULONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[14802],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_getFramebufferAttachmentParameter_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ ULONG target,
    /* [in] */ ULONG attachment,
    /* [in] */ ULONG pname,
    /* [retval][out] */ VARIANT *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[14838],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_getProgramParameter_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ IWebGLProgram *program,
    /* [in] */ ULONG pname,
    /* [retval][out] */ VARIANT *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[14892],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_getProgramInfoLog_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ IWebGLProgram *program,
    /* [retval][out] */ BSTR *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[14940],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_getRenderbufferParameter_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ ULONG target,
    /* [in] */ ULONG pname,
    /* [retval][out] */ VARIANT *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[14982],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_getShaderParameter_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ IWebGLShader *shader,
    /* [in] */ ULONG pname,
    /* [retval][out] */ VARIANT *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[15030],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_getShaderPrecisionFormat_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ ULONG shadertype,
    /* [in] */ ULONG precisiontype,
    /* [retval][out] */ IWebGLShaderPrecisionFormat **retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[15078],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_getShaderInfoLog_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ IWebGLShader *shader,
    /* [retval][out] */ BSTR *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[15126],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_getShaderSource_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ IWebGLShader *shader,
    /* [retval][out] */ BSTR *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[15168],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_getTexParameter_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ ULONG target,
    /* [in] */ ULONG pname,
    /* [retval][out] */ VARIANT *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[15210],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_getUniform_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ IWebGLProgram *program,
    /* [in] */ IWebGLUniformLocation *location,
    /* [retval][out] */ VARIANT *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[15258],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_getUniformLocation_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ IWebGLProgram *program,
    /* [in] */ BSTR name,
    /* [retval][out] */ IWebGLUniformLocation **retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[15306],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_getVertexAttrib_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ ULONG index,
    /* [in] */ ULONG pname,
    /* [retval][out] */ VARIANT *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[15354],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_getVertexAttribOffset_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ ULONG index,
    /* [in] */ ULONG pname,
    /* [retval][out] */ LONG *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[15402],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_hint_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ ULONG target,
    /* [in] */ ULONG mode)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[15450],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_isBuffer_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ IWebGLBuffer *buffer,
    /* [retval][out] */ VARIANT *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[15492],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_isEnabled_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ ULONG cap,
    /* [retval][out] */ VARIANT *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[15534],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_isFramebuffer_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ IWebGLFramebuffer *framebuffer,
    /* [retval][out] */ VARIANT *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[15576],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_isProgram_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ IWebGLProgram *program,
    /* [retval][out] */ VARIANT *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[15618],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_isRenderbuffer_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ IWebGLRenderbuffer *renderbuffer,
    /* [retval][out] */ VARIANT *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[15660],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_isShader_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ IWebGLShader *shader,
    /* [retval][out] */ VARIANT *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[15702],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_isTexture_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ IWebGLTexture *texture,
    /* [retval][out] */ VARIANT *retVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[15744],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_lineWidth_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ FLOAT width)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[15786],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_linkProgram_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ IWebGLProgram *program)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[15822],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_pixelStorei_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ ULONG pname,
    /* [in] */ LONG param)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[15858],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_polygonOffset_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ FLOAT factor,
    /* [in] */ FLOAT units)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[15900],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_readPixels_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ LONG x,
    /* [in] */ LONG y,
    /* [in] */ LONG width,
    /* [in] */ LONG height,
    /* [in] */ ULONG format,
    /* [in] */ ULONG type,
    /* [in] */ IArrayBufferView *pixels)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[15942],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_renderbufferStorage_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ ULONG target,
    /* [in] */ ULONG internalformat,
    /* [in] */ LONG width,
    /* [in] */ LONG height)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[16014],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_sampleCoverage_Proxy( 
    IWebGLRenderingContext * This,
    FLOAT value,
    /* [in] */ BOOL invert)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[16068],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_scissor_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ LONG x,
    /* [in] */ LONG y,
    /* [in] */ LONG width,
    /* [in] */ LONG height)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[16110],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_shaderSource_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ IWebGLShader *shader,
    /* [in] */ BSTR source)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[16164],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_stencilFunc_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ ULONG func,
    /* [in] */ LONG ref,
    /* [in] */ ULONG mask)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[16206],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_stencilFuncSeparate_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ ULONG face,
    /* [in] */ ULONG func,
    /* [in] */ LONG ref,
    /* [in] */ ULONG mask)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[16254],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_stencilMask_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ ULONG mask)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[16308],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_stencilMaskSeparate_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ ULONG face,
    /* [in] */ ULONG mask)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[16344],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_stencilOp_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ ULONG fail,
    /* [in] */ ULONG zfail,
    /* [in] */ ULONG zpass)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[16386],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_stencilOpSeparate_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ ULONG face,
    /* [in] */ ULONG fail,
    /* [in] */ ULONG zfail,
    /* [in] */ ULONG zpass)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[16434],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_texImage2D_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ ULONG target,
    /* [in] */ LONG level,
    /* [in] */ ULONG internalformat,
    /* [in] */ VARIANT arg0,
    /* [in] */ VARIANT arg1,
    /* [in] */ VARIANT arg2,
    /* [optional][in] */ VARIANT arg3,
    /* [optional][in] */ VARIANT arg4,
    /* [optional][in] */ VARIANT arg5)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[16488],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_texParameterf_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ ULONG target,
    /* [in] */ ULONG pname,
    /* [in] */ FLOAT param)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[16572],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_texParameteri_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ ULONG target,
    /* [in] */ ULONG pname,
    /* [in] */ LONG param)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[16620],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_texSubImage2D_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ ULONG target,
    /* [in] */ LONG level,
    /* [in] */ LONG xoffset,
    /* [in] */ LONG yoffset,
    /* [in] */ VARIANT arg0,
    /* [in] */ VARIANT arg1,
    /* [in] */ VARIANT arg2,
    /* [optional][in] */ VARIANT arg3,
    /* [optional][in] */ VARIANT arg4)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[16668],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_uniform1f_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ IWebGLUniformLocation *location,
    /* [in] */ FLOAT x)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[16752],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_uniform1fv_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ IWebGLUniformLocation *location,
    /* [in] */ IDispatch *v)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[16794],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_uniform1i_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ IWebGLUniformLocation *location,
    /* [in] */ LONG x)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[16836],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_uniform1iv_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ IWebGLUniformLocation *location,
    /* [in] */ IDispatch *v)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[16878],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_uniform2f_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ IWebGLUniformLocation *location,
    /* [in] */ FLOAT x,
    /* [in] */ FLOAT y)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[16920],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_uniform2fv_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ IWebGLUniformLocation *location,
    /* [in] */ IDispatch *v)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[16968],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_uniform2i_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ IWebGLUniformLocation *location,
    /* [in] */ LONG x,
    /* [in] */ LONG y)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[17010],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_uniform2iv_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ IWebGLUniformLocation *location,
    /* [in] */ IDispatch *v)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[17058],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_uniform3f_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ IWebGLUniformLocation *location,
    /* [in] */ FLOAT x,
    /* [in] */ FLOAT y,
    /* [in] */ FLOAT z)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[17100],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_uniform3fv_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ IWebGLUniformLocation *location,
    /* [in] */ IDispatch *v)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[17154],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_uniform3i_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ IWebGLUniformLocation *location,
    /* [in] */ LONG x,
    /* [in] */ LONG y,
    /* [in] */ LONG z)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[17196],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_uniform3iv_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ IWebGLUniformLocation *location,
    /* [in] */ IDispatch *v)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[17250],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_uniform4f_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ IWebGLUniformLocation *location,
    /* [in] */ FLOAT x,
    /* [in] */ FLOAT y,
    /* [in] */ FLOAT z,
    /* [in] */ FLOAT w)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[17292],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_uniform4fv_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ IWebGLUniformLocation *location,
    /* [in] */ IDispatch *v)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[17352],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_uniform4i_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ IWebGLUniformLocation *location,
    /* [in] */ LONG x,
    /* [in] */ LONG y,
    /* [in] */ LONG z,
    /* [in] */ LONG w)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[17394],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_uniform4iv_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ IWebGLUniformLocation *location,
    /* [in] */ IDispatch *v)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[17454],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_uniformMatrix2fv_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ IWebGLUniformLocation *location,
    /* [in] */ BOOL transpose,
    /* [in] */ IDispatch *value)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[17496],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_uniformMatrix3fv_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ IWebGLUniformLocation *location,
    /* [in] */ BOOL transpose,
    /* [in] */ IDispatch *value)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[17544],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_uniformMatrix4fv_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ IWebGLUniformLocation *location,
    /* [in] */ BOOL transpose,
    /* [in] */ IDispatch *value)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[17592],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_useProgram_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ IWebGLProgram *program)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[17640],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_validateProgram_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ IWebGLProgram *program)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[17676],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_vertexAttrib1f_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ ULONG indx,
    /* [in] */ FLOAT x)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[17712],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_vertexAttrib1fv_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ ULONG indx,
    /* [in] */ IDispatch *v)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[17754],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_vertexAttrib2f_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ ULONG indx,
    /* [in] */ FLOAT x,
    /* [in] */ FLOAT y)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[17796],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_vertexAttrib2fv_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ ULONG indx,
    /* [in] */ IDispatch *v)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[17844],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_vertexAttrib3f_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ ULONG indx,
    /* [in] */ FLOAT x,
    /* [in] */ FLOAT y,
    /* [in] */ FLOAT z)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[17886],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_vertexAttrib3fv_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ ULONG indx,
    /* [in] */ IDispatch *v)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[17940],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_vertexAttrib4f_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ ULONG indx,
    /* [in] */ FLOAT x,
    /* [in] */ FLOAT y,
    /* [in] */ FLOAT z,
    /* [in] */ FLOAT w)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[17982],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_vertexAttrib4fv_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ ULONG indx,
    /* [in] */ IDispatch *v)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[18042],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_vertexAttribPointer_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ ULONG indx,
    /* [in] */ LONG size,
    /* [in] */ ULONG type,
    /* [in] */ BOOL normalized,
    /* [in] */ LONG stride,
    /* [in] */ LONG offset)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[18084],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext___viewport_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ LONG x,
    /* [in] */ LONG y,
    /* [in] */ LONG width,
    /* [in] */ LONG height)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &WebGL__MIDL_ProcFormatString.Format[18150],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}


extern const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ];

#if !defined(__RPC_WIN32__)
#error  Invalid build platform for this stub.
#endif

#if !(TARGET_IS_NT50_OR_LATER)
#error You need Windows 2000 or later to run this stub because it uses these features:
#error   /robust command line switch.
#error However, your C/C++ compilation flags indicate you intend to run this app on earlier systems.
#error This app will fail with the RPC_X_WRONG_STUB_VERSION error.
#endif


static const WebGL_MIDL_PROC_FORMAT_STRING WebGL__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure toString */

			0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x7 ),	/* 7 */
/*  8 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 16 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 18 */	NdrFcShort( 0x1 ),	/* 1 */
/* 20 */	NdrFcShort( 0x0 ),	/* 0 */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 24 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 26 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 28 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Return value */

/* 30 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 32 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 34 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_DEPTH_BUFFER_BIT */


	/* Procedure get_rangeMin */


	/* Procedure get_size */


	/* Procedure get_byteLength */

/* 36 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 38 */	NdrFcLong( 0x0 ),	/* 0 */
/* 42 */	NdrFcShort( 0x8 ),	/* 8 */
/* 44 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 46 */	NdrFcShort( 0x0 ),	/* 0 */
/* 48 */	NdrFcShort( 0x24 ),	/* 36 */
/* 50 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 52 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 54 */	NdrFcShort( 0x0 ),	/* 0 */
/* 56 */	NdrFcShort( 0x0 ),	/* 0 */
/* 58 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */


	/* Parameter retVal */


	/* Parameter retVal */


	/* Parameter retVal */

/* 60 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 62 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 64 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 66 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 68 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 70 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_mem */

/* 72 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 74 */	NdrFcLong( 0x0 ),	/* 0 */
/* 78 */	NdrFcShort( 0x9 ),	/* 9 */
/* 80 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 82 */	NdrFcShort( 0x0 ),	/* 0 */
/* 84 */	NdrFcShort( 0x35 ),	/* 53 */
/* 86 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 88 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 90 */	NdrFcShort( 0x0 ),	/* 0 */
/* 92 */	NdrFcShort( 0x0 ),	/* 0 */
/* 94 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter mem */

/* 96 */	NdrFcShort( 0x2012 ),	/* Flags:  must free, out, srv alloc size=8 */
/* 98 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 100 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */

/* 102 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 104 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 106 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_buffer */

/* 108 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 110 */	NdrFcLong( 0x0 ),	/* 0 */
/* 114 */	NdrFcShort( 0x8 ),	/* 8 */
/* 116 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 118 */	NdrFcShort( 0x0 ),	/* 0 */
/* 120 */	NdrFcShort( 0x8 ),	/* 8 */
/* 122 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 124 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 126 */	NdrFcShort( 0x0 ),	/* 0 */
/* 128 */	NdrFcShort( 0x0 ),	/* 0 */
/* 130 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 132 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 134 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 136 */	NdrFcShort( 0x36 ),	/* Type Offset=54 */

	/* Return value */

/* 138 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 140 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 142 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_STENCIL_BUFFER_BIT */


	/* Procedure get_rangeMax */


	/* Procedure get_type */


	/* Procedure get_byteOffset */

/* 144 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 146 */	NdrFcLong( 0x0 ),	/* 0 */
/* 150 */	NdrFcShort( 0x9 ),	/* 9 */
/* 152 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 154 */	NdrFcShort( 0x0 ),	/* 0 */
/* 156 */	NdrFcShort( 0x24 ),	/* 36 */
/* 158 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 160 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 162 */	NdrFcShort( 0x0 ),	/* 0 */
/* 164 */	NdrFcShort( 0x0 ),	/* 0 */
/* 166 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */


	/* Parameter retVal */


	/* Parameter retVal */


	/* Parameter retVal */

/* 168 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 170 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 172 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 174 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 176 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 178 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_COLOR_BUFFER_BIT */


	/* Procedure get_precision */


	/* Procedure get_byteLength */

/* 180 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 182 */	NdrFcLong( 0x0 ),	/* 0 */
/* 186 */	NdrFcShort( 0xa ),	/* 10 */
/* 188 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 190 */	NdrFcShort( 0x0 ),	/* 0 */
/* 192 */	NdrFcShort( 0x24 ),	/* 36 */
/* 194 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 196 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 198 */	NdrFcShort( 0x0 ),	/* 0 */
/* 200 */	NdrFcShort( 0x0 ),	/* 0 */
/* 202 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */


	/* Parameter retVal */


	/* Parameter retVal */

/* 204 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 206 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 208 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 210 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 212 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 214 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_mem */

/* 216 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 218 */	NdrFcLong( 0x0 ),	/* 0 */
/* 222 */	NdrFcShort( 0xb ),	/* 11 */
/* 224 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 226 */	NdrFcShort( 0x0 ),	/* 0 */
/* 228 */	NdrFcShort( 0x35 ),	/* 53 */
/* 230 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 232 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 234 */	NdrFcShort( 0x0 ),	/* 0 */
/* 236 */	NdrFcShort( 0x0 ),	/* 0 */
/* 238 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter mem */

/* 240 */	NdrFcShort( 0x2012 ),	/* Flags:  must free, out, srv alloc size=8 */
/* 242 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 244 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */

/* 246 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 248 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 250 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_modified */

/* 252 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 254 */	NdrFcLong( 0x0 ),	/* 0 */
/* 258 */	NdrFcShort( 0xc ),	/* 12 */
/* 260 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 262 */	NdrFcShort( 0x8 ),	/* 8 */
/* 264 */	NdrFcShort( 0x8 ),	/* 8 */
/* 266 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 268 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 270 */	NdrFcShort( 0x0 ),	/* 0 */
/* 272 */	NdrFcShort( 0x0 ),	/* 0 */
/* 274 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter isModified */

/* 276 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 278 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 280 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 282 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 284 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 286 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_LINE_LOOP */


	/* Procedure get_modified */

/* 288 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 290 */	NdrFcLong( 0x0 ),	/* 0 */
/* 294 */	NdrFcShort( 0xd ),	/* 13 */
/* 296 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 298 */	NdrFcShort( 0x0 ),	/* 0 */
/* 300 */	NdrFcShort( 0x24 ),	/* 36 */
/* 302 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 304 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 306 */	NdrFcShort( 0x0 ),	/* 0 */
/* 308 */	NdrFcShort( 0x0 ),	/* 0 */
/* 310 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */


	/* Parameter retVal */

/* 312 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 314 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 316 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 318 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 320 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 322 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_LINE_STRIP */


	/* Procedure get_BYTES_PER_ELEMENT */

/* 324 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 326 */	NdrFcLong( 0x0 ),	/* 0 */
/* 330 */	NdrFcShort( 0xe ),	/* 14 */
/* 332 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 334 */	NdrFcShort( 0x0 ),	/* 0 */
/* 336 */	NdrFcShort( 0x24 ),	/* 36 */
/* 338 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 340 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 342 */	NdrFcShort( 0x0 ),	/* 0 */
/* 344 */	NdrFcShort( 0x0 ),	/* 0 */
/* 346 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */


	/* Parameter retVal */

/* 348 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 350 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 352 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 354 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 356 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 358 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_TRIANGLES */


	/* Procedure get_length */

/* 360 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 362 */	NdrFcLong( 0x0 ),	/* 0 */
/* 366 */	NdrFcShort( 0xf ),	/* 15 */
/* 368 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 370 */	NdrFcShort( 0x0 ),	/* 0 */
/* 372 */	NdrFcShort( 0x24 ),	/* 36 */
/* 374 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 376 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 378 */	NdrFcShort( 0x0 ),	/* 0 */
/* 380 */	NdrFcShort( 0x0 ),	/* 0 */
/* 382 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */


	/* Parameter retVal */

/* 384 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 386 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 388 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 390 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 392 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 394 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure set */

/* 396 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 398 */	NdrFcLong( 0x0 ),	/* 0 */
/* 402 */	NdrFcShort( 0x10 ),	/* 16 */
/* 404 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 406 */	NdrFcShort( 0x0 ),	/* 0 */
/* 408 */	NdrFcShort( 0x8 ),	/* 8 */
/* 410 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 412 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 414 */	NdrFcShort( 0x0 ),	/* 0 */
/* 416 */	NdrFcShort( 0x1 ),	/* 1 */
/* 418 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter array */

/* 420 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 422 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 424 */	NdrFcShort( 0x4c ),	/* Type Offset=76 */

	/* Parameter offset */

/* 426 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 428 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 430 */	NdrFcShort( 0x434 ),	/* Type Offset=1076 */

	/* Return value */

/* 432 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 434 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 436 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure subarray */

/* 438 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 440 */	NdrFcLong( 0x0 ),	/* 0 */
/* 444 */	NdrFcShort( 0x11 ),	/* 17 */
/* 446 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 448 */	NdrFcShort( 0x8 ),	/* 8 */
/* 450 */	NdrFcShort( 0x8 ),	/* 8 */
/* 452 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 454 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 456 */	NdrFcShort( 0x0 ),	/* 0 */
/* 458 */	NdrFcShort( 0x1 ),	/* 1 */
/* 460 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter begin */

/* 462 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 464 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 466 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter end */

/* 468 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 470 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 472 */	NdrFcShort( 0x434 ),	/* Type Offset=1076 */

	/* Parameter retVal */

/* 474 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 476 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 478 */	NdrFcShort( 0x43e ),	/* Type Offset=1086 */

	/* Return value */

/* 480 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 482 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 484 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_item */

/* 486 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 488 */	NdrFcLong( 0x0 ),	/* 0 */
/* 492 */	NdrFcShort( 0x12 ),	/* 18 */
/* 494 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 496 */	NdrFcShort( 0x8 ),	/* 8 */
/* 498 */	NdrFcShort( 0x8 ),	/* 8 */
/* 500 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 502 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 504 */	NdrFcShort( 0x1 ),	/* 1 */
/* 506 */	NdrFcShort( 0x0 ),	/* 0 */
/* 508 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter index */

/* 510 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 512 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 514 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter retVal */

/* 516 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 518 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 520 */	NdrFcShort( 0x45c ),	/* Type Offset=1116 */

	/* Return value */

/* 522 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 524 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 526 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getInt8 */

/* 528 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 530 */	NdrFcLong( 0x0 ),	/* 0 */
/* 534 */	NdrFcShort( 0xe ),	/* 14 */
/* 536 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 538 */	NdrFcShort( 0x8 ),	/* 8 */
/* 540 */	NdrFcShort( 0x21 ),	/* 33 */
/* 542 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 544 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 546 */	NdrFcShort( 0x0 ),	/* 0 */
/* 548 */	NdrFcShort( 0x0 ),	/* 0 */
/* 550 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter byteOffset */

/* 552 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 554 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 556 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter retVal */

/* 558 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 560 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 562 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 564 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 566 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 568 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getUint8 */

/* 570 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 572 */	NdrFcLong( 0x0 ),	/* 0 */
/* 576 */	NdrFcShort( 0xf ),	/* 15 */
/* 578 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 580 */	NdrFcShort( 0x8 ),	/* 8 */
/* 582 */	NdrFcShort( 0x21 ),	/* 33 */
/* 584 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 586 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 588 */	NdrFcShort( 0x0 ),	/* 0 */
/* 590 */	NdrFcShort( 0x0 ),	/* 0 */
/* 592 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __MIDL__IDataArrayView0000 */

/* 594 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 596 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 598 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter retVal */

/* 600 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 602 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 604 */	0x2,		/* FC_CHAR */
			0x0,		/* 0 */

	/* Return value */

/* 606 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 608 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 610 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getInt16 */

/* 612 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 614 */	NdrFcLong( 0x0 ),	/* 0 */
/* 618 */	NdrFcShort( 0x10 ),	/* 16 */
/* 620 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 622 */	NdrFcShort( 0x8 ),	/* 8 */
/* 624 */	NdrFcShort( 0x22 ),	/* 34 */
/* 626 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 628 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 630 */	NdrFcShort( 0x0 ),	/* 0 */
/* 632 */	NdrFcShort( 0x1 ),	/* 1 */
/* 634 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter byteOffset */

/* 636 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 638 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 640 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter littleEndian */

/* 642 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 644 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 646 */	NdrFcShort( 0x434 ),	/* Type Offset=1076 */

	/* Parameter retVal */

/* 648 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 650 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 652 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 654 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 656 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 658 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getUint16 */

/* 660 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 662 */	NdrFcLong( 0x0 ),	/* 0 */
/* 666 */	NdrFcShort( 0x11 ),	/* 17 */
/* 668 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 670 */	NdrFcShort( 0x8 ),	/* 8 */
/* 672 */	NdrFcShort( 0x22 ),	/* 34 */
/* 674 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 676 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 678 */	NdrFcShort( 0x0 ),	/* 0 */
/* 680 */	NdrFcShort( 0x1 ),	/* 1 */
/* 682 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter byteOffset */

/* 684 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 686 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 688 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter littleEndian */

/* 690 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 692 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 694 */	NdrFcShort( 0x434 ),	/* Type Offset=1076 */

	/* Parameter retVal */

/* 696 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 698 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 700 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 702 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 704 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 706 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getInt32 */

/* 708 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 710 */	NdrFcLong( 0x0 ),	/* 0 */
/* 714 */	NdrFcShort( 0x12 ),	/* 18 */
/* 716 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 718 */	NdrFcShort( 0x8 ),	/* 8 */
/* 720 */	NdrFcShort( 0x24 ),	/* 36 */
/* 722 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 724 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 726 */	NdrFcShort( 0x0 ),	/* 0 */
/* 728 */	NdrFcShort( 0x1 ),	/* 1 */
/* 730 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter byteOffset */

/* 732 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 734 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 736 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter littleEndian */

/* 738 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 740 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 742 */	NdrFcShort( 0x434 ),	/* Type Offset=1076 */

	/* Parameter retVal */

/* 744 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 746 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 748 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 750 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 752 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 754 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getUint32 */

/* 756 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 758 */	NdrFcLong( 0x0 ),	/* 0 */
/* 762 */	NdrFcShort( 0x13 ),	/* 19 */
/* 764 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 766 */	NdrFcShort( 0x8 ),	/* 8 */
/* 768 */	NdrFcShort( 0x24 ),	/* 36 */
/* 770 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 772 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 774 */	NdrFcShort( 0x0 ),	/* 0 */
/* 776 */	NdrFcShort( 0x1 ),	/* 1 */
/* 778 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter byteOffset */

/* 780 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 782 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 784 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter littleEndian */

/* 786 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 788 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 790 */	NdrFcShort( 0x434 ),	/* Type Offset=1076 */

	/* Parameter retVal */

/* 792 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 794 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 796 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 798 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 800 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 802 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getFloat32 */

/* 804 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 806 */	NdrFcLong( 0x0 ),	/* 0 */
/* 810 */	NdrFcShort( 0x14 ),	/* 20 */
/* 812 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 814 */	NdrFcShort( 0x8 ),	/* 8 */
/* 816 */	NdrFcShort( 0x24 ),	/* 36 */
/* 818 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 820 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 822 */	NdrFcShort( 0x0 ),	/* 0 */
/* 824 */	NdrFcShort( 0x1 ),	/* 1 */
/* 826 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter byteOffset */

/* 828 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 830 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 832 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter littleEndian */

/* 834 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 836 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 838 */	NdrFcShort( 0x434 ),	/* Type Offset=1076 */

	/* Parameter retVal */

/* 840 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 842 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 844 */	0xa,		/* FC_FLOAT */
			0x0,		/* 0 */

	/* Return value */

/* 846 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 848 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 850 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getFloat64 */

/* 852 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 854 */	NdrFcLong( 0x0 ),	/* 0 */
/* 858 */	NdrFcShort( 0x15 ),	/* 21 */
/* 860 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 862 */	NdrFcShort( 0x8 ),	/* 8 */
/* 864 */	NdrFcShort( 0x2c ),	/* 44 */
/* 866 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 868 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 870 */	NdrFcShort( 0x0 ),	/* 0 */
/* 872 */	NdrFcShort( 0x1 ),	/* 1 */
/* 874 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter byteOffset */

/* 876 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 878 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 880 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter littleEndian */

/* 882 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 884 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 886 */	NdrFcShort( 0x434 ),	/* Type Offset=1076 */

	/* Parameter retVal */

/* 888 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 890 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 892 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 894 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 896 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 898 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setInt8 */

/* 900 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 902 */	NdrFcLong( 0x0 ),	/* 0 */
/* 906 */	NdrFcShort( 0x16 ),	/* 22 */
/* 908 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 910 */	NdrFcShort( 0x8 ),	/* 8 */
/* 912 */	NdrFcShort( 0x8 ),	/* 8 */
/* 914 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 916 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 918 */	NdrFcShort( 0x0 ),	/* 0 */
/* 920 */	NdrFcShort( 0x1 ),	/* 1 */
/* 922 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter byteOffset */

/* 924 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 926 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 928 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter value */

/* 930 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 932 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 934 */	NdrFcShort( 0x434 ),	/* Type Offset=1076 */

	/* Return value */

/* 936 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 938 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 940 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setUint8 */

/* 942 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 944 */	NdrFcLong( 0x0 ),	/* 0 */
/* 948 */	NdrFcShort( 0x17 ),	/* 23 */
/* 950 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 952 */	NdrFcShort( 0x8 ),	/* 8 */
/* 954 */	NdrFcShort( 0x8 ),	/* 8 */
/* 956 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 958 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 960 */	NdrFcShort( 0x0 ),	/* 0 */
/* 962 */	NdrFcShort( 0x1 ),	/* 1 */
/* 964 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter byteOffset */

/* 966 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 968 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 970 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter value */

/* 972 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 974 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 976 */	NdrFcShort( 0x434 ),	/* Type Offset=1076 */

	/* Return value */

/* 978 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 980 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 982 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setInt16 */

/* 984 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 986 */	NdrFcLong( 0x0 ),	/* 0 */
/* 990 */	NdrFcShort( 0x18 ),	/* 24 */
/* 992 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 994 */	NdrFcShort( 0x8 ),	/* 8 */
/* 996 */	NdrFcShort( 0x8 ),	/* 8 */
/* 998 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 1000 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1002 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1004 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1006 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter byteOffset */

/* 1008 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1010 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1012 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter value */

/* 1014 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1016 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1018 */	NdrFcShort( 0x434 ),	/* Type Offset=1076 */

	/* Parameter littleEndian */

/* 1020 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1022 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1024 */	NdrFcShort( 0x434 ),	/* Type Offset=1076 */

	/* Return value */

/* 1026 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1028 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 1030 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setUint16 */

/* 1032 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1034 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1038 */	NdrFcShort( 0x19 ),	/* 25 */
/* 1040 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 1042 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1044 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1046 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 1048 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1050 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1052 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1054 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter byteOffset */

/* 1056 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1058 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1060 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter __MIDL__IDataArrayView0001 */

/* 1062 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1064 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1066 */	NdrFcShort( 0x434 ),	/* Type Offset=1076 */

	/* Parameter littleEndian */

/* 1068 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1070 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1072 */	NdrFcShort( 0x434 ),	/* Type Offset=1076 */

	/* Return value */

/* 1074 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1076 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 1078 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setInt32 */

/* 1080 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1082 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1086 */	NdrFcShort( 0x1a ),	/* 26 */
/* 1088 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 1090 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1092 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1094 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 1096 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1098 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1100 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1102 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter byteOffset */

/* 1104 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1106 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1108 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter value */

/* 1110 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1112 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1114 */	NdrFcShort( 0x434 ),	/* Type Offset=1076 */

	/* Parameter littleEndian */

/* 1116 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1118 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1120 */	NdrFcShort( 0x434 ),	/* Type Offset=1076 */

	/* Return value */

/* 1122 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1124 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 1126 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setUint32 */

/* 1128 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1130 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1134 */	NdrFcShort( 0x1b ),	/* 27 */
/* 1136 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 1138 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1140 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1142 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 1144 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1146 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1148 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1150 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter byteOffset */

/* 1152 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1154 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1156 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter value */

/* 1158 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1160 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1162 */	NdrFcShort( 0x434 ),	/* Type Offset=1076 */

	/* Parameter littleEndian */

/* 1164 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1166 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1168 */	NdrFcShort( 0x434 ),	/* Type Offset=1076 */

	/* Return value */

/* 1170 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1172 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 1174 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setFloat32 */

/* 1176 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1178 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1182 */	NdrFcShort( 0x1c ),	/* 28 */
/* 1184 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 1186 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1188 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1190 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 1192 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1194 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1196 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1198 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter byteOffset */

/* 1200 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1202 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1204 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter value */

/* 1206 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1208 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1210 */	NdrFcShort( 0x434 ),	/* Type Offset=1076 */

	/* Parameter littleEndian */

/* 1212 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1214 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1216 */	NdrFcShort( 0x434 ),	/* Type Offset=1076 */

	/* Return value */

/* 1218 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1220 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 1222 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setFloat64 */

/* 1224 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1226 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1230 */	NdrFcShort( 0x1d ),	/* 29 */
/* 1232 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 1234 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1236 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1238 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 1240 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1242 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1244 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1246 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter byteOffset */

/* 1248 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1250 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1252 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter value */

/* 1254 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1256 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1258 */	NdrFcShort( 0x434 ),	/* Type Offset=1076 */

	/* Parameter littleEndian */

/* 1260 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1262 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1264 */	NdrFcShort( 0x434 ),	/* Type Offset=1076 */

	/* Return value */

/* 1266 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1268 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 1270 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_name */

/* 1272 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1274 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1278 */	NdrFcShort( 0xa ),	/* 10 */
/* 1280 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1282 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1284 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1286 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1288 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1290 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1292 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1294 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 1296 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 1298 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1300 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Return value */

/* 1302 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1304 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1306 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_alpha */

/* 1308 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1310 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1314 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1316 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1318 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1320 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1322 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1324 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1326 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1328 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1330 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 1332 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 1334 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1336 */	NdrFcShort( 0x45c ),	/* Type Offset=1116 */

	/* Return value */

/* 1338 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1340 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1342 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_depth */

/* 1344 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1346 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1350 */	NdrFcShort( 0x9 ),	/* 9 */
/* 1352 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1354 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1356 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1358 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1360 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1362 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1364 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1366 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 1368 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 1370 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1372 */	NdrFcShort( 0x45c ),	/* Type Offset=1116 */

	/* Return value */

/* 1374 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1376 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1378 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_stencil */

/* 1380 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1382 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1386 */	NdrFcShort( 0xa ),	/* 10 */
/* 1388 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1390 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1392 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1394 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1396 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1398 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1400 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1402 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 1404 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 1406 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1408 */	NdrFcShort( 0x45c ),	/* Type Offset=1116 */

	/* Return value */

/* 1410 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1412 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1414 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_antialias */

/* 1416 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1418 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1422 */	NdrFcShort( 0xb ),	/* 11 */
/* 1424 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1426 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1428 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1430 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1432 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1434 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1436 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1438 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 1440 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 1442 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1444 */	NdrFcShort( 0x45c ),	/* Type Offset=1116 */

	/* Return value */

/* 1446 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1448 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1450 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_premultipliedAlpha */

/* 1452 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1454 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1458 */	NdrFcShort( 0xc ),	/* 12 */
/* 1460 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1462 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1464 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1466 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1468 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1470 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1472 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1474 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 1476 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 1478 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1480 */	NdrFcShort( 0x45c ),	/* Type Offset=1116 */

	/* Return value */

/* 1482 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1484 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1486 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_preserveDrawingBuffer */

/* 1488 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1490 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1494 */	NdrFcShort( 0xd ),	/* 13 */
/* 1496 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1498 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1500 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1502 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1504 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1506 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1508 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1510 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 1512 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 1514 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1516 */	NdrFcShort( 0x45c ),	/* Type Offset=1116 */

	/* Return value */

/* 1518 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1520 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1522 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_POINTS */

/* 1524 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1526 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1530 */	NdrFcShort( 0xb ),	/* 11 */
/* 1532 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1534 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1536 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1538 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1540 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1542 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1544 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1546 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 1548 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1550 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1552 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1554 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1556 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1558 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_LINES */

/* 1560 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1562 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1566 */	NdrFcShort( 0xc ),	/* 12 */
/* 1568 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1570 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1572 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1574 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1576 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1578 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1580 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1582 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 1584 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1586 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1588 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1590 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1592 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1594 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_TRIANGLE_STRIP */

/* 1596 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1598 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1602 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1604 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1606 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1608 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1610 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1612 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1614 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1616 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1618 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 1620 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1622 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1624 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1626 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1628 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1630 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_TRIANGLE_FAN */

/* 1632 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1634 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1638 */	NdrFcShort( 0x11 ),	/* 17 */
/* 1640 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1642 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1644 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1646 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1648 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1650 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1652 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1654 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 1656 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1658 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1660 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1662 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1664 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1666 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ZERO */

/* 1668 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1670 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1674 */	NdrFcShort( 0x12 ),	/* 18 */
/* 1676 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1678 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1680 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1682 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1684 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1686 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1688 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1690 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 1692 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1694 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1696 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1698 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1700 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1702 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ONE */

/* 1704 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1706 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1710 */	NdrFcShort( 0x13 ),	/* 19 */
/* 1712 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1714 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1716 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1718 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1720 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1722 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1724 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1726 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 1728 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1730 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1732 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1734 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1736 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1738 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_SRC_COLOR */

/* 1740 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1742 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1746 */	NdrFcShort( 0x14 ),	/* 20 */
/* 1748 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1750 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1752 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1754 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1756 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1758 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1760 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1762 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 1764 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1766 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1768 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1770 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1772 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1774 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ONE_MINUS_SRC_COLOR */

/* 1776 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1778 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1782 */	NdrFcShort( 0x15 ),	/* 21 */
/* 1784 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1786 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1788 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1790 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1792 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1794 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1796 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1798 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 1800 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1802 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1804 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1806 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1808 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1810 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_SRC_ALPHA */

/* 1812 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1814 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1818 */	NdrFcShort( 0x16 ),	/* 22 */
/* 1820 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1822 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1824 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1826 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1828 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1830 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1832 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1834 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 1836 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1838 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1840 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1842 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1844 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1846 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ONE_MINUS_SRC_ALPHA */

/* 1848 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1850 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1854 */	NdrFcShort( 0x17 ),	/* 23 */
/* 1856 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1858 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1860 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1862 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1864 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1866 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1868 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1870 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 1872 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1874 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1876 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1878 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1880 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1882 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_DST_ALPHA */

/* 1884 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1886 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1890 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1892 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1894 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1896 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1898 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1900 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1902 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1904 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1906 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 1908 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1910 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1912 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1914 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1916 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1918 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ONE_MINUS_DST_ALPHA */

/* 1920 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1922 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1926 */	NdrFcShort( 0x19 ),	/* 25 */
/* 1928 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1930 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1932 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1934 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1936 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1938 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1940 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1942 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 1944 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1946 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1948 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1950 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1952 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1954 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_DST_COLOR */

/* 1956 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1958 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1962 */	NdrFcShort( 0x1a ),	/* 26 */
/* 1964 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1966 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1968 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1970 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1972 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1974 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1976 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1978 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 1980 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1982 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1984 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1986 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1988 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1990 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ONE_MINUS_DST_COLOR */

/* 1992 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1994 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1998 */	NdrFcShort( 0x1b ),	/* 27 */
/* 2000 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2002 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2004 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2006 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2008 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2010 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2012 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2014 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 2016 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2018 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2020 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2022 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2024 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2026 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_SRC_ALPHA_SATURATE */

/* 2028 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2030 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2034 */	NdrFcShort( 0x1c ),	/* 28 */
/* 2036 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2038 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2040 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2042 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2044 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2046 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2048 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2050 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 2052 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2054 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2056 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2058 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2060 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2062 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_FUNC_ADD */

/* 2064 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2066 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2070 */	NdrFcShort( 0x1d ),	/* 29 */
/* 2072 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2074 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2076 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2078 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2080 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2082 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2084 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2086 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 2088 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2090 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2092 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2094 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2096 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2098 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_BLEND_EQUATION */

/* 2100 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2102 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2106 */	NdrFcShort( 0x1e ),	/* 30 */
/* 2108 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2110 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2112 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2114 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2116 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2118 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2120 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2122 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 2124 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2126 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2128 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2130 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2132 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2134 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_BLEND_EQUATION_RGB */

/* 2136 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2138 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2142 */	NdrFcShort( 0x1f ),	/* 31 */
/* 2144 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2146 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2148 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2150 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2152 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2154 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2156 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2158 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 2160 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2162 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2164 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2166 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2168 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2170 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_BLEND_EQUATION_ALPHA */

/* 2172 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2174 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2178 */	NdrFcShort( 0x20 ),	/* 32 */
/* 2180 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2182 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2184 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2186 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2188 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2190 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2192 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2194 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 2196 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2198 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2200 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2202 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2204 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2206 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_FUNC_SUBTRACT */

/* 2208 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2210 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2214 */	NdrFcShort( 0x21 ),	/* 33 */
/* 2216 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2218 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2220 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2222 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2224 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2226 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2228 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2230 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 2232 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2234 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2236 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2238 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2240 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2242 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_FUNC_REVERSE_SUBTRACT */

/* 2244 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2246 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2250 */	NdrFcShort( 0x22 ),	/* 34 */
/* 2252 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2254 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2256 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2258 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2260 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2262 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2264 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2266 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 2268 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2270 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2272 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2274 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2276 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2278 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_BLEND_DST_RGB */

/* 2280 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2282 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2286 */	NdrFcShort( 0x23 ),	/* 35 */
/* 2288 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2290 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2292 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2294 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2296 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2298 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2300 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2302 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 2304 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2306 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2308 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2310 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2312 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2314 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_BLEND_SRC_RGB */

/* 2316 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2318 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2322 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2324 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2326 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2328 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2330 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2332 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2334 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2336 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2338 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 2340 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2342 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2344 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2346 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2348 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2350 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_BLEND_DST_ALPHA */

/* 2352 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2354 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2358 */	NdrFcShort( 0x25 ),	/* 37 */
/* 2360 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2362 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2364 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2366 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2368 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2370 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2372 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2374 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 2376 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2378 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2380 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2382 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2384 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2386 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_BLEND_SRC_ALPHA */

/* 2388 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2390 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2394 */	NdrFcShort( 0x26 ),	/* 38 */
/* 2396 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2398 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2400 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2402 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2404 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2406 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2408 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2410 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 2412 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2414 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2416 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2418 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2420 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2422 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_CONSTANT_COLOR */

/* 2424 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2426 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2430 */	NdrFcShort( 0x27 ),	/* 39 */
/* 2432 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2434 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2436 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2438 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2440 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2442 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2444 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2446 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 2448 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2450 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2452 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2454 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2456 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2458 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ONE_MINUS_CONSTANT_COLOR */

/* 2460 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2462 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2466 */	NdrFcShort( 0x28 ),	/* 40 */
/* 2468 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2470 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2472 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2474 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2476 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2478 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2480 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2482 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 2484 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2486 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2488 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2490 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2492 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2494 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_CONSTANT_ALPHA */

/* 2496 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2498 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2502 */	NdrFcShort( 0x29 ),	/* 41 */
/* 2504 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2506 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2508 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2510 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2512 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2514 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2516 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2518 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 2520 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2522 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2524 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2526 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2528 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2530 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ONE_MINUS_CONSTANT_ALPHA */

/* 2532 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2534 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2538 */	NdrFcShort( 0x2a ),	/* 42 */
/* 2540 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2542 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2544 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2546 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2548 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2550 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2552 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2554 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 2556 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2558 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2560 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2562 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2564 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2566 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_BLEND_COLOR */

/* 2568 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2570 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2574 */	NdrFcShort( 0x2b ),	/* 43 */
/* 2576 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2578 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2580 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2582 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2584 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2586 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2588 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2590 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 2592 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2594 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2596 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2598 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2600 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2602 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ARRAY_BUFFER */

/* 2604 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2606 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2610 */	NdrFcShort( 0x2c ),	/* 44 */
/* 2612 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2614 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2616 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2618 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2620 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2622 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2624 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2626 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 2628 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2630 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2632 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2634 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2636 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2638 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ELEMENT_ARRAY_BUFFER */

/* 2640 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2642 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2646 */	NdrFcShort( 0x2d ),	/* 45 */
/* 2648 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2650 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2652 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2654 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2656 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2658 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2660 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2662 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 2664 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2666 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2668 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2670 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2672 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2674 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ARRAY_BUFFER_BINDING */

/* 2676 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2678 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2682 */	NdrFcShort( 0x2e ),	/* 46 */
/* 2684 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2686 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2688 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2690 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2692 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2694 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2696 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2698 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 2700 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2702 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2704 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2706 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2708 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2710 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ELEMENT_ARRAY_BUFFER_BINDING */

/* 2712 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2714 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2718 */	NdrFcShort( 0x2f ),	/* 47 */
/* 2720 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2722 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2724 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2726 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2728 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2730 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2732 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2734 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 2736 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2738 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2740 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2742 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2744 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2746 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_STREAM_DRAW */

/* 2748 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2750 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2754 */	NdrFcShort( 0x30 ),	/* 48 */
/* 2756 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2758 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2760 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2762 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2764 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2766 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2768 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2770 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 2772 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2774 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2776 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2778 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2780 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2782 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_STATIC_DRAW */

/* 2784 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2786 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2790 */	NdrFcShort( 0x31 ),	/* 49 */
/* 2792 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2794 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2796 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2798 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2800 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2802 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2804 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2806 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 2808 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2810 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2812 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2814 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2816 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2818 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_DYNAMIC_DRAW */

/* 2820 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2822 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2826 */	NdrFcShort( 0x32 ),	/* 50 */
/* 2828 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2830 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2832 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2834 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2836 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2838 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2840 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2842 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 2844 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2846 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2848 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2850 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2852 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2854 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_BUFFER_SIZE */

/* 2856 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2858 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2862 */	NdrFcShort( 0x33 ),	/* 51 */
/* 2864 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2866 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2868 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2870 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2872 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2874 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2876 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2878 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 2880 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2882 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2884 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2886 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2888 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2890 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_BUFFER_USAGE */

/* 2892 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2894 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2898 */	NdrFcShort( 0x34 ),	/* 52 */
/* 2900 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2902 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2904 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2906 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2908 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2910 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2912 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2914 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 2916 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2918 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2920 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2922 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2924 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2926 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_CURRENT_VERTEX_ATTRIB */

/* 2928 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2930 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2934 */	NdrFcShort( 0x35 ),	/* 53 */
/* 2936 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2938 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2940 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2942 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2944 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2946 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2948 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2950 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 2952 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2954 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2956 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2958 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2960 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2962 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_FRONT */

/* 2964 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2966 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2970 */	NdrFcShort( 0x36 ),	/* 54 */
/* 2972 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2974 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2976 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2978 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2980 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2982 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2984 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2986 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 2988 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2990 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2992 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2994 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2996 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2998 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_BACK */

/* 3000 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3002 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3006 */	NdrFcShort( 0x37 ),	/* 55 */
/* 3008 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3010 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3012 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3014 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3016 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3018 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3020 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3022 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 3024 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3026 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3028 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3030 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3032 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3034 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_FRONT_AND_BACK */

/* 3036 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3038 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3042 */	NdrFcShort( 0x38 ),	/* 56 */
/* 3044 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3046 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3048 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3050 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3052 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3054 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3056 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3058 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 3060 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3062 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3064 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3066 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3068 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3070 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_CULL_FACE */

/* 3072 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3074 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3078 */	NdrFcShort( 0x39 ),	/* 57 */
/* 3080 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3082 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3084 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3086 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3088 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3090 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3092 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3094 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 3096 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3098 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3100 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3102 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3104 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3106 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_BLEND */

/* 3108 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3110 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3114 */	NdrFcShort( 0x3a ),	/* 58 */
/* 3116 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3118 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3120 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3122 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3124 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3126 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3128 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3130 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 3132 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3134 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3136 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3138 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3140 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3142 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_DITHER */

/* 3144 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3146 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3150 */	NdrFcShort( 0x3b ),	/* 59 */
/* 3152 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3154 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3156 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3158 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3160 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3162 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3164 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3166 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 3168 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3170 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3172 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3174 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3176 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3178 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_STENCIL_TEST */

/* 3180 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3182 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3186 */	NdrFcShort( 0x3c ),	/* 60 */
/* 3188 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3190 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3192 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3194 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3196 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3198 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3200 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3202 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 3204 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3206 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3208 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3210 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3212 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3214 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_DEPTH_TEST */

/* 3216 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3218 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3222 */	NdrFcShort( 0x3d ),	/* 61 */
/* 3224 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3226 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3228 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3230 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3232 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3234 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3236 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3238 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 3240 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3242 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3244 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3246 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3248 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3250 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_SCISSOR_TEST */

/* 3252 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3254 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3258 */	NdrFcShort( 0x3e ),	/* 62 */
/* 3260 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3262 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3264 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3266 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3268 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3270 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3272 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3274 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 3276 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3278 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3280 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3282 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3284 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3286 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_POLYGON_OFFSET_FILL */

/* 3288 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3290 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3294 */	NdrFcShort( 0x3f ),	/* 63 */
/* 3296 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3298 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3300 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3302 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3304 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3306 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3308 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3310 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 3312 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3314 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3316 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3318 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3320 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3322 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_SAMPLE_ALPHA_TO_COVERAGE */

/* 3324 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3326 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3330 */	NdrFcShort( 0x40 ),	/* 64 */
/* 3332 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3334 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3336 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3338 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3340 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3342 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3344 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3346 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 3348 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3350 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3352 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3354 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3356 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3358 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_SAMPLE_COVERAGE */

/* 3360 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3362 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3366 */	NdrFcShort( 0x41 ),	/* 65 */
/* 3368 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3370 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3372 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3374 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3376 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3378 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3380 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3382 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 3384 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3386 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3388 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3390 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3392 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3394 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_NO_ERROR */

/* 3396 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3398 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3402 */	NdrFcShort( 0x42 ),	/* 66 */
/* 3404 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3406 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3408 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3410 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3412 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3414 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3416 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3418 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 3420 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3422 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3424 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3426 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3428 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3430 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_INVALID_ENUM */

/* 3432 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3434 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3438 */	NdrFcShort( 0x43 ),	/* 67 */
/* 3440 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3442 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3444 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3446 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3448 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3450 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3452 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3454 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 3456 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3458 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3460 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3462 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3464 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3466 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_INVALID_VALUE */

/* 3468 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3470 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3474 */	NdrFcShort( 0x44 ),	/* 68 */
/* 3476 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3478 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3480 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3482 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3484 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3486 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3488 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3490 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 3492 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3494 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3496 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3498 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3500 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3502 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_INVALID_OPERATION */

/* 3504 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3506 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3510 */	NdrFcShort( 0x45 ),	/* 69 */
/* 3512 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3514 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3516 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3518 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3520 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3522 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3524 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3526 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 3528 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3530 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3532 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3534 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3536 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3538 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_OUT_OF_MEMORY */

/* 3540 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3542 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3546 */	NdrFcShort( 0x46 ),	/* 70 */
/* 3548 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3550 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3552 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3554 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3556 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3558 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3560 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3562 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 3564 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3566 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3568 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3570 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3572 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3574 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_CW */

/* 3576 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3578 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3582 */	NdrFcShort( 0x47 ),	/* 71 */
/* 3584 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3586 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3588 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3590 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3592 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3594 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3596 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3598 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 3600 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3602 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3604 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3606 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3608 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3610 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_CCW */

/* 3612 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3614 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3618 */	NdrFcShort( 0x48 ),	/* 72 */
/* 3620 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3622 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3624 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3626 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3628 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3630 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3632 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3634 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 3636 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3638 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3640 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3642 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3644 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3646 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_LINE_WIDTH */

/* 3648 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3650 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3654 */	NdrFcShort( 0x49 ),	/* 73 */
/* 3656 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3658 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3660 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3662 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3664 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3666 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3668 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3670 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 3672 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3674 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3676 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3678 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3680 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3682 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ALIASED_POINT_SIZE_RANGE */

/* 3684 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3686 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3690 */	NdrFcShort( 0x4a ),	/* 74 */
/* 3692 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3694 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3696 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3698 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3700 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3702 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3704 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3706 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 3708 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3710 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3712 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3714 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3716 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3718 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ALIASED_LINE_WIDTH_RANGE */

/* 3720 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3722 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3726 */	NdrFcShort( 0x4b ),	/* 75 */
/* 3728 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3730 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3732 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3734 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3736 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3738 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3740 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3742 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 3744 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3746 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3748 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3750 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3752 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3754 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_CULL_FACE_MODE */

/* 3756 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3758 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3762 */	NdrFcShort( 0x4c ),	/* 76 */
/* 3764 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3766 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3768 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3770 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3772 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3774 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3776 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3778 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 3780 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3782 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3784 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3786 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3788 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3790 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_FRONT_FACE */

/* 3792 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3794 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3798 */	NdrFcShort( 0x4d ),	/* 77 */
/* 3800 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3802 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3804 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3806 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3808 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3810 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3812 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3814 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 3816 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3818 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3820 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3822 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3824 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3826 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_DEPTH_RANGE */

/* 3828 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3830 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3834 */	NdrFcShort( 0x4e ),	/* 78 */
/* 3836 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3838 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3840 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3842 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3844 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3846 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3848 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3850 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 3852 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3854 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3856 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3858 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3860 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3862 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_DEPTH_WRITEMASK */

/* 3864 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3866 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3870 */	NdrFcShort( 0x4f ),	/* 79 */
/* 3872 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3874 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3876 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3878 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3880 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3882 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3884 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3886 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 3888 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3890 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3892 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3894 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3896 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3898 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_DEPTH_CLEAR_VALUE */

/* 3900 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3902 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3906 */	NdrFcShort( 0x50 ),	/* 80 */
/* 3908 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3910 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3912 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3914 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3916 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3918 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3920 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3922 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 3924 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3926 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3928 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3930 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3932 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3934 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_DEPTH_FUNC */

/* 3936 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3938 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3942 */	NdrFcShort( 0x51 ),	/* 81 */
/* 3944 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3946 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3948 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3950 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3952 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3954 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3956 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3958 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 3960 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3962 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3964 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3966 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3968 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3970 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_STENCIL_CLEAR_VALUE */

/* 3972 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3974 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3978 */	NdrFcShort( 0x52 ),	/* 82 */
/* 3980 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3982 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3984 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3986 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3988 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3990 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3992 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3994 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 3996 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3998 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4000 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4002 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4004 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4006 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_STENCIL_FUNC */

/* 4008 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4010 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4014 */	NdrFcShort( 0x53 ),	/* 83 */
/* 4016 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4018 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4020 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4022 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4024 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4026 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4028 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4030 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 4032 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4034 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4036 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4038 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4040 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4042 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_STENCIL_FAIL */

/* 4044 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4046 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4050 */	NdrFcShort( 0x54 ),	/* 84 */
/* 4052 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4054 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4056 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4058 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4060 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4062 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4064 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4066 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 4068 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4070 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4072 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4074 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4076 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4078 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_STENCIL_PASS_DEPTH_FAIL */

/* 4080 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4082 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4086 */	NdrFcShort( 0x55 ),	/* 85 */
/* 4088 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4090 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4092 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4094 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4096 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4098 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4100 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4102 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 4104 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4106 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4108 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4110 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4112 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4114 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_STENCIL_PASS_DEPTH_PASS */

/* 4116 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4118 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4122 */	NdrFcShort( 0x56 ),	/* 86 */
/* 4124 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4126 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4128 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4130 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4132 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4134 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4136 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4138 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 4140 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4142 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4144 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4146 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4148 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4150 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_STENCIL_REF */

/* 4152 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4154 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4158 */	NdrFcShort( 0x57 ),	/* 87 */
/* 4160 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4162 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4164 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4166 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4168 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4170 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4172 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4174 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 4176 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4178 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4180 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4182 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4184 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4186 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_STENCIL_VALUE_MASK */

/* 4188 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4190 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4194 */	NdrFcShort( 0x58 ),	/* 88 */
/* 4196 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4198 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4200 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4202 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4204 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4206 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4208 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4210 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 4212 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4214 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4216 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4218 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4220 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4222 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_STENCIL_WRITEMASK */

/* 4224 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4226 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4230 */	NdrFcShort( 0x59 ),	/* 89 */
/* 4232 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4234 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4236 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4238 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4240 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4242 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4244 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4246 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 4248 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4250 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4252 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4254 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4256 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4258 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_STENCIL_BACK_FUNC */

/* 4260 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4262 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4266 */	NdrFcShort( 0x5a ),	/* 90 */
/* 4268 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4270 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4272 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4274 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4276 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4278 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4280 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4282 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 4284 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4286 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4288 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4290 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4292 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4294 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_STENCIL_BACK_FAIL */

/* 4296 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4298 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4302 */	NdrFcShort( 0x5b ),	/* 91 */
/* 4304 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4306 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4308 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4310 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4312 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4314 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4316 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4318 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 4320 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4322 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4324 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4326 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4328 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4330 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_STENCIL_BACK_PASS_DEPTH_FAIL */

/* 4332 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4334 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4338 */	NdrFcShort( 0x5c ),	/* 92 */
/* 4340 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4342 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4344 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4346 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4348 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4350 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4352 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4354 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 4356 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4358 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4360 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4362 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4364 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4366 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_STENCIL_BACK_PASS_DEPTH_PASS */

/* 4368 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4370 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4374 */	NdrFcShort( 0x5d ),	/* 93 */
/* 4376 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4378 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4380 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4382 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4384 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4386 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4388 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4390 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 4392 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4394 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4396 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4398 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4400 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4402 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_STENCIL_BACK_REF */

/* 4404 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4406 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4410 */	NdrFcShort( 0x5e ),	/* 94 */
/* 4412 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4414 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4416 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4418 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4420 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4422 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4424 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4426 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 4428 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4430 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4432 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4434 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4436 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4438 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_STENCIL_BACK_VALUE_MASK */

/* 4440 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4442 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4446 */	NdrFcShort( 0x5f ),	/* 95 */
/* 4448 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4450 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4452 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4454 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4456 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4458 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4460 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4462 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 4464 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4466 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4468 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4470 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4472 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4474 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_STENCIL_BACK_WRITEMASK */

/* 4476 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4478 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4482 */	NdrFcShort( 0x60 ),	/* 96 */
/* 4484 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4486 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4488 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4490 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4492 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4494 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4496 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4498 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 4500 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4502 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4504 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4506 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4508 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4510 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_VIEWPORT */

/* 4512 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4514 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4518 */	NdrFcShort( 0x61 ),	/* 97 */
/* 4520 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4522 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4524 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4526 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4528 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4530 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4532 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4534 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 4536 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4538 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4540 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4542 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4544 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4546 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_SCISSOR_BOX */

/* 4548 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4550 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4554 */	NdrFcShort( 0x62 ),	/* 98 */
/* 4556 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4558 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4560 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4562 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4564 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4566 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4568 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4570 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 4572 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4574 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4576 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4578 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4580 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4582 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_COLOR_CLEAR_VALUE */

/* 4584 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4586 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4590 */	NdrFcShort( 0x63 ),	/* 99 */
/* 4592 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4594 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4596 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4598 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4600 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4602 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4604 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4606 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 4608 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4610 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4612 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4614 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4616 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4618 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_COLOR_WRITEMASK */

/* 4620 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4622 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4626 */	NdrFcShort( 0x64 ),	/* 100 */
/* 4628 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4630 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4632 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4634 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4636 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4638 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4640 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4642 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 4644 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4646 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4648 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4650 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4652 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4654 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_UNPACK_ALIGNMENT */

/* 4656 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4658 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4662 */	NdrFcShort( 0x65 ),	/* 101 */
/* 4664 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4666 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4668 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4670 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4672 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4674 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4676 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4678 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 4680 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4682 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4684 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4686 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4688 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4690 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_PACK_ALIGNMENT */

/* 4692 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4694 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4698 */	NdrFcShort( 0x66 ),	/* 102 */
/* 4700 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4702 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4704 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4706 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4708 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4710 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4712 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4714 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 4716 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4718 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4720 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4722 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4724 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4726 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_MAX_TEXTURE_SIZE */

/* 4728 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4730 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4734 */	NdrFcShort( 0x67 ),	/* 103 */
/* 4736 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4738 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4740 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4742 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4744 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4746 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4748 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4750 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 4752 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4754 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4756 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4758 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4760 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4762 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_MAX_VIEWPORT_DIMS */

/* 4764 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4766 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4770 */	NdrFcShort( 0x68 ),	/* 104 */
/* 4772 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4774 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4776 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4778 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4780 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4782 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4784 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4786 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 4788 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4790 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4792 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4794 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4796 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4798 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_SUBPIXEL_BITS */

/* 4800 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4802 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4806 */	NdrFcShort( 0x69 ),	/* 105 */
/* 4808 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4810 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4812 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4814 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4816 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4818 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4820 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4822 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 4824 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4826 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4828 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4830 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4832 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4834 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_RED_BITS */

/* 4836 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4838 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4842 */	NdrFcShort( 0x6a ),	/* 106 */
/* 4844 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4846 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4848 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4850 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4852 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4854 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4856 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4858 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 4860 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4862 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4864 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4866 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4868 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4870 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_GREEN_BITS */

/* 4872 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4874 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4878 */	NdrFcShort( 0x6b ),	/* 107 */
/* 4880 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4882 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4884 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4886 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4888 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4890 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4892 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4894 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 4896 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4898 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4900 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4902 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4904 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4906 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_BLUE_BITS */

/* 4908 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4910 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4914 */	NdrFcShort( 0x6c ),	/* 108 */
/* 4916 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4918 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4920 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4922 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4924 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4926 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4928 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4930 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 4932 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4934 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4936 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4938 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4940 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4942 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ALPHA_BITS */

/* 4944 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4946 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4950 */	NdrFcShort( 0x6d ),	/* 109 */
/* 4952 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4954 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4956 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4958 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4960 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4962 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4964 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4966 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 4968 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4970 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4972 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4974 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4976 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4978 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_DEPTH_BITS */

/* 4980 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4982 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4986 */	NdrFcShort( 0x6e ),	/* 110 */
/* 4988 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4990 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4992 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4994 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4996 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4998 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5000 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5002 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 5004 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5006 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5008 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 5010 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5012 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5014 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_STENCIL_BITS */

/* 5016 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5018 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5022 */	NdrFcShort( 0x6f ),	/* 111 */
/* 5024 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5026 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5028 */	NdrFcShort( 0x24 ),	/* 36 */
/* 5030 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 5032 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5034 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5036 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5038 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 5040 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5042 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5044 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 5046 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5048 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5050 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_POLYGON_OFFSET_UNITS */

/* 5052 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5054 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5058 */	NdrFcShort( 0x70 ),	/* 112 */
/* 5060 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5062 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5064 */	NdrFcShort( 0x24 ),	/* 36 */
/* 5066 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 5068 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5070 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5072 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5074 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 5076 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5078 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5080 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 5082 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5084 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5086 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_POLYGON_OFFSET_FACTOR */

/* 5088 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5090 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5094 */	NdrFcShort( 0x71 ),	/* 113 */
/* 5096 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5098 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5100 */	NdrFcShort( 0x24 ),	/* 36 */
/* 5102 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 5104 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5106 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5108 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5110 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 5112 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5114 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5116 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 5118 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5120 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5122 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_TEXTURE_BINDING_2D */

/* 5124 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5126 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5130 */	NdrFcShort( 0x72 ),	/* 114 */
/* 5132 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5134 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5136 */	NdrFcShort( 0x24 ),	/* 36 */
/* 5138 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 5140 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5142 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5144 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5146 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 5148 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5150 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5152 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 5154 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5156 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5158 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_SAMPLE_BUFFERS */

/* 5160 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5162 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5166 */	NdrFcShort( 0x73 ),	/* 115 */
/* 5168 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5170 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5172 */	NdrFcShort( 0x24 ),	/* 36 */
/* 5174 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 5176 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5178 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5180 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5182 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 5184 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5186 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5188 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 5190 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5192 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5194 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_SAMPLES */

/* 5196 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5198 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5202 */	NdrFcShort( 0x74 ),	/* 116 */
/* 5204 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5206 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5208 */	NdrFcShort( 0x24 ),	/* 36 */
/* 5210 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 5212 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5214 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5216 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5218 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 5220 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5222 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5224 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 5226 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5228 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5230 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_SAMPLE_COVERAGE_VALUE */

/* 5232 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5234 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5238 */	NdrFcShort( 0x75 ),	/* 117 */
/* 5240 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5242 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5244 */	NdrFcShort( 0x24 ),	/* 36 */
/* 5246 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 5248 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5250 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5252 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5254 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 5256 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5258 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5260 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 5262 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5264 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5266 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_SAMPLE_COVERAGE_INVERT */

/* 5268 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5270 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5274 */	NdrFcShort( 0x76 ),	/* 118 */
/* 5276 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5278 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5280 */	NdrFcShort( 0x24 ),	/* 36 */
/* 5282 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 5284 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5286 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5288 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5290 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 5292 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5294 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5296 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 5298 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5300 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5302 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_COMPRESSED_TEXTURE_FORMATS */

/* 5304 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5306 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5310 */	NdrFcShort( 0x77 ),	/* 119 */
/* 5312 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5314 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5316 */	NdrFcShort( 0x24 ),	/* 36 */
/* 5318 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 5320 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5322 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5324 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5326 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 5328 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5330 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5332 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 5334 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5336 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5338 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_DONT_CARE */

/* 5340 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5342 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5346 */	NdrFcShort( 0x78 ),	/* 120 */
/* 5348 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5350 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5352 */	NdrFcShort( 0x24 ),	/* 36 */
/* 5354 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 5356 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5358 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5360 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5362 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 5364 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5366 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5368 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 5370 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5372 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5374 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_FASTEST */

/* 5376 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5378 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5382 */	NdrFcShort( 0x79 ),	/* 121 */
/* 5384 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5386 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5388 */	NdrFcShort( 0x24 ),	/* 36 */
/* 5390 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 5392 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5394 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5396 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5398 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 5400 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5402 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5404 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 5406 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5408 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5410 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_NICEST */

/* 5412 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5414 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5418 */	NdrFcShort( 0x7a ),	/* 122 */
/* 5420 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5422 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5424 */	NdrFcShort( 0x24 ),	/* 36 */
/* 5426 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 5428 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5430 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5432 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5434 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 5436 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5438 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5440 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 5442 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5444 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5446 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_GENERATE_MIPMAP_HINT */

/* 5448 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5450 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5454 */	NdrFcShort( 0x7b ),	/* 123 */
/* 5456 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5458 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5460 */	NdrFcShort( 0x24 ),	/* 36 */
/* 5462 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 5464 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5466 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5468 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5470 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 5472 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5474 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5476 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 5478 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5480 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5482 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_BYTE */

/* 5484 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5486 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5490 */	NdrFcShort( 0x7c ),	/* 124 */
/* 5492 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5494 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5496 */	NdrFcShort( 0x24 ),	/* 36 */
/* 5498 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 5500 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5502 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5504 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5506 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 5508 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5510 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5512 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 5514 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5516 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5518 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_UNSIGNED_BYTE */

/* 5520 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5522 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5526 */	NdrFcShort( 0x7d ),	/* 125 */
/* 5528 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5530 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5532 */	NdrFcShort( 0x24 ),	/* 36 */
/* 5534 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 5536 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5538 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5540 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5542 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 5544 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5546 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5548 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 5550 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5552 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5554 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_SHORT */

/* 5556 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5558 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5562 */	NdrFcShort( 0x7e ),	/* 126 */
/* 5564 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5566 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5568 */	NdrFcShort( 0x24 ),	/* 36 */
/* 5570 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 5572 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5574 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5576 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5578 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 5580 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5582 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5584 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 5586 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5588 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5590 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_UNSIGNED_SHORT */

/* 5592 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5594 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5598 */	NdrFcShort( 0x7f ),	/* 127 */
/* 5600 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5602 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5604 */	NdrFcShort( 0x24 ),	/* 36 */
/* 5606 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 5608 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5610 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5612 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5614 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 5616 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5618 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5620 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 5622 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5624 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5626 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_INT */

/* 5628 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5630 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5634 */	NdrFcShort( 0x80 ),	/* 128 */
/* 5636 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5638 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5640 */	NdrFcShort( 0x24 ),	/* 36 */
/* 5642 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 5644 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5646 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5648 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5650 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 5652 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5654 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5656 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 5658 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5660 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5662 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_UNSIGNED_INT */

/* 5664 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5666 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5670 */	NdrFcShort( 0x81 ),	/* 129 */
/* 5672 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5674 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5676 */	NdrFcShort( 0x24 ),	/* 36 */
/* 5678 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 5680 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5682 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5684 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5686 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 5688 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5690 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5692 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 5694 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5696 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5698 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_FLOAT */

/* 5700 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5702 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5706 */	NdrFcShort( 0x82 ),	/* 130 */
/* 5708 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5710 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5712 */	NdrFcShort( 0x24 ),	/* 36 */
/* 5714 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 5716 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5718 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5720 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5722 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 5724 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5726 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5728 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 5730 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5732 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5734 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_DEPTH_COMPONENT */

/* 5736 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5738 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5742 */	NdrFcShort( 0x83 ),	/* 131 */
/* 5744 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5746 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5748 */	NdrFcShort( 0x24 ),	/* 36 */
/* 5750 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 5752 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5754 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5756 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5758 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 5760 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5762 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5764 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 5766 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5768 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5770 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ALPHA */

/* 5772 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5774 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5778 */	NdrFcShort( 0x84 ),	/* 132 */
/* 5780 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5782 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5784 */	NdrFcShort( 0x24 ),	/* 36 */
/* 5786 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 5788 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5790 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5792 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5794 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 5796 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5798 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5800 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 5802 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5804 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5806 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_RGB */

/* 5808 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5810 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5814 */	NdrFcShort( 0x85 ),	/* 133 */
/* 5816 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5818 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5820 */	NdrFcShort( 0x24 ),	/* 36 */
/* 5822 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 5824 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5826 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5828 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5830 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 5832 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5834 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5836 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 5838 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5840 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5842 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_RGBA */

/* 5844 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5846 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5850 */	NdrFcShort( 0x86 ),	/* 134 */
/* 5852 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5854 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5856 */	NdrFcShort( 0x24 ),	/* 36 */
/* 5858 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 5860 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5862 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5864 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5866 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 5868 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5870 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5872 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 5874 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5876 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5878 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_LUMINANCE */

/* 5880 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5882 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5886 */	NdrFcShort( 0x87 ),	/* 135 */
/* 5888 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5890 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5892 */	NdrFcShort( 0x24 ),	/* 36 */
/* 5894 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 5896 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5898 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5900 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5902 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 5904 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5906 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5908 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 5910 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5912 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5914 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_LUMINANCE_ALPHA */

/* 5916 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5918 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5922 */	NdrFcShort( 0x88 ),	/* 136 */
/* 5924 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5926 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5928 */	NdrFcShort( 0x24 ),	/* 36 */
/* 5930 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 5932 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5934 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5936 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5938 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 5940 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5942 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5944 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 5946 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5948 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5950 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_UNSIGNED_SHORT_4_4_4_4 */

/* 5952 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5954 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5958 */	NdrFcShort( 0x89 ),	/* 137 */
/* 5960 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5962 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5964 */	NdrFcShort( 0x24 ),	/* 36 */
/* 5966 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 5968 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5970 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5972 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5974 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 5976 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5978 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5980 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 5982 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5984 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5986 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_UNSIGNED_SHORT_5_5_5_1 */

/* 5988 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5990 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5994 */	NdrFcShort( 0x8a ),	/* 138 */
/* 5996 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5998 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6000 */	NdrFcShort( 0x24 ),	/* 36 */
/* 6002 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 6004 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6006 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6008 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6010 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 6012 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6014 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6016 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 6018 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6020 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6022 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_UNSIGNED_SHORT_5_6_5 */

/* 6024 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6026 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6030 */	NdrFcShort( 0x8b ),	/* 139 */
/* 6032 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6034 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6036 */	NdrFcShort( 0x24 ),	/* 36 */
/* 6038 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 6040 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6042 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6044 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6046 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 6048 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6050 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6052 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 6054 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6056 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6058 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_FRAGMENT_SHADER */

/* 6060 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6062 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6066 */	NdrFcShort( 0x8c ),	/* 140 */
/* 6068 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6070 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6072 */	NdrFcShort( 0x24 ),	/* 36 */
/* 6074 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 6076 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6078 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6080 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6082 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 6084 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6086 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6088 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 6090 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6092 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6094 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_VERTEX_SHADER */

/* 6096 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6098 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6102 */	NdrFcShort( 0x8d ),	/* 141 */
/* 6104 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6106 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6108 */	NdrFcShort( 0x24 ),	/* 36 */
/* 6110 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 6112 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6114 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6116 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6118 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 6120 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6122 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6124 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 6126 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6128 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6130 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_MAX_VERTEX_ATTRIBS */

/* 6132 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6134 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6138 */	NdrFcShort( 0x8e ),	/* 142 */
/* 6140 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6142 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6144 */	NdrFcShort( 0x24 ),	/* 36 */
/* 6146 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 6148 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6150 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6152 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6154 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 6156 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6158 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6160 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 6162 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6164 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6166 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_MAX_VERTEX_UNIFORM_VECTORS */

/* 6168 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6170 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6174 */	NdrFcShort( 0x8f ),	/* 143 */
/* 6176 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6178 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6180 */	NdrFcShort( 0x24 ),	/* 36 */
/* 6182 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 6184 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6186 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6188 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6190 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 6192 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6194 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6196 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 6198 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6200 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6202 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_MAX_VARYING_VECTORS */

/* 6204 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6206 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6210 */	NdrFcShort( 0x90 ),	/* 144 */
/* 6212 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6214 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6216 */	NdrFcShort( 0x24 ),	/* 36 */
/* 6218 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 6220 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6222 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6224 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6226 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 6228 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6230 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6232 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 6234 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6236 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6238 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_MAX_COMBINED_TEXTURE_IMAGE_UNITS */

/* 6240 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6242 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6246 */	NdrFcShort( 0x91 ),	/* 145 */
/* 6248 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6250 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6252 */	NdrFcShort( 0x24 ),	/* 36 */
/* 6254 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 6256 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6258 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6260 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6262 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 6264 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6266 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6268 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 6270 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6272 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6274 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_MAX_VERTEX_TEXTURE_IMAGE_UNITS */

/* 6276 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6278 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6282 */	NdrFcShort( 0x92 ),	/* 146 */
/* 6284 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6286 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6288 */	NdrFcShort( 0x24 ),	/* 36 */
/* 6290 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 6292 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6294 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6296 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6298 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 6300 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6302 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6304 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 6306 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6308 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6310 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_MAX_TEXTURE_IMAGE_UNITS */

/* 6312 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6314 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6318 */	NdrFcShort( 0x93 ),	/* 147 */
/* 6320 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6322 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6324 */	NdrFcShort( 0x24 ),	/* 36 */
/* 6326 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 6328 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6330 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6332 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6334 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 6336 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6338 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6340 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 6342 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6344 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6346 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_MAX_FRAGMENT_UNIFORM_VECTORS */

/* 6348 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6350 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6354 */	NdrFcShort( 0x94 ),	/* 148 */
/* 6356 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6358 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6360 */	NdrFcShort( 0x24 ),	/* 36 */
/* 6362 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 6364 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6366 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6368 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6370 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 6372 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6374 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6376 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 6378 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6380 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6382 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_SHADER_TYPE */

/* 6384 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6386 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6390 */	NdrFcShort( 0x95 ),	/* 149 */
/* 6392 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6394 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6396 */	NdrFcShort( 0x24 ),	/* 36 */
/* 6398 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 6400 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6402 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6404 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6406 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 6408 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6410 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6412 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 6414 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6416 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6418 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_DELETE_STATUS */

/* 6420 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6422 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6426 */	NdrFcShort( 0x96 ),	/* 150 */
/* 6428 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6430 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6432 */	NdrFcShort( 0x24 ),	/* 36 */
/* 6434 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 6436 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6438 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6440 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6442 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 6444 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6446 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6448 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 6450 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6452 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6454 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_LINK_STATUS */

/* 6456 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6458 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6462 */	NdrFcShort( 0x97 ),	/* 151 */
/* 6464 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6466 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6468 */	NdrFcShort( 0x24 ),	/* 36 */
/* 6470 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 6472 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6474 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6476 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6478 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 6480 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6482 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6484 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 6486 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6488 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6490 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_VALIDATE_STATUS */

/* 6492 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6494 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6498 */	NdrFcShort( 0x98 ),	/* 152 */
/* 6500 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6502 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6504 */	NdrFcShort( 0x24 ),	/* 36 */
/* 6506 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 6508 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6510 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6512 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6514 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 6516 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6518 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6520 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 6522 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6524 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6526 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ATTACHED_SHADERS */

/* 6528 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6530 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6534 */	NdrFcShort( 0x99 ),	/* 153 */
/* 6536 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6538 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6540 */	NdrFcShort( 0x24 ),	/* 36 */
/* 6542 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 6544 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6546 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6548 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6550 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 6552 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6554 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6556 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 6558 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6560 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6562 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ACTIVE_UNIFORMS */

/* 6564 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6566 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6570 */	NdrFcShort( 0x9a ),	/* 154 */
/* 6572 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6574 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6576 */	NdrFcShort( 0x24 ),	/* 36 */
/* 6578 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 6580 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6582 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6584 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6586 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 6588 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6590 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6592 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 6594 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6596 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6598 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ACTIVE_ATTRIBUTES */

/* 6600 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6602 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6606 */	NdrFcShort( 0x9b ),	/* 155 */
/* 6608 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6610 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6612 */	NdrFcShort( 0x24 ),	/* 36 */
/* 6614 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 6616 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6618 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6620 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6622 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 6624 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6626 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6628 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 6630 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6632 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6634 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_SHADING_LANGUAGE_VERSION */

/* 6636 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6638 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6642 */	NdrFcShort( 0x9c ),	/* 156 */
/* 6644 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6646 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6648 */	NdrFcShort( 0x24 ),	/* 36 */
/* 6650 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 6652 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6654 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6656 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6658 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 6660 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6662 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6664 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 6666 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6668 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6670 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_CURRENT_PROGRAM */

/* 6672 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6674 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6678 */	NdrFcShort( 0x9d ),	/* 157 */
/* 6680 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6682 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6684 */	NdrFcShort( 0x24 ),	/* 36 */
/* 6686 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 6688 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6690 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6692 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6694 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 6696 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6698 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6700 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 6702 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6704 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6706 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_NEVER */

/* 6708 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6710 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6714 */	NdrFcShort( 0x9e ),	/* 158 */
/* 6716 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6718 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6720 */	NdrFcShort( 0x24 ),	/* 36 */
/* 6722 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 6724 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6726 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6728 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6730 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 6732 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6734 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6736 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 6738 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6740 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6742 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_LESS */

/* 6744 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6746 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6750 */	NdrFcShort( 0x9f ),	/* 159 */
/* 6752 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6754 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6756 */	NdrFcShort( 0x24 ),	/* 36 */
/* 6758 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 6760 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6762 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6764 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6766 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 6768 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6770 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6772 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 6774 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6776 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6778 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_EQUAL */

/* 6780 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6782 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6786 */	NdrFcShort( 0xa0 ),	/* 160 */
/* 6788 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6790 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6792 */	NdrFcShort( 0x24 ),	/* 36 */
/* 6794 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 6796 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6798 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6800 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6802 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 6804 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6806 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6808 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 6810 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6812 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6814 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_LEQUAL */

/* 6816 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6818 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6822 */	NdrFcShort( 0xa1 ),	/* 161 */
/* 6824 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6826 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6828 */	NdrFcShort( 0x24 ),	/* 36 */
/* 6830 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 6832 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6834 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6836 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6838 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 6840 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6842 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6844 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 6846 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6848 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6850 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_GREATER */

/* 6852 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6854 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6858 */	NdrFcShort( 0xa2 ),	/* 162 */
/* 6860 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6862 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6864 */	NdrFcShort( 0x24 ),	/* 36 */
/* 6866 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 6868 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6870 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6872 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6874 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 6876 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6878 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6880 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 6882 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6884 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6886 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_NOTEQUAL */

/* 6888 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6890 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6894 */	NdrFcShort( 0xa3 ),	/* 163 */
/* 6896 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6898 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6900 */	NdrFcShort( 0x24 ),	/* 36 */
/* 6902 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 6904 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6906 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6908 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6910 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 6912 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6914 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6916 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 6918 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6920 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6922 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_GEQUAL */

/* 6924 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6926 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6930 */	NdrFcShort( 0xa4 ),	/* 164 */
/* 6932 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6934 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6936 */	NdrFcShort( 0x24 ),	/* 36 */
/* 6938 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 6940 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6942 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6944 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6946 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 6948 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6950 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6952 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 6954 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6956 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6958 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ALWAYS */

/* 6960 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6962 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6966 */	NdrFcShort( 0xa5 ),	/* 165 */
/* 6968 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6970 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6972 */	NdrFcShort( 0x24 ),	/* 36 */
/* 6974 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 6976 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6978 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6980 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6982 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 6984 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6986 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6988 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 6990 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6992 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6994 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_KEEP */

/* 6996 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6998 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7002 */	NdrFcShort( 0xa6 ),	/* 166 */
/* 7004 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7006 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7008 */	NdrFcShort( 0x24 ),	/* 36 */
/* 7010 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 7012 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7014 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7016 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7018 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 7020 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7022 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7024 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 7026 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7028 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7030 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_REPLACE */

/* 7032 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7034 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7038 */	NdrFcShort( 0xa7 ),	/* 167 */
/* 7040 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7042 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7044 */	NdrFcShort( 0x24 ),	/* 36 */
/* 7046 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 7048 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7050 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7052 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7054 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 7056 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7058 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7060 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 7062 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7064 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7066 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_INCR */

/* 7068 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7070 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7074 */	NdrFcShort( 0xa8 ),	/* 168 */
/* 7076 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7078 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7080 */	NdrFcShort( 0x24 ),	/* 36 */
/* 7082 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 7084 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7086 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7088 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7090 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 7092 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7094 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7096 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 7098 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7100 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7102 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_DECR */

/* 7104 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7106 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7110 */	NdrFcShort( 0xa9 ),	/* 169 */
/* 7112 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7114 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7116 */	NdrFcShort( 0x24 ),	/* 36 */
/* 7118 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 7120 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7122 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7124 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7126 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 7128 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7130 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7132 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 7134 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7136 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7138 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_INVERT */

/* 7140 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7142 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7146 */	NdrFcShort( 0xaa ),	/* 170 */
/* 7148 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7150 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7152 */	NdrFcShort( 0x24 ),	/* 36 */
/* 7154 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 7156 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7158 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7160 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7162 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 7164 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7166 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7168 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 7170 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7172 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7174 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_INCR_WRAP */

/* 7176 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7178 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7182 */	NdrFcShort( 0xab ),	/* 171 */
/* 7184 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7186 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7188 */	NdrFcShort( 0x24 ),	/* 36 */
/* 7190 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 7192 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7194 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7196 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7198 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 7200 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7202 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7204 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 7206 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7208 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7210 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_DECR_WRAP */

/* 7212 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7214 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7218 */	NdrFcShort( 0xac ),	/* 172 */
/* 7220 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7222 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7224 */	NdrFcShort( 0x24 ),	/* 36 */
/* 7226 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 7228 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7230 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7232 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7234 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 7236 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7238 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7240 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 7242 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7244 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7246 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_VENDOR */

/* 7248 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7250 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7254 */	NdrFcShort( 0xad ),	/* 173 */
/* 7256 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7258 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7260 */	NdrFcShort( 0x24 ),	/* 36 */
/* 7262 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 7264 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7266 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7268 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7270 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 7272 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7274 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7276 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 7278 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7280 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7282 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_RENDERER */

/* 7284 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7286 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7290 */	NdrFcShort( 0xae ),	/* 174 */
/* 7292 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7294 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7296 */	NdrFcShort( 0x24 ),	/* 36 */
/* 7298 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 7300 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7302 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7304 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7306 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 7308 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7310 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7312 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 7314 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7316 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7318 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_VERSION */

/* 7320 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7322 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7326 */	NdrFcShort( 0xaf ),	/* 175 */
/* 7328 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7330 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7332 */	NdrFcShort( 0x24 ),	/* 36 */
/* 7334 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 7336 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7338 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7340 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7342 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 7344 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7346 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7348 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 7350 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7352 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7354 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_NEAREST */

/* 7356 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7358 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7362 */	NdrFcShort( 0xb0 ),	/* 176 */
/* 7364 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7366 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7368 */	NdrFcShort( 0x24 ),	/* 36 */
/* 7370 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 7372 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7374 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7376 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7378 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 7380 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7382 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7384 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 7386 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7388 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7390 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_LINEAR */

/* 7392 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7394 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7398 */	NdrFcShort( 0xb1 ),	/* 177 */
/* 7400 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7402 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7404 */	NdrFcShort( 0x24 ),	/* 36 */
/* 7406 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 7408 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7410 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7412 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7414 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 7416 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7418 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7420 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 7422 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7424 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7426 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_NEAREST_MIPMAP_NEAREST */

/* 7428 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7430 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7434 */	NdrFcShort( 0xb2 ),	/* 178 */
/* 7436 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7438 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7440 */	NdrFcShort( 0x24 ),	/* 36 */
/* 7442 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 7444 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7446 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7448 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7450 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 7452 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7454 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7456 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 7458 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7460 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7462 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_LINEAR_MIPMAP_NEAREST */

/* 7464 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7466 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7470 */	NdrFcShort( 0xb3 ),	/* 179 */
/* 7472 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7474 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7476 */	NdrFcShort( 0x24 ),	/* 36 */
/* 7478 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 7480 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7482 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7484 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7486 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 7488 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7490 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7492 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 7494 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7496 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7498 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_NEAREST_MIPMAP_LINEAR */

/* 7500 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7502 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7506 */	NdrFcShort( 0xb4 ),	/* 180 */
/* 7508 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7510 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7512 */	NdrFcShort( 0x24 ),	/* 36 */
/* 7514 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 7516 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7518 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7520 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7522 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 7524 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7526 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7528 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 7530 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7532 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7534 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_LINEAR_MIPMAP_LINEAR */

/* 7536 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7538 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7542 */	NdrFcShort( 0xb5 ),	/* 181 */
/* 7544 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7546 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7548 */	NdrFcShort( 0x24 ),	/* 36 */
/* 7550 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 7552 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7554 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7556 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7558 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 7560 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7562 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7564 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 7566 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7568 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7570 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_TEXTURE_MAG_FILTER */

/* 7572 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7574 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7578 */	NdrFcShort( 0xb6 ),	/* 182 */
/* 7580 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7582 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7584 */	NdrFcShort( 0x24 ),	/* 36 */
/* 7586 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 7588 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7590 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7592 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7594 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 7596 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7598 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7600 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 7602 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7604 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7606 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_TEXTURE_MIN_FILTER */

/* 7608 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7610 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7614 */	NdrFcShort( 0xb7 ),	/* 183 */
/* 7616 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7618 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7620 */	NdrFcShort( 0x24 ),	/* 36 */
/* 7622 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 7624 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7626 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7628 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7630 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 7632 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7634 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7636 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 7638 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7640 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7642 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_TEXTURE_WRAP_S */

/* 7644 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7646 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7650 */	NdrFcShort( 0xb8 ),	/* 184 */
/* 7652 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7654 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7656 */	NdrFcShort( 0x24 ),	/* 36 */
/* 7658 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 7660 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7662 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7664 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7666 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 7668 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7670 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7672 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 7674 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7676 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7678 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_TEXTURE_WRAP_T */

/* 7680 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7682 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7686 */	NdrFcShort( 0xb9 ),	/* 185 */
/* 7688 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7690 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7692 */	NdrFcShort( 0x24 ),	/* 36 */
/* 7694 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 7696 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7698 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7700 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7702 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 7704 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7706 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7708 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 7710 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7712 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7714 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_TEXTURE_2D */

/* 7716 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7718 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7722 */	NdrFcShort( 0xba ),	/* 186 */
/* 7724 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7726 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7728 */	NdrFcShort( 0x24 ),	/* 36 */
/* 7730 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 7732 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7734 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7736 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7738 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 7740 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7742 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7744 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 7746 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7748 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7750 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_TEXTURE */

/* 7752 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7754 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7758 */	NdrFcShort( 0xbb ),	/* 187 */
/* 7760 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7762 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7764 */	NdrFcShort( 0x24 ),	/* 36 */
/* 7766 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 7768 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7770 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7772 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7774 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 7776 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7778 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7780 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 7782 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7784 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7786 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_TEXTURE_CUBE_MAP */

/* 7788 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7790 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7794 */	NdrFcShort( 0xbc ),	/* 188 */
/* 7796 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7798 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7800 */	NdrFcShort( 0x24 ),	/* 36 */
/* 7802 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 7804 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7806 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7808 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7810 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 7812 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7814 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7816 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 7818 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7820 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7822 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_TEXTURE_BINDING_CUBE_MAP */

/* 7824 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7826 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7830 */	NdrFcShort( 0xbd ),	/* 189 */
/* 7832 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7834 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7836 */	NdrFcShort( 0x24 ),	/* 36 */
/* 7838 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 7840 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7842 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7844 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7846 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 7848 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7850 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7852 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 7854 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7856 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7858 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_TEXTURE_CUBE_MAP_POSITIVE_X */

/* 7860 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7862 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7866 */	NdrFcShort( 0xbe ),	/* 190 */
/* 7868 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7870 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7872 */	NdrFcShort( 0x24 ),	/* 36 */
/* 7874 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 7876 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7878 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7880 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7882 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 7884 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7886 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7888 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 7890 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7892 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7894 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_TEXTURE_CUBE_MAP_NEGATIVE_X */

/* 7896 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7898 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7902 */	NdrFcShort( 0xbf ),	/* 191 */
/* 7904 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7906 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7908 */	NdrFcShort( 0x24 ),	/* 36 */
/* 7910 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 7912 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7914 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7916 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7918 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 7920 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7922 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7924 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 7926 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7928 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7930 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_TEXTURE_CUBE_MAP_POSITIVE_Y */

/* 7932 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7934 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7938 */	NdrFcShort( 0xc0 ),	/* 192 */
/* 7940 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7942 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7944 */	NdrFcShort( 0x24 ),	/* 36 */
/* 7946 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 7948 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7950 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7952 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7954 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 7956 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7958 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7960 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 7962 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7964 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7966 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_TEXTURE_CUBE_MAP_NEGATIVE_Y */

/* 7968 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7970 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7974 */	NdrFcShort( 0xc1 ),	/* 193 */
/* 7976 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7978 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7980 */	NdrFcShort( 0x24 ),	/* 36 */
/* 7982 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 7984 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7986 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7988 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7990 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 7992 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7994 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7996 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 7998 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8000 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8002 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_TEXTURE_CUBE_MAP_POSITIVE_Z */

/* 8004 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8006 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8010 */	NdrFcShort( 0xc2 ),	/* 194 */
/* 8012 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8014 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8016 */	NdrFcShort( 0x24 ),	/* 36 */
/* 8018 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 8020 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8022 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8024 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8026 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 8028 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8030 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8032 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 8034 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8036 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8038 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_TEXTURE_CUBE_MAP_NEGATIVE_Z */

/* 8040 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8042 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8046 */	NdrFcShort( 0xc3 ),	/* 195 */
/* 8048 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8050 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8052 */	NdrFcShort( 0x24 ),	/* 36 */
/* 8054 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 8056 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8058 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8060 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8062 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 8064 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8066 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8068 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 8070 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8072 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8074 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_MAX_CUBE_MAP_TEXTURE_SIZE */

/* 8076 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8078 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8082 */	NdrFcShort( 0xc4 ),	/* 196 */
/* 8084 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8086 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8088 */	NdrFcShort( 0x24 ),	/* 36 */
/* 8090 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 8092 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8094 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8096 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8098 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 8100 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8102 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8104 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 8106 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8108 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8110 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_TEXTURE0 */

/* 8112 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8114 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8118 */	NdrFcShort( 0xc5 ),	/* 197 */
/* 8120 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8122 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8124 */	NdrFcShort( 0x24 ),	/* 36 */
/* 8126 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 8128 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8130 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8132 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8134 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 8136 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8138 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8140 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 8142 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8144 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8146 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_TEXTURE1 */

/* 8148 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8150 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8154 */	NdrFcShort( 0xc6 ),	/* 198 */
/* 8156 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8158 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8160 */	NdrFcShort( 0x24 ),	/* 36 */
/* 8162 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 8164 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8166 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8168 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8170 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 8172 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8174 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8176 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 8178 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8180 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8182 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_TEXTURE2 */

/* 8184 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8186 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8190 */	NdrFcShort( 0xc7 ),	/* 199 */
/* 8192 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8194 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8196 */	NdrFcShort( 0x24 ),	/* 36 */
/* 8198 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 8200 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8202 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8204 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8206 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 8208 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8210 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8212 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 8214 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8216 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8218 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_TEXTURE3 */

/* 8220 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8222 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8226 */	NdrFcShort( 0xc8 ),	/* 200 */
/* 8228 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8230 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8232 */	NdrFcShort( 0x24 ),	/* 36 */
/* 8234 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 8236 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8238 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8240 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8242 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 8244 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8246 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8248 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 8250 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8252 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8254 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_TEXTURE4 */

/* 8256 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8258 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8262 */	NdrFcShort( 0xc9 ),	/* 201 */
/* 8264 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8266 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8268 */	NdrFcShort( 0x24 ),	/* 36 */
/* 8270 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 8272 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8274 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8276 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8278 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 8280 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8282 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8284 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 8286 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8288 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8290 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_TEXTURE5 */

/* 8292 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8294 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8298 */	NdrFcShort( 0xca ),	/* 202 */
/* 8300 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8302 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8304 */	NdrFcShort( 0x24 ),	/* 36 */
/* 8306 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 8308 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8310 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8312 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8314 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 8316 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8318 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8320 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 8322 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8324 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8326 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_TEXTURE6 */

/* 8328 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8330 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8334 */	NdrFcShort( 0xcb ),	/* 203 */
/* 8336 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8338 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8340 */	NdrFcShort( 0x24 ),	/* 36 */
/* 8342 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 8344 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8346 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8348 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8350 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 8352 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8354 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8356 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 8358 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8360 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8362 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_TEXTURE7 */

/* 8364 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8366 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8370 */	NdrFcShort( 0xcc ),	/* 204 */
/* 8372 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8374 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8376 */	NdrFcShort( 0x24 ),	/* 36 */
/* 8378 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 8380 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8382 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8384 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8386 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 8388 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8390 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8392 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 8394 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8396 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8398 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_TEXTURE8 */

/* 8400 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8402 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8406 */	NdrFcShort( 0xcd ),	/* 205 */
/* 8408 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8410 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8412 */	NdrFcShort( 0x24 ),	/* 36 */
/* 8414 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 8416 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8418 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8420 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8422 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 8424 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8426 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8428 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 8430 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8432 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8434 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_TEXTURE9 */

/* 8436 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8438 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8442 */	NdrFcShort( 0xce ),	/* 206 */
/* 8444 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8446 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8448 */	NdrFcShort( 0x24 ),	/* 36 */
/* 8450 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 8452 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8454 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8456 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8458 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 8460 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8462 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8464 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 8466 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8468 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8470 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_TEXTURE10 */

/* 8472 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8474 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8478 */	NdrFcShort( 0xcf ),	/* 207 */
/* 8480 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8482 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8484 */	NdrFcShort( 0x24 ),	/* 36 */
/* 8486 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 8488 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8490 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8492 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8494 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 8496 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8498 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8500 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 8502 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8504 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8506 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_TEXTURE11 */

/* 8508 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8510 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8514 */	NdrFcShort( 0xd0 ),	/* 208 */
/* 8516 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8518 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8520 */	NdrFcShort( 0x24 ),	/* 36 */
/* 8522 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 8524 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8526 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8528 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8530 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 8532 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8534 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8536 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 8538 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8540 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8542 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_TEXTURE12 */

/* 8544 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8546 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8550 */	NdrFcShort( 0xd1 ),	/* 209 */
/* 8552 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8554 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8556 */	NdrFcShort( 0x24 ),	/* 36 */
/* 8558 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 8560 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8562 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8564 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8566 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 8568 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8570 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8572 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 8574 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8576 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8578 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_TEXTURE13 */

/* 8580 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8582 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8586 */	NdrFcShort( 0xd2 ),	/* 210 */
/* 8588 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8590 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8592 */	NdrFcShort( 0x24 ),	/* 36 */
/* 8594 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 8596 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8598 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8600 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8602 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 8604 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8606 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8608 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 8610 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8612 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8614 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_TEXTURE14 */

/* 8616 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8618 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8622 */	NdrFcShort( 0xd3 ),	/* 211 */
/* 8624 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8626 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8628 */	NdrFcShort( 0x24 ),	/* 36 */
/* 8630 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 8632 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8634 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8636 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8638 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 8640 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8642 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8644 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 8646 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8648 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8650 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_TEXTURE15 */

/* 8652 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8654 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8658 */	NdrFcShort( 0xd4 ),	/* 212 */
/* 8660 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8662 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8664 */	NdrFcShort( 0x24 ),	/* 36 */
/* 8666 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 8668 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8670 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8672 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8674 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 8676 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8678 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8680 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 8682 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8684 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8686 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_TEXTURE16 */

/* 8688 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8690 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8694 */	NdrFcShort( 0xd5 ),	/* 213 */
/* 8696 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8698 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8700 */	NdrFcShort( 0x24 ),	/* 36 */
/* 8702 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 8704 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8706 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8708 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8710 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 8712 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8714 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8716 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 8718 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8720 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8722 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_TEXTURE17 */

/* 8724 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8726 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8730 */	NdrFcShort( 0xd6 ),	/* 214 */
/* 8732 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8734 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8736 */	NdrFcShort( 0x24 ),	/* 36 */
/* 8738 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 8740 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8742 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8744 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8746 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 8748 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8750 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8752 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 8754 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8756 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8758 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_TEXTURE18 */

/* 8760 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8762 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8766 */	NdrFcShort( 0xd7 ),	/* 215 */
/* 8768 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8770 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8772 */	NdrFcShort( 0x24 ),	/* 36 */
/* 8774 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 8776 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8778 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8780 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8782 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 8784 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8786 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8788 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 8790 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8792 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8794 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_TEXTURE19 */

/* 8796 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8798 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8802 */	NdrFcShort( 0xd8 ),	/* 216 */
/* 8804 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8806 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8808 */	NdrFcShort( 0x24 ),	/* 36 */
/* 8810 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 8812 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8814 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8816 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8818 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 8820 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8822 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8824 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 8826 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8828 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8830 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_TEXTURE20 */

/* 8832 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8834 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8838 */	NdrFcShort( 0xd9 ),	/* 217 */
/* 8840 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8842 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8844 */	NdrFcShort( 0x24 ),	/* 36 */
/* 8846 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 8848 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8850 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8852 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8854 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 8856 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8858 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8860 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 8862 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8864 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8866 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_TEXTURE21 */

/* 8868 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8870 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8874 */	NdrFcShort( 0xda ),	/* 218 */
/* 8876 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8878 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8880 */	NdrFcShort( 0x24 ),	/* 36 */
/* 8882 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 8884 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8886 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8888 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8890 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 8892 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8894 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8896 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 8898 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8900 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8902 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_TEXTURE22 */

/* 8904 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8906 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8910 */	NdrFcShort( 0xdb ),	/* 219 */
/* 8912 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8914 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8916 */	NdrFcShort( 0x24 ),	/* 36 */
/* 8918 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 8920 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8922 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8924 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8926 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 8928 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8930 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8932 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 8934 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8936 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8938 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_TEXTURE23 */

/* 8940 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8942 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8946 */	NdrFcShort( 0xdc ),	/* 220 */
/* 8948 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8950 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8952 */	NdrFcShort( 0x24 ),	/* 36 */
/* 8954 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 8956 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8958 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8960 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8962 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 8964 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8966 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8968 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 8970 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8972 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8974 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_TEXTURE24 */

/* 8976 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8978 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8982 */	NdrFcShort( 0xdd ),	/* 221 */
/* 8984 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8986 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8988 */	NdrFcShort( 0x24 ),	/* 36 */
/* 8990 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 8992 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8994 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8996 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8998 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 9000 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9002 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9004 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 9006 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9008 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9010 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_TEXTURE25 */

/* 9012 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9014 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9018 */	NdrFcShort( 0xde ),	/* 222 */
/* 9020 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9022 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9024 */	NdrFcShort( 0x24 ),	/* 36 */
/* 9026 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 9028 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9030 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9032 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9034 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 9036 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9038 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9040 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 9042 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9044 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9046 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_TEXTURE26 */

/* 9048 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9050 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9054 */	NdrFcShort( 0xdf ),	/* 223 */
/* 9056 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9058 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9060 */	NdrFcShort( 0x24 ),	/* 36 */
/* 9062 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 9064 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9066 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9068 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9070 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 9072 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9074 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9076 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 9078 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9080 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9082 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_TEXTURE27 */

/* 9084 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9086 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9090 */	NdrFcShort( 0xe0 ),	/* 224 */
/* 9092 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9094 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9096 */	NdrFcShort( 0x24 ),	/* 36 */
/* 9098 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 9100 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9102 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9104 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9106 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 9108 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9110 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9112 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 9114 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9116 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9118 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_TEXTURE28 */

/* 9120 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9122 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9126 */	NdrFcShort( 0xe1 ),	/* 225 */
/* 9128 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9130 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9132 */	NdrFcShort( 0x24 ),	/* 36 */
/* 9134 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 9136 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9138 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9140 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9142 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 9144 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9146 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9148 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 9150 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9152 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9154 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_TEXTURE29 */

/* 9156 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9158 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9162 */	NdrFcShort( 0xe2 ),	/* 226 */
/* 9164 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9166 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9168 */	NdrFcShort( 0x24 ),	/* 36 */
/* 9170 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 9172 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9174 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9176 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9178 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 9180 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9182 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9184 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 9186 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9188 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9190 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_TEXTURE30 */

/* 9192 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9194 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9198 */	NdrFcShort( 0xe3 ),	/* 227 */
/* 9200 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9202 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9204 */	NdrFcShort( 0x24 ),	/* 36 */
/* 9206 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 9208 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9210 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9212 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9214 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 9216 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9218 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9220 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 9222 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9224 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9226 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_TEXTURE31 */

/* 9228 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9230 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9234 */	NdrFcShort( 0xe4 ),	/* 228 */
/* 9236 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9238 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9240 */	NdrFcShort( 0x24 ),	/* 36 */
/* 9242 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 9244 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9246 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9248 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9250 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 9252 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9254 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9256 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 9258 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9260 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9262 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ACTIVE_TEXTURE */

/* 9264 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9266 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9270 */	NdrFcShort( 0xe5 ),	/* 229 */
/* 9272 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9274 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9276 */	NdrFcShort( 0x24 ),	/* 36 */
/* 9278 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 9280 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9282 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9284 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9286 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 9288 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9290 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9292 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 9294 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9296 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9298 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_REPEAT */

/* 9300 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9302 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9306 */	NdrFcShort( 0xe6 ),	/* 230 */
/* 9308 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9310 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9312 */	NdrFcShort( 0x24 ),	/* 36 */
/* 9314 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 9316 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9318 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9320 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9322 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 9324 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9326 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9328 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 9330 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9332 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9334 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_CLAMP_TO_EDGE */

/* 9336 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9338 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9342 */	NdrFcShort( 0xe7 ),	/* 231 */
/* 9344 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9346 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9348 */	NdrFcShort( 0x24 ),	/* 36 */
/* 9350 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 9352 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9354 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9356 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9358 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 9360 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9362 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9364 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 9366 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9368 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9370 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_MIRRORED_REPEAT */

/* 9372 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9374 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9378 */	NdrFcShort( 0xe8 ),	/* 232 */
/* 9380 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9382 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9384 */	NdrFcShort( 0x24 ),	/* 36 */
/* 9386 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 9388 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9390 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9392 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9394 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 9396 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9398 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9400 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 9402 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9404 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9406 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_FLOAT_VEC2 */

/* 9408 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9410 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9414 */	NdrFcShort( 0xe9 ),	/* 233 */
/* 9416 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9418 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9420 */	NdrFcShort( 0x24 ),	/* 36 */
/* 9422 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 9424 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9426 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9428 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9430 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 9432 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9434 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9436 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 9438 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9440 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9442 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_FLOAT_VEC3 */

/* 9444 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9446 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9450 */	NdrFcShort( 0xea ),	/* 234 */
/* 9452 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9454 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9456 */	NdrFcShort( 0x24 ),	/* 36 */
/* 9458 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 9460 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9462 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9464 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9466 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 9468 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9470 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9472 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 9474 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9476 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9478 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_FLOAT_VEC4 */

/* 9480 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9482 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9486 */	NdrFcShort( 0xeb ),	/* 235 */
/* 9488 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9490 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9492 */	NdrFcShort( 0x24 ),	/* 36 */
/* 9494 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 9496 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9498 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9500 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9502 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 9504 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9506 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9508 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 9510 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9512 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9514 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_INT_VEC2 */

/* 9516 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9518 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9522 */	NdrFcShort( 0xec ),	/* 236 */
/* 9524 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9526 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9528 */	NdrFcShort( 0x24 ),	/* 36 */
/* 9530 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 9532 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9534 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9536 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9538 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 9540 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9542 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9544 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 9546 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9548 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9550 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_INT_VEC3 */

/* 9552 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9554 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9558 */	NdrFcShort( 0xed ),	/* 237 */
/* 9560 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9562 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9564 */	NdrFcShort( 0x24 ),	/* 36 */
/* 9566 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 9568 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9570 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9572 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9574 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 9576 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9578 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9580 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 9582 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9584 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9586 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_INT_VEC4 */

/* 9588 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9590 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9594 */	NdrFcShort( 0xee ),	/* 238 */
/* 9596 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9598 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9600 */	NdrFcShort( 0x24 ),	/* 36 */
/* 9602 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 9604 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9606 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9608 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9610 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 9612 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9614 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9616 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 9618 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9620 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9622 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_BOOL */

/* 9624 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9626 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9630 */	NdrFcShort( 0xef ),	/* 239 */
/* 9632 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9634 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9636 */	NdrFcShort( 0x24 ),	/* 36 */
/* 9638 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 9640 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9642 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9644 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9646 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 9648 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9650 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9652 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 9654 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9656 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9658 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_BOOL_VEC2 */

/* 9660 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9662 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9666 */	NdrFcShort( 0xf0 ),	/* 240 */
/* 9668 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9670 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9672 */	NdrFcShort( 0x24 ),	/* 36 */
/* 9674 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 9676 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9678 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9680 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9682 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 9684 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9686 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9688 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 9690 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9692 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9694 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_BOOL_VEC3 */

/* 9696 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9698 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9702 */	NdrFcShort( 0xf1 ),	/* 241 */
/* 9704 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9706 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9708 */	NdrFcShort( 0x24 ),	/* 36 */
/* 9710 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 9712 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9714 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9716 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9718 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 9720 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9722 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9724 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 9726 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9728 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9730 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_BOOL_VEC4 */

/* 9732 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9734 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9738 */	NdrFcShort( 0xf2 ),	/* 242 */
/* 9740 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9742 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9744 */	NdrFcShort( 0x24 ),	/* 36 */
/* 9746 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 9748 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9750 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9752 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9754 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 9756 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9758 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9760 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 9762 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9764 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9766 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_FLOAT_MAT2 */

/* 9768 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9770 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9774 */	NdrFcShort( 0xf3 ),	/* 243 */
/* 9776 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9778 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9780 */	NdrFcShort( 0x24 ),	/* 36 */
/* 9782 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 9784 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9786 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9788 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9790 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 9792 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9794 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9796 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 9798 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9800 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9802 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_FLOAT_MAT3 */

/* 9804 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9806 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9810 */	NdrFcShort( 0xf4 ),	/* 244 */
/* 9812 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9814 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9816 */	NdrFcShort( 0x24 ),	/* 36 */
/* 9818 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 9820 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9822 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9824 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9826 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 9828 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9830 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9832 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 9834 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9836 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9838 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_FLOAT_MAT4 */

/* 9840 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9842 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9846 */	NdrFcShort( 0xf5 ),	/* 245 */
/* 9848 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9850 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9852 */	NdrFcShort( 0x24 ),	/* 36 */
/* 9854 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 9856 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9858 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9860 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9862 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 9864 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9866 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9868 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 9870 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9872 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9874 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_SAMPLER_2D */

/* 9876 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9878 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9882 */	NdrFcShort( 0xf6 ),	/* 246 */
/* 9884 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9886 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9888 */	NdrFcShort( 0x24 ),	/* 36 */
/* 9890 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 9892 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9894 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9896 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9898 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 9900 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9902 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9904 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 9906 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9908 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9910 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_SAMPLER_CUBE */

/* 9912 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9914 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9918 */	NdrFcShort( 0xf7 ),	/* 247 */
/* 9920 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9922 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9924 */	NdrFcShort( 0x24 ),	/* 36 */
/* 9926 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 9928 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9930 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9932 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9934 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 9936 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9938 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9940 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 9942 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9944 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9946 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_VERTEX_ATTRIB_ARRAY_ENABLED */

/* 9948 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9950 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9954 */	NdrFcShort( 0xf8 ),	/* 248 */
/* 9956 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9958 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9960 */	NdrFcShort( 0x24 ),	/* 36 */
/* 9962 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 9964 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9966 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9968 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9970 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 9972 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9974 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9976 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 9978 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9980 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9982 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_VERTEX_ATTRIB_ARRAY_SIZE */

/* 9984 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9986 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9990 */	NdrFcShort( 0xf9 ),	/* 249 */
/* 9992 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9994 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9996 */	NdrFcShort( 0x24 ),	/* 36 */
/* 9998 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 10000 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10002 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10004 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10006 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 10008 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10010 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10012 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 10014 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10016 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10018 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_VERTEX_ATTRIB_ARRAY_STRIDE */

/* 10020 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10022 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10026 */	NdrFcShort( 0xfa ),	/* 250 */
/* 10028 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10030 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10032 */	NdrFcShort( 0x24 ),	/* 36 */
/* 10034 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 10036 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10038 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10040 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10042 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 10044 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10046 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10048 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 10050 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10052 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10054 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_VERTEX_ATTRIB_ARRAY_TYPE */

/* 10056 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10058 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10062 */	NdrFcShort( 0xfb ),	/* 251 */
/* 10064 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10066 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10068 */	NdrFcShort( 0x24 ),	/* 36 */
/* 10070 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 10072 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10074 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10076 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10078 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 10080 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10082 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10084 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 10086 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10088 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10090 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_VERTEX_ATTRIB_ARRAY_NORMALIZED */

/* 10092 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10094 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10098 */	NdrFcShort( 0xfc ),	/* 252 */
/* 10100 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10102 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10104 */	NdrFcShort( 0x24 ),	/* 36 */
/* 10106 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 10108 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10110 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10112 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10114 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 10116 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10118 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10120 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 10122 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10124 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10126 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_VERTEX_ATTRIB_ARRAY_POINTER */

/* 10128 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10130 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10134 */	NdrFcShort( 0xfd ),	/* 253 */
/* 10136 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10138 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10140 */	NdrFcShort( 0x24 ),	/* 36 */
/* 10142 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 10144 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10146 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10148 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10150 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 10152 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10154 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10156 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 10158 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10160 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10162 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING */

/* 10164 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10166 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10170 */	NdrFcShort( 0xfe ),	/* 254 */
/* 10172 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10174 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10176 */	NdrFcShort( 0x24 ),	/* 36 */
/* 10178 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 10180 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10182 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10184 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10186 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 10188 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10190 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10192 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 10194 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10196 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10198 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_COMPILE_STATUS */

/* 10200 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10202 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10206 */	NdrFcShort( 0xff ),	/* 255 */
/* 10208 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10210 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10212 */	NdrFcShort( 0x24 ),	/* 36 */
/* 10214 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 10216 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10218 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10220 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10222 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 10224 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10226 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10228 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 10230 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10232 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10234 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_LOW_FLOAT */

/* 10236 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10238 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10242 */	NdrFcShort( 0x100 ),	/* 256 */
/* 10244 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10246 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10248 */	NdrFcShort( 0x24 ),	/* 36 */
/* 10250 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 10252 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10254 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10256 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10258 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 10260 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10262 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10264 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 10266 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10268 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10270 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_MEDIUM_FLOAT */

/* 10272 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10274 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10278 */	NdrFcShort( 0x101 ),	/* 257 */
/* 10280 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10282 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10284 */	NdrFcShort( 0x24 ),	/* 36 */
/* 10286 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 10288 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10290 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10292 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10294 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 10296 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10298 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10300 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 10302 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10304 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10306 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_HIGH_FLOAT */

/* 10308 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10310 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10314 */	NdrFcShort( 0x102 ),	/* 258 */
/* 10316 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10318 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10320 */	NdrFcShort( 0x24 ),	/* 36 */
/* 10322 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 10324 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10326 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10328 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10330 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 10332 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10334 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10336 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 10338 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10340 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10342 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_LOW_INT */

/* 10344 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10346 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10350 */	NdrFcShort( 0x103 ),	/* 259 */
/* 10352 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10354 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10356 */	NdrFcShort( 0x24 ),	/* 36 */
/* 10358 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 10360 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10362 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10364 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10366 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 10368 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10370 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10372 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 10374 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10376 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10378 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_MEDIUM_INT */

/* 10380 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10382 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10386 */	NdrFcShort( 0x104 ),	/* 260 */
/* 10388 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10390 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10392 */	NdrFcShort( 0x24 ),	/* 36 */
/* 10394 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 10396 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10398 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10400 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10402 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 10404 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10406 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10408 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 10410 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10412 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10414 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_HIGH_INT */

/* 10416 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10418 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10422 */	NdrFcShort( 0x105 ),	/* 261 */
/* 10424 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10426 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10428 */	NdrFcShort( 0x24 ),	/* 36 */
/* 10430 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 10432 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10434 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10436 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10438 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 10440 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10442 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10444 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 10446 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10448 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10450 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_FRAMEBUFFER */

/* 10452 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10454 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10458 */	NdrFcShort( 0x106 ),	/* 262 */
/* 10460 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10462 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10464 */	NdrFcShort( 0x24 ),	/* 36 */
/* 10466 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 10468 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10470 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10472 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10474 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 10476 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10478 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10480 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 10482 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10484 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10486 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_RENDERBUFFER */

/* 10488 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10490 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10494 */	NdrFcShort( 0x107 ),	/* 263 */
/* 10496 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10498 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10500 */	NdrFcShort( 0x24 ),	/* 36 */
/* 10502 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 10504 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10506 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10508 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10510 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 10512 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10514 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10516 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 10518 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10520 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10522 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_RGBA4 */

/* 10524 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10526 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10530 */	NdrFcShort( 0x108 ),	/* 264 */
/* 10532 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10534 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10536 */	NdrFcShort( 0x24 ),	/* 36 */
/* 10538 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 10540 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10542 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10544 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10546 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 10548 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10550 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10552 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 10554 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10556 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10558 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_RGB5_A1 */

/* 10560 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10562 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10566 */	NdrFcShort( 0x109 ),	/* 265 */
/* 10568 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10570 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10572 */	NdrFcShort( 0x24 ),	/* 36 */
/* 10574 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 10576 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10578 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10580 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10582 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 10584 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10586 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10588 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 10590 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10592 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10594 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_RGB565 */

/* 10596 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10598 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10602 */	NdrFcShort( 0x10a ),	/* 266 */
/* 10604 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10606 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10608 */	NdrFcShort( 0x24 ),	/* 36 */
/* 10610 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 10612 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10614 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10616 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10618 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 10620 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10622 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10624 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 10626 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10628 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10630 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_DEPTH_COMPONENT16 */

/* 10632 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10634 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10638 */	NdrFcShort( 0x10b ),	/* 267 */
/* 10640 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10642 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10644 */	NdrFcShort( 0x24 ),	/* 36 */
/* 10646 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 10648 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10650 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10652 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10654 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 10656 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10658 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10660 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 10662 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10664 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10666 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_STENCIL_INDEX */

/* 10668 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10670 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10674 */	NdrFcShort( 0x10c ),	/* 268 */
/* 10676 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10678 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10680 */	NdrFcShort( 0x24 ),	/* 36 */
/* 10682 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 10684 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10686 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10688 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10690 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 10692 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10694 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10696 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 10698 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10700 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10702 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_STENCIL_INDEX8 */

/* 10704 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10706 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10710 */	NdrFcShort( 0x10d ),	/* 269 */
/* 10712 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10714 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10716 */	NdrFcShort( 0x24 ),	/* 36 */
/* 10718 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 10720 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10722 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10724 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10726 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 10728 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10730 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10732 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 10734 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10736 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10738 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_DEPTH_STENCIL */

/* 10740 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10742 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10746 */	NdrFcShort( 0x10e ),	/* 270 */
/* 10748 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10750 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10752 */	NdrFcShort( 0x24 ),	/* 36 */
/* 10754 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 10756 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10758 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10760 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10762 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 10764 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10766 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10768 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 10770 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10772 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10774 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_RENDERBUFFER_WIDTH */

/* 10776 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10778 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10782 */	NdrFcShort( 0x10f ),	/* 271 */
/* 10784 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10786 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10788 */	NdrFcShort( 0x24 ),	/* 36 */
/* 10790 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 10792 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10794 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10796 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10798 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 10800 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10802 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10804 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 10806 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10808 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10810 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_RENDERBUFFER_HEIGHT */

/* 10812 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10814 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10818 */	NdrFcShort( 0x110 ),	/* 272 */
/* 10820 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10822 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10824 */	NdrFcShort( 0x24 ),	/* 36 */
/* 10826 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 10828 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10830 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10832 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10834 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 10836 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10838 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10840 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 10842 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10844 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10846 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_RENDERBUFFER_INTERNAL_FORMAT */

/* 10848 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10850 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10854 */	NdrFcShort( 0x111 ),	/* 273 */
/* 10856 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10858 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10860 */	NdrFcShort( 0x24 ),	/* 36 */
/* 10862 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 10864 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10866 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10868 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10870 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 10872 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10874 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10876 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 10878 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10880 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10882 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_RENDERBUFFER_RED_SIZE */

/* 10884 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10886 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10890 */	NdrFcShort( 0x112 ),	/* 274 */
/* 10892 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10894 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10896 */	NdrFcShort( 0x24 ),	/* 36 */
/* 10898 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 10900 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10902 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10904 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10906 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 10908 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10910 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10912 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 10914 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10916 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10918 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_RENDERBUFFER_GREEN_SIZE */

/* 10920 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10922 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10926 */	NdrFcShort( 0x113 ),	/* 275 */
/* 10928 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10930 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10932 */	NdrFcShort( 0x24 ),	/* 36 */
/* 10934 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 10936 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10938 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10940 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10942 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 10944 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10946 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10948 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 10950 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10952 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10954 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_RENDERBUFFER_BLUE_SIZE */

/* 10956 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10958 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10962 */	NdrFcShort( 0x114 ),	/* 276 */
/* 10964 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10966 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10968 */	NdrFcShort( 0x24 ),	/* 36 */
/* 10970 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 10972 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10974 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10976 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10978 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 10980 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10982 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10984 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 10986 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10988 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10990 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_RENDERBUFFER_ALPHA_SIZE */

/* 10992 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10994 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10998 */	NdrFcShort( 0x115 ),	/* 277 */
/* 11000 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11002 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11004 */	NdrFcShort( 0x24 ),	/* 36 */
/* 11006 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 11008 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11010 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11012 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11014 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 11016 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 11018 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11020 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 11022 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11024 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 11026 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_RENDERBUFFER_DEPTH_SIZE */

/* 11028 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11030 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11034 */	NdrFcShort( 0x116 ),	/* 278 */
/* 11036 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11038 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11040 */	NdrFcShort( 0x24 ),	/* 36 */
/* 11042 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 11044 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11046 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11048 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11050 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 11052 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 11054 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11056 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 11058 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11060 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 11062 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_RENDERBUFFER_STENCIL_SIZE */

/* 11064 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11066 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11070 */	NdrFcShort( 0x117 ),	/* 279 */
/* 11072 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11074 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11076 */	NdrFcShort( 0x24 ),	/* 36 */
/* 11078 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 11080 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11082 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11084 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11086 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 11088 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 11090 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11092 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 11094 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11096 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 11098 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE */

/* 11100 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11102 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11106 */	NdrFcShort( 0x118 ),	/* 280 */
/* 11108 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11110 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11112 */	NdrFcShort( 0x24 ),	/* 36 */
/* 11114 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 11116 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11118 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11120 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11122 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 11124 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 11126 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11128 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 11130 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11132 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 11134 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_FRAMEBUFFER_ATTACHMENT_OBJECT_NAME */

/* 11136 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11138 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11142 */	NdrFcShort( 0x119 ),	/* 281 */
/* 11144 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11146 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11148 */	NdrFcShort( 0x24 ),	/* 36 */
/* 11150 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 11152 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11154 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11156 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11158 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 11160 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 11162 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11164 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 11166 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11168 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 11170 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL */

/* 11172 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11174 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11178 */	NdrFcShort( 0x11a ),	/* 282 */
/* 11180 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11182 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11184 */	NdrFcShort( 0x24 ),	/* 36 */
/* 11186 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 11188 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11190 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11192 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11194 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 11196 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 11198 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11200 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 11202 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11204 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 11206 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE */

/* 11208 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11210 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11214 */	NdrFcShort( 0x11b ),	/* 283 */
/* 11216 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11218 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11220 */	NdrFcShort( 0x24 ),	/* 36 */
/* 11222 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 11224 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11226 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11228 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11230 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 11232 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 11234 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11236 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 11238 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11240 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 11242 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_COLOR_ATTACHMENT0 */

/* 11244 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11246 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11250 */	NdrFcShort( 0x11c ),	/* 284 */
/* 11252 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11254 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11256 */	NdrFcShort( 0x24 ),	/* 36 */
/* 11258 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 11260 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11262 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11264 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11266 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 11268 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 11270 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11272 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 11274 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11276 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 11278 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_DEPTH_ATTACHMENT */

/* 11280 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11282 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11286 */	NdrFcShort( 0x11d ),	/* 285 */
/* 11288 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11290 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11292 */	NdrFcShort( 0x24 ),	/* 36 */
/* 11294 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 11296 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11298 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11300 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11302 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 11304 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 11306 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11308 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 11310 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11312 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 11314 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_STENCIL_ATTACHMENT */

/* 11316 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11318 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11322 */	NdrFcShort( 0x11e ),	/* 286 */
/* 11324 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11326 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11328 */	NdrFcShort( 0x24 ),	/* 36 */
/* 11330 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 11332 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11334 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11336 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11338 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 11340 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 11342 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11344 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 11346 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11348 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 11350 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_DEPTH_STENCIL_ATTACHMENT */

/* 11352 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11354 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11358 */	NdrFcShort( 0x11f ),	/* 287 */
/* 11360 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11362 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11364 */	NdrFcShort( 0x24 ),	/* 36 */
/* 11366 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 11368 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11370 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11372 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11374 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 11376 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 11378 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11380 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 11382 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11384 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 11386 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_NONE */

/* 11388 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11390 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11394 */	NdrFcShort( 0x120 ),	/* 288 */
/* 11396 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11398 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11400 */	NdrFcShort( 0x24 ),	/* 36 */
/* 11402 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 11404 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11406 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11408 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11410 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 11412 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 11414 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11416 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 11418 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11420 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 11422 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_FRAMEBUFFER_COMPLETE */

/* 11424 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11426 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11430 */	NdrFcShort( 0x121 ),	/* 289 */
/* 11432 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11434 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11436 */	NdrFcShort( 0x24 ),	/* 36 */
/* 11438 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 11440 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11442 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11444 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11446 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 11448 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 11450 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11452 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 11454 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11456 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 11458 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_FRAMEBUFFER_INCOMPLETE_ATTACHMENT */

/* 11460 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11462 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11466 */	NdrFcShort( 0x122 ),	/* 290 */
/* 11468 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11470 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11472 */	NdrFcShort( 0x24 ),	/* 36 */
/* 11474 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 11476 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11478 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11480 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11482 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 11484 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 11486 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11488 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 11490 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11492 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 11494 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT */

/* 11496 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11498 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11502 */	NdrFcShort( 0x123 ),	/* 291 */
/* 11504 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11506 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11508 */	NdrFcShort( 0x24 ),	/* 36 */
/* 11510 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 11512 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11514 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11516 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11518 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 11520 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 11522 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11524 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 11526 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11528 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 11530 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_FRAMEBUFFER_INCOMPLETE_DIMENSIONS */

/* 11532 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11534 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11538 */	NdrFcShort( 0x124 ),	/* 292 */
/* 11540 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11542 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11544 */	NdrFcShort( 0x24 ),	/* 36 */
/* 11546 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 11548 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11550 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11552 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11554 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 11556 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 11558 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11560 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 11562 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11564 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 11566 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_FRAMEBUFFER_UNSUPPORTED */

/* 11568 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11570 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11574 */	NdrFcShort( 0x125 ),	/* 293 */
/* 11576 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11578 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11580 */	NdrFcShort( 0x24 ),	/* 36 */
/* 11582 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 11584 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11586 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11588 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11590 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 11592 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 11594 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11596 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 11598 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11600 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 11602 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_FRAMEBUFFER_BINDING */

/* 11604 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11606 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11610 */	NdrFcShort( 0x126 ),	/* 294 */
/* 11612 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11614 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11616 */	NdrFcShort( 0x24 ),	/* 36 */
/* 11618 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 11620 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11622 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11624 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11626 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 11628 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 11630 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11632 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 11634 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11636 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 11638 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_RENDERBUFFER_BINDING */

/* 11640 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11642 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11646 */	NdrFcShort( 0x127 ),	/* 295 */
/* 11648 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11650 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11652 */	NdrFcShort( 0x24 ),	/* 36 */
/* 11654 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 11656 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11658 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11660 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11662 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 11664 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 11666 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11668 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 11670 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11672 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 11674 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_MAX_RENDERBUFFER_SIZE */

/* 11676 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11678 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11682 */	NdrFcShort( 0x128 ),	/* 296 */
/* 11684 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11686 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11688 */	NdrFcShort( 0x24 ),	/* 36 */
/* 11690 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 11692 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11694 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11696 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11698 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 11700 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 11702 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11704 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 11706 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11708 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 11710 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_INVALID_FRAMEBUFFER_OPERATION */

/* 11712 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11714 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11718 */	NdrFcShort( 0x129 ),	/* 297 */
/* 11720 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11722 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11724 */	NdrFcShort( 0x24 ),	/* 36 */
/* 11726 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 11728 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11730 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11732 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11734 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 11736 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 11738 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11740 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 11742 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11744 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 11746 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_UNPACK_FLIP_Y_WEBGL */

/* 11748 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11750 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11754 */	NdrFcShort( 0x12a ),	/* 298 */
/* 11756 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11758 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11760 */	NdrFcShort( 0x24 ),	/* 36 */
/* 11762 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 11764 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11766 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11768 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11770 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 11772 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 11774 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11776 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 11778 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11780 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 11782 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_UNPACK_PREMULTIPLY_ALPHA_WEBGL */

/* 11784 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11786 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11790 */	NdrFcShort( 0x12b ),	/* 299 */
/* 11792 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11794 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11796 */	NdrFcShort( 0x24 ),	/* 36 */
/* 11798 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 11800 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11802 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11804 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11806 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 11808 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 11810 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11812 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 11814 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11816 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 11818 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_CONTEXT_LOST_WEBGL */

/* 11820 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11822 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11826 */	NdrFcShort( 0x12c ),	/* 300 */
/* 11828 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11830 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11832 */	NdrFcShort( 0x24 ),	/* 36 */
/* 11834 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 11836 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11838 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11840 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11842 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 11844 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 11846 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11848 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 11850 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11852 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 11854 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_UNPACK_COLORSPACE_CONVERSION_WEBGL */

/* 11856 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11858 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11862 */	NdrFcShort( 0x12d ),	/* 301 */
/* 11864 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11866 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11868 */	NdrFcShort( 0x24 ),	/* 36 */
/* 11870 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 11872 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11874 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11876 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11878 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 11880 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 11882 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11884 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 11886 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11888 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 11890 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_BROWSER_DEFAULT_WEBGL */

/* 11892 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11894 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11898 */	NdrFcShort( 0x12e ),	/* 302 */
/* 11900 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11902 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11904 */	NdrFcShort( 0x24 ),	/* 36 */
/* 11906 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 11908 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11910 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11912 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11914 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 11916 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 11918 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11920 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 11922 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11924 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 11926 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_canvas */

/* 11928 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11930 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11934 */	NdrFcShort( 0x12f ),	/* 303 */
/* 11936 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11938 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11940 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11942 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 11944 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11946 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11948 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11950 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 11952 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 11954 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11956 */	NdrFcShort( 0x47a ),	/* Type Offset=1146 */

	/* Return value */

/* 11958 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11960 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 11962 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_drawingBufferWidth */

/* 11964 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11966 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11970 */	NdrFcShort( 0x130 ),	/* 304 */
/* 11972 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11974 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11976 */	NdrFcShort( 0x24 ),	/* 36 */
/* 11978 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 11980 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11982 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11984 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11986 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 11988 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 11990 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11992 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 11994 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11996 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 11998 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_drawingBufferHeight */

/* 12000 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12002 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12006 */	NdrFcShort( 0x131 ),	/* 305 */
/* 12008 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 12010 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12012 */	NdrFcShort( 0x24 ),	/* 36 */
/* 12014 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 12016 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 12018 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12020 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12022 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 12024 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 12026 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 12028 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 12030 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12032 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 12034 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getContextAttributes */

/* 12036 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12038 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12042 */	NdrFcShort( 0x132 ),	/* 306 */
/* 12044 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 12046 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12048 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12050 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 12052 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 12054 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12056 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12058 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 12060 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 12062 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 12064 */	NdrFcShort( 0x47e ),	/* Type Offset=1150 */

	/* Return value */

/* 12066 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12068 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 12070 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure isContextLost */

/* 12072 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12074 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12078 */	NdrFcShort( 0x133 ),	/* 307 */
/* 12080 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 12082 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12084 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12086 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 12088 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 12090 */	NdrFcShort( 0x1 ),	/* 1 */
/* 12092 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12094 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 12096 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 12098 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 12100 */	NdrFcShort( 0x45c ),	/* Type Offset=1116 */

	/* Return value */

/* 12102 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12104 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 12106 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getSupportedExtensions */

/* 12108 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12110 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12114 */	NdrFcShort( 0x134 ),	/* 308 */
/* 12116 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 12118 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12120 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12122 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 12124 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 12126 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12128 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12130 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 12132 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 12134 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 12136 */	NdrFcShort( 0x47a ),	/* Type Offset=1146 */

	/* Return value */

/* 12138 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12140 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 12142 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getExtension */

/* 12144 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12146 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12150 */	NdrFcShort( 0x135 ),	/* 309 */
/* 12152 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 12154 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12156 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12158 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 12160 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 12162 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12164 */	NdrFcShort( 0x1 ),	/* 1 */
/* 12166 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter name */

/* 12168 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 12170 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 12172 */	NdrFcShort( 0x494 ),	/* Type Offset=1172 */

	/* Parameter retVal */

/* 12174 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 12176 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 12178 */	NdrFcShort( 0x47a ),	/* Type Offset=1146 */

	/* Return value */

/* 12180 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12182 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 12184 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure activeTexture */

/* 12186 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12188 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12192 */	NdrFcShort( 0x136 ),	/* 310 */
/* 12194 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 12196 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12198 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12200 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 12202 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 12204 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12206 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12208 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter texture */

/* 12210 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 12212 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 12214 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 12216 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12218 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 12220 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure attachShader */

/* 12222 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12224 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12228 */	NdrFcShort( 0x137 ),	/* 311 */
/* 12230 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 12232 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12234 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12236 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 12238 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 12240 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12242 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12244 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter program */

/* 12246 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 12248 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 12250 */	NdrFcShort( 0x49e ),	/* Type Offset=1182 */

	/* Parameter shader */

/* 12252 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 12254 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 12256 */	NdrFcShort( 0x4b0 ),	/* Type Offset=1200 */

	/* Return value */

/* 12258 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12260 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 12262 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure bindAttribLocation */

/* 12264 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12266 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12270 */	NdrFcShort( 0x138 ),	/* 312 */
/* 12272 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 12274 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12276 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12278 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 12280 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 12282 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12284 */	NdrFcShort( 0x1 ),	/* 1 */
/* 12286 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter program */

/* 12288 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 12290 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 12292 */	NdrFcShort( 0x49e ),	/* Type Offset=1182 */

	/* Parameter index */

/* 12294 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 12296 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 12298 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter name */

/* 12300 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 12302 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 12304 */	NdrFcShort( 0x494 ),	/* Type Offset=1172 */

	/* Return value */

/* 12306 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12308 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 12310 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure bindBuffer */

/* 12312 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12314 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12318 */	NdrFcShort( 0x139 ),	/* 313 */
/* 12320 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 12322 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12324 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12326 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 12328 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 12330 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12332 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12334 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter target */

/* 12336 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 12338 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 12340 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter buffer */

/* 12342 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 12344 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 12346 */	NdrFcShort( 0x4c2 ),	/* Type Offset=1218 */

	/* Return value */

/* 12348 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12350 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 12352 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure bindFramebuffer */

/* 12354 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12356 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12360 */	NdrFcShort( 0x13a ),	/* 314 */
/* 12362 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 12364 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12366 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12368 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 12370 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 12372 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12374 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12376 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter target */

/* 12378 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 12380 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 12382 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter framebuffer */

/* 12384 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 12386 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 12388 */	NdrFcShort( 0x4d4 ),	/* Type Offset=1236 */

	/* Return value */

/* 12390 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12392 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 12394 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure bindRenderbuffer */

/* 12396 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12398 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12402 */	NdrFcShort( 0x13b ),	/* 315 */
/* 12404 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 12406 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12408 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12410 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 12412 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 12414 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12416 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12418 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter target */

/* 12420 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 12422 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 12424 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter renderbuffer */

/* 12426 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 12428 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 12430 */	NdrFcShort( 0x4e6 ),	/* Type Offset=1254 */

	/* Return value */

/* 12432 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12434 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 12436 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure bindTexture */

/* 12438 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12440 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12444 */	NdrFcShort( 0x13c ),	/* 316 */
/* 12446 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 12448 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12450 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12452 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 12454 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 12456 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12458 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12460 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter target */

/* 12462 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 12464 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 12466 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter texture */

/* 12468 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 12470 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 12472 */	NdrFcShort( 0x4f8 ),	/* Type Offset=1272 */

	/* Return value */

/* 12474 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12476 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 12478 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure blendColor */

/* 12480 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12482 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12486 */	NdrFcShort( 0x13d ),	/* 317 */
/* 12488 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 12490 */	NdrFcShort( 0x20 ),	/* 32 */
/* 12492 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12494 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x5,		/* 5 */
/* 12496 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 12498 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12500 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12502 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter red */

/* 12504 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 12506 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 12508 */	0xa,		/* FC_FLOAT */
			0x0,		/* 0 */

	/* Parameter green */

/* 12510 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 12512 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 12514 */	0xa,		/* FC_FLOAT */
			0x0,		/* 0 */

	/* Parameter blue */

/* 12516 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 12518 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 12520 */	0xa,		/* FC_FLOAT */
			0x0,		/* 0 */

	/* Parameter alpha */

/* 12522 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 12524 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 12526 */	0xa,		/* FC_FLOAT */
			0x0,		/* 0 */

	/* Return value */

/* 12528 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12530 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 12532 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure blendEquation */

/* 12534 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12536 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12540 */	NdrFcShort( 0x13e ),	/* 318 */
/* 12542 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 12544 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12546 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12548 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 12550 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 12552 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12554 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12556 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter mode */

/* 12558 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 12560 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 12562 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 12564 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12566 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 12568 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure blendEquationSeparate */

/* 12570 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12572 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12576 */	NdrFcShort( 0x13f ),	/* 319 */
/* 12578 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 12580 */	NdrFcShort( 0x10 ),	/* 16 */
/* 12582 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12584 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 12586 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 12588 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12590 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12592 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter modeRGB */

/* 12594 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 12596 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 12598 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter modeAlpha */

/* 12600 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 12602 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 12604 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 12606 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12608 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 12610 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure blendFunc */

/* 12612 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12614 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12618 */	NdrFcShort( 0x140 ),	/* 320 */
/* 12620 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 12622 */	NdrFcShort( 0x10 ),	/* 16 */
/* 12624 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12626 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 12628 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 12630 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12632 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12634 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter sfactor */

/* 12636 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 12638 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 12640 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dfactor */

/* 12642 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 12644 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 12646 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 12648 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12650 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 12652 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure blendFuncSeparate */

/* 12654 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12656 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12660 */	NdrFcShort( 0x141 ),	/* 321 */
/* 12662 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 12664 */	NdrFcShort( 0x20 ),	/* 32 */
/* 12666 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12668 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x5,		/* 5 */
/* 12670 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 12672 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12674 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12676 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter srcRGB */

/* 12678 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 12680 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 12682 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dstRGB */

/* 12684 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 12686 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 12688 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter srcAlpha */

/* 12690 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 12692 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 12694 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dstAlpha */

/* 12696 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 12698 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 12700 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 12702 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12704 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 12706 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure bufferData */

/* 12708 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12710 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12714 */	NdrFcShort( 0x142 ),	/* 322 */
/* 12716 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 12718 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12720 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12722 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 12724 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 12726 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12728 */	NdrFcShort( 0x1 ),	/* 1 */
/* 12730 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter target */

/* 12732 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 12734 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 12736 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg1 */

/* 12738 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 12740 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 12742 */	NdrFcShort( 0x434 ),	/* Type Offset=1076 */

	/* Parameter arg2 */

/* 12744 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 12746 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 12748 */	NdrFcShort( 0x434 ),	/* Type Offset=1076 */

	/* Return value */

/* 12750 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12752 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 12754 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure bufferSubData */

/* 12756 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12758 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12762 */	NdrFcShort( 0x143 ),	/* 323 */
/* 12764 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 12766 */	NdrFcShort( 0x10 ),	/* 16 */
/* 12768 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12770 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 12772 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 12774 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12776 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12778 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter target */

/* 12780 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 12782 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 12784 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter offset */

/* 12786 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 12788 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 12790 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter data */

/* 12792 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 12794 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 12796 */	NdrFcShort( 0x4c ),	/* Type Offset=76 */

	/* Return value */

/* 12798 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12800 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 12802 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure checkFramebufferStatus */

/* 12804 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12806 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12810 */	NdrFcShort( 0x144 ),	/* 324 */
/* 12812 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 12814 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12816 */	NdrFcShort( 0x24 ),	/* 36 */
/* 12818 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 12820 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 12822 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12824 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12826 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter target */

/* 12828 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 12830 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 12832 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter retVal */

/* 12834 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 12836 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 12838 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 12840 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12842 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 12844 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure clear */

/* 12846 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12848 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12852 */	NdrFcShort( 0x145 ),	/* 325 */
/* 12854 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 12856 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12858 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12860 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 12862 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 12864 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12866 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12868 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter mask */

/* 12870 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 12872 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 12874 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 12876 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12878 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 12880 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure clearColor */

/* 12882 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12884 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12888 */	NdrFcShort( 0x146 ),	/* 326 */
/* 12890 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 12892 */	NdrFcShort( 0x20 ),	/* 32 */
/* 12894 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12896 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x5,		/* 5 */
/* 12898 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 12900 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12902 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12904 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter red */

/* 12906 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 12908 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 12910 */	0xa,		/* FC_FLOAT */
			0x0,		/* 0 */

	/* Parameter green */

/* 12912 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 12914 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 12916 */	0xa,		/* FC_FLOAT */
			0x0,		/* 0 */

	/* Parameter blue */

/* 12918 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 12920 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 12922 */	0xa,		/* FC_FLOAT */
			0x0,		/* 0 */

	/* Parameter alpha */

/* 12924 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 12926 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 12928 */	0xa,		/* FC_FLOAT */
			0x0,		/* 0 */

	/* Return value */

/* 12930 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12932 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 12934 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure clearDepth */

/* 12936 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12938 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12942 */	NdrFcShort( 0x147 ),	/* 327 */
/* 12944 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 12946 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12948 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12950 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 12952 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 12954 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12956 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12958 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter depth */

/* 12960 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 12962 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 12964 */	0xa,		/* FC_FLOAT */
			0x0,		/* 0 */

	/* Return value */

/* 12966 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12968 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 12970 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure clearStencil */

/* 12972 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12974 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12978 */	NdrFcShort( 0x148 ),	/* 328 */
/* 12980 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 12982 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12984 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12986 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 12988 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 12990 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12992 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12994 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter s */

/* 12996 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 12998 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 13000 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 13002 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 13004 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 13006 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure colorMask */

/* 13008 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 13010 */	NdrFcLong( 0x0 ),	/* 0 */
/* 13014 */	NdrFcShort( 0x149 ),	/* 329 */
/* 13016 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 13018 */	NdrFcShort( 0x20 ),	/* 32 */
/* 13020 */	NdrFcShort( 0x8 ),	/* 8 */
/* 13022 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x5,		/* 5 */
/* 13024 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 13026 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13028 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13030 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter red */

/* 13032 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 13034 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 13036 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter green */

/* 13038 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 13040 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 13042 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter blue */

/* 13044 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 13046 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 13048 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter alpha */

/* 13050 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 13052 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 13054 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 13056 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 13058 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 13060 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure compileShader */

/* 13062 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 13064 */	NdrFcLong( 0x0 ),	/* 0 */
/* 13068 */	NdrFcShort( 0x14a ),	/* 330 */
/* 13070 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 13072 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13074 */	NdrFcShort( 0x8 ),	/* 8 */
/* 13076 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 13078 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 13080 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13082 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13084 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter shader */

/* 13086 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 13088 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 13090 */	NdrFcShort( 0x4b0 ),	/* Type Offset=1200 */

	/* Return value */

/* 13092 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 13094 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 13096 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure compressedTexImage2D */

/* 13098 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 13100 */	NdrFcLong( 0x0 ),	/* 0 */
/* 13104 */	NdrFcShort( 0x14b ),	/* 331 */
/* 13106 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 13108 */	NdrFcShort( 0x30 ),	/* 48 */
/* 13110 */	NdrFcShort( 0x8 ),	/* 8 */
/* 13112 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x8,		/* 8 */
/* 13114 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 13116 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13118 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13120 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter target */

/* 13122 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 13124 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 13126 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter level */

/* 13128 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 13130 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 13132 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter internalformat */

/* 13134 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 13136 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 13138 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter width */

/* 13140 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 13142 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 13144 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter height */

/* 13146 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 13148 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 13150 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter border */

/* 13152 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 13154 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 13156 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter data */

/* 13158 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 13160 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 13162 */	NdrFcShort( 0x50a ),	/* Type Offset=1290 */

	/* Return value */

/* 13164 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 13166 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 13168 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure compressedTexSubImage2D */

/* 13170 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 13172 */	NdrFcLong( 0x0 ),	/* 0 */
/* 13176 */	NdrFcShort( 0x14c ),	/* 332 */
/* 13178 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 13180 */	NdrFcShort( 0x38 ),	/* 56 */
/* 13182 */	NdrFcShort( 0x8 ),	/* 8 */
/* 13184 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x9,		/* 9 */
/* 13186 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 13188 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13190 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13192 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter target */

/* 13194 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 13196 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 13198 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter level */

/* 13200 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 13202 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 13204 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter xoffset */

/* 13206 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 13208 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 13210 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter yoffset */

/* 13212 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 13214 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 13216 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter width */

/* 13218 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 13220 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 13222 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter height */

/* 13224 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 13226 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 13228 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter format */

/* 13230 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 13232 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 13234 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter data */

/* 13236 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 13238 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 13240 */	NdrFcShort( 0x50a ),	/* Type Offset=1290 */

	/* Return value */

/* 13242 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 13244 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 13246 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure copyTexImage2D */

/* 13248 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 13250 */	NdrFcLong( 0x0 ),	/* 0 */
/* 13254 */	NdrFcShort( 0x14d ),	/* 333 */
/* 13256 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 13258 */	NdrFcShort( 0x40 ),	/* 64 */
/* 13260 */	NdrFcShort( 0x8 ),	/* 8 */
/* 13262 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x9,		/* 9 */
/* 13264 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 13266 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13268 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13270 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter target */

/* 13272 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 13274 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 13276 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter level */

/* 13278 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 13280 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 13282 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter internalformat */

/* 13284 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 13286 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 13288 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter x */

/* 13290 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 13292 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 13294 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter y */

/* 13296 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 13298 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 13300 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter width */

/* 13302 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 13304 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 13306 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter height */

/* 13308 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 13310 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 13312 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter border */

/* 13314 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 13316 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 13318 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 13320 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 13322 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 13324 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure copyTexSubImage2D */

/* 13326 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 13328 */	NdrFcLong( 0x0 ),	/* 0 */
/* 13332 */	NdrFcShort( 0x14e ),	/* 334 */
/* 13334 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 13336 */	NdrFcShort( 0x40 ),	/* 64 */
/* 13338 */	NdrFcShort( 0x8 ),	/* 8 */
/* 13340 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x9,		/* 9 */
/* 13342 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 13344 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13346 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13348 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter target */

/* 13350 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 13352 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 13354 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter level */

/* 13356 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 13358 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 13360 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter xoffset */

/* 13362 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 13364 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 13366 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter yoffset */

/* 13368 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 13370 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 13372 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter x */

/* 13374 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 13376 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 13378 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter y */

/* 13380 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 13382 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 13384 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter width */

/* 13386 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 13388 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 13390 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter height */

/* 13392 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 13394 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 13396 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 13398 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 13400 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 13402 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure createBuffer */

/* 13404 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 13406 */	NdrFcLong( 0x0 ),	/* 0 */
/* 13410 */	NdrFcShort( 0x14f ),	/* 335 */
/* 13412 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 13414 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13416 */	NdrFcShort( 0x8 ),	/* 8 */
/* 13418 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 13420 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 13422 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13424 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13426 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 13428 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 13430 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 13432 */	NdrFcShort( 0x51c ),	/* Type Offset=1308 */

	/* Return value */

/* 13434 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 13436 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 13438 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure createFramebuffer */

/* 13440 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 13442 */	NdrFcLong( 0x0 ),	/* 0 */
/* 13446 */	NdrFcShort( 0x150 ),	/* 336 */
/* 13448 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 13450 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13452 */	NdrFcShort( 0x8 ),	/* 8 */
/* 13454 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 13456 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 13458 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13460 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13462 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 13464 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 13466 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 13468 */	NdrFcShort( 0x520 ),	/* Type Offset=1312 */

	/* Return value */

/* 13470 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 13472 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 13474 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure createProgram */

/* 13476 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 13478 */	NdrFcLong( 0x0 ),	/* 0 */
/* 13482 */	NdrFcShort( 0x151 ),	/* 337 */
/* 13484 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 13486 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13488 */	NdrFcShort( 0x8 ),	/* 8 */
/* 13490 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 13492 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 13494 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13496 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13498 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 13500 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 13502 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 13504 */	NdrFcShort( 0x524 ),	/* Type Offset=1316 */

	/* Return value */

/* 13506 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 13508 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 13510 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure createRenderbuffer */

/* 13512 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 13514 */	NdrFcLong( 0x0 ),	/* 0 */
/* 13518 */	NdrFcShort( 0x152 ),	/* 338 */
/* 13520 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 13522 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13524 */	NdrFcShort( 0x8 ),	/* 8 */
/* 13526 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 13528 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 13530 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13532 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13534 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 13536 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 13538 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 13540 */	NdrFcShort( 0x528 ),	/* Type Offset=1320 */

	/* Return value */

/* 13542 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 13544 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 13546 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure createShader */

/* 13548 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 13550 */	NdrFcLong( 0x0 ),	/* 0 */
/* 13554 */	NdrFcShort( 0x153 ),	/* 339 */
/* 13556 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 13558 */	NdrFcShort( 0x8 ),	/* 8 */
/* 13560 */	NdrFcShort( 0x8 ),	/* 8 */
/* 13562 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 13564 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 13566 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13568 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13570 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter type */

/* 13572 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 13574 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 13576 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter retVal */

/* 13578 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 13580 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 13582 */	NdrFcShort( 0x53e ),	/* Type Offset=1342 */

	/* Return value */

/* 13584 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 13586 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 13588 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure createTexture */

/* 13590 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 13592 */	NdrFcLong( 0x0 ),	/* 0 */
/* 13596 */	NdrFcShort( 0x154 ),	/* 340 */
/* 13598 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 13600 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13602 */	NdrFcShort( 0x8 ),	/* 8 */
/* 13604 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 13606 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 13608 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13610 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13612 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 13614 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 13616 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 13618 */	NdrFcShort( 0x554 ),	/* Type Offset=1364 */

	/* Return value */

/* 13620 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 13622 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 13624 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure cullFace */

/* 13626 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 13628 */	NdrFcLong( 0x0 ),	/* 0 */
/* 13632 */	NdrFcShort( 0x155 ),	/* 341 */
/* 13634 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 13636 */	NdrFcShort( 0x8 ),	/* 8 */
/* 13638 */	NdrFcShort( 0x8 ),	/* 8 */
/* 13640 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 13642 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 13644 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13646 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13648 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter mode */

/* 13650 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 13652 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 13654 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 13656 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 13658 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 13660 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure deleteBuffer */

/* 13662 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 13664 */	NdrFcLong( 0x0 ),	/* 0 */
/* 13668 */	NdrFcShort( 0x156 ),	/* 342 */
/* 13670 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 13672 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13674 */	NdrFcShort( 0x8 ),	/* 8 */
/* 13676 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 13678 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 13680 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13682 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13684 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter buffer */

/* 13686 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 13688 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 13690 */	NdrFcShort( 0x56a ),	/* Type Offset=1386 */

	/* Return value */

/* 13692 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 13694 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 13696 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure deleteFramebuffer */

/* 13698 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 13700 */	NdrFcLong( 0x0 ),	/* 0 */
/* 13704 */	NdrFcShort( 0x157 ),	/* 343 */
/* 13706 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 13708 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13710 */	NdrFcShort( 0x8 ),	/* 8 */
/* 13712 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 13714 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 13716 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13718 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13720 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter framebuffer */

/* 13722 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 13724 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 13726 */	NdrFcShort( 0x57c ),	/* Type Offset=1404 */

	/* Return value */

/* 13728 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 13730 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 13732 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure deleteProgram */

/* 13734 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 13736 */	NdrFcLong( 0x0 ),	/* 0 */
/* 13740 */	NdrFcShort( 0x158 ),	/* 344 */
/* 13742 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 13744 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13746 */	NdrFcShort( 0x8 ),	/* 8 */
/* 13748 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 13750 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 13752 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13754 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13756 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter program */

/* 13758 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 13760 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 13762 */	NdrFcShort( 0x58e ),	/* Type Offset=1422 */

	/* Return value */

/* 13764 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 13766 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 13768 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure deleteRenderbuffer */

/* 13770 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 13772 */	NdrFcLong( 0x0 ),	/* 0 */
/* 13776 */	NdrFcShort( 0x159 ),	/* 345 */
/* 13778 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 13780 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13782 */	NdrFcShort( 0x8 ),	/* 8 */
/* 13784 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 13786 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 13788 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13790 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13792 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter renderbuffer */

/* 13794 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 13796 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 13798 */	NdrFcShort( 0x5a0 ),	/* Type Offset=1440 */

	/* Return value */

/* 13800 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 13802 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 13804 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure deleteShader */

/* 13806 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 13808 */	NdrFcLong( 0x0 ),	/* 0 */
/* 13812 */	NdrFcShort( 0x15a ),	/* 346 */
/* 13814 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 13816 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13818 */	NdrFcShort( 0x8 ),	/* 8 */
/* 13820 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 13822 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 13824 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13826 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13828 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter shader */

/* 13830 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 13832 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 13834 */	NdrFcShort( 0x5b2 ),	/* Type Offset=1458 */

	/* Return value */

/* 13836 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 13838 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 13840 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure deleteTexture */

/* 13842 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 13844 */	NdrFcLong( 0x0 ),	/* 0 */
/* 13848 */	NdrFcShort( 0x15b ),	/* 347 */
/* 13850 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 13852 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13854 */	NdrFcShort( 0x8 ),	/* 8 */
/* 13856 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 13858 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 13860 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13862 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13864 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter texture */

/* 13866 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 13868 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 13870 */	NdrFcShort( 0x5c4 ),	/* Type Offset=1476 */

	/* Return value */

/* 13872 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 13874 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 13876 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure depthFunc */

/* 13878 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 13880 */	NdrFcLong( 0x0 ),	/* 0 */
/* 13884 */	NdrFcShort( 0x15c ),	/* 348 */
/* 13886 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 13888 */	NdrFcShort( 0x8 ),	/* 8 */
/* 13890 */	NdrFcShort( 0x8 ),	/* 8 */
/* 13892 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 13894 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 13896 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13898 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13900 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter func */

/* 13902 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 13904 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 13906 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 13908 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 13910 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 13912 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure depthMask */

/* 13914 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 13916 */	NdrFcLong( 0x0 ),	/* 0 */
/* 13920 */	NdrFcShort( 0x15d ),	/* 349 */
/* 13922 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 13924 */	NdrFcShort( 0x8 ),	/* 8 */
/* 13926 */	NdrFcShort( 0x8 ),	/* 8 */
/* 13928 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 13930 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 13932 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13934 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13936 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter flag */

/* 13938 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 13940 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 13942 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 13944 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 13946 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 13948 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure depthRange */

/* 13950 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 13952 */	NdrFcLong( 0x0 ),	/* 0 */
/* 13956 */	NdrFcShort( 0x15e ),	/* 350 */
/* 13958 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 13960 */	NdrFcShort( 0x10 ),	/* 16 */
/* 13962 */	NdrFcShort( 0x8 ),	/* 8 */
/* 13964 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 13966 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 13968 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13970 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13972 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter zNear */

/* 13974 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 13976 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 13978 */	0xa,		/* FC_FLOAT */
			0x0,		/* 0 */

	/* Parameter zFar */

/* 13980 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 13982 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 13984 */	0xa,		/* FC_FLOAT */
			0x0,		/* 0 */

	/* Return value */

/* 13986 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 13988 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 13990 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure detachShader */

/* 13992 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 13994 */	NdrFcLong( 0x0 ),	/* 0 */
/* 13998 */	NdrFcShort( 0x15f ),	/* 351 */
/* 14000 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 14002 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14004 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14006 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 14008 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 14010 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14012 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14014 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter program */

/* 14016 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 14018 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 14020 */	NdrFcShort( 0x5d6 ),	/* Type Offset=1494 */

	/* Parameter shader */

/* 14022 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 14024 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 14026 */	NdrFcShort( 0x5b2 ),	/* Type Offset=1458 */

	/* Return value */

/* 14028 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 14030 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 14032 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure disable */

/* 14034 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 14036 */	NdrFcLong( 0x0 ),	/* 0 */
/* 14040 */	NdrFcShort( 0x160 ),	/* 352 */
/* 14042 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 14044 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14046 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14048 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 14050 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 14052 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14054 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14056 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter cap */

/* 14058 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 14060 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 14062 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 14064 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 14066 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 14068 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure disableVertexAttribArray */

/* 14070 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 14072 */	NdrFcLong( 0x0 ),	/* 0 */
/* 14076 */	NdrFcShort( 0x161 ),	/* 353 */
/* 14078 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 14080 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14082 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14084 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 14086 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 14088 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14090 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14092 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter index */

/* 14094 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 14096 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 14098 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 14100 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 14102 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 14104 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure drawArrays */

/* 14106 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 14108 */	NdrFcLong( 0x0 ),	/* 0 */
/* 14112 */	NdrFcShort( 0x162 ),	/* 354 */
/* 14114 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 14116 */	NdrFcShort( 0x18 ),	/* 24 */
/* 14118 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14120 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 14122 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 14124 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14126 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14128 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter mode */

/* 14130 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 14132 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 14134 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter first */

/* 14136 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 14138 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 14140 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter count */

/* 14142 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 14144 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 14146 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 14148 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 14150 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 14152 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure drawElements */

/* 14154 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 14156 */	NdrFcLong( 0x0 ),	/* 0 */
/* 14160 */	NdrFcShort( 0x163 ),	/* 355 */
/* 14162 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 14164 */	NdrFcShort( 0x20 ),	/* 32 */
/* 14166 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14168 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x5,		/* 5 */
/* 14170 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 14172 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14174 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14176 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter mode */

/* 14178 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 14180 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 14182 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter count */

/* 14184 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 14186 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 14188 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter type */

/* 14190 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 14192 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 14194 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter offset */

/* 14196 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 14198 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 14200 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 14202 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 14204 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 14206 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure enable */

/* 14208 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 14210 */	NdrFcLong( 0x0 ),	/* 0 */
/* 14214 */	NdrFcShort( 0x164 ),	/* 356 */
/* 14216 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 14218 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14220 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14222 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 14224 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 14226 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14228 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14230 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter cap */

/* 14232 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 14234 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 14236 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 14238 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 14240 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 14242 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure enableVertexAttribArray */

/* 14244 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 14246 */	NdrFcLong( 0x0 ),	/* 0 */
/* 14250 */	NdrFcShort( 0x165 ),	/* 357 */
/* 14252 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 14254 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14256 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14258 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 14260 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 14262 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14264 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14266 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter index */

/* 14268 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 14270 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 14272 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 14274 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 14276 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 14278 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure finish */

/* 14280 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 14282 */	NdrFcLong( 0x0 ),	/* 0 */
/* 14286 */	NdrFcShort( 0x166 ),	/* 358 */
/* 14288 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 14290 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14292 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14294 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 14296 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 14298 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14300 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14302 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 14304 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 14306 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 14308 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure flush */

/* 14310 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 14312 */	NdrFcLong( 0x0 ),	/* 0 */
/* 14316 */	NdrFcShort( 0x167 ),	/* 359 */
/* 14318 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 14320 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14322 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14324 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 14326 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 14328 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14330 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14332 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 14334 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 14336 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 14338 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure framebufferRenderbuffer */

/* 14340 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 14342 */	NdrFcLong( 0x0 ),	/* 0 */
/* 14346 */	NdrFcShort( 0x168 ),	/* 360 */
/* 14348 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 14350 */	NdrFcShort( 0x18 ),	/* 24 */
/* 14352 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14354 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 14356 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 14358 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14360 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14362 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter target */

/* 14364 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 14366 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 14368 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter attachment */

/* 14370 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 14372 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 14374 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter renderbuffertarget */

/* 14376 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 14378 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 14380 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter renderbuffer */

/* 14382 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 14384 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 14386 */	NdrFcShort( 0x5a0 ),	/* Type Offset=1440 */

	/* Return value */

/* 14388 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 14390 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 14392 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure framebufferTexture2D */

/* 14394 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 14396 */	NdrFcLong( 0x0 ),	/* 0 */
/* 14400 */	NdrFcShort( 0x169 ),	/* 361 */
/* 14402 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 14404 */	NdrFcShort( 0x20 ),	/* 32 */
/* 14406 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14408 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 14410 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 14412 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14414 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14416 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter target */

/* 14418 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 14420 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 14422 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter attachment */

/* 14424 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 14426 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 14428 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter textarget */

/* 14430 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 14432 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 14434 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter texture */

/* 14436 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 14438 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 14440 */	NdrFcShort( 0x5c4 ),	/* Type Offset=1476 */

	/* Parameter level */

/* 14442 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 14444 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 14446 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 14448 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 14450 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 14452 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure frontFace */

/* 14454 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 14456 */	NdrFcLong( 0x0 ),	/* 0 */
/* 14460 */	NdrFcShort( 0x16a ),	/* 362 */
/* 14462 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 14464 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14466 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14468 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 14470 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 14472 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14474 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14476 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter mode */

/* 14478 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 14480 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 14482 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 14484 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 14486 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 14488 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure generateMipmap */

/* 14490 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 14492 */	NdrFcLong( 0x0 ),	/* 0 */
/* 14496 */	NdrFcShort( 0x16b ),	/* 363 */
/* 14498 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 14500 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14502 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14504 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 14506 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 14508 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14510 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14512 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter target */

/* 14514 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 14516 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 14518 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 14520 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 14522 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 14524 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getActiveAttrib */

/* 14526 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 14528 */	NdrFcLong( 0x0 ),	/* 0 */
/* 14532 */	NdrFcShort( 0x16c ),	/* 364 */
/* 14534 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 14536 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14538 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14540 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 14542 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 14544 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14546 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14548 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter program */

/* 14550 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 14552 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 14554 */	NdrFcShort( 0x5d6 ),	/* Type Offset=1494 */

	/* Parameter index */

/* 14556 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 14558 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 14560 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter retVal */

/* 14562 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 14564 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 14566 */	NdrFcShort( 0x5e8 ),	/* Type Offset=1512 */

	/* Return value */

/* 14568 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 14570 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 14572 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getActiveUniform */

/* 14574 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 14576 */	NdrFcLong( 0x0 ),	/* 0 */
/* 14580 */	NdrFcShort( 0x16d ),	/* 365 */
/* 14582 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 14584 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14586 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14588 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 14590 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 14592 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14594 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14596 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter program */

/* 14598 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 14600 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 14602 */	NdrFcShort( 0x5d6 ),	/* Type Offset=1494 */

	/* Parameter index */

/* 14604 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 14606 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 14608 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter retVal */

/* 14610 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 14612 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 14614 */	NdrFcShort( 0x5e8 ),	/* Type Offset=1512 */

	/* Return value */

/* 14616 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 14618 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 14620 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getAttachedShaders */

/* 14622 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 14624 */	NdrFcLong( 0x0 ),	/* 0 */
/* 14628 */	NdrFcShort( 0x16e ),	/* 366 */
/* 14630 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 14632 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14634 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14636 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 14638 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 14640 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14642 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14644 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter program */

/* 14646 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 14648 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 14650 */	NdrFcShort( 0x5d6 ),	/* Type Offset=1494 */

	/* Parameter retVal */

/* 14652 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 14654 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 14656 */	NdrFcShort( 0x5fe ),	/* Type Offset=1534 */

	/* Return value */

/* 14658 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 14660 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 14662 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getAttribLocation */

/* 14664 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 14666 */	NdrFcLong( 0x0 ),	/* 0 */
/* 14670 */	NdrFcShort( 0x16f ),	/* 367 */
/* 14672 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 14674 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14676 */	NdrFcShort( 0x24 ),	/* 36 */
/* 14678 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 14680 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 14682 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14684 */	NdrFcShort( 0x1 ),	/* 1 */
/* 14686 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter program */

/* 14688 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 14690 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 14692 */	NdrFcShort( 0x5d6 ),	/* Type Offset=1494 */

	/* Parameter name */

/* 14694 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 14696 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 14698 */	NdrFcShort( 0x494 ),	/* Type Offset=1172 */

	/* Parameter retVal */

/* 14700 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 14702 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 14704 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 14706 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 14708 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 14710 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getParameter */

/* 14712 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 14714 */	NdrFcLong( 0x0 ),	/* 0 */
/* 14718 */	NdrFcShort( 0x170 ),	/* 368 */
/* 14720 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 14722 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14724 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14726 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 14728 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 14730 */	NdrFcShort( 0x1 ),	/* 1 */
/* 14732 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14734 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pname */

/* 14736 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 14738 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 14740 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter retVal */

/* 14742 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 14744 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 14746 */	NdrFcShort( 0x45c ),	/* Type Offset=1116 */

	/* Return value */

/* 14748 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 14750 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 14752 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getBufferParameter */

/* 14754 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 14756 */	NdrFcLong( 0x0 ),	/* 0 */
/* 14760 */	NdrFcShort( 0x171 ),	/* 369 */
/* 14762 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 14764 */	NdrFcShort( 0x10 ),	/* 16 */
/* 14766 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14768 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 14770 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 14772 */	NdrFcShort( 0x1 ),	/* 1 */
/* 14774 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14776 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter target */

/* 14778 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 14780 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 14782 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pname */

/* 14784 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 14786 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 14788 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter retVal */

/* 14790 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 14792 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 14794 */	NdrFcShort( 0x45c ),	/* Type Offset=1116 */

	/* Return value */

/* 14796 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 14798 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 14800 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getError */

/* 14802 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 14804 */	NdrFcLong( 0x0 ),	/* 0 */
/* 14808 */	NdrFcShort( 0x172 ),	/* 370 */
/* 14810 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 14812 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14814 */	NdrFcShort( 0x24 ),	/* 36 */
/* 14816 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 14818 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 14820 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14822 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14824 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 14826 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 14828 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 14830 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 14832 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 14834 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 14836 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getFramebufferAttachmentParameter */

/* 14838 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 14840 */	NdrFcLong( 0x0 ),	/* 0 */
/* 14844 */	NdrFcShort( 0x173 ),	/* 371 */
/* 14846 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 14848 */	NdrFcShort( 0x18 ),	/* 24 */
/* 14850 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14852 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x5,		/* 5 */
/* 14854 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 14856 */	NdrFcShort( 0x1 ),	/* 1 */
/* 14858 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14860 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter target */

/* 14862 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 14864 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 14866 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter attachment */

/* 14868 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 14870 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 14872 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pname */

/* 14874 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 14876 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 14878 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter retVal */

/* 14880 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 14882 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 14884 */	NdrFcShort( 0x45c ),	/* Type Offset=1116 */

	/* Return value */

/* 14886 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 14888 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 14890 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getProgramParameter */

/* 14892 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 14894 */	NdrFcLong( 0x0 ),	/* 0 */
/* 14898 */	NdrFcShort( 0x174 ),	/* 372 */
/* 14900 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 14902 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14904 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14906 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 14908 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 14910 */	NdrFcShort( 0x1 ),	/* 1 */
/* 14912 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14914 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter program */

/* 14916 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 14918 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 14920 */	NdrFcShort( 0x5d6 ),	/* Type Offset=1494 */

	/* Parameter pname */

/* 14922 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 14924 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 14926 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter retVal */

/* 14928 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 14930 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 14932 */	NdrFcShort( 0x45c ),	/* Type Offset=1116 */

	/* Return value */

/* 14934 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 14936 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 14938 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getProgramInfoLog */

/* 14940 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 14942 */	NdrFcLong( 0x0 ),	/* 0 */
/* 14946 */	NdrFcShort( 0x175 ),	/* 373 */
/* 14948 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 14950 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14952 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14954 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 14956 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 14958 */	NdrFcShort( 0x1 ),	/* 1 */
/* 14960 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14962 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter program */

/* 14964 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 14966 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 14968 */	NdrFcShort( 0x5d6 ),	/* Type Offset=1494 */

	/* Parameter retVal */

/* 14970 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 14972 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 14974 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Return value */

/* 14976 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 14978 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 14980 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getRenderbufferParameter */

/* 14982 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 14984 */	NdrFcLong( 0x0 ),	/* 0 */
/* 14988 */	NdrFcShort( 0x176 ),	/* 374 */
/* 14990 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 14992 */	NdrFcShort( 0x10 ),	/* 16 */
/* 14994 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14996 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 14998 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 15000 */	NdrFcShort( 0x1 ),	/* 1 */
/* 15002 */	NdrFcShort( 0x0 ),	/* 0 */
/* 15004 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter target */

/* 15006 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 15008 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 15010 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pname */

/* 15012 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 15014 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 15016 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter retVal */

/* 15018 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 15020 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 15022 */	NdrFcShort( 0x45c ),	/* Type Offset=1116 */

	/* Return value */

/* 15024 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 15026 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 15028 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getShaderParameter */

/* 15030 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 15032 */	NdrFcLong( 0x0 ),	/* 0 */
/* 15036 */	NdrFcShort( 0x177 ),	/* 375 */
/* 15038 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 15040 */	NdrFcShort( 0x8 ),	/* 8 */
/* 15042 */	NdrFcShort( 0x8 ),	/* 8 */
/* 15044 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 15046 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 15048 */	NdrFcShort( 0x1 ),	/* 1 */
/* 15050 */	NdrFcShort( 0x0 ),	/* 0 */
/* 15052 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter shader */

/* 15054 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 15056 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 15058 */	NdrFcShort( 0x5b2 ),	/* Type Offset=1458 */

	/* Parameter pname */

/* 15060 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 15062 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 15064 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter retVal */

/* 15066 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 15068 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 15070 */	NdrFcShort( 0x45c ),	/* Type Offset=1116 */

	/* Return value */

/* 15072 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 15074 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 15076 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getShaderPrecisionFormat */

/* 15078 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 15080 */	NdrFcLong( 0x0 ),	/* 0 */
/* 15084 */	NdrFcShort( 0x178 ),	/* 376 */
/* 15086 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 15088 */	NdrFcShort( 0x10 ),	/* 16 */
/* 15090 */	NdrFcShort( 0x8 ),	/* 8 */
/* 15092 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 15094 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 15096 */	NdrFcShort( 0x0 ),	/* 0 */
/* 15098 */	NdrFcShort( 0x0 ),	/* 0 */
/* 15100 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter shadertype */

/* 15102 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 15104 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 15106 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter precisiontype */

/* 15108 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 15110 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 15112 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter retVal */

/* 15114 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 15116 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 15118 */	NdrFcShort( 0x614 ),	/* Type Offset=1556 */

	/* Return value */

/* 15120 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 15122 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 15124 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getShaderInfoLog */

/* 15126 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 15128 */	NdrFcLong( 0x0 ),	/* 0 */
/* 15132 */	NdrFcShort( 0x179 ),	/* 377 */
/* 15134 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 15136 */	NdrFcShort( 0x0 ),	/* 0 */
/* 15138 */	NdrFcShort( 0x8 ),	/* 8 */
/* 15140 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 15142 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 15144 */	NdrFcShort( 0x1 ),	/* 1 */
/* 15146 */	NdrFcShort( 0x0 ),	/* 0 */
/* 15148 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter shader */

/* 15150 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 15152 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 15154 */	NdrFcShort( 0x5b2 ),	/* Type Offset=1458 */

	/* Parameter retVal */

/* 15156 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 15158 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 15160 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Return value */

/* 15162 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 15164 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 15166 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getShaderSource */

/* 15168 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 15170 */	NdrFcLong( 0x0 ),	/* 0 */
/* 15174 */	NdrFcShort( 0x17a ),	/* 378 */
/* 15176 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 15178 */	NdrFcShort( 0x0 ),	/* 0 */
/* 15180 */	NdrFcShort( 0x8 ),	/* 8 */
/* 15182 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 15184 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 15186 */	NdrFcShort( 0x1 ),	/* 1 */
/* 15188 */	NdrFcShort( 0x0 ),	/* 0 */
/* 15190 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter shader */

/* 15192 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 15194 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 15196 */	NdrFcShort( 0x5b2 ),	/* Type Offset=1458 */

	/* Parameter retVal */

/* 15198 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 15200 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 15202 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Return value */

/* 15204 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 15206 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 15208 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getTexParameter */

/* 15210 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 15212 */	NdrFcLong( 0x0 ),	/* 0 */
/* 15216 */	NdrFcShort( 0x17b ),	/* 379 */
/* 15218 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 15220 */	NdrFcShort( 0x10 ),	/* 16 */
/* 15222 */	NdrFcShort( 0x8 ),	/* 8 */
/* 15224 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 15226 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 15228 */	NdrFcShort( 0x1 ),	/* 1 */
/* 15230 */	NdrFcShort( 0x0 ),	/* 0 */
/* 15232 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter target */

/* 15234 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 15236 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 15238 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pname */

/* 15240 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 15242 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 15244 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter retVal */

/* 15246 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 15248 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 15250 */	NdrFcShort( 0x45c ),	/* Type Offset=1116 */

	/* Return value */

/* 15252 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 15254 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 15256 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getUniform */

/* 15258 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 15260 */	NdrFcLong( 0x0 ),	/* 0 */
/* 15264 */	NdrFcShort( 0x17c ),	/* 380 */
/* 15266 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 15268 */	NdrFcShort( 0x0 ),	/* 0 */
/* 15270 */	NdrFcShort( 0x8 ),	/* 8 */
/* 15272 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 15274 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 15276 */	NdrFcShort( 0x1 ),	/* 1 */
/* 15278 */	NdrFcShort( 0x0 ),	/* 0 */
/* 15280 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter program */

/* 15282 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 15284 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 15286 */	NdrFcShort( 0x5d6 ),	/* Type Offset=1494 */

	/* Parameter location */

/* 15288 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 15290 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 15292 */	NdrFcShort( 0x62a ),	/* Type Offset=1578 */

	/* Parameter retVal */

/* 15294 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 15296 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 15298 */	NdrFcShort( 0x45c ),	/* Type Offset=1116 */

	/* Return value */

/* 15300 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 15302 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 15304 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getUniformLocation */

/* 15306 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 15308 */	NdrFcLong( 0x0 ),	/* 0 */
/* 15312 */	NdrFcShort( 0x17d ),	/* 381 */
/* 15314 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 15316 */	NdrFcShort( 0x0 ),	/* 0 */
/* 15318 */	NdrFcShort( 0x8 ),	/* 8 */
/* 15320 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 15322 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 15324 */	NdrFcShort( 0x0 ),	/* 0 */
/* 15326 */	NdrFcShort( 0x1 ),	/* 1 */
/* 15328 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter program */

/* 15330 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 15332 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 15334 */	NdrFcShort( 0x5d6 ),	/* Type Offset=1494 */

	/* Parameter name */

/* 15336 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 15338 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 15340 */	NdrFcShort( 0x494 ),	/* Type Offset=1172 */

	/* Parameter retVal */

/* 15342 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 15344 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 15346 */	NdrFcShort( 0x63c ),	/* Type Offset=1596 */

	/* Return value */

/* 15348 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 15350 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 15352 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getVertexAttrib */

/* 15354 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 15356 */	NdrFcLong( 0x0 ),	/* 0 */
/* 15360 */	NdrFcShort( 0x17e ),	/* 382 */
/* 15362 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 15364 */	NdrFcShort( 0x10 ),	/* 16 */
/* 15366 */	NdrFcShort( 0x8 ),	/* 8 */
/* 15368 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 15370 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 15372 */	NdrFcShort( 0x1 ),	/* 1 */
/* 15374 */	NdrFcShort( 0x0 ),	/* 0 */
/* 15376 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter index */

/* 15378 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 15380 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 15382 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pname */

/* 15384 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 15386 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 15388 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter retVal */

/* 15390 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 15392 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 15394 */	NdrFcShort( 0x45c ),	/* Type Offset=1116 */

	/* Return value */

/* 15396 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 15398 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 15400 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getVertexAttribOffset */

/* 15402 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 15404 */	NdrFcLong( 0x0 ),	/* 0 */
/* 15408 */	NdrFcShort( 0x17f ),	/* 383 */
/* 15410 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 15412 */	NdrFcShort( 0x10 ),	/* 16 */
/* 15414 */	NdrFcShort( 0x24 ),	/* 36 */
/* 15416 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 15418 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 15420 */	NdrFcShort( 0x0 ),	/* 0 */
/* 15422 */	NdrFcShort( 0x0 ),	/* 0 */
/* 15424 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter index */

/* 15426 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 15428 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 15430 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pname */

/* 15432 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 15434 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 15436 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter retVal */

/* 15438 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 15440 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 15442 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 15444 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 15446 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 15448 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure hint */

/* 15450 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 15452 */	NdrFcLong( 0x0 ),	/* 0 */
/* 15456 */	NdrFcShort( 0x180 ),	/* 384 */
/* 15458 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 15460 */	NdrFcShort( 0x10 ),	/* 16 */
/* 15462 */	NdrFcShort( 0x8 ),	/* 8 */
/* 15464 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 15466 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 15468 */	NdrFcShort( 0x0 ),	/* 0 */
/* 15470 */	NdrFcShort( 0x0 ),	/* 0 */
/* 15472 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter target */

/* 15474 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 15476 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 15478 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter mode */

/* 15480 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 15482 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 15484 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 15486 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 15488 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 15490 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure isBuffer */

/* 15492 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 15494 */	NdrFcLong( 0x0 ),	/* 0 */
/* 15498 */	NdrFcShort( 0x181 ),	/* 385 */
/* 15500 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 15502 */	NdrFcShort( 0x0 ),	/* 0 */
/* 15504 */	NdrFcShort( 0x8 ),	/* 8 */
/* 15506 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 15508 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 15510 */	NdrFcShort( 0x1 ),	/* 1 */
/* 15512 */	NdrFcShort( 0x0 ),	/* 0 */
/* 15514 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter buffer */

/* 15516 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 15518 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 15520 */	NdrFcShort( 0x640 ),	/* Type Offset=1600 */

	/* Parameter retVal */

/* 15522 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 15524 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 15526 */	NdrFcShort( 0x45c ),	/* Type Offset=1116 */

	/* Return value */

/* 15528 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 15530 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 15532 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure isEnabled */

/* 15534 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 15536 */	NdrFcLong( 0x0 ),	/* 0 */
/* 15540 */	NdrFcShort( 0x182 ),	/* 386 */
/* 15542 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 15544 */	NdrFcShort( 0x8 ),	/* 8 */
/* 15546 */	NdrFcShort( 0x8 ),	/* 8 */
/* 15548 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 15550 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 15552 */	NdrFcShort( 0x1 ),	/* 1 */
/* 15554 */	NdrFcShort( 0x0 ),	/* 0 */
/* 15556 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter cap */

/* 15558 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 15560 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 15562 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter retVal */

/* 15564 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 15566 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 15568 */	NdrFcShort( 0x45c ),	/* Type Offset=1116 */

	/* Return value */

/* 15570 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 15572 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 15574 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure isFramebuffer */

/* 15576 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 15578 */	NdrFcLong( 0x0 ),	/* 0 */
/* 15582 */	NdrFcShort( 0x183 ),	/* 387 */
/* 15584 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 15586 */	NdrFcShort( 0x0 ),	/* 0 */
/* 15588 */	NdrFcShort( 0x8 ),	/* 8 */
/* 15590 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 15592 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 15594 */	NdrFcShort( 0x1 ),	/* 1 */
/* 15596 */	NdrFcShort( 0x0 ),	/* 0 */
/* 15598 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter framebuffer */

/* 15600 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 15602 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 15604 */	NdrFcShort( 0x652 ),	/* Type Offset=1618 */

	/* Parameter retVal */

/* 15606 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 15608 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 15610 */	NdrFcShort( 0x45c ),	/* Type Offset=1116 */

	/* Return value */

/* 15612 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 15614 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 15616 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure isProgram */

/* 15618 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 15620 */	NdrFcLong( 0x0 ),	/* 0 */
/* 15624 */	NdrFcShort( 0x184 ),	/* 388 */
/* 15626 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 15628 */	NdrFcShort( 0x0 ),	/* 0 */
/* 15630 */	NdrFcShort( 0x8 ),	/* 8 */
/* 15632 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 15634 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 15636 */	NdrFcShort( 0x1 ),	/* 1 */
/* 15638 */	NdrFcShort( 0x0 ),	/* 0 */
/* 15640 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter program */

/* 15642 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 15644 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 15646 */	NdrFcShort( 0x5d6 ),	/* Type Offset=1494 */

	/* Parameter retVal */

/* 15648 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 15650 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 15652 */	NdrFcShort( 0x45c ),	/* Type Offset=1116 */

	/* Return value */

/* 15654 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 15656 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 15658 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure isRenderbuffer */

/* 15660 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 15662 */	NdrFcLong( 0x0 ),	/* 0 */
/* 15666 */	NdrFcShort( 0x185 ),	/* 389 */
/* 15668 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 15670 */	NdrFcShort( 0x0 ),	/* 0 */
/* 15672 */	NdrFcShort( 0x8 ),	/* 8 */
/* 15674 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 15676 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 15678 */	NdrFcShort( 0x1 ),	/* 1 */
/* 15680 */	NdrFcShort( 0x0 ),	/* 0 */
/* 15682 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter renderbuffer */

/* 15684 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 15686 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 15688 */	NdrFcShort( 0x664 ),	/* Type Offset=1636 */

	/* Parameter retVal */

/* 15690 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 15692 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 15694 */	NdrFcShort( 0x45c ),	/* Type Offset=1116 */

	/* Return value */

/* 15696 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 15698 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 15700 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure isShader */

/* 15702 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 15704 */	NdrFcLong( 0x0 ),	/* 0 */
/* 15708 */	NdrFcShort( 0x186 ),	/* 390 */
/* 15710 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 15712 */	NdrFcShort( 0x0 ),	/* 0 */
/* 15714 */	NdrFcShort( 0x8 ),	/* 8 */
/* 15716 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 15718 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 15720 */	NdrFcShort( 0x1 ),	/* 1 */
/* 15722 */	NdrFcShort( 0x0 ),	/* 0 */
/* 15724 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter shader */

/* 15726 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 15728 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 15730 */	NdrFcShort( 0x676 ),	/* Type Offset=1654 */

	/* Parameter retVal */

/* 15732 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 15734 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 15736 */	NdrFcShort( 0x45c ),	/* Type Offset=1116 */

	/* Return value */

/* 15738 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 15740 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 15742 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure isTexture */

/* 15744 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 15746 */	NdrFcLong( 0x0 ),	/* 0 */
/* 15750 */	NdrFcShort( 0x187 ),	/* 391 */
/* 15752 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 15754 */	NdrFcShort( 0x0 ),	/* 0 */
/* 15756 */	NdrFcShort( 0x8 ),	/* 8 */
/* 15758 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 15760 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 15762 */	NdrFcShort( 0x1 ),	/* 1 */
/* 15764 */	NdrFcShort( 0x0 ),	/* 0 */
/* 15766 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter texture */

/* 15768 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 15770 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 15772 */	NdrFcShort( 0x688 ),	/* Type Offset=1672 */

	/* Parameter retVal */

/* 15774 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 15776 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 15778 */	NdrFcShort( 0x45c ),	/* Type Offset=1116 */

	/* Return value */

/* 15780 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 15782 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 15784 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure lineWidth */

/* 15786 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 15788 */	NdrFcLong( 0x0 ),	/* 0 */
/* 15792 */	NdrFcShort( 0x188 ),	/* 392 */
/* 15794 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 15796 */	NdrFcShort( 0x8 ),	/* 8 */
/* 15798 */	NdrFcShort( 0x8 ),	/* 8 */
/* 15800 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 15802 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 15804 */	NdrFcShort( 0x0 ),	/* 0 */
/* 15806 */	NdrFcShort( 0x0 ),	/* 0 */
/* 15808 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter width */

/* 15810 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 15812 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 15814 */	0xa,		/* FC_FLOAT */
			0x0,		/* 0 */

	/* Return value */

/* 15816 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 15818 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 15820 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure linkProgram */

/* 15822 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 15824 */	NdrFcLong( 0x0 ),	/* 0 */
/* 15828 */	NdrFcShort( 0x189 ),	/* 393 */
/* 15830 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 15832 */	NdrFcShort( 0x0 ),	/* 0 */
/* 15834 */	NdrFcShort( 0x8 ),	/* 8 */
/* 15836 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 15838 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 15840 */	NdrFcShort( 0x0 ),	/* 0 */
/* 15842 */	NdrFcShort( 0x0 ),	/* 0 */
/* 15844 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter program */

/* 15846 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 15848 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 15850 */	NdrFcShort( 0x69a ),	/* Type Offset=1690 */

	/* Return value */

/* 15852 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 15854 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 15856 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure pixelStorei */

/* 15858 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 15860 */	NdrFcLong( 0x0 ),	/* 0 */
/* 15864 */	NdrFcShort( 0x18a ),	/* 394 */
/* 15866 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 15868 */	NdrFcShort( 0x10 ),	/* 16 */
/* 15870 */	NdrFcShort( 0x8 ),	/* 8 */
/* 15872 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 15874 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 15876 */	NdrFcShort( 0x0 ),	/* 0 */
/* 15878 */	NdrFcShort( 0x0 ),	/* 0 */
/* 15880 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pname */

/* 15882 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 15884 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 15886 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter param */

/* 15888 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 15890 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 15892 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 15894 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 15896 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 15898 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure polygonOffset */

/* 15900 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 15902 */	NdrFcLong( 0x0 ),	/* 0 */
/* 15906 */	NdrFcShort( 0x18b ),	/* 395 */
/* 15908 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 15910 */	NdrFcShort( 0x10 ),	/* 16 */
/* 15912 */	NdrFcShort( 0x8 ),	/* 8 */
/* 15914 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 15916 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 15918 */	NdrFcShort( 0x0 ),	/* 0 */
/* 15920 */	NdrFcShort( 0x0 ),	/* 0 */
/* 15922 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter factor */

/* 15924 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 15926 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 15928 */	0xa,		/* FC_FLOAT */
			0x0,		/* 0 */

	/* Parameter units */

/* 15930 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 15932 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 15934 */	0xa,		/* FC_FLOAT */
			0x0,		/* 0 */

	/* Return value */

/* 15936 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 15938 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 15940 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure readPixels */

/* 15942 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 15944 */	NdrFcLong( 0x0 ),	/* 0 */
/* 15948 */	NdrFcShort( 0x18c ),	/* 396 */
/* 15950 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 15952 */	NdrFcShort( 0x30 ),	/* 48 */
/* 15954 */	NdrFcShort( 0x8 ),	/* 8 */
/* 15956 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x8,		/* 8 */
/* 15958 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 15960 */	NdrFcShort( 0x0 ),	/* 0 */
/* 15962 */	NdrFcShort( 0x0 ),	/* 0 */
/* 15964 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter x */

/* 15966 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 15968 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 15970 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter y */

/* 15972 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 15974 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 15976 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter width */

/* 15978 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 15980 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 15982 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter height */

/* 15984 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 15986 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 15988 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter format */

/* 15990 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 15992 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 15994 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter type */

/* 15996 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 15998 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 16000 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pixels */

/* 16002 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 16004 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 16006 */	NdrFcShort( 0x6ac ),	/* Type Offset=1708 */

	/* Return value */

/* 16008 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 16010 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 16012 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure renderbufferStorage */

/* 16014 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 16016 */	NdrFcLong( 0x0 ),	/* 0 */
/* 16020 */	NdrFcShort( 0x18d ),	/* 397 */
/* 16022 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 16024 */	NdrFcShort( 0x20 ),	/* 32 */
/* 16026 */	NdrFcShort( 0x8 ),	/* 8 */
/* 16028 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x5,		/* 5 */
/* 16030 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 16032 */	NdrFcShort( 0x0 ),	/* 0 */
/* 16034 */	NdrFcShort( 0x0 ),	/* 0 */
/* 16036 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter target */

/* 16038 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 16040 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 16042 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter internalformat */

/* 16044 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 16046 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 16048 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter width */

/* 16050 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 16052 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 16054 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter height */

/* 16056 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 16058 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 16060 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 16062 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 16064 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 16066 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure sampleCoverage */

/* 16068 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 16070 */	NdrFcLong( 0x0 ),	/* 0 */
/* 16074 */	NdrFcShort( 0x18e ),	/* 398 */
/* 16076 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 16078 */	NdrFcShort( 0x10 ),	/* 16 */
/* 16080 */	NdrFcShort( 0x8 ),	/* 8 */
/* 16082 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 16084 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 16086 */	NdrFcShort( 0x0 ),	/* 0 */
/* 16088 */	NdrFcShort( 0x0 ),	/* 0 */
/* 16090 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter value */

/* 16092 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 16094 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 16096 */	0xa,		/* FC_FLOAT */
			0x0,		/* 0 */

	/* Parameter invert */

/* 16098 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 16100 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 16102 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 16104 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 16106 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 16108 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure scissor */

/* 16110 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 16112 */	NdrFcLong( 0x0 ),	/* 0 */
/* 16116 */	NdrFcShort( 0x18f ),	/* 399 */
/* 16118 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 16120 */	NdrFcShort( 0x20 ),	/* 32 */
/* 16122 */	NdrFcShort( 0x8 ),	/* 8 */
/* 16124 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x5,		/* 5 */
/* 16126 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 16128 */	NdrFcShort( 0x0 ),	/* 0 */
/* 16130 */	NdrFcShort( 0x0 ),	/* 0 */
/* 16132 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter x */

/* 16134 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 16136 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 16138 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter y */

/* 16140 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 16142 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 16144 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter width */

/* 16146 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 16148 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 16150 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter height */

/* 16152 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 16154 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 16156 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 16158 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 16160 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 16162 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure shaderSource */

/* 16164 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 16166 */	NdrFcLong( 0x0 ),	/* 0 */
/* 16170 */	NdrFcShort( 0x190 ),	/* 400 */
/* 16172 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 16174 */	NdrFcShort( 0x0 ),	/* 0 */
/* 16176 */	NdrFcShort( 0x8 ),	/* 8 */
/* 16178 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 16180 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 16182 */	NdrFcShort( 0x0 ),	/* 0 */
/* 16184 */	NdrFcShort( 0x1 ),	/* 1 */
/* 16186 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter shader */

/* 16188 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 16190 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 16192 */	NdrFcShort( 0x676 ),	/* Type Offset=1654 */

	/* Parameter source */

/* 16194 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 16196 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 16198 */	NdrFcShort( 0x494 ),	/* Type Offset=1172 */

	/* Return value */

/* 16200 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 16202 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 16204 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure stencilFunc */

/* 16206 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 16208 */	NdrFcLong( 0x0 ),	/* 0 */
/* 16212 */	NdrFcShort( 0x191 ),	/* 401 */
/* 16214 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 16216 */	NdrFcShort( 0x18 ),	/* 24 */
/* 16218 */	NdrFcShort( 0x8 ),	/* 8 */
/* 16220 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 16222 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 16224 */	NdrFcShort( 0x0 ),	/* 0 */
/* 16226 */	NdrFcShort( 0x0 ),	/* 0 */
/* 16228 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter func */

/* 16230 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 16232 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 16234 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ref */

/* 16236 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 16238 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 16240 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter mask */

/* 16242 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 16244 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 16246 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 16248 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 16250 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 16252 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure stencilFuncSeparate */

/* 16254 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 16256 */	NdrFcLong( 0x0 ),	/* 0 */
/* 16260 */	NdrFcShort( 0x192 ),	/* 402 */
/* 16262 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 16264 */	NdrFcShort( 0x20 ),	/* 32 */
/* 16266 */	NdrFcShort( 0x8 ),	/* 8 */
/* 16268 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x5,		/* 5 */
/* 16270 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 16272 */	NdrFcShort( 0x0 ),	/* 0 */
/* 16274 */	NdrFcShort( 0x0 ),	/* 0 */
/* 16276 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter face */

/* 16278 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 16280 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 16282 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter func */

/* 16284 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 16286 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 16288 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ref */

/* 16290 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 16292 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 16294 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter mask */

/* 16296 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 16298 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 16300 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 16302 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 16304 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 16306 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure stencilMask */

/* 16308 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 16310 */	NdrFcLong( 0x0 ),	/* 0 */
/* 16314 */	NdrFcShort( 0x193 ),	/* 403 */
/* 16316 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 16318 */	NdrFcShort( 0x8 ),	/* 8 */
/* 16320 */	NdrFcShort( 0x8 ),	/* 8 */
/* 16322 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 16324 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 16326 */	NdrFcShort( 0x0 ),	/* 0 */
/* 16328 */	NdrFcShort( 0x0 ),	/* 0 */
/* 16330 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter mask */

/* 16332 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 16334 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 16336 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 16338 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 16340 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 16342 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure stencilMaskSeparate */

/* 16344 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 16346 */	NdrFcLong( 0x0 ),	/* 0 */
/* 16350 */	NdrFcShort( 0x194 ),	/* 404 */
/* 16352 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 16354 */	NdrFcShort( 0x10 ),	/* 16 */
/* 16356 */	NdrFcShort( 0x8 ),	/* 8 */
/* 16358 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 16360 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 16362 */	NdrFcShort( 0x0 ),	/* 0 */
/* 16364 */	NdrFcShort( 0x0 ),	/* 0 */
/* 16366 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter face */

/* 16368 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 16370 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 16372 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter mask */

/* 16374 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 16376 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 16378 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 16380 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 16382 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 16384 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure stencilOp */

/* 16386 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 16388 */	NdrFcLong( 0x0 ),	/* 0 */
/* 16392 */	NdrFcShort( 0x195 ),	/* 405 */
/* 16394 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 16396 */	NdrFcShort( 0x18 ),	/* 24 */
/* 16398 */	NdrFcShort( 0x8 ),	/* 8 */
/* 16400 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 16402 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 16404 */	NdrFcShort( 0x0 ),	/* 0 */
/* 16406 */	NdrFcShort( 0x0 ),	/* 0 */
/* 16408 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter fail */

/* 16410 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 16412 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 16414 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter zfail */

/* 16416 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 16418 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 16420 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter zpass */

/* 16422 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 16424 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 16426 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 16428 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 16430 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 16432 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure stencilOpSeparate */

/* 16434 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 16436 */	NdrFcLong( 0x0 ),	/* 0 */
/* 16440 */	NdrFcShort( 0x196 ),	/* 406 */
/* 16442 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 16444 */	NdrFcShort( 0x20 ),	/* 32 */
/* 16446 */	NdrFcShort( 0x8 ),	/* 8 */
/* 16448 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x5,		/* 5 */
/* 16450 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 16452 */	NdrFcShort( 0x0 ),	/* 0 */
/* 16454 */	NdrFcShort( 0x0 ),	/* 0 */
/* 16456 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter face */

/* 16458 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 16460 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 16462 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter fail */

/* 16464 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 16466 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 16468 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter zfail */

/* 16470 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 16472 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 16474 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter zpass */

/* 16476 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 16478 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 16480 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 16482 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 16484 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 16486 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure texImage2D */

/* 16488 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 16490 */	NdrFcLong( 0x0 ),	/* 0 */
/* 16494 */	NdrFcShort( 0x197 ),	/* 407 */
/* 16496 */	NdrFcShort( 0x74 ),	/* x86 Stack size/offset = 116 */
/* 16498 */	NdrFcShort( 0x18 ),	/* 24 */
/* 16500 */	NdrFcShort( 0x8 ),	/* 8 */
/* 16502 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0xa,		/* 10 */
/* 16504 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 16506 */	NdrFcShort( 0x0 ),	/* 0 */
/* 16508 */	NdrFcShort( 0x1 ),	/* 1 */
/* 16510 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter target */

/* 16512 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 16514 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 16516 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter level */

/* 16518 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 16520 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 16522 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter internalformat */

/* 16524 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 16526 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 16528 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg0 */

/* 16530 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 16532 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 16534 */	NdrFcShort( 0x434 ),	/* Type Offset=1076 */

	/* Parameter arg1 */

/* 16536 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 16538 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 16540 */	NdrFcShort( 0x434 ),	/* Type Offset=1076 */

	/* Parameter arg2 */

/* 16542 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 16544 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 16546 */	NdrFcShort( 0x434 ),	/* Type Offset=1076 */

	/* Parameter arg3 */

/* 16548 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 16550 */	NdrFcShort( 0x40 ),	/* x86 Stack size/offset = 64 */
/* 16552 */	NdrFcShort( 0x434 ),	/* Type Offset=1076 */

	/* Parameter arg4 */

/* 16554 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 16556 */	NdrFcShort( 0x50 ),	/* x86 Stack size/offset = 80 */
/* 16558 */	NdrFcShort( 0x434 ),	/* Type Offset=1076 */

	/* Parameter arg5 */

/* 16560 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 16562 */	NdrFcShort( 0x60 ),	/* x86 Stack size/offset = 96 */
/* 16564 */	NdrFcShort( 0x434 ),	/* Type Offset=1076 */

	/* Return value */

/* 16566 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 16568 */	NdrFcShort( 0x70 ),	/* x86 Stack size/offset = 112 */
/* 16570 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure texParameterf */

/* 16572 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 16574 */	NdrFcLong( 0x0 ),	/* 0 */
/* 16578 */	NdrFcShort( 0x198 ),	/* 408 */
/* 16580 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 16582 */	NdrFcShort( 0x18 ),	/* 24 */
/* 16584 */	NdrFcShort( 0x8 ),	/* 8 */
/* 16586 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 16588 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 16590 */	NdrFcShort( 0x0 ),	/* 0 */
/* 16592 */	NdrFcShort( 0x0 ),	/* 0 */
/* 16594 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter target */

/* 16596 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 16598 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 16600 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pname */

/* 16602 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 16604 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 16606 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter param */

/* 16608 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 16610 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 16612 */	0xa,		/* FC_FLOAT */
			0x0,		/* 0 */

	/* Return value */

/* 16614 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 16616 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 16618 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure texParameteri */

/* 16620 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 16622 */	NdrFcLong( 0x0 ),	/* 0 */
/* 16626 */	NdrFcShort( 0x199 ),	/* 409 */
/* 16628 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 16630 */	NdrFcShort( 0x18 ),	/* 24 */
/* 16632 */	NdrFcShort( 0x8 ),	/* 8 */
/* 16634 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 16636 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 16638 */	NdrFcShort( 0x0 ),	/* 0 */
/* 16640 */	NdrFcShort( 0x0 ),	/* 0 */
/* 16642 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter target */

/* 16644 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 16646 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 16648 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pname */

/* 16650 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 16652 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 16654 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter param */

/* 16656 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 16658 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 16660 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 16662 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 16664 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 16666 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure texSubImage2D */

/* 16668 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 16670 */	NdrFcLong( 0x0 ),	/* 0 */
/* 16674 */	NdrFcShort( 0x19a ),	/* 410 */
/* 16676 */	NdrFcShort( 0x68 ),	/* x86 Stack size/offset = 104 */
/* 16678 */	NdrFcShort( 0x20 ),	/* 32 */
/* 16680 */	NdrFcShort( 0x8 ),	/* 8 */
/* 16682 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0xa,		/* 10 */
/* 16684 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 16686 */	NdrFcShort( 0x0 ),	/* 0 */
/* 16688 */	NdrFcShort( 0x1 ),	/* 1 */
/* 16690 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter target */

/* 16692 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 16694 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 16696 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter level */

/* 16698 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 16700 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 16702 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter xoffset */

/* 16704 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 16706 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 16708 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter yoffset */

/* 16710 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 16712 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 16714 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg0 */

/* 16716 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 16718 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 16720 */	NdrFcShort( 0x434 ),	/* Type Offset=1076 */

	/* Parameter arg1 */

/* 16722 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 16724 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 16726 */	NdrFcShort( 0x434 ),	/* Type Offset=1076 */

	/* Parameter arg2 */

/* 16728 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 16730 */	NdrFcShort( 0x34 ),	/* x86 Stack size/offset = 52 */
/* 16732 */	NdrFcShort( 0x434 ),	/* Type Offset=1076 */

	/* Parameter arg3 */

/* 16734 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 16736 */	NdrFcShort( 0x44 ),	/* x86 Stack size/offset = 68 */
/* 16738 */	NdrFcShort( 0x434 ),	/* Type Offset=1076 */

	/* Parameter arg4 */

/* 16740 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 16742 */	NdrFcShort( 0x54 ),	/* x86 Stack size/offset = 84 */
/* 16744 */	NdrFcShort( 0x434 ),	/* Type Offset=1076 */

	/* Return value */

/* 16746 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 16748 */	NdrFcShort( 0x64 ),	/* x86 Stack size/offset = 100 */
/* 16750 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure uniform1f */

/* 16752 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 16754 */	NdrFcLong( 0x0 ),	/* 0 */
/* 16758 */	NdrFcShort( 0x19b ),	/* 411 */
/* 16760 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 16762 */	NdrFcShort( 0x8 ),	/* 8 */
/* 16764 */	NdrFcShort( 0x8 ),	/* 8 */
/* 16766 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 16768 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 16770 */	NdrFcShort( 0x0 ),	/* 0 */
/* 16772 */	NdrFcShort( 0x0 ),	/* 0 */
/* 16774 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter location */

/* 16776 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 16778 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 16780 */	NdrFcShort( 0x6be ),	/* Type Offset=1726 */

	/* Parameter x */

/* 16782 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 16784 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 16786 */	0xa,		/* FC_FLOAT */
			0x0,		/* 0 */

	/* Return value */

/* 16788 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 16790 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 16792 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure uniform1fv */

/* 16794 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 16796 */	NdrFcLong( 0x0 ),	/* 0 */
/* 16800 */	NdrFcShort( 0x19c ),	/* 412 */
/* 16802 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 16804 */	NdrFcShort( 0x0 ),	/* 0 */
/* 16806 */	NdrFcShort( 0x8 ),	/* 8 */
/* 16808 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 16810 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 16812 */	NdrFcShort( 0x0 ),	/* 0 */
/* 16814 */	NdrFcShort( 0x0 ),	/* 0 */
/* 16816 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter location */

/* 16818 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 16820 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 16822 */	NdrFcShort( 0x6be ),	/* Type Offset=1726 */

	/* Parameter v */

/* 16824 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 16826 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 16828 */	NdrFcShort( 0x6d0 ),	/* Type Offset=1744 */

	/* Return value */

/* 16830 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 16832 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 16834 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure uniform1i */

/* 16836 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 16838 */	NdrFcLong( 0x0 ),	/* 0 */
/* 16842 */	NdrFcShort( 0x19d ),	/* 413 */
/* 16844 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 16846 */	NdrFcShort( 0x8 ),	/* 8 */
/* 16848 */	NdrFcShort( 0x8 ),	/* 8 */
/* 16850 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 16852 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 16854 */	NdrFcShort( 0x0 ),	/* 0 */
/* 16856 */	NdrFcShort( 0x0 ),	/* 0 */
/* 16858 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter location */

/* 16860 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 16862 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 16864 */	NdrFcShort( 0x6be ),	/* Type Offset=1726 */

	/* Parameter x */

/* 16866 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 16868 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 16870 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 16872 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 16874 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 16876 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure uniform1iv */

/* 16878 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 16880 */	NdrFcLong( 0x0 ),	/* 0 */
/* 16884 */	NdrFcShort( 0x19e ),	/* 414 */
/* 16886 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 16888 */	NdrFcShort( 0x0 ),	/* 0 */
/* 16890 */	NdrFcShort( 0x8 ),	/* 8 */
/* 16892 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 16894 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 16896 */	NdrFcShort( 0x0 ),	/* 0 */
/* 16898 */	NdrFcShort( 0x0 ),	/* 0 */
/* 16900 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter location */

/* 16902 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 16904 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 16906 */	NdrFcShort( 0x6be ),	/* Type Offset=1726 */

	/* Parameter v */

/* 16908 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 16910 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 16912 */	NdrFcShort( 0x6d0 ),	/* Type Offset=1744 */

	/* Return value */

/* 16914 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 16916 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 16918 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure uniform2f */

/* 16920 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 16922 */	NdrFcLong( 0x0 ),	/* 0 */
/* 16926 */	NdrFcShort( 0x19f ),	/* 415 */
/* 16928 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 16930 */	NdrFcShort( 0x10 ),	/* 16 */
/* 16932 */	NdrFcShort( 0x8 ),	/* 8 */
/* 16934 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 16936 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 16938 */	NdrFcShort( 0x0 ),	/* 0 */
/* 16940 */	NdrFcShort( 0x0 ),	/* 0 */
/* 16942 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter location */

/* 16944 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 16946 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 16948 */	NdrFcShort( 0x6be ),	/* Type Offset=1726 */

	/* Parameter x */

/* 16950 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 16952 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 16954 */	0xa,		/* FC_FLOAT */
			0x0,		/* 0 */

	/* Parameter y */

/* 16956 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 16958 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 16960 */	0xa,		/* FC_FLOAT */
			0x0,		/* 0 */

	/* Return value */

/* 16962 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 16964 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 16966 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure uniform2fv */

/* 16968 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 16970 */	NdrFcLong( 0x0 ),	/* 0 */
/* 16974 */	NdrFcShort( 0x1a0 ),	/* 416 */
/* 16976 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 16978 */	NdrFcShort( 0x0 ),	/* 0 */
/* 16980 */	NdrFcShort( 0x8 ),	/* 8 */
/* 16982 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 16984 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 16986 */	NdrFcShort( 0x0 ),	/* 0 */
/* 16988 */	NdrFcShort( 0x0 ),	/* 0 */
/* 16990 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter location */

/* 16992 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 16994 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 16996 */	NdrFcShort( 0x6be ),	/* Type Offset=1726 */

	/* Parameter v */

/* 16998 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 17000 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 17002 */	NdrFcShort( 0x6d0 ),	/* Type Offset=1744 */

	/* Return value */

/* 17004 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 17006 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 17008 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure uniform2i */

/* 17010 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 17012 */	NdrFcLong( 0x0 ),	/* 0 */
/* 17016 */	NdrFcShort( 0x1a1 ),	/* 417 */
/* 17018 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 17020 */	NdrFcShort( 0x10 ),	/* 16 */
/* 17022 */	NdrFcShort( 0x8 ),	/* 8 */
/* 17024 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 17026 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 17028 */	NdrFcShort( 0x0 ),	/* 0 */
/* 17030 */	NdrFcShort( 0x0 ),	/* 0 */
/* 17032 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter location */

/* 17034 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 17036 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 17038 */	NdrFcShort( 0x6be ),	/* Type Offset=1726 */

	/* Parameter x */

/* 17040 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 17042 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 17044 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter y */

/* 17046 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 17048 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 17050 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 17052 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 17054 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 17056 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure uniform2iv */

/* 17058 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 17060 */	NdrFcLong( 0x0 ),	/* 0 */
/* 17064 */	NdrFcShort( 0x1a2 ),	/* 418 */
/* 17066 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 17068 */	NdrFcShort( 0x0 ),	/* 0 */
/* 17070 */	NdrFcShort( 0x8 ),	/* 8 */
/* 17072 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 17074 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 17076 */	NdrFcShort( 0x0 ),	/* 0 */
/* 17078 */	NdrFcShort( 0x0 ),	/* 0 */
/* 17080 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter location */

/* 17082 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 17084 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 17086 */	NdrFcShort( 0x6be ),	/* Type Offset=1726 */

	/* Parameter v */

/* 17088 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 17090 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 17092 */	NdrFcShort( 0x6d0 ),	/* Type Offset=1744 */

	/* Return value */

/* 17094 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 17096 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 17098 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure uniform3f */

/* 17100 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 17102 */	NdrFcLong( 0x0 ),	/* 0 */
/* 17106 */	NdrFcShort( 0x1a3 ),	/* 419 */
/* 17108 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 17110 */	NdrFcShort( 0x18 ),	/* 24 */
/* 17112 */	NdrFcShort( 0x8 ),	/* 8 */
/* 17114 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 17116 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 17118 */	NdrFcShort( 0x0 ),	/* 0 */
/* 17120 */	NdrFcShort( 0x0 ),	/* 0 */
/* 17122 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter location */

/* 17124 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 17126 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 17128 */	NdrFcShort( 0x6be ),	/* Type Offset=1726 */

	/* Parameter x */

/* 17130 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 17132 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 17134 */	0xa,		/* FC_FLOAT */
			0x0,		/* 0 */

	/* Parameter y */

/* 17136 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 17138 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 17140 */	0xa,		/* FC_FLOAT */
			0x0,		/* 0 */

	/* Parameter z */

/* 17142 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 17144 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 17146 */	0xa,		/* FC_FLOAT */
			0x0,		/* 0 */

	/* Return value */

/* 17148 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 17150 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 17152 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure uniform3fv */

/* 17154 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 17156 */	NdrFcLong( 0x0 ),	/* 0 */
/* 17160 */	NdrFcShort( 0x1a4 ),	/* 420 */
/* 17162 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 17164 */	NdrFcShort( 0x0 ),	/* 0 */
/* 17166 */	NdrFcShort( 0x8 ),	/* 8 */
/* 17168 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 17170 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 17172 */	NdrFcShort( 0x0 ),	/* 0 */
/* 17174 */	NdrFcShort( 0x0 ),	/* 0 */
/* 17176 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter location */

/* 17178 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 17180 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 17182 */	NdrFcShort( 0x6be ),	/* Type Offset=1726 */

	/* Parameter v */

/* 17184 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 17186 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 17188 */	NdrFcShort( 0x6d0 ),	/* Type Offset=1744 */

	/* Return value */

/* 17190 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 17192 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 17194 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure uniform3i */

/* 17196 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 17198 */	NdrFcLong( 0x0 ),	/* 0 */
/* 17202 */	NdrFcShort( 0x1a5 ),	/* 421 */
/* 17204 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 17206 */	NdrFcShort( 0x18 ),	/* 24 */
/* 17208 */	NdrFcShort( 0x8 ),	/* 8 */
/* 17210 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 17212 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 17214 */	NdrFcShort( 0x0 ),	/* 0 */
/* 17216 */	NdrFcShort( 0x0 ),	/* 0 */
/* 17218 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter location */

/* 17220 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 17222 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 17224 */	NdrFcShort( 0x6be ),	/* Type Offset=1726 */

	/* Parameter x */

/* 17226 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 17228 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 17230 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter y */

/* 17232 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 17234 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 17236 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter z */

/* 17238 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 17240 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 17242 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 17244 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 17246 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 17248 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure uniform3iv */

/* 17250 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 17252 */	NdrFcLong( 0x0 ),	/* 0 */
/* 17256 */	NdrFcShort( 0x1a6 ),	/* 422 */
/* 17258 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 17260 */	NdrFcShort( 0x0 ),	/* 0 */
/* 17262 */	NdrFcShort( 0x8 ),	/* 8 */
/* 17264 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 17266 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 17268 */	NdrFcShort( 0x0 ),	/* 0 */
/* 17270 */	NdrFcShort( 0x0 ),	/* 0 */
/* 17272 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter location */

/* 17274 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 17276 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 17278 */	NdrFcShort( 0x6be ),	/* Type Offset=1726 */

	/* Parameter v */

/* 17280 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 17282 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 17284 */	NdrFcShort( 0x6d0 ),	/* Type Offset=1744 */

	/* Return value */

/* 17286 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 17288 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 17290 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure uniform4f */

/* 17292 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 17294 */	NdrFcLong( 0x0 ),	/* 0 */
/* 17298 */	NdrFcShort( 0x1a7 ),	/* 423 */
/* 17300 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 17302 */	NdrFcShort( 0x20 ),	/* 32 */
/* 17304 */	NdrFcShort( 0x8 ),	/* 8 */
/* 17306 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 17308 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 17310 */	NdrFcShort( 0x0 ),	/* 0 */
/* 17312 */	NdrFcShort( 0x0 ),	/* 0 */
/* 17314 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter location */

/* 17316 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 17318 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 17320 */	NdrFcShort( 0x6be ),	/* Type Offset=1726 */

	/* Parameter x */

/* 17322 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 17324 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 17326 */	0xa,		/* FC_FLOAT */
			0x0,		/* 0 */

	/* Parameter y */

/* 17328 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 17330 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 17332 */	0xa,		/* FC_FLOAT */
			0x0,		/* 0 */

	/* Parameter z */

/* 17334 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 17336 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 17338 */	0xa,		/* FC_FLOAT */
			0x0,		/* 0 */

	/* Parameter w */

/* 17340 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 17342 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 17344 */	0xa,		/* FC_FLOAT */
			0x0,		/* 0 */

	/* Return value */

/* 17346 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 17348 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 17350 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure uniform4fv */

/* 17352 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 17354 */	NdrFcLong( 0x0 ),	/* 0 */
/* 17358 */	NdrFcShort( 0x1a8 ),	/* 424 */
/* 17360 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 17362 */	NdrFcShort( 0x0 ),	/* 0 */
/* 17364 */	NdrFcShort( 0x8 ),	/* 8 */
/* 17366 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 17368 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 17370 */	NdrFcShort( 0x0 ),	/* 0 */
/* 17372 */	NdrFcShort( 0x0 ),	/* 0 */
/* 17374 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter location */

/* 17376 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 17378 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 17380 */	NdrFcShort( 0x6be ),	/* Type Offset=1726 */

	/* Parameter v */

/* 17382 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 17384 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 17386 */	NdrFcShort( 0x6d0 ),	/* Type Offset=1744 */

	/* Return value */

/* 17388 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 17390 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 17392 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure uniform4i */

/* 17394 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 17396 */	NdrFcLong( 0x0 ),	/* 0 */
/* 17400 */	NdrFcShort( 0x1a9 ),	/* 425 */
/* 17402 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 17404 */	NdrFcShort( 0x20 ),	/* 32 */
/* 17406 */	NdrFcShort( 0x8 ),	/* 8 */
/* 17408 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 17410 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 17412 */	NdrFcShort( 0x0 ),	/* 0 */
/* 17414 */	NdrFcShort( 0x0 ),	/* 0 */
/* 17416 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter location */

/* 17418 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 17420 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 17422 */	NdrFcShort( 0x6be ),	/* Type Offset=1726 */

	/* Parameter x */

/* 17424 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 17426 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 17428 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter y */

/* 17430 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 17432 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 17434 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter z */

/* 17436 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 17438 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 17440 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter w */

/* 17442 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 17444 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 17446 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 17448 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 17450 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 17452 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure uniform4iv */

/* 17454 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 17456 */	NdrFcLong( 0x0 ),	/* 0 */
/* 17460 */	NdrFcShort( 0x1aa ),	/* 426 */
/* 17462 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 17464 */	NdrFcShort( 0x0 ),	/* 0 */
/* 17466 */	NdrFcShort( 0x8 ),	/* 8 */
/* 17468 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 17470 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 17472 */	NdrFcShort( 0x0 ),	/* 0 */
/* 17474 */	NdrFcShort( 0x0 ),	/* 0 */
/* 17476 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter location */

/* 17478 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 17480 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 17482 */	NdrFcShort( 0x6be ),	/* Type Offset=1726 */

	/* Parameter v */

/* 17484 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 17486 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 17488 */	NdrFcShort( 0x6d0 ),	/* Type Offset=1744 */

	/* Return value */

/* 17490 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 17492 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 17494 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure uniformMatrix2fv */

/* 17496 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 17498 */	NdrFcLong( 0x0 ),	/* 0 */
/* 17502 */	NdrFcShort( 0x1ab ),	/* 427 */
/* 17504 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 17506 */	NdrFcShort( 0x8 ),	/* 8 */
/* 17508 */	NdrFcShort( 0x8 ),	/* 8 */
/* 17510 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 17512 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 17514 */	NdrFcShort( 0x0 ),	/* 0 */
/* 17516 */	NdrFcShort( 0x0 ),	/* 0 */
/* 17518 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter location */

/* 17520 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 17522 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 17524 */	NdrFcShort( 0x6be ),	/* Type Offset=1726 */

	/* Parameter transpose */

/* 17526 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 17528 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 17530 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter value */

/* 17532 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 17534 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 17536 */	NdrFcShort( 0x6d0 ),	/* Type Offset=1744 */

	/* Return value */

/* 17538 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 17540 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 17542 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure uniformMatrix3fv */

/* 17544 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 17546 */	NdrFcLong( 0x0 ),	/* 0 */
/* 17550 */	NdrFcShort( 0x1ac ),	/* 428 */
/* 17552 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 17554 */	NdrFcShort( 0x8 ),	/* 8 */
/* 17556 */	NdrFcShort( 0x8 ),	/* 8 */
/* 17558 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 17560 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 17562 */	NdrFcShort( 0x0 ),	/* 0 */
/* 17564 */	NdrFcShort( 0x0 ),	/* 0 */
/* 17566 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter location */

/* 17568 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 17570 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 17572 */	NdrFcShort( 0x6be ),	/* Type Offset=1726 */

	/* Parameter transpose */

/* 17574 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 17576 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 17578 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter value */

/* 17580 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 17582 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 17584 */	NdrFcShort( 0x6d0 ),	/* Type Offset=1744 */

	/* Return value */

/* 17586 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 17588 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 17590 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure uniformMatrix4fv */

/* 17592 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 17594 */	NdrFcLong( 0x0 ),	/* 0 */
/* 17598 */	NdrFcShort( 0x1ad ),	/* 429 */
/* 17600 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 17602 */	NdrFcShort( 0x8 ),	/* 8 */
/* 17604 */	NdrFcShort( 0x8 ),	/* 8 */
/* 17606 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 17608 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 17610 */	NdrFcShort( 0x0 ),	/* 0 */
/* 17612 */	NdrFcShort( 0x0 ),	/* 0 */
/* 17614 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter location */

/* 17616 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 17618 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 17620 */	NdrFcShort( 0x6be ),	/* Type Offset=1726 */

	/* Parameter transpose */

/* 17622 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 17624 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 17626 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter value */

/* 17628 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 17630 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 17632 */	NdrFcShort( 0x6d0 ),	/* Type Offset=1744 */

	/* Return value */

/* 17634 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 17636 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 17638 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure useProgram */

/* 17640 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 17642 */	NdrFcLong( 0x0 ),	/* 0 */
/* 17646 */	NdrFcShort( 0x1ae ),	/* 430 */
/* 17648 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 17650 */	NdrFcShort( 0x0 ),	/* 0 */
/* 17652 */	NdrFcShort( 0x8 ),	/* 8 */
/* 17654 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 17656 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 17658 */	NdrFcShort( 0x0 ),	/* 0 */
/* 17660 */	NdrFcShort( 0x0 ),	/* 0 */
/* 17662 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter program */

/* 17664 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 17666 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 17668 */	NdrFcShort( 0x69a ),	/* Type Offset=1690 */

	/* Return value */

/* 17670 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 17672 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 17674 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure validateProgram */

/* 17676 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 17678 */	NdrFcLong( 0x0 ),	/* 0 */
/* 17682 */	NdrFcShort( 0x1af ),	/* 431 */
/* 17684 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 17686 */	NdrFcShort( 0x0 ),	/* 0 */
/* 17688 */	NdrFcShort( 0x8 ),	/* 8 */
/* 17690 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 17692 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 17694 */	NdrFcShort( 0x0 ),	/* 0 */
/* 17696 */	NdrFcShort( 0x0 ),	/* 0 */
/* 17698 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter program */

/* 17700 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 17702 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 17704 */	NdrFcShort( 0x69a ),	/* Type Offset=1690 */

	/* Return value */

/* 17706 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 17708 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 17710 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure vertexAttrib1f */

/* 17712 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 17714 */	NdrFcLong( 0x0 ),	/* 0 */
/* 17718 */	NdrFcShort( 0x1b0 ),	/* 432 */
/* 17720 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 17722 */	NdrFcShort( 0x10 ),	/* 16 */
/* 17724 */	NdrFcShort( 0x8 ),	/* 8 */
/* 17726 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 17728 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 17730 */	NdrFcShort( 0x0 ),	/* 0 */
/* 17732 */	NdrFcShort( 0x0 ),	/* 0 */
/* 17734 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter indx */

/* 17736 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 17738 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 17740 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter x */

/* 17742 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 17744 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 17746 */	0xa,		/* FC_FLOAT */
			0x0,		/* 0 */

	/* Return value */

/* 17748 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 17750 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 17752 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure vertexAttrib1fv */

/* 17754 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 17756 */	NdrFcLong( 0x0 ),	/* 0 */
/* 17760 */	NdrFcShort( 0x1b1 ),	/* 433 */
/* 17762 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 17764 */	NdrFcShort( 0x8 ),	/* 8 */
/* 17766 */	NdrFcShort( 0x8 ),	/* 8 */
/* 17768 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 17770 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 17772 */	NdrFcShort( 0x0 ),	/* 0 */
/* 17774 */	NdrFcShort( 0x0 ),	/* 0 */
/* 17776 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter indx */

/* 17778 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 17780 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 17782 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter v */

/* 17784 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 17786 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 17788 */	NdrFcShort( 0x6d0 ),	/* Type Offset=1744 */

	/* Return value */

/* 17790 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 17792 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 17794 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure vertexAttrib2f */

/* 17796 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 17798 */	NdrFcLong( 0x0 ),	/* 0 */
/* 17802 */	NdrFcShort( 0x1b2 ),	/* 434 */
/* 17804 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 17806 */	NdrFcShort( 0x18 ),	/* 24 */
/* 17808 */	NdrFcShort( 0x8 ),	/* 8 */
/* 17810 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 17812 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 17814 */	NdrFcShort( 0x0 ),	/* 0 */
/* 17816 */	NdrFcShort( 0x0 ),	/* 0 */
/* 17818 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter indx */

/* 17820 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 17822 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 17824 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter x */

/* 17826 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 17828 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 17830 */	0xa,		/* FC_FLOAT */
			0x0,		/* 0 */

	/* Parameter y */

/* 17832 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 17834 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 17836 */	0xa,		/* FC_FLOAT */
			0x0,		/* 0 */

	/* Return value */

/* 17838 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 17840 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 17842 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure vertexAttrib2fv */

/* 17844 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 17846 */	NdrFcLong( 0x0 ),	/* 0 */
/* 17850 */	NdrFcShort( 0x1b3 ),	/* 435 */
/* 17852 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 17854 */	NdrFcShort( 0x8 ),	/* 8 */
/* 17856 */	NdrFcShort( 0x8 ),	/* 8 */
/* 17858 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 17860 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 17862 */	NdrFcShort( 0x0 ),	/* 0 */
/* 17864 */	NdrFcShort( 0x0 ),	/* 0 */
/* 17866 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter indx */

/* 17868 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 17870 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 17872 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter v */

/* 17874 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 17876 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 17878 */	NdrFcShort( 0x6d0 ),	/* Type Offset=1744 */

	/* Return value */

/* 17880 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 17882 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 17884 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure vertexAttrib3f */

/* 17886 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 17888 */	NdrFcLong( 0x0 ),	/* 0 */
/* 17892 */	NdrFcShort( 0x1b4 ),	/* 436 */
/* 17894 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 17896 */	NdrFcShort( 0x20 ),	/* 32 */
/* 17898 */	NdrFcShort( 0x8 ),	/* 8 */
/* 17900 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x5,		/* 5 */
/* 17902 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 17904 */	NdrFcShort( 0x0 ),	/* 0 */
/* 17906 */	NdrFcShort( 0x0 ),	/* 0 */
/* 17908 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter indx */

/* 17910 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 17912 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 17914 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter x */

/* 17916 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 17918 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 17920 */	0xa,		/* FC_FLOAT */
			0x0,		/* 0 */

	/* Parameter y */

/* 17922 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 17924 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 17926 */	0xa,		/* FC_FLOAT */
			0x0,		/* 0 */

	/* Parameter z */

/* 17928 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 17930 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 17932 */	0xa,		/* FC_FLOAT */
			0x0,		/* 0 */

	/* Return value */

/* 17934 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 17936 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 17938 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure vertexAttrib3fv */

/* 17940 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 17942 */	NdrFcLong( 0x0 ),	/* 0 */
/* 17946 */	NdrFcShort( 0x1b5 ),	/* 437 */
/* 17948 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 17950 */	NdrFcShort( 0x8 ),	/* 8 */
/* 17952 */	NdrFcShort( 0x8 ),	/* 8 */
/* 17954 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 17956 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 17958 */	NdrFcShort( 0x0 ),	/* 0 */
/* 17960 */	NdrFcShort( 0x0 ),	/* 0 */
/* 17962 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter indx */

/* 17964 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 17966 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 17968 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter v */

/* 17970 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 17972 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 17974 */	NdrFcShort( 0x6d0 ),	/* Type Offset=1744 */

	/* Return value */

/* 17976 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 17978 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 17980 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure vertexAttrib4f */

/* 17982 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 17984 */	NdrFcLong( 0x0 ),	/* 0 */
/* 17988 */	NdrFcShort( 0x1b6 ),	/* 438 */
/* 17990 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 17992 */	NdrFcShort( 0x28 ),	/* 40 */
/* 17994 */	NdrFcShort( 0x8 ),	/* 8 */
/* 17996 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x6,		/* 6 */
/* 17998 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 18000 */	NdrFcShort( 0x0 ),	/* 0 */
/* 18002 */	NdrFcShort( 0x0 ),	/* 0 */
/* 18004 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter indx */

/* 18006 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 18008 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 18010 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter x */

/* 18012 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 18014 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 18016 */	0xa,		/* FC_FLOAT */
			0x0,		/* 0 */

	/* Parameter y */

/* 18018 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 18020 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 18022 */	0xa,		/* FC_FLOAT */
			0x0,		/* 0 */

	/* Parameter z */

/* 18024 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 18026 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 18028 */	0xa,		/* FC_FLOAT */
			0x0,		/* 0 */

	/* Parameter w */

/* 18030 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 18032 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 18034 */	0xa,		/* FC_FLOAT */
			0x0,		/* 0 */

	/* Return value */

/* 18036 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 18038 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 18040 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure vertexAttrib4fv */

/* 18042 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 18044 */	NdrFcLong( 0x0 ),	/* 0 */
/* 18048 */	NdrFcShort( 0x1b7 ),	/* 439 */
/* 18050 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 18052 */	NdrFcShort( 0x8 ),	/* 8 */
/* 18054 */	NdrFcShort( 0x8 ),	/* 8 */
/* 18056 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 18058 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 18060 */	NdrFcShort( 0x0 ),	/* 0 */
/* 18062 */	NdrFcShort( 0x0 ),	/* 0 */
/* 18064 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter indx */

/* 18066 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 18068 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 18070 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter v */

/* 18072 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 18074 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 18076 */	NdrFcShort( 0x6d0 ),	/* Type Offset=1744 */

	/* Return value */

/* 18078 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 18080 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 18082 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure vertexAttribPointer */

/* 18084 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 18086 */	NdrFcLong( 0x0 ),	/* 0 */
/* 18090 */	NdrFcShort( 0x1b8 ),	/* 440 */
/* 18092 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 18094 */	NdrFcShort( 0x30 ),	/* 48 */
/* 18096 */	NdrFcShort( 0x8 ),	/* 8 */
/* 18098 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x7,		/* 7 */
/* 18100 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 18102 */	NdrFcShort( 0x0 ),	/* 0 */
/* 18104 */	NdrFcShort( 0x0 ),	/* 0 */
/* 18106 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter indx */

/* 18108 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 18110 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 18112 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter size */

/* 18114 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 18116 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 18118 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter type */

/* 18120 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 18122 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 18124 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter normalized */

/* 18126 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 18128 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 18130 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter stride */

/* 18132 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 18134 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 18136 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter offset */

/* 18138 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 18140 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 18142 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 18144 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 18146 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 18148 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure __viewport */

/* 18150 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 18152 */	NdrFcLong( 0x0 ),	/* 0 */
/* 18156 */	NdrFcShort( 0x1b9 ),	/* 441 */
/* 18158 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 18160 */	NdrFcShort( 0x20 ),	/* 32 */
/* 18162 */	NdrFcShort( 0x8 ),	/* 8 */
/* 18164 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x5,		/* 5 */
/* 18166 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 18168 */	NdrFcShort( 0x0 ),	/* 0 */
/* 18170 */	NdrFcShort( 0x0 ),	/* 0 */
/* 18172 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter x */

/* 18174 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 18176 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 18178 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter y */

/* 18180 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 18182 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 18184 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter width */

/* 18186 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 18188 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 18190 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter height */

/* 18192 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 18194 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 18196 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 18198 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 18200 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 18202 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const WebGL_MIDL_TYPE_FORMAT_STRING WebGL__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */
/*  2 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/*  4 */	NdrFcShort( 0x1c ),	/* Offset= 28 (32) */
/*  6 */	
			0x13, 0x0,	/* FC_OP */
/*  8 */	NdrFcShort( 0xe ),	/* Offset= 14 (22) */
/* 10 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 12 */	NdrFcShort( 0x2 ),	/* 2 */
/* 14 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 16 */	NdrFcShort( 0xfffc ),	/* -4 */
/* 18 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 20 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 22 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 24 */	NdrFcShort( 0x8 ),	/* 8 */
/* 26 */	NdrFcShort( 0xfff0 ),	/* Offset= -16 (10) */
/* 28 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 30 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 32 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 34 */	NdrFcShort( 0x0 ),	/* 0 */
/* 36 */	NdrFcShort( 0x4 ),	/* 4 */
/* 38 */	NdrFcShort( 0x0 ),	/* 0 */
/* 40 */	NdrFcShort( 0xffde ),	/* Offset= -34 (6) */
/* 42 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 44 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 46 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 48 */	NdrFcShort( 0x2 ),	/* Offset= 2 (50) */
/* 50 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 52 */	0x1,		/* FC_BYTE */
			0x5c,		/* FC_PAD */
/* 54 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 56 */	NdrFcShort( 0x2 ),	/* Offset= 2 (58) */
/* 58 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 60 */	NdrFcLong( 0x2680d4e8 ),	/* 645977320 */
/* 64 */	NdrFcShort( 0x4474 ),	/* 17524 */
/* 66 */	NdrFcShort( 0x4b47 ),	/* 19271 */
/* 68 */	0x9e,		/* 158 */
			0x3f,		/* 63 */
/* 70 */	0x5,		/* 5 */
			0xf3,		/* 243 */
/* 72 */	0x85,		/* 133 */
			0xe9,		/* 233 */
/* 74 */	0xfc,		/* 252 */
			0xf8,		/* 248 */
/* 76 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 78 */	NdrFcLong( 0x20400 ),	/* 132096 */
/* 82 */	NdrFcShort( 0x0 ),	/* 0 */
/* 84 */	NdrFcShort( 0x0 ),	/* 0 */
/* 86 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 88 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 90 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 92 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 94 */	
			0x12, 0x0,	/* FC_UP */
/* 96 */	NdrFcShort( 0x3c0 ),	/* Offset= 960 (1056) */
/* 98 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 100 */	0x7,		/* Corr desc: FC_USHORT */
			0x0,		/*  */
/* 102 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 104 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 106 */	NdrFcShort( 0x2 ),	/* Offset= 2 (108) */
/* 108 */	NdrFcShort( 0x10 ),	/* 16 */
/* 110 */	NdrFcShort( 0x2f ),	/* 47 */
/* 112 */	NdrFcLong( 0x14 ),	/* 20 */
/* 116 */	NdrFcShort( 0x800b ),	/* Simple arm type: FC_HYPER */
/* 118 */	NdrFcLong( 0x3 ),	/* 3 */
/* 122 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 124 */	NdrFcLong( 0x11 ),	/* 17 */
/* 128 */	NdrFcShort( 0x8001 ),	/* Simple arm type: FC_BYTE */
/* 130 */	NdrFcLong( 0x2 ),	/* 2 */
/* 134 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 136 */	NdrFcLong( 0x4 ),	/* 4 */
/* 140 */	NdrFcShort( 0x800a ),	/* Simple arm type: FC_FLOAT */
/* 142 */	NdrFcLong( 0x5 ),	/* 5 */
/* 146 */	NdrFcShort( 0x800c ),	/* Simple arm type: FC_DOUBLE */
/* 148 */	NdrFcLong( 0xb ),	/* 11 */
/* 152 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 154 */	NdrFcLong( 0xa ),	/* 10 */
/* 158 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 160 */	NdrFcLong( 0x6 ),	/* 6 */
/* 164 */	NdrFcShort( 0xe8 ),	/* Offset= 232 (396) */
/* 166 */	NdrFcLong( 0x7 ),	/* 7 */
/* 170 */	NdrFcShort( 0x800c ),	/* Simple arm type: FC_DOUBLE */
/* 172 */	NdrFcLong( 0x8 ),	/* 8 */
/* 176 */	NdrFcShort( 0xe2 ),	/* Offset= 226 (402) */
/* 178 */	NdrFcLong( 0xd ),	/* 13 */
/* 182 */	NdrFcShort( 0xe0 ),	/* Offset= 224 (406) */
/* 184 */	NdrFcLong( 0x9 ),	/* 9 */
/* 188 */	NdrFcShort( 0xff90 ),	/* Offset= -112 (76) */
/* 190 */	NdrFcLong( 0x2000 ),	/* 8192 */
/* 194 */	NdrFcShort( 0xe6 ),	/* Offset= 230 (424) */
/* 196 */	NdrFcLong( 0x24 ),	/* 36 */
/* 200 */	NdrFcShort( 0x30e ),	/* Offset= 782 (982) */
/* 202 */	NdrFcLong( 0x4024 ),	/* 16420 */
/* 206 */	NdrFcShort( 0x308 ),	/* Offset= 776 (982) */
/* 208 */	NdrFcLong( 0x4011 ),	/* 16401 */
/* 212 */	NdrFcShort( 0x306 ),	/* Offset= 774 (986) */
/* 214 */	NdrFcLong( 0x4002 ),	/* 16386 */
/* 218 */	NdrFcShort( 0x304 ),	/* Offset= 772 (990) */
/* 220 */	NdrFcLong( 0x4003 ),	/* 16387 */
/* 224 */	NdrFcShort( 0x302 ),	/* Offset= 770 (994) */
/* 226 */	NdrFcLong( 0x4014 ),	/* 16404 */
/* 230 */	NdrFcShort( 0x300 ),	/* Offset= 768 (998) */
/* 232 */	NdrFcLong( 0x4004 ),	/* 16388 */
/* 236 */	NdrFcShort( 0x2fe ),	/* Offset= 766 (1002) */
/* 238 */	NdrFcLong( 0x4005 ),	/* 16389 */
/* 242 */	NdrFcShort( 0x2fc ),	/* Offset= 764 (1006) */
/* 244 */	NdrFcLong( 0x400b ),	/* 16395 */
/* 248 */	NdrFcShort( 0x2e6 ),	/* Offset= 742 (990) */
/* 250 */	NdrFcLong( 0x400a ),	/* 16394 */
/* 254 */	NdrFcShort( 0x2e4 ),	/* Offset= 740 (994) */
/* 256 */	NdrFcLong( 0x4006 ),	/* 16390 */
/* 260 */	NdrFcShort( 0x2ee ),	/* Offset= 750 (1010) */
/* 262 */	NdrFcLong( 0x4007 ),	/* 16391 */
/* 266 */	NdrFcShort( 0x2e4 ),	/* Offset= 740 (1006) */
/* 268 */	NdrFcLong( 0x4008 ),	/* 16392 */
/* 272 */	NdrFcShort( 0x2e6 ),	/* Offset= 742 (1014) */
/* 274 */	NdrFcLong( 0x400d ),	/* 16397 */
/* 278 */	NdrFcShort( 0x2e4 ),	/* Offset= 740 (1018) */
/* 280 */	NdrFcLong( 0x4009 ),	/* 16393 */
/* 284 */	NdrFcShort( 0x2e2 ),	/* Offset= 738 (1022) */
/* 286 */	NdrFcLong( 0x6000 ),	/* 24576 */
/* 290 */	NdrFcShort( 0x2e0 ),	/* Offset= 736 (1026) */
/* 292 */	NdrFcLong( 0x400c ),	/* 16396 */
/* 296 */	NdrFcShort( 0x2de ),	/* Offset= 734 (1030) */
/* 298 */	NdrFcLong( 0x10 ),	/* 16 */
/* 302 */	NdrFcShort( 0x8002 ),	/* Simple arm type: FC_CHAR */
/* 304 */	NdrFcLong( 0x12 ),	/* 18 */
/* 308 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 310 */	NdrFcLong( 0x13 ),	/* 19 */
/* 314 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 316 */	NdrFcLong( 0x15 ),	/* 21 */
/* 320 */	NdrFcShort( 0x800b ),	/* Simple arm type: FC_HYPER */
/* 322 */	NdrFcLong( 0x16 ),	/* 22 */
/* 326 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 328 */	NdrFcLong( 0x17 ),	/* 23 */
/* 332 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 334 */	NdrFcLong( 0xe ),	/* 14 */
/* 338 */	NdrFcShort( 0x2bc ),	/* Offset= 700 (1038) */
/* 340 */	NdrFcLong( 0x400e ),	/* 16398 */
/* 344 */	NdrFcShort( 0x2c0 ),	/* Offset= 704 (1048) */
/* 346 */	NdrFcLong( 0x4010 ),	/* 16400 */
/* 350 */	NdrFcShort( 0x2be ),	/* Offset= 702 (1052) */
/* 352 */	NdrFcLong( 0x4012 ),	/* 16402 */
/* 356 */	NdrFcShort( 0x27a ),	/* Offset= 634 (990) */
/* 358 */	NdrFcLong( 0x4013 ),	/* 16403 */
/* 362 */	NdrFcShort( 0x278 ),	/* Offset= 632 (994) */
/* 364 */	NdrFcLong( 0x4015 ),	/* 16405 */
/* 368 */	NdrFcShort( 0x276 ),	/* Offset= 630 (998) */
/* 370 */	NdrFcLong( 0x4016 ),	/* 16406 */
/* 374 */	NdrFcShort( 0x26c ),	/* Offset= 620 (994) */
/* 376 */	NdrFcLong( 0x4017 ),	/* 16407 */
/* 380 */	NdrFcShort( 0x266 ),	/* Offset= 614 (994) */
/* 382 */	NdrFcLong( 0x0 ),	/* 0 */
/* 386 */	NdrFcShort( 0x0 ),	/* Offset= 0 (386) */
/* 388 */	NdrFcLong( 0x1 ),	/* 1 */
/* 392 */	NdrFcShort( 0x0 ),	/* Offset= 0 (392) */
/* 394 */	NdrFcShort( 0xffff ),	/* Offset= -1 (393) */
/* 396 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 398 */	NdrFcShort( 0x8 ),	/* 8 */
/* 400 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 402 */	
			0x12, 0x0,	/* FC_UP */
/* 404 */	NdrFcShort( 0xfe82 ),	/* Offset= -382 (22) */
/* 406 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 408 */	NdrFcLong( 0x0 ),	/* 0 */
/* 412 */	NdrFcShort( 0x0 ),	/* 0 */
/* 414 */	NdrFcShort( 0x0 ),	/* 0 */
/* 416 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 418 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 420 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 422 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 424 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 426 */	NdrFcShort( 0x2 ),	/* Offset= 2 (428) */
/* 428 */	
			0x12, 0x0,	/* FC_UP */
/* 430 */	NdrFcShort( 0x216 ),	/* Offset= 534 (964) */
/* 432 */	
			0x2a,		/* FC_ENCAPSULATED_UNION */
			0x49,		/* 73 */
/* 434 */	NdrFcShort( 0x18 ),	/* 24 */
/* 436 */	NdrFcShort( 0xa ),	/* 10 */
/* 438 */	NdrFcLong( 0x8 ),	/* 8 */
/* 442 */	NdrFcShort( 0x5a ),	/* Offset= 90 (532) */
/* 444 */	NdrFcLong( 0xd ),	/* 13 */
/* 448 */	NdrFcShort( 0x7e ),	/* Offset= 126 (574) */
/* 450 */	NdrFcLong( 0x9 ),	/* 9 */
/* 454 */	NdrFcShort( 0x9e ),	/* Offset= 158 (612) */
/* 456 */	NdrFcLong( 0xc ),	/* 12 */
/* 460 */	NdrFcShort( 0xc8 ),	/* Offset= 200 (660) */
/* 462 */	NdrFcLong( 0x24 ),	/* 36 */
/* 466 */	NdrFcShort( 0x124 ),	/* Offset= 292 (758) */
/* 468 */	NdrFcLong( 0x800d ),	/* 32781 */
/* 472 */	NdrFcShort( 0x140 ),	/* Offset= 320 (792) */
/* 474 */	NdrFcLong( 0x10 ),	/* 16 */
/* 478 */	NdrFcShort( 0x15a ),	/* Offset= 346 (824) */
/* 480 */	NdrFcLong( 0x2 ),	/* 2 */
/* 484 */	NdrFcShort( 0x174 ),	/* Offset= 372 (856) */
/* 486 */	NdrFcLong( 0x3 ),	/* 3 */
/* 490 */	NdrFcShort( 0x18e ),	/* Offset= 398 (888) */
/* 492 */	NdrFcLong( 0x14 ),	/* 20 */
/* 496 */	NdrFcShort( 0x1a8 ),	/* Offset= 424 (920) */
/* 498 */	NdrFcShort( 0xffff ),	/* Offset= -1 (497) */
/* 500 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 502 */	NdrFcShort( 0x4 ),	/* 4 */
/* 504 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 506 */	NdrFcShort( 0x0 ),	/* 0 */
/* 508 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 510 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 512 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 514 */	NdrFcShort( 0x4 ),	/* 4 */
/* 516 */	NdrFcShort( 0x0 ),	/* 0 */
/* 518 */	NdrFcShort( 0x1 ),	/* 1 */
/* 520 */	NdrFcShort( 0x0 ),	/* 0 */
/* 522 */	NdrFcShort( 0x0 ),	/* 0 */
/* 524 */	0x12, 0x0,	/* FC_UP */
/* 526 */	NdrFcShort( 0xfe08 ),	/* Offset= -504 (22) */
/* 528 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 530 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 532 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 534 */	NdrFcShort( 0x8 ),	/* 8 */
/* 536 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 538 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 540 */	NdrFcShort( 0x4 ),	/* 4 */
/* 542 */	NdrFcShort( 0x4 ),	/* 4 */
/* 544 */	0x11, 0x0,	/* FC_RP */
/* 546 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (500) */
/* 548 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 550 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 552 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 554 */	NdrFcShort( 0x0 ),	/* 0 */
/* 556 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 558 */	NdrFcShort( 0x0 ),	/* 0 */
/* 560 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 562 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 566 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 568 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 570 */	NdrFcShort( 0xff5c ),	/* Offset= -164 (406) */
/* 572 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 574 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 576 */	NdrFcShort( 0x8 ),	/* 8 */
/* 578 */	NdrFcShort( 0x0 ),	/* 0 */
/* 580 */	NdrFcShort( 0x6 ),	/* Offset= 6 (586) */
/* 582 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 584 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 586 */	
			0x11, 0x0,	/* FC_RP */
/* 588 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (552) */
/* 590 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 592 */	NdrFcShort( 0x0 ),	/* 0 */
/* 594 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 596 */	NdrFcShort( 0x0 ),	/* 0 */
/* 598 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 600 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 604 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 606 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 608 */	NdrFcShort( 0xfdec ),	/* Offset= -532 (76) */
/* 610 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 612 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 614 */	NdrFcShort( 0x8 ),	/* 8 */
/* 616 */	NdrFcShort( 0x0 ),	/* 0 */
/* 618 */	NdrFcShort( 0x6 ),	/* Offset= 6 (624) */
/* 620 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 622 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 624 */	
			0x11, 0x0,	/* FC_RP */
/* 626 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (590) */
/* 628 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 630 */	NdrFcShort( 0x4 ),	/* 4 */
/* 632 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 634 */	NdrFcShort( 0x0 ),	/* 0 */
/* 636 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 638 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 640 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 642 */	NdrFcShort( 0x4 ),	/* 4 */
/* 644 */	NdrFcShort( 0x0 ),	/* 0 */
/* 646 */	NdrFcShort( 0x1 ),	/* 1 */
/* 648 */	NdrFcShort( 0x0 ),	/* 0 */
/* 650 */	NdrFcShort( 0x0 ),	/* 0 */
/* 652 */	0x12, 0x0,	/* FC_UP */
/* 654 */	NdrFcShort( 0x192 ),	/* Offset= 402 (1056) */
/* 656 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 658 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 660 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 662 */	NdrFcShort( 0x8 ),	/* 8 */
/* 664 */	NdrFcShort( 0x0 ),	/* 0 */
/* 666 */	NdrFcShort( 0x6 ),	/* Offset= 6 (672) */
/* 668 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 670 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 672 */	
			0x11, 0x0,	/* FC_RP */
/* 674 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (628) */
/* 676 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 678 */	NdrFcLong( 0x2f ),	/* 47 */
/* 682 */	NdrFcShort( 0x0 ),	/* 0 */
/* 684 */	NdrFcShort( 0x0 ),	/* 0 */
/* 686 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 688 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 690 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 692 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 694 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 696 */	NdrFcShort( 0x1 ),	/* 1 */
/* 698 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 700 */	NdrFcShort( 0x4 ),	/* 4 */
/* 702 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 704 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 706 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 708 */	NdrFcShort( 0x10 ),	/* 16 */
/* 710 */	NdrFcShort( 0x0 ),	/* 0 */
/* 712 */	NdrFcShort( 0xa ),	/* Offset= 10 (722) */
/* 714 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 716 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 718 */	NdrFcShort( 0xffd6 ),	/* Offset= -42 (676) */
/* 720 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 722 */	
			0x12, 0x0,	/* FC_UP */
/* 724 */	NdrFcShort( 0xffe2 ),	/* Offset= -30 (694) */
/* 726 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 728 */	NdrFcShort( 0x4 ),	/* 4 */
/* 730 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 732 */	NdrFcShort( 0x0 ),	/* 0 */
/* 734 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 736 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 738 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 740 */	NdrFcShort( 0x4 ),	/* 4 */
/* 742 */	NdrFcShort( 0x0 ),	/* 0 */
/* 744 */	NdrFcShort( 0x1 ),	/* 1 */
/* 746 */	NdrFcShort( 0x0 ),	/* 0 */
/* 748 */	NdrFcShort( 0x0 ),	/* 0 */
/* 750 */	0x12, 0x0,	/* FC_UP */
/* 752 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (706) */
/* 754 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 756 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 758 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 760 */	NdrFcShort( 0x8 ),	/* 8 */
/* 762 */	NdrFcShort( 0x0 ),	/* 0 */
/* 764 */	NdrFcShort( 0x6 ),	/* Offset= 6 (770) */
/* 766 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 768 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 770 */	
			0x11, 0x0,	/* FC_RP */
/* 772 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (726) */
/* 774 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 776 */	NdrFcShort( 0x8 ),	/* 8 */
/* 778 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 780 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 782 */	NdrFcShort( 0x10 ),	/* 16 */
/* 784 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 786 */	0x6,		/* FC_SHORT */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 788 */	0x0,		/* 0 */
			NdrFcShort( 0xfff1 ),	/* Offset= -15 (774) */
			0x5b,		/* FC_END */
/* 792 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 794 */	NdrFcShort( 0x18 ),	/* 24 */
/* 796 */	NdrFcShort( 0x0 ),	/* 0 */
/* 798 */	NdrFcShort( 0xa ),	/* Offset= 10 (808) */
/* 800 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 802 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 804 */	NdrFcShort( 0xffe8 ),	/* Offset= -24 (780) */
/* 806 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 808 */	
			0x11, 0x0,	/* FC_RP */
/* 810 */	NdrFcShort( 0xfefe ),	/* Offset= -258 (552) */
/* 812 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 814 */	NdrFcShort( 0x1 ),	/* 1 */
/* 816 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 818 */	NdrFcShort( 0x0 ),	/* 0 */
/* 820 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 822 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 824 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 826 */	NdrFcShort( 0x8 ),	/* 8 */
/* 828 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 830 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 832 */	NdrFcShort( 0x4 ),	/* 4 */
/* 834 */	NdrFcShort( 0x4 ),	/* 4 */
/* 836 */	0x12, 0x0,	/* FC_UP */
/* 838 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (812) */
/* 840 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 842 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 844 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 846 */	NdrFcShort( 0x2 ),	/* 2 */
/* 848 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 850 */	NdrFcShort( 0x0 ),	/* 0 */
/* 852 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 854 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 856 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 858 */	NdrFcShort( 0x8 ),	/* 8 */
/* 860 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 862 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 864 */	NdrFcShort( 0x4 ),	/* 4 */
/* 866 */	NdrFcShort( 0x4 ),	/* 4 */
/* 868 */	0x12, 0x0,	/* FC_UP */
/* 870 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (844) */
/* 872 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 874 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 876 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 878 */	NdrFcShort( 0x4 ),	/* 4 */
/* 880 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 882 */	NdrFcShort( 0x0 ),	/* 0 */
/* 884 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 886 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 888 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 890 */	NdrFcShort( 0x8 ),	/* 8 */
/* 892 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 894 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 896 */	NdrFcShort( 0x4 ),	/* 4 */
/* 898 */	NdrFcShort( 0x4 ),	/* 4 */
/* 900 */	0x12, 0x0,	/* FC_UP */
/* 902 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (876) */
/* 904 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 906 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 908 */	
			0x1b,		/* FC_CARRAY */
			0x7,		/* 7 */
/* 910 */	NdrFcShort( 0x8 ),	/* 8 */
/* 912 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 914 */	NdrFcShort( 0x0 ),	/* 0 */
/* 916 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 918 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 920 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 922 */	NdrFcShort( 0x8 ),	/* 8 */
/* 924 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 926 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 928 */	NdrFcShort( 0x4 ),	/* 4 */
/* 930 */	NdrFcShort( 0x4 ),	/* 4 */
/* 932 */	0x12, 0x0,	/* FC_UP */
/* 934 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (908) */
/* 936 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 938 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 940 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 942 */	NdrFcShort( 0x8 ),	/* 8 */
/* 944 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 946 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 948 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 950 */	NdrFcShort( 0x8 ),	/* 8 */
/* 952 */	0x7,		/* Corr desc: FC_USHORT */
			0x0,		/*  */
/* 954 */	NdrFcShort( 0xffd8 ),	/* -40 */
/* 956 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 958 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 960 */	NdrFcShort( 0xffec ),	/* Offset= -20 (940) */
/* 962 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 964 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 966 */	NdrFcShort( 0x28 ),	/* 40 */
/* 968 */	NdrFcShort( 0xffec ),	/* Offset= -20 (948) */
/* 970 */	NdrFcShort( 0x0 ),	/* Offset= 0 (970) */
/* 972 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 974 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 976 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 978 */	NdrFcShort( 0xfdde ),	/* Offset= -546 (432) */
/* 980 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 982 */	
			0x12, 0x0,	/* FC_UP */
/* 984 */	NdrFcShort( 0xfeea ),	/* Offset= -278 (706) */
/* 986 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 988 */	0x1,		/* FC_BYTE */
			0x5c,		/* FC_PAD */
/* 990 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 992 */	0x6,		/* FC_SHORT */
			0x5c,		/* FC_PAD */
/* 994 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 996 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 998 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1000 */	0xb,		/* FC_HYPER */
			0x5c,		/* FC_PAD */
/* 1002 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1004 */	0xa,		/* FC_FLOAT */
			0x5c,		/* FC_PAD */
/* 1006 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1008 */	0xc,		/* FC_DOUBLE */
			0x5c,		/* FC_PAD */
/* 1010 */	
			0x12, 0x0,	/* FC_UP */
/* 1012 */	NdrFcShort( 0xfd98 ),	/* Offset= -616 (396) */
/* 1014 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 1016 */	NdrFcShort( 0xfd9a ),	/* Offset= -614 (402) */
/* 1018 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 1020 */	NdrFcShort( 0xfd9a ),	/* Offset= -614 (406) */
/* 1022 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 1024 */	NdrFcShort( 0xfc4c ),	/* Offset= -948 (76) */
/* 1026 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 1028 */	NdrFcShort( 0xfda4 ),	/* Offset= -604 (424) */
/* 1030 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 1032 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1034) */
/* 1034 */	
			0x12, 0x0,	/* FC_UP */
/* 1036 */	NdrFcShort( 0x14 ),	/* Offset= 20 (1056) */
/* 1038 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 1040 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1042 */	0x6,		/* FC_SHORT */
			0x1,		/* FC_BYTE */
/* 1044 */	0x1,		/* FC_BYTE */
			0x8,		/* FC_LONG */
/* 1046 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 1048 */	
			0x12, 0x0,	/* FC_UP */
/* 1050 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (1038) */
/* 1052 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1054 */	0x2,		/* FC_CHAR */
			0x5c,		/* FC_PAD */
/* 1056 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 1058 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1060 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1062 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1062) */
/* 1064 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1066 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 1068 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 1070 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1072 */	NdrFcShort( 0xfc32 ),	/* Offset= -974 (98) */
/* 1074 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1076 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1078 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1080 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1082 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1084 */	NdrFcShort( 0xfc22 ),	/* Offset= -990 (94) */
/* 1086 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1088 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1090) */
/* 1090 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1092 */	NdrFcLong( 0xcf72ad82 ),	/* -814568062 */
/* 1096 */	NdrFcShort( 0x359f ),	/* 13727 */
/* 1098 */	NdrFcShort( 0x432a ),	/* 17194 */
/* 1100 */	0x9e,		/* 158 */
			0xd6,		/* 214 */
/* 1102 */	0x58,		/* 88 */
			0x98,		/* 152 */
/* 1104 */	0x30,		/* 48 */
			0x41,		/* 65 */
/* 1106 */	0x87,		/* 135 */
			0x51,		/* 81 */
/* 1108 */	0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 1110 */	NdrFcShort( 0x6 ),	/* Offset= 6 (1116) */
/* 1112 */	
			0x13, 0x0,	/* FC_OP */
/* 1114 */	NdrFcShort( 0xffc6 ),	/* Offset= -58 (1056) */
/* 1116 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1118 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1120 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1122 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1124 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (1112) */
/* 1126 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 1128 */	0x3,		/* FC_SMALL */
			0x5c,		/* FC_PAD */
/* 1130 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 1132 */	0x2,		/* FC_CHAR */
			0x5c,		/* FC_PAD */
/* 1134 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 1136 */	0x6,		/* FC_SHORT */
			0x5c,		/* FC_PAD */
/* 1138 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 1140 */	0xa,		/* FC_FLOAT */
			0x5c,		/* FC_PAD */
/* 1142 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 1144 */	0xc,		/* FC_DOUBLE */
			0x5c,		/* FC_PAD */
/* 1146 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1148 */	NdrFcShort( 0xfbd0 ),	/* Offset= -1072 (76) */
/* 1150 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1152 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1154) */
/* 1154 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1156 */	NdrFcLong( 0x76e43b1a ),	/* 1994668826 */
/* 1160 */	NdrFcShort( 0x9d20 ),	/* -25312 */
/* 1162 */	NdrFcShort( 0x4c64 ),	/* 19556 */
/* 1164 */	0xbd,		/* 189 */
			0x58,		/* 88 */
/* 1166 */	0xbc,		/* 188 */
			0xdd,		/* 221 */
/* 1168 */	0x21,		/* 33 */
			0xb8,		/* 184 */
/* 1170 */	0xa8,		/* 168 */
			0xa9,		/* 169 */
/* 1172 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1174 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1176 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1178 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1180 */	NdrFcShort( 0xfcf6 ),	/* Offset= -778 (402) */
/* 1182 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1184 */	NdrFcLong( 0xe6f9dd9e ),	/* -419832418 */
/* 1188 */	NdrFcShort( 0xa066 ),	/* -24474 */
/* 1190 */	NdrFcShort( 0x4fbf ),	/* 20415 */
/* 1192 */	0xb2,		/* 178 */
			0x52,		/* 82 */
/* 1194 */	0x71,		/* 113 */
			0x20,		/* 32 */
/* 1196 */	0x0,		/* 0 */
			0x7a,		/* 122 */
/* 1198 */	0x49,		/* 73 */
			0xc5,		/* 197 */
/* 1200 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1202 */	NdrFcLong( 0x1d7536f5 ),	/* 494221045 */
/* 1206 */	NdrFcShort( 0x82a5 ),	/* -32091 */
/* 1208 */	NdrFcShort( 0x4a36 ),	/* 18998 */
/* 1210 */	0x8f,		/* 143 */
			0x95,		/* 149 */
/* 1212 */	0xc5,		/* 197 */
			0xc4,		/* 196 */
/* 1214 */	0xbc,		/* 188 */
			0xe1,		/* 225 */
/* 1216 */	0xd4,		/* 212 */
			0x10,		/* 16 */
/* 1218 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1220 */	NdrFcLong( 0xf0c3a028 ),	/* -255614936 */
/* 1224 */	NdrFcShort( 0x4b0f ),	/* 19215 */
/* 1226 */	NdrFcShort( 0x40b9 ),	/* 16569 */
/* 1228 */	0xa8,		/* 168 */
			0x1d,		/* 29 */
/* 1230 */	0x38,		/* 56 */
			0x94,		/* 148 */
/* 1232 */	0xd6,		/* 214 */
			0x2b,		/* 43 */
/* 1234 */	0xcb,		/* 203 */
			0xef,		/* 239 */
/* 1236 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1238 */	NdrFcLong( 0x60b196e5 ),	/* 1622251237 */
/* 1242 */	NdrFcShort( 0xb244 ),	/* -19900 */
/* 1244 */	NdrFcShort( 0x4216 ),	/* 16918 */
/* 1246 */	0x9f,		/* 159 */
			0x4c,		/* 76 */
/* 1248 */	0xd6,		/* 214 */
			0x83,		/* 131 */
/* 1250 */	0x9e,		/* 158 */
			0xb1,		/* 177 */
/* 1252 */	0x29,		/* 41 */
			0x7d,		/* 125 */
/* 1254 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1256 */	NdrFcLong( 0x66fd3a8f ),	/* 1727871631 */
/* 1260 */	NdrFcShort( 0xbd05 ),	/* -17147 */
/* 1262 */	NdrFcShort( 0x4f92 ),	/* 20370 */
/* 1264 */	0x90,		/* 144 */
			0xfb,		/* 251 */
/* 1266 */	0xb0,		/* 176 */
			0xcc,		/* 204 */
/* 1268 */	0x42,		/* 66 */
			0x5f,		/* 95 */
/* 1270 */	0xe2,		/* 226 */
			0x93,		/* 147 */
/* 1272 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1274 */	NdrFcLong( 0x3db713cf ),	/* 1035408335 */
/* 1278 */	NdrFcShort( 0x263b ),	/* 9787 */
/* 1280 */	NdrFcShort( 0x4aaf ),	/* 19119 */
/* 1282 */	0xb1,		/* 177 */
			0x7,		/* 7 */
/* 1284 */	0xb,		/* 11 */
			0xc4,		/* 196 */
/* 1286 */	0x51,		/* 81 */
			0x5b,		/* 91 */
/* 1288 */	0xae,		/* 174 */
			0x84,		/* 132 */
/* 1290 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1292 */	NdrFcLong( 0x20ba6882 ),	/* 549087362 */
/* 1296 */	NdrFcShort( 0x1cc8 ),	/* 7368 */
/* 1298 */	NdrFcShort( 0x4e86 ),	/* 20102 */
/* 1300 */	0xab,		/* 171 */
			0x77,		/* 119 */
/* 1302 */	0x4e,		/* 78 */
			0xff,		/* 255 */
/* 1304 */	0x85,		/* 133 */
			0xf6,		/* 246 */
/* 1306 */	0xc0,		/* 192 */
			0xc3,		/* 195 */
/* 1308 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1310 */	NdrFcShort( 0xffa4 ),	/* Offset= -92 (1218) */
/* 1312 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1314 */	NdrFcShort( 0xffb2 ),	/* Offset= -78 (1236) */
/* 1316 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1318 */	NdrFcShort( 0xff78 ),	/* Offset= -136 (1182) */
/* 1320 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1322 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1324) */
/* 1324 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1326 */	NdrFcLong( 0x66fd3a8f ),	/* 1727871631 */
/* 1330 */	NdrFcShort( 0xbd05 ),	/* -17147 */
/* 1332 */	NdrFcShort( 0x4f92 ),	/* 20370 */
/* 1334 */	0x90,		/* 144 */
			0xfb,		/* 251 */
/* 1336 */	0xb0,		/* 176 */
			0xcc,		/* 204 */
/* 1338 */	0x42,		/* 66 */
			0x5f,		/* 95 */
/* 1340 */	0xe2,		/* 226 */
			0x93,		/* 147 */
/* 1342 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1344 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1346) */
/* 1346 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1348 */	NdrFcLong( 0x1d7536f5 ),	/* 494221045 */
/* 1352 */	NdrFcShort( 0x82a5 ),	/* -32091 */
/* 1354 */	NdrFcShort( 0x4a36 ),	/* 18998 */
/* 1356 */	0x8f,		/* 143 */
			0x95,		/* 149 */
/* 1358 */	0xc5,		/* 197 */
			0xc4,		/* 196 */
/* 1360 */	0xbc,		/* 188 */
			0xe1,		/* 225 */
/* 1362 */	0xd4,		/* 212 */
			0x10,		/* 16 */
/* 1364 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1366 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1368) */
/* 1368 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1370 */	NdrFcLong( 0x3db713cf ),	/* 1035408335 */
/* 1374 */	NdrFcShort( 0x263b ),	/* 9787 */
/* 1376 */	NdrFcShort( 0x4aaf ),	/* 19119 */
/* 1378 */	0xb1,		/* 177 */
			0x7,		/* 7 */
/* 1380 */	0xb,		/* 11 */
			0xc4,		/* 196 */
/* 1382 */	0x51,		/* 81 */
			0x5b,		/* 91 */
/* 1384 */	0xae,		/* 174 */
			0x84,		/* 132 */
/* 1386 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1388 */	NdrFcLong( 0xf0c3a028 ),	/* -255614936 */
/* 1392 */	NdrFcShort( 0x4b0f ),	/* 19215 */
/* 1394 */	NdrFcShort( 0x40b9 ),	/* 16569 */
/* 1396 */	0xa8,		/* 168 */
			0x1d,		/* 29 */
/* 1398 */	0x38,		/* 56 */
			0x94,		/* 148 */
/* 1400 */	0xd6,		/* 214 */
			0x2b,		/* 43 */
/* 1402 */	0xcb,		/* 203 */
			0xef,		/* 239 */
/* 1404 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1406 */	NdrFcLong( 0x60b196e5 ),	/* 1622251237 */
/* 1410 */	NdrFcShort( 0xb244 ),	/* -19900 */
/* 1412 */	NdrFcShort( 0x4216 ),	/* 16918 */
/* 1414 */	0x9f,		/* 159 */
			0x4c,		/* 76 */
/* 1416 */	0xd6,		/* 214 */
			0x83,		/* 131 */
/* 1418 */	0x9e,		/* 158 */
			0xb1,		/* 177 */
/* 1420 */	0x29,		/* 41 */
			0x7d,		/* 125 */
/* 1422 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1424 */	NdrFcLong( 0xe6f9dd9e ),	/* -419832418 */
/* 1428 */	NdrFcShort( 0xa066 ),	/* -24474 */
/* 1430 */	NdrFcShort( 0x4fbf ),	/* 20415 */
/* 1432 */	0xb2,		/* 178 */
			0x52,		/* 82 */
/* 1434 */	0x71,		/* 113 */
			0x20,		/* 32 */
/* 1436 */	0x0,		/* 0 */
			0x7a,		/* 122 */
/* 1438 */	0x49,		/* 73 */
			0xc5,		/* 197 */
/* 1440 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1442 */	NdrFcLong( 0x66fd3a8f ),	/* 1727871631 */
/* 1446 */	NdrFcShort( 0xbd05 ),	/* -17147 */
/* 1448 */	NdrFcShort( 0x4f92 ),	/* 20370 */
/* 1450 */	0x90,		/* 144 */
			0xfb,		/* 251 */
/* 1452 */	0xb0,		/* 176 */
			0xcc,		/* 204 */
/* 1454 */	0x42,		/* 66 */
			0x5f,		/* 95 */
/* 1456 */	0xe2,		/* 226 */
			0x93,		/* 147 */
/* 1458 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1460 */	NdrFcLong( 0x1d7536f5 ),	/* 494221045 */
/* 1464 */	NdrFcShort( 0x82a5 ),	/* -32091 */
/* 1466 */	NdrFcShort( 0x4a36 ),	/* 18998 */
/* 1468 */	0x8f,		/* 143 */
			0x95,		/* 149 */
/* 1470 */	0xc5,		/* 197 */
			0xc4,		/* 196 */
/* 1472 */	0xbc,		/* 188 */
			0xe1,		/* 225 */
/* 1474 */	0xd4,		/* 212 */
			0x10,		/* 16 */
/* 1476 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1478 */	NdrFcLong( 0x3db713cf ),	/* 1035408335 */
/* 1482 */	NdrFcShort( 0x263b ),	/* 9787 */
/* 1484 */	NdrFcShort( 0x4aaf ),	/* 19119 */
/* 1486 */	0xb1,		/* 177 */
			0x7,		/* 7 */
/* 1488 */	0xb,		/* 11 */
			0xc4,		/* 196 */
/* 1490 */	0x51,		/* 81 */
			0x5b,		/* 91 */
/* 1492 */	0xae,		/* 174 */
			0x84,		/* 132 */
/* 1494 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1496 */	NdrFcLong( 0xe6f9dd9e ),	/* -419832418 */
/* 1500 */	NdrFcShort( 0xa066 ),	/* -24474 */
/* 1502 */	NdrFcShort( 0x4fbf ),	/* 20415 */
/* 1504 */	0xb2,		/* 178 */
			0x52,		/* 82 */
/* 1506 */	0x71,		/* 113 */
			0x20,		/* 32 */
/* 1508 */	0x0,		/* 0 */
			0x7a,		/* 122 */
/* 1510 */	0x49,		/* 73 */
			0xc5,		/* 197 */
/* 1512 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1514 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1516) */
/* 1516 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1518 */	NdrFcLong( 0x41c94606 ),	/* 1103709702 */
/* 1522 */	NdrFcShort( 0xd923 ),	/* -9949 */
/* 1524 */	NdrFcShort( 0x407c ),	/* 16508 */
/* 1526 */	0xbd,		/* 189 */
			0xd9,		/* 217 */
/* 1528 */	0x8c,		/* 140 */
			0xf6,		/* 246 */
/* 1530 */	0xd9,		/* 217 */
			0xdd,		/* 221 */
/* 1532 */	0x16,		/* 22 */
			0x19,		/* 25 */
/* 1534 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1536 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1538) */
/* 1538 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1540 */	NdrFcLong( 0x20400 ),	/* 132096 */
/* 1544 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1546 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1548 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 1550 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1552 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1554 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 1556 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1558 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1560) */
/* 1560 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1562 */	NdrFcLong( 0x47e629d7 ),	/* 1206266327 */
/* 1566 */	NdrFcShort( 0x62c1 ),	/* 25281 */
/* 1568 */	NdrFcShort( 0x46c9 ),	/* 18121 */
/* 1570 */	0x91,		/* 145 */
			0x13,		/* 19 */
/* 1572 */	0x85,		/* 133 */
			0x17,		/* 23 */
/* 1574 */	0x6a,		/* 106 */
			0x97,		/* 151 */
/* 1576 */	0xa3,		/* 163 */
			0x60,		/* 96 */
/* 1578 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1580 */	NdrFcLong( 0x36dd7f98 ),	/* 920485784 */
/* 1584 */	NdrFcShort( 0x156d ),	/* 5485 */
/* 1586 */	NdrFcShort( 0x4a1d ),	/* 18973 */
/* 1588 */	0xa3,		/* 163 */
			0xbd,		/* 189 */
/* 1590 */	0xcf,		/* 207 */
			0x89,		/* 137 */
/* 1592 */	0x79,		/* 121 */
			0x6d,		/* 109 */
/* 1594 */	0x78,		/* 120 */
			0xb2,		/* 178 */
/* 1596 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1598 */	NdrFcShort( 0xffec ),	/* Offset= -20 (1578) */
/* 1600 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1602 */	NdrFcLong( 0xf0c3a028 ),	/* -255614936 */
/* 1606 */	NdrFcShort( 0x4b0f ),	/* 19215 */
/* 1608 */	NdrFcShort( 0x40b9 ),	/* 16569 */
/* 1610 */	0xa8,		/* 168 */
			0x1d,		/* 29 */
/* 1612 */	0x38,		/* 56 */
			0x94,		/* 148 */
/* 1614 */	0xd6,		/* 214 */
			0x2b,		/* 43 */
/* 1616 */	0xcb,		/* 203 */
			0xef,		/* 239 */
/* 1618 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1620 */	NdrFcLong( 0x60b196e5 ),	/* 1622251237 */
/* 1624 */	NdrFcShort( 0xb244 ),	/* -19900 */
/* 1626 */	NdrFcShort( 0x4216 ),	/* 16918 */
/* 1628 */	0x9f,		/* 159 */
			0x4c,		/* 76 */
/* 1630 */	0xd6,		/* 214 */
			0x83,		/* 131 */
/* 1632 */	0x9e,		/* 158 */
			0xb1,		/* 177 */
/* 1634 */	0x29,		/* 41 */
			0x7d,		/* 125 */
/* 1636 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1638 */	NdrFcLong( 0x66fd3a8f ),	/* 1727871631 */
/* 1642 */	NdrFcShort( 0xbd05 ),	/* -17147 */
/* 1644 */	NdrFcShort( 0x4f92 ),	/* 20370 */
/* 1646 */	0x90,		/* 144 */
			0xfb,		/* 251 */
/* 1648 */	0xb0,		/* 176 */
			0xcc,		/* 204 */
/* 1650 */	0x42,		/* 66 */
			0x5f,		/* 95 */
/* 1652 */	0xe2,		/* 226 */
			0x93,		/* 147 */
/* 1654 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1656 */	NdrFcLong( 0x1d7536f5 ),	/* 494221045 */
/* 1660 */	NdrFcShort( 0x82a5 ),	/* -32091 */
/* 1662 */	NdrFcShort( 0x4a36 ),	/* 18998 */
/* 1664 */	0x8f,		/* 143 */
			0x95,		/* 149 */
/* 1666 */	0xc5,		/* 197 */
			0xc4,		/* 196 */
/* 1668 */	0xbc,		/* 188 */
			0xe1,		/* 225 */
/* 1670 */	0xd4,		/* 212 */
			0x10,		/* 16 */
/* 1672 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1674 */	NdrFcLong( 0x3db713cf ),	/* 1035408335 */
/* 1678 */	NdrFcShort( 0x263b ),	/* 9787 */
/* 1680 */	NdrFcShort( 0x4aaf ),	/* 19119 */
/* 1682 */	0xb1,		/* 177 */
			0x7,		/* 7 */
/* 1684 */	0xb,		/* 11 */
			0xc4,		/* 196 */
/* 1686 */	0x51,		/* 81 */
			0x5b,		/* 91 */
/* 1688 */	0xae,		/* 174 */
			0x84,		/* 132 */
/* 1690 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1692 */	NdrFcLong( 0xe6f9dd9e ),	/* -419832418 */
/* 1696 */	NdrFcShort( 0xa066 ),	/* -24474 */
/* 1698 */	NdrFcShort( 0x4fbf ),	/* 20415 */
/* 1700 */	0xb2,		/* 178 */
			0x52,		/* 82 */
/* 1702 */	0x71,		/* 113 */
			0x20,		/* 32 */
/* 1704 */	0x0,		/* 0 */
			0x7a,		/* 122 */
/* 1706 */	0x49,		/* 73 */
			0xc5,		/* 197 */
/* 1708 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1710 */	NdrFcLong( 0x20ba6882 ),	/* 549087362 */
/* 1714 */	NdrFcShort( 0x1cc8 ),	/* 7368 */
/* 1716 */	NdrFcShort( 0x4e86 ),	/* 20102 */
/* 1718 */	0xab,		/* 171 */
			0x77,		/* 119 */
/* 1720 */	0x4e,		/* 78 */
			0xff,		/* 255 */
/* 1722 */	0x85,		/* 133 */
			0xf6,		/* 246 */
/* 1724 */	0xc0,		/* 192 */
			0xc3,		/* 195 */
/* 1726 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1728 */	NdrFcLong( 0x36dd7f98 ),	/* 920485784 */
/* 1732 */	NdrFcShort( 0x156d ),	/* 5485 */
/* 1734 */	NdrFcShort( 0x4a1d ),	/* 18973 */
/* 1736 */	0xa3,		/* 163 */
			0xbd,		/* 189 */
/* 1738 */	0xcf,		/* 207 */
			0x89,		/* 137 */
/* 1740 */	0x79,		/* 121 */
			0x6d,		/* 109 */
/* 1742 */	0x78,		/* 120 */
			0xb2,		/* 178 */
/* 1744 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1746 */	NdrFcLong( 0x20400 ),	/* 132096 */
/* 1750 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1752 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1754 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 1756 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1758 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1760 */	0x0,		/* 0 */
			0x46,		/* 70 */

			0x0
        }
    };

static const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ] = 
        {
            
            {
            BSTR_UserSize
            ,BSTR_UserMarshal
            ,BSTR_UserUnmarshal
            ,BSTR_UserFree
            },
            {
            VARIANT_UserSize
            ,VARIANT_UserMarshal
            ,VARIANT_UserUnmarshal
            ,VARIANT_UserFree
            }

        };



/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IDispatch, ver. 0.0,
   GUID={0x00020400,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IJSObject, ver. 0.0,
   GUID={0x96796261,0x491B,0x4026,{0xB5,0xBD,0xAB,0xE2,0x12,0x90,0x8B,0x3E}} */

#pragma code_seg(".orpc")
static const unsigned short IJSObject_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IJSObject_ProxyInfo =
    {
    &Object_StubDesc,
    WebGL__MIDL_ProcFormatString.Format,
    &IJSObject_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IJSObject_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    WebGL__MIDL_ProcFormatString.Format,
    &IJSObject_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(8) _IJSObjectProxyVtbl = 
{
    &IJSObject_ProxyInfo,
    &IID_IJSObject,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IJSObject::toString */
};


static const PRPC_STUB_FUNCTION IJSObject_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2
};

CInterfaceStubVtbl _IJSObjectStubVtbl =
{
    &IID_IJSObject,
    &IJSObject_ServerInfo,
    8,
    &IJSObject_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IArrayBuffer, ver. 0.0,
   GUID={0x2680D4E8,0x4474,0x4B47,{0x9E,0x3F,0x05,0xF3,0x85,0xE9,0xFC,0xF8}} */

#pragma code_seg(".orpc")
static const unsigned short IArrayBuffer_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    36,
    72
    };

static const MIDL_STUBLESS_PROXY_INFO IArrayBuffer_ProxyInfo =
    {
    &Object_StubDesc,
    WebGL__MIDL_ProcFormatString.Format,
    &IArrayBuffer_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IArrayBuffer_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    WebGL__MIDL_ProcFormatString.Format,
    &IArrayBuffer_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(10) _IArrayBufferProxyVtbl = 
{
    &IArrayBuffer_ProxyInfo,
    &IID_IArrayBuffer,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IJSObject::toString */ ,
    (void *) (INT_PTR) -1 /* IArrayBuffer::get_byteLength */ ,
    (void *) (INT_PTR) -1 /* IArrayBuffer::get_mem */
};


static const PRPC_STUB_FUNCTION IArrayBuffer_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IArrayBufferStubVtbl =
{
    &IID_IArrayBuffer,
    &IArrayBuffer_ServerInfo,
    10,
    &IArrayBuffer_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IArrayBufferView, ver. 0.0,
   GUID={0x20BA6882,0x1CC8,0x4E86,{0xAB,0x77,0x4E,0xFF,0x85,0xF6,0xC0,0xC3}} */

#pragma code_seg(".orpc")
static const unsigned short IArrayBufferView_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    108,
    144,
    180,
    216,
    252,
    288
    };

static const MIDL_STUBLESS_PROXY_INFO IArrayBufferView_ProxyInfo =
    {
    &Object_StubDesc,
    WebGL__MIDL_ProcFormatString.Format,
    &IArrayBufferView_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IArrayBufferView_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    WebGL__MIDL_ProcFormatString.Format,
    &IArrayBufferView_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(14) _IArrayBufferViewProxyVtbl = 
{
    &IArrayBufferView_ProxyInfo,
    &IID_IArrayBufferView,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IJSObject::toString */ ,
    (void *) (INT_PTR) -1 /* IArrayBufferView::get_buffer */ ,
    (void *) (INT_PTR) -1 /* IArrayBufferView::get_byteOffset */ ,
    (void *) (INT_PTR) -1 /* IArrayBufferView::get_byteLength */ ,
    (void *) (INT_PTR) -1 /* IArrayBufferView::get_mem */ ,
    (void *) (INT_PTR) -1 /* IArrayBufferView::put_modified */ ,
    (void *) (INT_PTR) -1 /* IArrayBufferView::get_modified */
};


static const PRPC_STUB_FUNCTION IArrayBufferView_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IArrayBufferViewStubVtbl =
{
    &IID_IArrayBufferView,
    &IArrayBufferView_ServerInfo,
    14,
    &IArrayBufferView_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: ITypedArrayBufferView, ver. 0.0,
   GUID={0xCF72AD82,0x359F,0x432A,{0x9E,0xD6,0x58,0x98,0x30,0x41,0x87,0x51}} */

#pragma code_seg(".orpc")
static const unsigned short ITypedArrayBufferView_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    108,
    144,
    180,
    216,
    252,
    288,
    324,
    360,
    396,
    438,
    486
    };

static const MIDL_STUBLESS_PROXY_INFO ITypedArrayBufferView_ProxyInfo =
    {
    &Object_StubDesc,
    WebGL__MIDL_ProcFormatString.Format,
    &ITypedArrayBufferView_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO ITypedArrayBufferView_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    WebGL__MIDL_ProcFormatString.Format,
    &ITypedArrayBufferView_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(19) _ITypedArrayBufferViewProxyVtbl = 
{
    &ITypedArrayBufferView_ProxyInfo,
    &IID_ITypedArrayBufferView,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IJSObject::toString */ ,
    (void *) (INT_PTR) -1 /* IArrayBufferView::get_buffer */ ,
    (void *) (INT_PTR) -1 /* IArrayBufferView::get_byteOffset */ ,
    (void *) (INT_PTR) -1 /* IArrayBufferView::get_byteLength */ ,
    (void *) (INT_PTR) -1 /* IArrayBufferView::get_mem */ ,
    (void *) (INT_PTR) -1 /* IArrayBufferView::put_modified */ ,
    (void *) (INT_PTR) -1 /* IArrayBufferView::get_modified */ ,
    (void *) (INT_PTR) -1 /* ITypedArrayBufferView::get_BYTES_PER_ELEMENT */ ,
    (void *) (INT_PTR) -1 /* ITypedArrayBufferView::get_length */ ,
    (void *) (INT_PTR) -1 /* ITypedArrayBufferView::set */ ,
    (void *) (INT_PTR) -1 /* ITypedArrayBufferView::subarray */ ,
    (void *) (INT_PTR) -1 /* ITypedArrayBufferView::get_item */
};


static const PRPC_STUB_FUNCTION ITypedArrayBufferView_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _ITypedArrayBufferViewStubVtbl =
{
    &IID_ITypedArrayBufferView,
    &ITypedArrayBufferView_ServerInfo,
    19,
    &ITypedArrayBufferView_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IInt8Array, ver. 0.0,
   GUID={0x7E91334D,0x695D,0x491E,{0xBC,0x09,0x52,0x91,0xC0,0x6A,0x23,0x3A}} */

#pragma code_seg(".orpc")
static const unsigned short IInt8Array_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    108,
    144,
    180,
    216,
    252,
    288,
    324,
    360,
    396,
    438,
    486,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IInt8Array_ProxyInfo =
    {
    &Object_StubDesc,
    WebGL__MIDL_ProcFormatString.Format,
    &IInt8Array_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IInt8Array_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    WebGL__MIDL_ProcFormatString.Format,
    &IInt8Array_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(19) _IInt8ArrayProxyVtbl = 
{
    0,
    &IID_IInt8Array,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    0 /* forced delegation IJSObject::toString */ ,
    0 /* forced delegation IArrayBufferView::get_buffer */ ,
    0 /* forced delegation IArrayBufferView::get_byteOffset */ ,
    0 /* forced delegation IArrayBufferView::get_byteLength */ ,
    0 /* forced delegation IArrayBufferView::get_mem */ ,
    0 /* forced delegation IArrayBufferView::put_modified */ ,
    0 /* forced delegation IArrayBufferView::get_modified */ ,
    0 /* forced delegation ITypedArrayBufferView::get_BYTES_PER_ELEMENT */ ,
    0 /* forced delegation ITypedArrayBufferView::get_length */ ,
    0 /* forced delegation ITypedArrayBufferView::set */ ,
    0 /* forced delegation ITypedArrayBufferView::subarray */ ,
    0 /* forced delegation ITypedArrayBufferView::get_item */
};


static const PRPC_STUB_FUNCTION IInt8Array_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IInt8ArrayStubVtbl =
{
    &IID_IInt8Array,
    &IInt8Array_ServerInfo,
    19,
    &IInt8Array_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IUint8Array, ver. 0.0,
   GUID={0x5B0BEBA6,0x3CEB,0x48B7,{0x90,0x47,0xA6,0xE1,0xD0,0x1D,0xF0,0x54}} */

#pragma code_seg(".orpc")
static const unsigned short IUint8Array_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    108,
    144,
    180,
    216,
    252,
    288,
    324,
    360,
    396,
    438,
    486,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IUint8Array_ProxyInfo =
    {
    &Object_StubDesc,
    WebGL__MIDL_ProcFormatString.Format,
    &IUint8Array_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IUint8Array_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    WebGL__MIDL_ProcFormatString.Format,
    &IUint8Array_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(19) _IUint8ArrayProxyVtbl = 
{
    0,
    &IID_IUint8Array,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    0 /* forced delegation IJSObject::toString */ ,
    0 /* forced delegation IArrayBufferView::get_buffer */ ,
    0 /* forced delegation IArrayBufferView::get_byteOffset */ ,
    0 /* forced delegation IArrayBufferView::get_byteLength */ ,
    0 /* forced delegation IArrayBufferView::get_mem */ ,
    0 /* forced delegation IArrayBufferView::put_modified */ ,
    0 /* forced delegation IArrayBufferView::get_modified */ ,
    0 /* forced delegation ITypedArrayBufferView::get_BYTES_PER_ELEMENT */ ,
    0 /* forced delegation ITypedArrayBufferView::get_length */ ,
    0 /* forced delegation ITypedArrayBufferView::set */ ,
    0 /* forced delegation ITypedArrayBufferView::subarray */ ,
    0 /* forced delegation ITypedArrayBufferView::get_item */
};


static const PRPC_STUB_FUNCTION IUint8Array_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IUint8ArrayStubVtbl =
{
    &IID_IUint8Array,
    &IUint8Array_ServerInfo,
    19,
    &IUint8Array_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IInt16Array, ver. 0.0,
   GUID={0xE48BDB2F,0x6C95,0x4679,{0xAD,0x39,0xF7,0xD0,0x80,0xB1,0x0D,0x50}} */

#pragma code_seg(".orpc")
static const unsigned short IInt16Array_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    108,
    144,
    180,
    216,
    252,
    288,
    324,
    360,
    396,
    438,
    486,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IInt16Array_ProxyInfo =
    {
    &Object_StubDesc,
    WebGL__MIDL_ProcFormatString.Format,
    &IInt16Array_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IInt16Array_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    WebGL__MIDL_ProcFormatString.Format,
    &IInt16Array_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(19) _IInt16ArrayProxyVtbl = 
{
    0,
    &IID_IInt16Array,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    0 /* forced delegation IJSObject::toString */ ,
    0 /* forced delegation IArrayBufferView::get_buffer */ ,
    0 /* forced delegation IArrayBufferView::get_byteOffset */ ,
    0 /* forced delegation IArrayBufferView::get_byteLength */ ,
    0 /* forced delegation IArrayBufferView::get_mem */ ,
    0 /* forced delegation IArrayBufferView::put_modified */ ,
    0 /* forced delegation IArrayBufferView::get_modified */ ,
    0 /* forced delegation ITypedArrayBufferView::get_BYTES_PER_ELEMENT */ ,
    0 /* forced delegation ITypedArrayBufferView::get_length */ ,
    0 /* forced delegation ITypedArrayBufferView::set */ ,
    0 /* forced delegation ITypedArrayBufferView::subarray */ ,
    0 /* forced delegation ITypedArrayBufferView::get_item */
};


static const PRPC_STUB_FUNCTION IInt16Array_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IInt16ArrayStubVtbl =
{
    &IID_IInt16Array,
    &IInt16Array_ServerInfo,
    19,
    &IInt16Array_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IUint16Array, ver. 0.0,
   GUID={0x2760D39B,0xF0C5,0x4616,{0x88,0xC4,0xF0,0x2F,0xEF,0x95,0xAF,0xEA}} */

#pragma code_seg(".orpc")
static const unsigned short IUint16Array_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    108,
    144,
    180,
    216,
    252,
    288,
    324,
    360,
    396,
    438,
    486,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IUint16Array_ProxyInfo =
    {
    &Object_StubDesc,
    WebGL__MIDL_ProcFormatString.Format,
    &IUint16Array_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IUint16Array_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    WebGL__MIDL_ProcFormatString.Format,
    &IUint16Array_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(19) _IUint16ArrayProxyVtbl = 
{
    0,
    &IID_IUint16Array,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    0 /* forced delegation IJSObject::toString */ ,
    0 /* forced delegation IArrayBufferView::get_buffer */ ,
    0 /* forced delegation IArrayBufferView::get_byteOffset */ ,
    0 /* forced delegation IArrayBufferView::get_byteLength */ ,
    0 /* forced delegation IArrayBufferView::get_mem */ ,
    0 /* forced delegation IArrayBufferView::put_modified */ ,
    0 /* forced delegation IArrayBufferView::get_modified */ ,
    0 /* forced delegation ITypedArrayBufferView::get_BYTES_PER_ELEMENT */ ,
    0 /* forced delegation ITypedArrayBufferView::get_length */ ,
    0 /* forced delegation ITypedArrayBufferView::set */ ,
    0 /* forced delegation ITypedArrayBufferView::subarray */ ,
    0 /* forced delegation ITypedArrayBufferView::get_item */
};


static const PRPC_STUB_FUNCTION IUint16Array_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IUint16ArrayStubVtbl =
{
    &IID_IUint16Array,
    &IUint16Array_ServerInfo,
    19,
    &IUint16Array_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IInt32Array, ver. 0.0,
   GUID={0x4014EF1F,0xB2EC,0x4CCD,{0x8E,0xA9,0xFB,0xE3,0xAE,0x02,0xFE,0x5D}} */

#pragma code_seg(".orpc")
static const unsigned short IInt32Array_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    108,
    144,
    180,
    216,
    252,
    288,
    324,
    360,
    396,
    438,
    486,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IInt32Array_ProxyInfo =
    {
    &Object_StubDesc,
    WebGL__MIDL_ProcFormatString.Format,
    &IInt32Array_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IInt32Array_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    WebGL__MIDL_ProcFormatString.Format,
    &IInt32Array_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(19) _IInt32ArrayProxyVtbl = 
{
    0,
    &IID_IInt32Array,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    0 /* forced delegation IJSObject::toString */ ,
    0 /* forced delegation IArrayBufferView::get_buffer */ ,
    0 /* forced delegation IArrayBufferView::get_byteOffset */ ,
    0 /* forced delegation IArrayBufferView::get_byteLength */ ,
    0 /* forced delegation IArrayBufferView::get_mem */ ,
    0 /* forced delegation IArrayBufferView::put_modified */ ,
    0 /* forced delegation IArrayBufferView::get_modified */ ,
    0 /* forced delegation ITypedArrayBufferView::get_BYTES_PER_ELEMENT */ ,
    0 /* forced delegation ITypedArrayBufferView::get_length */ ,
    0 /* forced delegation ITypedArrayBufferView::set */ ,
    0 /* forced delegation ITypedArrayBufferView::subarray */ ,
    0 /* forced delegation ITypedArrayBufferView::get_item */
};


static const PRPC_STUB_FUNCTION IInt32Array_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IInt32ArrayStubVtbl =
{
    &IID_IInt32Array,
    &IInt32Array_ServerInfo,
    19,
    &IInt32Array_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IUint32Array, ver. 0.0,
   GUID={0x190F92F7,0xF4EF,0x4689,{0xA7,0x53,0x95,0x66,0xE6,0x20,0x15,0x3F}} */

#pragma code_seg(".orpc")
static const unsigned short IUint32Array_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    108,
    144,
    180,
    216,
    252,
    288,
    324,
    360,
    396,
    438,
    486,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IUint32Array_ProxyInfo =
    {
    &Object_StubDesc,
    WebGL__MIDL_ProcFormatString.Format,
    &IUint32Array_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IUint32Array_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    WebGL__MIDL_ProcFormatString.Format,
    &IUint32Array_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(19) _IUint32ArrayProxyVtbl = 
{
    0,
    &IID_IUint32Array,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    0 /* forced delegation IJSObject::toString */ ,
    0 /* forced delegation IArrayBufferView::get_buffer */ ,
    0 /* forced delegation IArrayBufferView::get_byteOffset */ ,
    0 /* forced delegation IArrayBufferView::get_byteLength */ ,
    0 /* forced delegation IArrayBufferView::get_mem */ ,
    0 /* forced delegation IArrayBufferView::put_modified */ ,
    0 /* forced delegation IArrayBufferView::get_modified */ ,
    0 /* forced delegation ITypedArrayBufferView::get_BYTES_PER_ELEMENT */ ,
    0 /* forced delegation ITypedArrayBufferView::get_length */ ,
    0 /* forced delegation ITypedArrayBufferView::set */ ,
    0 /* forced delegation ITypedArrayBufferView::subarray */ ,
    0 /* forced delegation ITypedArrayBufferView::get_item */
};


static const PRPC_STUB_FUNCTION IUint32Array_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IUint32ArrayStubVtbl =
{
    &IID_IUint32Array,
    &IUint32Array_ServerInfo,
    19,
    &IUint32Array_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IFloat32Array, ver. 0.0,
   GUID={0x718E17BF,0x737B,0x42FE,{0xA7,0x7F,0xE3,0xAC,0x34,0xE4,0xDD,0x7C}} */

#pragma code_seg(".orpc")
static const unsigned short IFloat32Array_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    108,
    144,
    180,
    216,
    252,
    288,
    324,
    360,
    396,
    438,
    486,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IFloat32Array_ProxyInfo =
    {
    &Object_StubDesc,
    WebGL__MIDL_ProcFormatString.Format,
    &IFloat32Array_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IFloat32Array_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    WebGL__MIDL_ProcFormatString.Format,
    &IFloat32Array_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(19) _IFloat32ArrayProxyVtbl = 
{
    0,
    &IID_IFloat32Array,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    0 /* forced delegation IJSObject::toString */ ,
    0 /* forced delegation IArrayBufferView::get_buffer */ ,
    0 /* forced delegation IArrayBufferView::get_byteOffset */ ,
    0 /* forced delegation IArrayBufferView::get_byteLength */ ,
    0 /* forced delegation IArrayBufferView::get_mem */ ,
    0 /* forced delegation IArrayBufferView::put_modified */ ,
    0 /* forced delegation IArrayBufferView::get_modified */ ,
    0 /* forced delegation ITypedArrayBufferView::get_BYTES_PER_ELEMENT */ ,
    0 /* forced delegation ITypedArrayBufferView::get_length */ ,
    0 /* forced delegation ITypedArrayBufferView::set */ ,
    0 /* forced delegation ITypedArrayBufferView::subarray */ ,
    0 /* forced delegation ITypedArrayBufferView::get_item */
};


static const PRPC_STUB_FUNCTION IFloat32Array_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IFloat32ArrayStubVtbl =
{
    &IID_IFloat32Array,
    &IFloat32Array_ServerInfo,
    19,
    &IFloat32Array_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IFloat64Array, ver. 0.0,
   GUID={0x3EEF1A4A,0x1B11,0x49A3,{0x9C,0x1F,0x94,0xED,0xC2,0xB1,0x89,0xF6}} */

#pragma code_seg(".orpc")
static const unsigned short IFloat64Array_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    108,
    144,
    180,
    216,
    252,
    288,
    324,
    360,
    396,
    438,
    486,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IFloat64Array_ProxyInfo =
    {
    &Object_StubDesc,
    WebGL__MIDL_ProcFormatString.Format,
    &IFloat64Array_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IFloat64Array_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    WebGL__MIDL_ProcFormatString.Format,
    &IFloat64Array_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(19) _IFloat64ArrayProxyVtbl = 
{
    0,
    &IID_IFloat64Array,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    0 /* forced delegation IJSObject::toString */ ,
    0 /* forced delegation IArrayBufferView::get_buffer */ ,
    0 /* forced delegation IArrayBufferView::get_byteOffset */ ,
    0 /* forced delegation IArrayBufferView::get_byteLength */ ,
    0 /* forced delegation IArrayBufferView::get_mem */ ,
    0 /* forced delegation IArrayBufferView::put_modified */ ,
    0 /* forced delegation IArrayBufferView::get_modified */ ,
    0 /* forced delegation ITypedArrayBufferView::get_BYTES_PER_ELEMENT */ ,
    0 /* forced delegation ITypedArrayBufferView::get_length */ ,
    0 /* forced delegation ITypedArrayBufferView::set */ ,
    0 /* forced delegation ITypedArrayBufferView::subarray */ ,
    0 /* forced delegation ITypedArrayBufferView::get_item */
};


static const PRPC_STUB_FUNCTION IFloat64Array_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IFloat64ArrayStubVtbl =
{
    &IID_IFloat64Array,
    &IFloat64Array_ServerInfo,
    19,
    &IFloat64Array_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IDataArrayView, ver. 0.0,
   GUID={0xB058D4CD,0xFD1C,0x4E00,{0x94,0xE4,0x9D,0x94,0x28,0xA0,0xBC,0x6C}} */

#pragma code_seg(".orpc")
static const unsigned short IDataArrayView_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    108,
    144,
    180,
    216,
    252,
    288,
    528,
    570,
    612,
    660,
    708,
    756,
    804,
    852,
    900,
    942,
    984,
    1032,
    1080,
    1128,
    1176,
    1224
    };

static const MIDL_STUBLESS_PROXY_INFO IDataArrayView_ProxyInfo =
    {
    &Object_StubDesc,
    WebGL__MIDL_ProcFormatString.Format,
    &IDataArrayView_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IDataArrayView_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    WebGL__MIDL_ProcFormatString.Format,
    &IDataArrayView_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(30) _IDataArrayViewProxyVtbl = 
{
    &IDataArrayView_ProxyInfo,
    &IID_IDataArrayView,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IJSObject::toString */ ,
    (void *) (INT_PTR) -1 /* IArrayBufferView::get_buffer */ ,
    (void *) (INT_PTR) -1 /* IArrayBufferView::get_byteOffset */ ,
    (void *) (INT_PTR) -1 /* IArrayBufferView::get_byteLength */ ,
    (void *) (INT_PTR) -1 /* IArrayBufferView::get_mem */ ,
    (void *) (INT_PTR) -1 /* IArrayBufferView::put_modified */ ,
    (void *) (INT_PTR) -1 /* IArrayBufferView::get_modified */ ,
    (void *) (INT_PTR) -1 /* IDataArrayView::getInt8 */ ,
    (void *) (INT_PTR) -1 /* IDataArrayView::getUint8 */ ,
    (void *) (INT_PTR) -1 /* IDataArrayView::getInt16 */ ,
    (void *) (INT_PTR) -1 /* IDataArrayView::getUint16 */ ,
    (void *) (INT_PTR) -1 /* IDataArrayView::getInt32 */ ,
    (void *) (INT_PTR) -1 /* IDataArrayView::getUint32 */ ,
    (void *) (INT_PTR) -1 /* IDataArrayView::getFloat32 */ ,
    (void *) (INT_PTR) -1 /* IDataArrayView::getFloat64 */ ,
    (void *) (INT_PTR) -1 /* IDataArrayView::setInt8 */ ,
    (void *) (INT_PTR) -1 /* IDataArrayView::setUint8 */ ,
    (void *) (INT_PTR) -1 /* IDataArrayView::setInt16 */ ,
    (void *) (INT_PTR) -1 /* IDataArrayView::setUint16 */ ,
    (void *) (INT_PTR) -1 /* IDataArrayView::setInt32 */ ,
    (void *) (INT_PTR) -1 /* IDataArrayView::setUint32 */ ,
    (void *) (INT_PTR) -1 /* IDataArrayView::setFloat32 */ ,
    (void *) (INT_PTR) -1 /* IDataArrayView::setFloat64 */
};


static const PRPC_STUB_FUNCTION IDataArrayView_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IDataArrayViewStubVtbl =
{
    &IID_IDataArrayView,
    &IDataArrayView_ServerInfo,
    30,
    &IDataArrayView_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IWebGLObject, ver. 0.0,
   GUID={0x789B00A8,0x6108,0x4AA3,{0xA3,0x7A,0xA1,0x17,0xED,0x78,0x2D,0x73}} */

#pragma code_seg(".orpc")
static const unsigned short IWebGLObject_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IWebGLObject_ProxyInfo =
    {
    &Object_StubDesc,
    WebGL__MIDL_ProcFormatString.Format,
    &IWebGLObject_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IWebGLObject_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    WebGL__MIDL_ProcFormatString.Format,
    &IWebGLObject_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(8) _IWebGLObjectProxyVtbl = 
{
    0,
    &IID_IWebGLObject,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    0 /* forced delegation IJSObject::toString */
};


static const PRPC_STUB_FUNCTION IWebGLObject_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2
};

CInterfaceStubVtbl _IWebGLObjectStubVtbl =
{
    &IID_IWebGLObject,
    &IWebGLObject_ServerInfo,
    8,
    &IWebGLObject_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IWebGLBuffer, ver. 0.0,
   GUID={0xF0C3A028,0x4B0F,0x40B9,{0xA8,0x1D,0x38,0x94,0xD6,0x2B,0xCB,0xEF}} */

#pragma code_seg(".orpc")
static const unsigned short IWebGLBuffer_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IWebGLBuffer_ProxyInfo =
    {
    &Object_StubDesc,
    WebGL__MIDL_ProcFormatString.Format,
    &IWebGLBuffer_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IWebGLBuffer_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    WebGL__MIDL_ProcFormatString.Format,
    &IWebGLBuffer_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(8) _IWebGLBufferProxyVtbl = 
{
    0,
    &IID_IWebGLBuffer,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    0 /* forced delegation IJSObject::toString */
};


static const PRPC_STUB_FUNCTION IWebGLBuffer_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2
};

CInterfaceStubVtbl _IWebGLBufferStubVtbl =
{
    &IID_IWebGLBuffer,
    &IWebGLBuffer_ServerInfo,
    8,
    &IWebGLBuffer_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IWebGLFramebuffer, ver. 0.0,
   GUID={0x60B196E5,0xB244,0x4216,{0x9F,0x4C,0xD6,0x83,0x9E,0xB1,0x29,0x7D}} */

#pragma code_seg(".orpc")
static const unsigned short IWebGLFramebuffer_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IWebGLFramebuffer_ProxyInfo =
    {
    &Object_StubDesc,
    WebGL__MIDL_ProcFormatString.Format,
    &IWebGLFramebuffer_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IWebGLFramebuffer_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    WebGL__MIDL_ProcFormatString.Format,
    &IWebGLFramebuffer_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(8) _IWebGLFramebufferProxyVtbl = 
{
    0,
    &IID_IWebGLFramebuffer,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    0 /* forced delegation IJSObject::toString */
};


static const PRPC_STUB_FUNCTION IWebGLFramebuffer_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2
};

CInterfaceStubVtbl _IWebGLFramebufferStubVtbl =
{
    &IID_IWebGLFramebuffer,
    &IWebGLFramebuffer_ServerInfo,
    8,
    &IWebGLFramebuffer_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IWebGLShader, ver. 0.0,
   GUID={0x1D7536F5,0x82A5,0x4A36,{0x8F,0x95,0xC5,0xC4,0xBC,0xE1,0xD4,0x10}} */

#pragma code_seg(".orpc")
static const unsigned short IWebGLShader_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IWebGLShader_ProxyInfo =
    {
    &Object_StubDesc,
    WebGL__MIDL_ProcFormatString.Format,
    &IWebGLShader_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IWebGLShader_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    WebGL__MIDL_ProcFormatString.Format,
    &IWebGLShader_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(8) _IWebGLShaderProxyVtbl = 
{
    0,
    &IID_IWebGLShader,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    0 /* forced delegation IJSObject::toString */
};


static const PRPC_STUB_FUNCTION IWebGLShader_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2
};

CInterfaceStubVtbl _IWebGLShaderStubVtbl =
{
    &IID_IWebGLShader,
    &IWebGLShader_ServerInfo,
    8,
    &IWebGLShader_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IWebGLProgram, ver. 0.0,
   GUID={0xE6F9DD9E,0xA066,0x4FBF,{0xB2,0x52,0x71,0x20,0x00,0x7A,0x49,0xC5}} */

#pragma code_seg(".orpc")
static const unsigned short IWebGLProgram_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IWebGLProgram_ProxyInfo =
    {
    &Object_StubDesc,
    WebGL__MIDL_ProcFormatString.Format,
    &IWebGLProgram_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IWebGLProgram_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    WebGL__MIDL_ProcFormatString.Format,
    &IWebGLProgram_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(8) _IWebGLProgramProxyVtbl = 
{
    0,
    &IID_IWebGLProgram,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    0 /* forced delegation IJSObject::toString */
};


static const PRPC_STUB_FUNCTION IWebGLProgram_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2
};

CInterfaceStubVtbl _IWebGLProgramStubVtbl =
{
    &IID_IWebGLProgram,
    &IWebGLProgram_ServerInfo,
    8,
    &IWebGLProgram_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IWebGLRenderbuffer, ver. 0.0,
   GUID={0x66FD3A8F,0xBD05,0x4F92,{0x90,0xFB,0xB0,0xCC,0x42,0x5F,0xE2,0x93}} */

#pragma code_seg(".orpc")
static const unsigned short IWebGLRenderbuffer_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IWebGLRenderbuffer_ProxyInfo =
    {
    &Object_StubDesc,
    WebGL__MIDL_ProcFormatString.Format,
    &IWebGLRenderbuffer_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IWebGLRenderbuffer_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    WebGL__MIDL_ProcFormatString.Format,
    &IWebGLRenderbuffer_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(8) _IWebGLRenderbufferProxyVtbl = 
{
    0,
    &IID_IWebGLRenderbuffer,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    0 /* forced delegation IJSObject::toString */
};


static const PRPC_STUB_FUNCTION IWebGLRenderbuffer_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2
};

CInterfaceStubVtbl _IWebGLRenderbufferStubVtbl =
{
    &IID_IWebGLRenderbuffer,
    &IWebGLRenderbuffer_ServerInfo,
    8,
    &IWebGLRenderbuffer_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IWebGLTexture, ver. 0.0,
   GUID={0x3DB713CF,0x263B,0x4AAF,{0xB1,0x07,0x0B,0xC4,0x51,0x5B,0xAE,0x84}} */

#pragma code_seg(".orpc")
static const unsigned short IWebGLTexture_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IWebGLTexture_ProxyInfo =
    {
    &Object_StubDesc,
    WebGL__MIDL_ProcFormatString.Format,
    &IWebGLTexture_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IWebGLTexture_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    WebGL__MIDL_ProcFormatString.Format,
    &IWebGLTexture_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(8) _IWebGLTextureProxyVtbl = 
{
    0,
    &IID_IWebGLTexture,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    0 /* forced delegation IJSObject::toString */
};


static const PRPC_STUB_FUNCTION IWebGLTexture_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2
};

CInterfaceStubVtbl _IWebGLTextureStubVtbl =
{
    &IID_IWebGLTexture,
    &IWebGLTexture_ServerInfo,
    8,
    &IWebGLTexture_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IWebGLUniformLocation, ver. 0.0,
   GUID={0x36DD7F98,0x156D,0x4A1D,{0xA3,0xBD,0xCF,0x89,0x79,0x6D,0x78,0xB2}} */

#pragma code_seg(".orpc")
static const unsigned short IWebGLUniformLocation_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IWebGLUniformLocation_ProxyInfo =
    {
    &Object_StubDesc,
    WebGL__MIDL_ProcFormatString.Format,
    &IWebGLUniformLocation_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IWebGLUniformLocation_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    WebGL__MIDL_ProcFormatString.Format,
    &IWebGLUniformLocation_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(7) _IWebGLUniformLocationProxyVtbl = 
{
    0,
    &IID_IWebGLUniformLocation,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */
};


static const PRPC_STUB_FUNCTION IWebGLUniformLocation_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION
};

CInterfaceStubVtbl _IWebGLUniformLocationStubVtbl =
{
    &IID_IWebGLUniformLocation,
    &IWebGLUniformLocation_ServerInfo,
    7,
    &IWebGLUniformLocation_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IWebGLActiveInfo, ver. 0.0,
   GUID={0x41C94606,0xD923,0x407C,{0xBD,0xD9,0x8C,0xF6,0xD9,0xDD,0x16,0x19}} */

#pragma code_seg(".orpc")
static const unsigned short IWebGLActiveInfo_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    36,
    144,
    1272
    };

static const MIDL_STUBLESS_PROXY_INFO IWebGLActiveInfo_ProxyInfo =
    {
    &Object_StubDesc,
    WebGL__MIDL_ProcFormatString.Format,
    &IWebGLActiveInfo_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IWebGLActiveInfo_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    WebGL__MIDL_ProcFormatString.Format,
    &IWebGLActiveInfo_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(11) _IWebGLActiveInfoProxyVtbl = 
{
    &IWebGLActiveInfo_ProxyInfo,
    &IID_IWebGLActiveInfo,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IJSObject::toString */ ,
    (void *) (INT_PTR) -1 /* IWebGLActiveInfo::get_size */ ,
    (void *) (INT_PTR) -1 /* IWebGLActiveInfo::get_type */ ,
    (void *) (INT_PTR) -1 /* IWebGLActiveInfo::get_name */
};


static const PRPC_STUB_FUNCTION IWebGLActiveInfo_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IWebGLActiveInfoStubVtbl =
{
    &IID_IWebGLActiveInfo,
    &IWebGLActiveInfo_ServerInfo,
    11,
    &IWebGLActiveInfo_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IWebGLShaderPrecisionFormat, ver. 0.0,
   GUID={0x47E629D7,0x62C1,0x46C9,{0x91,0x13,0x85,0x17,0x6A,0x97,0xA3,0x60}} */

#pragma code_seg(".orpc")
static const unsigned short IWebGLShaderPrecisionFormat_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    36,
    144,
    180
    };

static const MIDL_STUBLESS_PROXY_INFO IWebGLShaderPrecisionFormat_ProxyInfo =
    {
    &Object_StubDesc,
    WebGL__MIDL_ProcFormatString.Format,
    &IWebGLShaderPrecisionFormat_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IWebGLShaderPrecisionFormat_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    WebGL__MIDL_ProcFormatString.Format,
    &IWebGLShaderPrecisionFormat_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(11) _IWebGLShaderPrecisionFormatProxyVtbl = 
{
    &IWebGLShaderPrecisionFormat_ProxyInfo,
    &IID_IWebGLShaderPrecisionFormat,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IJSObject::toString */ ,
    (void *) (INT_PTR) -1 /* IWebGLShaderPrecisionFormat::get_rangeMin */ ,
    (void *) (INT_PTR) -1 /* IWebGLShaderPrecisionFormat::get_rangeMax */ ,
    (void *) (INT_PTR) -1 /* IWebGLShaderPrecisionFormat::get_precision */
};


static const PRPC_STUB_FUNCTION IWebGLShaderPrecisionFormat_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IWebGLShaderPrecisionFormatStubVtbl =
{
    &IID_IWebGLShaderPrecisionFormat,
    &IWebGLShaderPrecisionFormat_ServerInfo,
    11,
    &IWebGLShaderPrecisionFormat_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IWebGLContextAttributes, ver. 0.0,
   GUID={0x76E43B1A,0x9D20,0x4C64,{0xBD,0x58,0xBC,0xDD,0x21,0xB8,0xA8,0xA9}} */

#pragma code_seg(".orpc")
static const unsigned short IWebGLContextAttributes_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    1308,
    1344,
    1380,
    1416,
    1452,
    1488
    };

static const MIDL_STUBLESS_PROXY_INFO IWebGLContextAttributes_ProxyInfo =
    {
    &Object_StubDesc,
    WebGL__MIDL_ProcFormatString.Format,
    &IWebGLContextAttributes_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IWebGLContextAttributes_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    WebGL__MIDL_ProcFormatString.Format,
    &IWebGLContextAttributes_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(14) _IWebGLContextAttributesProxyVtbl = 
{
    &IWebGLContextAttributes_ProxyInfo,
    &IID_IWebGLContextAttributes,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IJSObject::toString */ ,
    (void *) (INT_PTR) -1 /* IWebGLContextAttributes::get_alpha */ ,
    (void *) (INT_PTR) -1 /* IWebGLContextAttributes::get_depth */ ,
    (void *) (INT_PTR) -1 /* IWebGLContextAttributes::get_stencil */ ,
    (void *) (INT_PTR) -1 /* IWebGLContextAttributes::get_antialias */ ,
    (void *) (INT_PTR) -1 /* IWebGLContextAttributes::get_premultipliedAlpha */ ,
    (void *) (INT_PTR) -1 /* IWebGLContextAttributes::get_preserveDrawingBuffer */
};


static const PRPC_STUB_FUNCTION IWebGLContextAttributes_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IWebGLContextAttributesStubVtbl =
{
    &IID_IWebGLContextAttributes,
    &IWebGLContextAttributes_ServerInfo,
    14,
    &IWebGLContextAttributes_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IWebGLRCConstants, ver. 0.0,
   GUID={0xD0291412,0x9F48,0x4300,{0x8A,0xA8,0x38,0xE0,0x30,0x47,0x7E,0x77}} */

#pragma code_seg(".orpc")
static const unsigned short IWebGLRCConstants_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    36,
    144,
    180,
    1524,
    1560,
    288,
    324,
    360,
    1596,
    1632,
    1668,
    1704,
    1740,
    1776,
    1812,
    1848,
    1884,
    1920,
    1956,
    1992,
    2028,
    2064,
    2100,
    2136,
    2172,
    2208,
    2244,
    2280,
    2316,
    2352,
    2388,
    2424,
    2460,
    2496,
    2532,
    2568,
    2604,
    2640,
    2676,
    2712,
    2748,
    2784,
    2820,
    2856,
    2892,
    2928,
    2964,
    3000,
    3036,
    3072,
    3108,
    3144,
    3180,
    3216,
    3252,
    3288,
    3324,
    3360,
    3396,
    3432,
    3468,
    3504,
    3540,
    3576,
    3612,
    3648,
    3684,
    3720,
    3756,
    3792,
    3828,
    3864,
    3900,
    3936,
    3972,
    4008,
    4044,
    4080,
    4116,
    4152,
    4188,
    4224,
    4260,
    4296,
    4332,
    4368,
    4404,
    4440,
    4476,
    4512,
    4548,
    4584,
    4620,
    4656,
    4692,
    4728,
    4764,
    4800,
    4836,
    4872,
    4908,
    4944,
    4980,
    5016,
    5052,
    5088,
    5124,
    5160,
    5196,
    5232,
    5268,
    5304,
    5340,
    5376,
    5412,
    5448,
    5484,
    5520,
    5556,
    5592,
    5628,
    5664,
    5700,
    5736,
    5772,
    5808,
    5844,
    5880,
    5916,
    5952,
    5988,
    6024,
    6060,
    6096,
    6132,
    6168,
    6204,
    6240,
    6276,
    6312,
    6348,
    6384,
    6420,
    6456,
    6492,
    6528,
    6564,
    6600,
    6636,
    6672,
    6708,
    6744,
    6780,
    6816,
    6852,
    6888,
    6924,
    6960,
    6996,
    7032,
    7068,
    7104,
    7140,
    7176,
    7212,
    7248,
    7284,
    7320,
    7356,
    7392,
    7428,
    7464,
    7500,
    7536,
    7572,
    7608,
    7644,
    7680,
    7716,
    7752,
    7788,
    7824,
    7860,
    7896,
    7932,
    7968,
    8004,
    8040,
    8076,
    8112,
    8148,
    8184,
    8220,
    8256,
    8292,
    8328,
    8364,
    8400,
    8436,
    8472,
    8508,
    8544,
    8580,
    8616,
    8652,
    8688,
    8724,
    8760,
    8796,
    8832,
    8868,
    8904,
    8940,
    8976,
    9012,
    9048,
    9084,
    9120,
    9156,
    9192,
    9228,
    9264,
    9300,
    9336,
    9372,
    9408,
    9444,
    9480,
    9516,
    9552,
    9588,
    9624,
    9660,
    9696,
    9732,
    9768,
    9804,
    9840,
    9876,
    9912,
    9948,
    9984,
    10020,
    10056,
    10092,
    10128,
    10164,
    10200,
    10236,
    10272,
    10308,
    10344,
    10380,
    10416,
    10452,
    10488,
    10524,
    10560,
    10596,
    10632,
    10668,
    10704,
    10740,
    10776,
    10812,
    10848,
    10884,
    10920,
    10956,
    10992,
    11028,
    11064,
    11100,
    11136,
    11172,
    11208,
    11244,
    11280,
    11316,
    11352,
    11388,
    11424,
    11460,
    11496,
    11532,
    11568,
    11604,
    11640,
    11676,
    11712,
    11748,
    11784,
    11820,
    11856,
    11892
    };

static const MIDL_STUBLESS_PROXY_INFO IWebGLRCConstants_ProxyInfo =
    {
    &Object_StubDesc,
    WebGL__MIDL_ProcFormatString.Format,
    &IWebGLRCConstants_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IWebGLRCConstants_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    WebGL__MIDL_ProcFormatString.Format,
    &IWebGLRCConstants_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(303) _IWebGLRCConstantsProxyVtbl = 
{
    &IWebGLRCConstants_ProxyInfo,
    &IID_IWebGLRCConstants,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IJSObject::toString */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_DEPTH_BUFFER_BIT */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_STENCIL_BUFFER_BIT */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_COLOR_BUFFER_BIT */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_POINTS */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_LINES */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_LINE_LOOP */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_LINE_STRIP */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_TRIANGLES */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_TRIANGLE_STRIP */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_TRIANGLE_FAN */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_ZERO */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_ONE */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_SRC_COLOR */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_ONE_MINUS_SRC_COLOR */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_SRC_ALPHA */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_ONE_MINUS_SRC_ALPHA */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_DST_ALPHA */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_ONE_MINUS_DST_ALPHA */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_DST_COLOR */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_ONE_MINUS_DST_COLOR */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_SRC_ALPHA_SATURATE */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_FUNC_ADD */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_BLEND_EQUATION */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_BLEND_EQUATION_RGB */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_BLEND_EQUATION_ALPHA */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_FUNC_SUBTRACT */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_FUNC_REVERSE_SUBTRACT */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_BLEND_DST_RGB */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_BLEND_SRC_RGB */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_BLEND_DST_ALPHA */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_BLEND_SRC_ALPHA */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_CONSTANT_COLOR */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_ONE_MINUS_CONSTANT_COLOR */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_CONSTANT_ALPHA */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_ONE_MINUS_CONSTANT_ALPHA */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_BLEND_COLOR */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_ARRAY_BUFFER */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_ELEMENT_ARRAY_BUFFER */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_ARRAY_BUFFER_BINDING */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_ELEMENT_ARRAY_BUFFER_BINDING */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_STREAM_DRAW */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_STATIC_DRAW */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_DYNAMIC_DRAW */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_BUFFER_SIZE */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_BUFFER_USAGE */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_CURRENT_VERTEX_ATTRIB */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_FRONT */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_BACK */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_FRONT_AND_BACK */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_CULL_FACE */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_BLEND */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_DITHER */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_STENCIL_TEST */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_DEPTH_TEST */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_SCISSOR_TEST */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_POLYGON_OFFSET_FILL */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_SAMPLE_ALPHA_TO_COVERAGE */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_SAMPLE_COVERAGE */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_NO_ERROR */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_INVALID_ENUM */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_INVALID_VALUE */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_INVALID_OPERATION */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_OUT_OF_MEMORY */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_CW */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_CCW */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_LINE_WIDTH */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_ALIASED_POINT_SIZE_RANGE */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_ALIASED_LINE_WIDTH_RANGE */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_CULL_FACE_MODE */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_FRONT_FACE */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_DEPTH_RANGE */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_DEPTH_WRITEMASK */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_DEPTH_CLEAR_VALUE */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_DEPTH_FUNC */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_STENCIL_CLEAR_VALUE */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_STENCIL_FUNC */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_STENCIL_FAIL */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_STENCIL_PASS_DEPTH_FAIL */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_STENCIL_PASS_DEPTH_PASS */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_STENCIL_REF */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_STENCIL_VALUE_MASK */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_STENCIL_WRITEMASK */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_STENCIL_BACK_FUNC */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_STENCIL_BACK_FAIL */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_STENCIL_BACK_PASS_DEPTH_FAIL */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_STENCIL_BACK_PASS_DEPTH_PASS */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_STENCIL_BACK_REF */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_STENCIL_BACK_VALUE_MASK */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_STENCIL_BACK_WRITEMASK */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_VIEWPORT */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_SCISSOR_BOX */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_COLOR_CLEAR_VALUE */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_COLOR_WRITEMASK */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_UNPACK_ALIGNMENT */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_PACK_ALIGNMENT */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_MAX_TEXTURE_SIZE */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_MAX_VIEWPORT_DIMS */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_SUBPIXEL_BITS */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_RED_BITS */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_GREEN_BITS */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_BLUE_BITS */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_ALPHA_BITS */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_DEPTH_BITS */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_STENCIL_BITS */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_POLYGON_OFFSET_UNITS */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_POLYGON_OFFSET_FACTOR */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_TEXTURE_BINDING_2D */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_SAMPLE_BUFFERS */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_SAMPLES */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_SAMPLE_COVERAGE_VALUE */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_SAMPLE_COVERAGE_INVERT */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_COMPRESSED_TEXTURE_FORMATS */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_DONT_CARE */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_FASTEST */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_NICEST */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_GENERATE_MIPMAP_HINT */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_BYTE */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_UNSIGNED_BYTE */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_SHORT */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_UNSIGNED_SHORT */ ,
    IWebGLRCConstants_get_INT_Proxy ,
    IWebGLRCConstants_get_UNSIGNED_INT_Proxy ,
    IWebGLRCConstants_get_FLOAT_Proxy ,
    IWebGLRCConstants_get_DEPTH_COMPONENT_Proxy ,
    IWebGLRCConstants_get_ALPHA_Proxy ,
    IWebGLRCConstants_get_RGB_Proxy ,
    IWebGLRCConstants_get_RGBA_Proxy ,
    IWebGLRCConstants_get_LUMINANCE_Proxy ,
    IWebGLRCConstants_get_LUMINANCE_ALPHA_Proxy ,
    IWebGLRCConstants_get_UNSIGNED_SHORT_4_4_4_4_Proxy ,
    IWebGLRCConstants_get_UNSIGNED_SHORT_5_5_5_1_Proxy ,
    IWebGLRCConstants_get_UNSIGNED_SHORT_5_6_5_Proxy ,
    IWebGLRCConstants_get_FRAGMENT_SHADER_Proxy ,
    IWebGLRCConstants_get_VERTEX_SHADER_Proxy ,
    IWebGLRCConstants_get_MAX_VERTEX_ATTRIBS_Proxy ,
    IWebGLRCConstants_get_MAX_VERTEX_UNIFORM_VECTORS_Proxy ,
    IWebGLRCConstants_get_MAX_VARYING_VECTORS_Proxy ,
    IWebGLRCConstants_get_MAX_COMBINED_TEXTURE_IMAGE_UNITS_Proxy ,
    IWebGLRCConstants_get_MAX_VERTEX_TEXTURE_IMAGE_UNITS_Proxy ,
    IWebGLRCConstants_get_MAX_TEXTURE_IMAGE_UNITS_Proxy ,
    IWebGLRCConstants_get_MAX_FRAGMENT_UNIFORM_VECTORS_Proxy ,
    IWebGLRCConstants_get_SHADER_TYPE_Proxy ,
    IWebGLRCConstants_get_DELETE_STATUS_Proxy ,
    IWebGLRCConstants_get_LINK_STATUS_Proxy ,
    IWebGLRCConstants_get_VALIDATE_STATUS_Proxy ,
    IWebGLRCConstants_get_ATTACHED_SHADERS_Proxy ,
    IWebGLRCConstants_get_ACTIVE_UNIFORMS_Proxy ,
    IWebGLRCConstants_get_ACTIVE_ATTRIBUTES_Proxy ,
    IWebGLRCConstants_get_SHADING_LANGUAGE_VERSION_Proxy ,
    IWebGLRCConstants_get_CURRENT_PROGRAM_Proxy ,
    IWebGLRCConstants_get_NEVER_Proxy ,
    IWebGLRCConstants_get_LESS_Proxy ,
    IWebGLRCConstants_get_EQUAL_Proxy ,
    IWebGLRCConstants_get_LEQUAL_Proxy ,
    IWebGLRCConstants_get_GREATER_Proxy ,
    IWebGLRCConstants_get_NOTEQUAL_Proxy ,
    IWebGLRCConstants_get_GEQUAL_Proxy ,
    IWebGLRCConstants_get_ALWAYS_Proxy ,
    IWebGLRCConstants_get_KEEP_Proxy ,
    IWebGLRCConstants_get_REPLACE_Proxy ,
    IWebGLRCConstants_get_INCR_Proxy ,
    IWebGLRCConstants_get_DECR_Proxy ,
    IWebGLRCConstants_get_INVERT_Proxy ,
    IWebGLRCConstants_get_INCR_WRAP_Proxy ,
    IWebGLRCConstants_get_DECR_WRAP_Proxy ,
    IWebGLRCConstants_get_VENDOR_Proxy ,
    IWebGLRCConstants_get_RENDERER_Proxy ,
    IWebGLRCConstants_get_VERSION_Proxy ,
    IWebGLRCConstants_get_NEAREST_Proxy ,
    IWebGLRCConstants_get_LINEAR_Proxy ,
    IWebGLRCConstants_get_NEAREST_MIPMAP_NEAREST_Proxy ,
    IWebGLRCConstants_get_LINEAR_MIPMAP_NEAREST_Proxy ,
    IWebGLRCConstants_get_NEAREST_MIPMAP_LINEAR_Proxy ,
    IWebGLRCConstants_get_LINEAR_MIPMAP_LINEAR_Proxy ,
    IWebGLRCConstants_get_TEXTURE_MAG_FILTER_Proxy ,
    IWebGLRCConstants_get_TEXTURE_MIN_FILTER_Proxy ,
    IWebGLRCConstants_get_TEXTURE_WRAP_S_Proxy ,
    IWebGLRCConstants_get_TEXTURE_WRAP_T_Proxy ,
    IWebGLRCConstants_get_TEXTURE_2D_Proxy ,
    IWebGLRCConstants_get_TEXTURE_Proxy ,
    IWebGLRCConstants_get_TEXTURE_CUBE_MAP_Proxy ,
    IWebGLRCConstants_get_TEXTURE_BINDING_CUBE_MAP_Proxy ,
    IWebGLRCConstants_get_TEXTURE_CUBE_MAP_POSITIVE_X_Proxy ,
    IWebGLRCConstants_get_TEXTURE_CUBE_MAP_NEGATIVE_X_Proxy ,
    IWebGLRCConstants_get_TEXTURE_CUBE_MAP_POSITIVE_Y_Proxy ,
    IWebGLRCConstants_get_TEXTURE_CUBE_MAP_NEGATIVE_Y_Proxy ,
    IWebGLRCConstants_get_TEXTURE_CUBE_MAP_POSITIVE_Z_Proxy ,
    IWebGLRCConstants_get_TEXTURE_CUBE_MAP_NEGATIVE_Z_Proxy ,
    IWebGLRCConstants_get_MAX_CUBE_MAP_TEXTURE_SIZE_Proxy ,
    IWebGLRCConstants_get_TEXTURE0_Proxy ,
    IWebGLRCConstants_get_TEXTURE1_Proxy ,
    IWebGLRCConstants_get_TEXTURE2_Proxy ,
    IWebGLRCConstants_get_TEXTURE3_Proxy ,
    IWebGLRCConstants_get_TEXTURE4_Proxy ,
    IWebGLRCConstants_get_TEXTURE5_Proxy ,
    IWebGLRCConstants_get_TEXTURE6_Proxy ,
    IWebGLRCConstants_get_TEXTURE7_Proxy ,
    IWebGLRCConstants_get_TEXTURE8_Proxy ,
    IWebGLRCConstants_get_TEXTURE9_Proxy ,
    IWebGLRCConstants_get_TEXTURE10_Proxy ,
    IWebGLRCConstants_get_TEXTURE11_Proxy ,
    IWebGLRCConstants_get_TEXTURE12_Proxy ,
    IWebGLRCConstants_get_TEXTURE13_Proxy ,
    IWebGLRCConstants_get_TEXTURE14_Proxy ,
    IWebGLRCConstants_get_TEXTURE15_Proxy ,
    IWebGLRCConstants_get_TEXTURE16_Proxy ,
    IWebGLRCConstants_get_TEXTURE17_Proxy ,
    IWebGLRCConstants_get_TEXTURE18_Proxy ,
    IWebGLRCConstants_get_TEXTURE19_Proxy ,
    IWebGLRCConstants_get_TEXTURE20_Proxy ,
    IWebGLRCConstants_get_TEXTURE21_Proxy ,
    IWebGLRCConstants_get_TEXTURE22_Proxy ,
    IWebGLRCConstants_get_TEXTURE23_Proxy ,
    IWebGLRCConstants_get_TEXTURE24_Proxy ,
    IWebGLRCConstants_get_TEXTURE25_Proxy ,
    IWebGLRCConstants_get_TEXTURE26_Proxy ,
    IWebGLRCConstants_get_TEXTURE27_Proxy ,
    IWebGLRCConstants_get_TEXTURE28_Proxy ,
    IWebGLRCConstants_get_TEXTURE29_Proxy ,
    IWebGLRCConstants_get_TEXTURE30_Proxy ,
    IWebGLRCConstants_get_TEXTURE31_Proxy ,
    IWebGLRCConstants_get_ACTIVE_TEXTURE_Proxy ,
    IWebGLRCConstants_get_REPEAT_Proxy ,
    IWebGLRCConstants_get_CLAMP_TO_EDGE_Proxy ,
    IWebGLRCConstants_get_MIRRORED_REPEAT_Proxy ,
    IWebGLRCConstants_get_FLOAT_VEC2_Proxy ,
    IWebGLRCConstants_get_FLOAT_VEC3_Proxy ,
    IWebGLRCConstants_get_FLOAT_VEC4_Proxy ,
    IWebGLRCConstants_get_INT_VEC2_Proxy ,
    IWebGLRCConstants_get_INT_VEC3_Proxy ,
    IWebGLRCConstants_get_INT_VEC4_Proxy ,
    IWebGLRCConstants_get_BOOL_Proxy ,
    IWebGLRCConstants_get_BOOL_VEC2_Proxy ,
    IWebGLRCConstants_get_BOOL_VEC3_Proxy ,
    IWebGLRCConstants_get_BOOL_VEC4_Proxy ,
    IWebGLRCConstants_get_FLOAT_MAT2_Proxy ,
    IWebGLRCConstants_get_FLOAT_MAT3_Proxy ,
    IWebGLRCConstants_get_FLOAT_MAT4_Proxy ,
    IWebGLRCConstants_get_SAMPLER_2D_Proxy ,
    IWebGLRCConstants_get_SAMPLER_CUBE_Proxy ,
    IWebGLRCConstants_get_VERTEX_ATTRIB_ARRAY_ENABLED_Proxy ,
    IWebGLRCConstants_get_VERTEX_ATTRIB_ARRAY_SIZE_Proxy ,
    IWebGLRCConstants_get_VERTEX_ATTRIB_ARRAY_STRIDE_Proxy ,
    IWebGLRCConstants_get_VERTEX_ATTRIB_ARRAY_TYPE_Proxy ,
    IWebGLRCConstants_get_VERTEX_ATTRIB_ARRAY_NORMALIZED_Proxy ,
    IWebGLRCConstants_get_VERTEX_ATTRIB_ARRAY_POINTER_Proxy ,
    IWebGLRCConstants_get_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING_Proxy ,
    IWebGLRCConstants_get_COMPILE_STATUS_Proxy ,
    IWebGLRCConstants_get_LOW_FLOAT_Proxy ,
    IWebGLRCConstants_get_MEDIUM_FLOAT_Proxy ,
    IWebGLRCConstants_get_HIGH_FLOAT_Proxy ,
    IWebGLRCConstants_get_LOW_INT_Proxy ,
    IWebGLRCConstants_get_MEDIUM_INT_Proxy ,
    IWebGLRCConstants_get_HIGH_INT_Proxy ,
    IWebGLRCConstants_get_FRAMEBUFFER_Proxy ,
    IWebGLRCConstants_get_RENDERBUFFER_Proxy ,
    IWebGLRCConstants_get_RGBA4_Proxy ,
    IWebGLRCConstants_get_RGB5_A1_Proxy ,
    IWebGLRCConstants_get_RGB565_Proxy ,
    IWebGLRCConstants_get_DEPTH_COMPONENT16_Proxy ,
    IWebGLRCConstants_get_STENCIL_INDEX_Proxy ,
    IWebGLRCConstants_get_STENCIL_INDEX8_Proxy ,
    IWebGLRCConstants_get_DEPTH_STENCIL_Proxy ,
    IWebGLRCConstants_get_RENDERBUFFER_WIDTH_Proxy ,
    IWebGLRCConstants_get_RENDERBUFFER_HEIGHT_Proxy ,
    IWebGLRCConstants_get_RENDERBUFFER_INTERNAL_FORMAT_Proxy ,
    IWebGLRCConstants_get_RENDERBUFFER_RED_SIZE_Proxy ,
    IWebGLRCConstants_get_RENDERBUFFER_GREEN_SIZE_Proxy ,
    IWebGLRCConstants_get_RENDERBUFFER_BLUE_SIZE_Proxy ,
    IWebGLRCConstants_get_RENDERBUFFER_ALPHA_SIZE_Proxy ,
    IWebGLRCConstants_get_RENDERBUFFER_DEPTH_SIZE_Proxy ,
    IWebGLRCConstants_get_RENDERBUFFER_STENCIL_SIZE_Proxy ,
    IWebGLRCConstants_get_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE_Proxy ,
    IWebGLRCConstants_get_FRAMEBUFFER_ATTACHMENT_OBJECT_NAME_Proxy ,
    IWebGLRCConstants_get_FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL_Proxy ,
    IWebGLRCConstants_get_FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE_Proxy ,
    IWebGLRCConstants_get_COLOR_ATTACHMENT0_Proxy ,
    IWebGLRCConstants_get_DEPTH_ATTACHMENT_Proxy ,
    IWebGLRCConstants_get_STENCIL_ATTACHMENT_Proxy ,
    IWebGLRCConstants_get_DEPTH_STENCIL_ATTACHMENT_Proxy ,
    IWebGLRCConstants_get_NONE_Proxy ,
    IWebGLRCConstants_get_FRAMEBUFFER_COMPLETE_Proxy ,
    IWebGLRCConstants_get_FRAMEBUFFER_INCOMPLETE_ATTACHMENT_Proxy ,
    IWebGLRCConstants_get_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT_Proxy ,
    IWebGLRCConstants_get_FRAMEBUFFER_INCOMPLETE_DIMENSIONS_Proxy ,
    IWebGLRCConstants_get_FRAMEBUFFER_UNSUPPORTED_Proxy ,
    IWebGLRCConstants_get_FRAMEBUFFER_BINDING_Proxy ,
    IWebGLRCConstants_get_RENDERBUFFER_BINDING_Proxy ,
    IWebGLRCConstants_get_MAX_RENDERBUFFER_SIZE_Proxy ,
    IWebGLRCConstants_get_INVALID_FRAMEBUFFER_OPERATION_Proxy ,
    IWebGLRCConstants_get_UNPACK_FLIP_Y_WEBGL_Proxy ,
    IWebGLRCConstants_get_UNPACK_PREMULTIPLY_ALPHA_WEBGL_Proxy ,
    IWebGLRCConstants_get_CONTEXT_LOST_WEBGL_Proxy ,
    IWebGLRCConstants_get_UNPACK_COLORSPACE_CONVERSION_WEBGL_Proxy ,
    IWebGLRCConstants_get_BROWSER_DEFAULT_WEBGL_Proxy
};


static const PRPC_STUB_FUNCTION IWebGLRCConstants_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IWebGLRCConstantsStubVtbl =
{
    &IID_IWebGLRCConstants,
    &IWebGLRCConstants_ServerInfo,
    303,
    &IWebGLRCConstants_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IWebGLRenderingContext, ver. 0.0,
   GUID={0x4444FB36,0x946C,0x4ED8,{0xB2,0xEB,0xB3,0x90,0x8D,0x1E,0x33,0xAF}} */

#pragma code_seg(".orpc")
static const unsigned short IWebGLRenderingContext_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    36,
    144,
    180,
    1524,
    1560,
    288,
    324,
    360,
    1596,
    1632,
    1668,
    1704,
    1740,
    1776,
    1812,
    1848,
    1884,
    1920,
    1956,
    1992,
    2028,
    2064,
    2100,
    2136,
    2172,
    2208,
    2244,
    2280,
    2316,
    2352,
    2388,
    2424,
    2460,
    2496,
    2532,
    2568,
    2604,
    2640,
    2676,
    2712,
    2748,
    2784,
    2820,
    2856,
    2892,
    2928,
    2964,
    3000,
    3036,
    3072,
    3108,
    3144,
    3180,
    3216,
    3252,
    3288,
    3324,
    3360,
    3396,
    3432,
    3468,
    3504,
    3540,
    3576,
    3612,
    3648,
    3684,
    3720,
    3756,
    3792,
    3828,
    3864,
    3900,
    3936,
    3972,
    4008,
    4044,
    4080,
    4116,
    4152,
    4188,
    4224,
    4260,
    4296,
    4332,
    4368,
    4404,
    4440,
    4476,
    4512,
    4548,
    4584,
    4620,
    4656,
    4692,
    4728,
    4764,
    4800,
    4836,
    4872,
    4908,
    4944,
    4980,
    5016,
    5052,
    5088,
    5124,
    5160,
    5196,
    5232,
    5268,
    5304,
    5340,
    5376,
    5412,
    5448,
    5484,
    5520,
    5556,
    5592,
    5628,
    5664,
    5700,
    5736,
    5772,
    5808,
    5844,
    5880,
    5916,
    5952,
    5988,
    6024,
    6060,
    6096,
    6132,
    6168,
    6204,
    6240,
    6276,
    6312,
    6348,
    6384,
    6420,
    6456,
    6492,
    6528,
    6564,
    6600,
    6636,
    6672,
    6708,
    6744,
    6780,
    6816,
    6852,
    6888,
    6924,
    6960,
    6996,
    7032,
    7068,
    7104,
    7140,
    7176,
    7212,
    7248,
    7284,
    7320,
    7356,
    7392,
    7428,
    7464,
    7500,
    7536,
    7572,
    7608,
    7644,
    7680,
    7716,
    7752,
    7788,
    7824,
    7860,
    7896,
    7932,
    7968,
    8004,
    8040,
    8076,
    8112,
    8148,
    8184,
    8220,
    8256,
    8292,
    8328,
    8364,
    8400,
    8436,
    8472,
    8508,
    8544,
    8580,
    8616,
    8652,
    8688,
    8724,
    8760,
    8796,
    8832,
    8868,
    8904,
    8940,
    8976,
    9012,
    9048,
    9084,
    9120,
    9156,
    9192,
    9228,
    9264,
    9300,
    9336,
    9372,
    9408,
    9444,
    9480,
    9516,
    9552,
    9588,
    9624,
    9660,
    9696,
    9732,
    9768,
    9804,
    9840,
    9876,
    9912,
    9948,
    9984,
    10020,
    10056,
    10092,
    10128,
    10164,
    10200,
    10236,
    10272,
    10308,
    10344,
    10380,
    10416,
    10452,
    10488,
    10524,
    10560,
    10596,
    10632,
    10668,
    10704,
    10740,
    10776,
    10812,
    10848,
    10884,
    10920,
    10956,
    10992,
    11028,
    11064,
    11100,
    11136,
    11172,
    11208,
    11244,
    11280,
    11316,
    11352,
    11388,
    11424,
    11460,
    11496,
    11532,
    11568,
    11604,
    11640,
    11676,
    11712,
    11748,
    11784,
    11820,
    11856,
    11892,
    11928,
    11964,
    12000,
    12036,
    12072,
    12108,
    12144,
    12186,
    12222,
    12264,
    12312,
    12354,
    12396,
    12438,
    12480,
    12534,
    12570,
    12612,
    12654,
    12708,
    12756,
    12804,
    12846,
    12882,
    12936,
    12972,
    13008,
    13062,
    13098,
    13170,
    13248,
    13326,
    13404,
    13440,
    13476,
    13512,
    13548,
    13590,
    13626,
    13662,
    13698,
    13734,
    13770,
    13806,
    13842,
    13878,
    13914,
    13950,
    13992,
    14034,
    14070,
    14106,
    14154,
    14208,
    14244,
    14280,
    14310,
    14340,
    14394,
    14454,
    14490,
    14526,
    14574,
    14622,
    14664,
    14712,
    14754,
    14802,
    14838,
    14892,
    14940,
    14982,
    15030,
    15078,
    15126,
    15168,
    15210,
    15258,
    15306,
    15354,
    15402,
    15450,
    15492,
    15534,
    15576,
    15618,
    15660,
    15702,
    15744,
    15786,
    15822,
    15858,
    15900,
    15942,
    16014,
    16068,
    16110,
    16164,
    16206,
    16254,
    16308,
    16344,
    16386,
    16434,
    16488,
    16572,
    16620,
    16668,
    16752,
    16794,
    16836,
    16878,
    16920,
    16968,
    17010,
    17058,
    17100,
    17154,
    17196,
    17250,
    17292,
    17352,
    17394,
    17454,
    17496,
    17544,
    17592,
    17640,
    17676,
    17712,
    17754,
    17796,
    17844,
    17886,
    17940,
    17982,
    18042,
    18084,
    18150
    };

static const MIDL_STUBLESS_PROXY_INFO IWebGLRenderingContext_ProxyInfo =
    {
    &Object_StubDesc,
    WebGL__MIDL_ProcFormatString.Format,
    &IWebGLRenderingContext_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IWebGLRenderingContext_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    WebGL__MIDL_ProcFormatString.Format,
    &IWebGLRenderingContext_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(442) _IWebGLRenderingContextProxyVtbl = 
{
    &IWebGLRenderingContext_ProxyInfo,
    &IID_IWebGLRenderingContext,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IJSObject::toString */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_DEPTH_BUFFER_BIT */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_STENCIL_BUFFER_BIT */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_COLOR_BUFFER_BIT */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_POINTS */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_LINES */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_LINE_LOOP */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_LINE_STRIP */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_TRIANGLES */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_TRIANGLE_STRIP */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_TRIANGLE_FAN */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_ZERO */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_ONE */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_SRC_COLOR */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_ONE_MINUS_SRC_COLOR */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_SRC_ALPHA */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_ONE_MINUS_SRC_ALPHA */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_DST_ALPHA */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_ONE_MINUS_DST_ALPHA */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_DST_COLOR */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_ONE_MINUS_DST_COLOR */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_SRC_ALPHA_SATURATE */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_FUNC_ADD */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_BLEND_EQUATION */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_BLEND_EQUATION_RGB */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_BLEND_EQUATION_ALPHA */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_FUNC_SUBTRACT */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_FUNC_REVERSE_SUBTRACT */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_BLEND_DST_RGB */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_BLEND_SRC_RGB */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_BLEND_DST_ALPHA */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_BLEND_SRC_ALPHA */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_CONSTANT_COLOR */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_ONE_MINUS_CONSTANT_COLOR */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_CONSTANT_ALPHA */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_ONE_MINUS_CONSTANT_ALPHA */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_BLEND_COLOR */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_ARRAY_BUFFER */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_ELEMENT_ARRAY_BUFFER */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_ARRAY_BUFFER_BINDING */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_ELEMENT_ARRAY_BUFFER_BINDING */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_STREAM_DRAW */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_STATIC_DRAW */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_DYNAMIC_DRAW */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_BUFFER_SIZE */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_BUFFER_USAGE */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_CURRENT_VERTEX_ATTRIB */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_FRONT */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_BACK */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_FRONT_AND_BACK */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_CULL_FACE */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_BLEND */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_DITHER */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_STENCIL_TEST */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_DEPTH_TEST */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_SCISSOR_TEST */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_POLYGON_OFFSET_FILL */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_SAMPLE_ALPHA_TO_COVERAGE */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_SAMPLE_COVERAGE */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_NO_ERROR */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_INVALID_ENUM */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_INVALID_VALUE */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_INVALID_OPERATION */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_OUT_OF_MEMORY */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_CW */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_CCW */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_LINE_WIDTH */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_ALIASED_POINT_SIZE_RANGE */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_ALIASED_LINE_WIDTH_RANGE */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_CULL_FACE_MODE */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_FRONT_FACE */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_DEPTH_RANGE */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_DEPTH_WRITEMASK */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_DEPTH_CLEAR_VALUE */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_DEPTH_FUNC */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_STENCIL_CLEAR_VALUE */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_STENCIL_FUNC */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_STENCIL_FAIL */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_STENCIL_PASS_DEPTH_FAIL */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_STENCIL_PASS_DEPTH_PASS */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_STENCIL_REF */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_STENCIL_VALUE_MASK */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_STENCIL_WRITEMASK */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_STENCIL_BACK_FUNC */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_STENCIL_BACK_FAIL */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_STENCIL_BACK_PASS_DEPTH_FAIL */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_STENCIL_BACK_PASS_DEPTH_PASS */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_STENCIL_BACK_REF */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_STENCIL_BACK_VALUE_MASK */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_STENCIL_BACK_WRITEMASK */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_VIEWPORT */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_SCISSOR_BOX */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_COLOR_CLEAR_VALUE */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_COLOR_WRITEMASK */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_UNPACK_ALIGNMENT */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_PACK_ALIGNMENT */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_MAX_TEXTURE_SIZE */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_MAX_VIEWPORT_DIMS */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_SUBPIXEL_BITS */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_RED_BITS */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_GREEN_BITS */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_BLUE_BITS */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_ALPHA_BITS */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_DEPTH_BITS */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_STENCIL_BITS */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_POLYGON_OFFSET_UNITS */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_POLYGON_OFFSET_FACTOR */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_TEXTURE_BINDING_2D */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_SAMPLE_BUFFERS */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_SAMPLES */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_SAMPLE_COVERAGE_VALUE */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_SAMPLE_COVERAGE_INVERT */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_COMPRESSED_TEXTURE_FORMATS */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_DONT_CARE */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_FASTEST */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_NICEST */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_GENERATE_MIPMAP_HINT */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_BYTE */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_UNSIGNED_BYTE */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_SHORT */ ,
    (void *) (INT_PTR) -1 /* IWebGLRCConstants::get_UNSIGNED_SHORT */ ,
    IWebGLRCConstants_get_INT_Proxy ,
    IWebGLRCConstants_get_UNSIGNED_INT_Proxy ,
    IWebGLRCConstants_get_FLOAT_Proxy ,
    IWebGLRCConstants_get_DEPTH_COMPONENT_Proxy ,
    IWebGLRCConstants_get_ALPHA_Proxy ,
    IWebGLRCConstants_get_RGB_Proxy ,
    IWebGLRCConstants_get_RGBA_Proxy ,
    IWebGLRCConstants_get_LUMINANCE_Proxy ,
    IWebGLRCConstants_get_LUMINANCE_ALPHA_Proxy ,
    IWebGLRCConstants_get_UNSIGNED_SHORT_4_4_4_4_Proxy ,
    IWebGLRCConstants_get_UNSIGNED_SHORT_5_5_5_1_Proxy ,
    IWebGLRCConstants_get_UNSIGNED_SHORT_5_6_5_Proxy ,
    IWebGLRCConstants_get_FRAGMENT_SHADER_Proxy ,
    IWebGLRCConstants_get_VERTEX_SHADER_Proxy ,
    IWebGLRCConstants_get_MAX_VERTEX_ATTRIBS_Proxy ,
    IWebGLRCConstants_get_MAX_VERTEX_UNIFORM_VECTORS_Proxy ,
    IWebGLRCConstants_get_MAX_VARYING_VECTORS_Proxy ,
    IWebGLRCConstants_get_MAX_COMBINED_TEXTURE_IMAGE_UNITS_Proxy ,
    IWebGLRCConstants_get_MAX_VERTEX_TEXTURE_IMAGE_UNITS_Proxy ,
    IWebGLRCConstants_get_MAX_TEXTURE_IMAGE_UNITS_Proxy ,
    IWebGLRCConstants_get_MAX_FRAGMENT_UNIFORM_VECTORS_Proxy ,
    IWebGLRCConstants_get_SHADER_TYPE_Proxy ,
    IWebGLRCConstants_get_DELETE_STATUS_Proxy ,
    IWebGLRCConstants_get_LINK_STATUS_Proxy ,
    IWebGLRCConstants_get_VALIDATE_STATUS_Proxy ,
    IWebGLRCConstants_get_ATTACHED_SHADERS_Proxy ,
    IWebGLRCConstants_get_ACTIVE_UNIFORMS_Proxy ,
    IWebGLRCConstants_get_ACTIVE_ATTRIBUTES_Proxy ,
    IWebGLRCConstants_get_SHADING_LANGUAGE_VERSION_Proxy ,
    IWebGLRCConstants_get_CURRENT_PROGRAM_Proxy ,
    IWebGLRCConstants_get_NEVER_Proxy ,
    IWebGLRCConstants_get_LESS_Proxy ,
    IWebGLRCConstants_get_EQUAL_Proxy ,
    IWebGLRCConstants_get_LEQUAL_Proxy ,
    IWebGLRCConstants_get_GREATER_Proxy ,
    IWebGLRCConstants_get_NOTEQUAL_Proxy ,
    IWebGLRCConstants_get_GEQUAL_Proxy ,
    IWebGLRCConstants_get_ALWAYS_Proxy ,
    IWebGLRCConstants_get_KEEP_Proxy ,
    IWebGLRCConstants_get_REPLACE_Proxy ,
    IWebGLRCConstants_get_INCR_Proxy ,
    IWebGLRCConstants_get_DECR_Proxy ,
    IWebGLRCConstants_get_INVERT_Proxy ,
    IWebGLRCConstants_get_INCR_WRAP_Proxy ,
    IWebGLRCConstants_get_DECR_WRAP_Proxy ,
    IWebGLRCConstants_get_VENDOR_Proxy ,
    IWebGLRCConstants_get_RENDERER_Proxy ,
    IWebGLRCConstants_get_VERSION_Proxy ,
    IWebGLRCConstants_get_NEAREST_Proxy ,
    IWebGLRCConstants_get_LINEAR_Proxy ,
    IWebGLRCConstants_get_NEAREST_MIPMAP_NEAREST_Proxy ,
    IWebGLRCConstants_get_LINEAR_MIPMAP_NEAREST_Proxy ,
    IWebGLRCConstants_get_NEAREST_MIPMAP_LINEAR_Proxy ,
    IWebGLRCConstants_get_LINEAR_MIPMAP_LINEAR_Proxy ,
    IWebGLRCConstants_get_TEXTURE_MAG_FILTER_Proxy ,
    IWebGLRCConstants_get_TEXTURE_MIN_FILTER_Proxy ,
    IWebGLRCConstants_get_TEXTURE_WRAP_S_Proxy ,
    IWebGLRCConstants_get_TEXTURE_WRAP_T_Proxy ,
    IWebGLRCConstants_get_TEXTURE_2D_Proxy ,
    IWebGLRCConstants_get_TEXTURE_Proxy ,
    IWebGLRCConstants_get_TEXTURE_CUBE_MAP_Proxy ,
    IWebGLRCConstants_get_TEXTURE_BINDING_CUBE_MAP_Proxy ,
    IWebGLRCConstants_get_TEXTURE_CUBE_MAP_POSITIVE_X_Proxy ,
    IWebGLRCConstants_get_TEXTURE_CUBE_MAP_NEGATIVE_X_Proxy ,
    IWebGLRCConstants_get_TEXTURE_CUBE_MAP_POSITIVE_Y_Proxy ,
    IWebGLRCConstants_get_TEXTURE_CUBE_MAP_NEGATIVE_Y_Proxy ,
    IWebGLRCConstants_get_TEXTURE_CUBE_MAP_POSITIVE_Z_Proxy ,
    IWebGLRCConstants_get_TEXTURE_CUBE_MAP_NEGATIVE_Z_Proxy ,
    IWebGLRCConstants_get_MAX_CUBE_MAP_TEXTURE_SIZE_Proxy ,
    IWebGLRCConstants_get_TEXTURE0_Proxy ,
    IWebGLRCConstants_get_TEXTURE1_Proxy ,
    IWebGLRCConstants_get_TEXTURE2_Proxy ,
    IWebGLRCConstants_get_TEXTURE3_Proxy ,
    IWebGLRCConstants_get_TEXTURE4_Proxy ,
    IWebGLRCConstants_get_TEXTURE5_Proxy ,
    IWebGLRCConstants_get_TEXTURE6_Proxy ,
    IWebGLRCConstants_get_TEXTURE7_Proxy ,
    IWebGLRCConstants_get_TEXTURE8_Proxy ,
    IWebGLRCConstants_get_TEXTURE9_Proxy ,
    IWebGLRCConstants_get_TEXTURE10_Proxy ,
    IWebGLRCConstants_get_TEXTURE11_Proxy ,
    IWebGLRCConstants_get_TEXTURE12_Proxy ,
    IWebGLRCConstants_get_TEXTURE13_Proxy ,
    IWebGLRCConstants_get_TEXTURE14_Proxy ,
    IWebGLRCConstants_get_TEXTURE15_Proxy ,
    IWebGLRCConstants_get_TEXTURE16_Proxy ,
    IWebGLRCConstants_get_TEXTURE17_Proxy ,
    IWebGLRCConstants_get_TEXTURE18_Proxy ,
    IWebGLRCConstants_get_TEXTURE19_Proxy ,
    IWebGLRCConstants_get_TEXTURE20_Proxy ,
    IWebGLRCConstants_get_TEXTURE21_Proxy ,
    IWebGLRCConstants_get_TEXTURE22_Proxy ,
    IWebGLRCConstants_get_TEXTURE23_Proxy ,
    IWebGLRCConstants_get_TEXTURE24_Proxy ,
    IWebGLRCConstants_get_TEXTURE25_Proxy ,
    IWebGLRCConstants_get_TEXTURE26_Proxy ,
    IWebGLRCConstants_get_TEXTURE27_Proxy ,
    IWebGLRCConstants_get_TEXTURE28_Proxy ,
    IWebGLRCConstants_get_TEXTURE29_Proxy ,
    IWebGLRCConstants_get_TEXTURE30_Proxy ,
    IWebGLRCConstants_get_TEXTURE31_Proxy ,
    IWebGLRCConstants_get_ACTIVE_TEXTURE_Proxy ,
    IWebGLRCConstants_get_REPEAT_Proxy ,
    IWebGLRCConstants_get_CLAMP_TO_EDGE_Proxy ,
    IWebGLRCConstants_get_MIRRORED_REPEAT_Proxy ,
    IWebGLRCConstants_get_FLOAT_VEC2_Proxy ,
    IWebGLRCConstants_get_FLOAT_VEC3_Proxy ,
    IWebGLRCConstants_get_FLOAT_VEC4_Proxy ,
    IWebGLRCConstants_get_INT_VEC2_Proxy ,
    IWebGLRCConstants_get_INT_VEC3_Proxy ,
    IWebGLRCConstants_get_INT_VEC4_Proxy ,
    IWebGLRCConstants_get_BOOL_Proxy ,
    IWebGLRCConstants_get_BOOL_VEC2_Proxy ,
    IWebGLRCConstants_get_BOOL_VEC3_Proxy ,
    IWebGLRCConstants_get_BOOL_VEC4_Proxy ,
    IWebGLRCConstants_get_FLOAT_MAT2_Proxy ,
    IWebGLRCConstants_get_FLOAT_MAT3_Proxy ,
    IWebGLRCConstants_get_FLOAT_MAT4_Proxy ,
    IWebGLRCConstants_get_SAMPLER_2D_Proxy ,
    IWebGLRCConstants_get_SAMPLER_CUBE_Proxy ,
    IWebGLRCConstants_get_VERTEX_ATTRIB_ARRAY_ENABLED_Proxy ,
    IWebGLRCConstants_get_VERTEX_ATTRIB_ARRAY_SIZE_Proxy ,
    IWebGLRCConstants_get_VERTEX_ATTRIB_ARRAY_STRIDE_Proxy ,
    IWebGLRCConstants_get_VERTEX_ATTRIB_ARRAY_TYPE_Proxy ,
    IWebGLRCConstants_get_VERTEX_ATTRIB_ARRAY_NORMALIZED_Proxy ,
    IWebGLRCConstants_get_VERTEX_ATTRIB_ARRAY_POINTER_Proxy ,
    IWebGLRCConstants_get_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING_Proxy ,
    IWebGLRCConstants_get_COMPILE_STATUS_Proxy ,
    IWebGLRCConstants_get_LOW_FLOAT_Proxy ,
    IWebGLRCConstants_get_MEDIUM_FLOAT_Proxy ,
    IWebGLRCConstants_get_HIGH_FLOAT_Proxy ,
    IWebGLRCConstants_get_LOW_INT_Proxy ,
    IWebGLRCConstants_get_MEDIUM_INT_Proxy ,
    IWebGLRCConstants_get_HIGH_INT_Proxy ,
    IWebGLRCConstants_get_FRAMEBUFFER_Proxy ,
    IWebGLRCConstants_get_RENDERBUFFER_Proxy ,
    IWebGLRCConstants_get_RGBA4_Proxy ,
    IWebGLRCConstants_get_RGB5_A1_Proxy ,
    IWebGLRCConstants_get_RGB565_Proxy ,
    IWebGLRCConstants_get_DEPTH_COMPONENT16_Proxy ,
    IWebGLRCConstants_get_STENCIL_INDEX_Proxy ,
    IWebGLRCConstants_get_STENCIL_INDEX8_Proxy ,
    IWebGLRCConstants_get_DEPTH_STENCIL_Proxy ,
    IWebGLRCConstants_get_RENDERBUFFER_WIDTH_Proxy ,
    IWebGLRCConstants_get_RENDERBUFFER_HEIGHT_Proxy ,
    IWebGLRCConstants_get_RENDERBUFFER_INTERNAL_FORMAT_Proxy ,
    IWebGLRCConstants_get_RENDERBUFFER_RED_SIZE_Proxy ,
    IWebGLRCConstants_get_RENDERBUFFER_GREEN_SIZE_Proxy ,
    IWebGLRCConstants_get_RENDERBUFFER_BLUE_SIZE_Proxy ,
    IWebGLRCConstants_get_RENDERBUFFER_ALPHA_SIZE_Proxy ,
    IWebGLRCConstants_get_RENDERBUFFER_DEPTH_SIZE_Proxy ,
    IWebGLRCConstants_get_RENDERBUFFER_STENCIL_SIZE_Proxy ,
    IWebGLRCConstants_get_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE_Proxy ,
    IWebGLRCConstants_get_FRAMEBUFFER_ATTACHMENT_OBJECT_NAME_Proxy ,
    IWebGLRCConstants_get_FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL_Proxy ,
    IWebGLRCConstants_get_FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE_Proxy ,
    IWebGLRCConstants_get_COLOR_ATTACHMENT0_Proxy ,
    IWebGLRCConstants_get_DEPTH_ATTACHMENT_Proxy ,
    IWebGLRCConstants_get_STENCIL_ATTACHMENT_Proxy ,
    IWebGLRCConstants_get_DEPTH_STENCIL_ATTACHMENT_Proxy ,
    IWebGLRCConstants_get_NONE_Proxy ,
    IWebGLRCConstants_get_FRAMEBUFFER_COMPLETE_Proxy ,
    IWebGLRCConstants_get_FRAMEBUFFER_INCOMPLETE_ATTACHMENT_Proxy ,
    IWebGLRCConstants_get_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT_Proxy ,
    IWebGLRCConstants_get_FRAMEBUFFER_INCOMPLETE_DIMENSIONS_Proxy ,
    IWebGLRCConstants_get_FRAMEBUFFER_UNSUPPORTED_Proxy ,
    IWebGLRCConstants_get_FRAMEBUFFER_BINDING_Proxy ,
    IWebGLRCConstants_get_RENDERBUFFER_BINDING_Proxy ,
    IWebGLRCConstants_get_MAX_RENDERBUFFER_SIZE_Proxy ,
    IWebGLRCConstants_get_INVALID_FRAMEBUFFER_OPERATION_Proxy ,
    IWebGLRCConstants_get_UNPACK_FLIP_Y_WEBGL_Proxy ,
    IWebGLRCConstants_get_UNPACK_PREMULTIPLY_ALPHA_WEBGL_Proxy ,
    IWebGLRCConstants_get_CONTEXT_LOST_WEBGL_Proxy ,
    IWebGLRCConstants_get_UNPACK_COLORSPACE_CONVERSION_WEBGL_Proxy ,
    IWebGLRCConstants_get_BROWSER_DEFAULT_WEBGL_Proxy ,
    IWebGLRenderingContext_get_canvas_Proxy ,
    IWebGLRenderingContext_get_drawingBufferWidth_Proxy ,
    IWebGLRenderingContext_get_drawingBufferHeight_Proxy ,
    IWebGLRenderingContext_getContextAttributes_Proxy ,
    IWebGLRenderingContext_isContextLost_Proxy ,
    IWebGLRenderingContext_getSupportedExtensions_Proxy ,
    IWebGLRenderingContext_getExtension_Proxy ,
    IWebGLRenderingContext_activeTexture_Proxy ,
    IWebGLRenderingContext_attachShader_Proxy ,
    IWebGLRenderingContext_bindAttribLocation_Proxy ,
    IWebGLRenderingContext_bindBuffer_Proxy ,
    IWebGLRenderingContext_bindFramebuffer_Proxy ,
    IWebGLRenderingContext_bindRenderbuffer_Proxy ,
    IWebGLRenderingContext_bindTexture_Proxy ,
    IWebGLRenderingContext_blendColor_Proxy ,
    IWebGLRenderingContext_blendEquation_Proxy ,
    IWebGLRenderingContext_blendEquationSeparate_Proxy ,
    IWebGLRenderingContext_blendFunc_Proxy ,
    IWebGLRenderingContext_blendFuncSeparate_Proxy ,
    IWebGLRenderingContext_bufferData_Proxy ,
    IWebGLRenderingContext_bufferSubData_Proxy ,
    IWebGLRenderingContext_checkFramebufferStatus_Proxy ,
    IWebGLRenderingContext_clear_Proxy ,
    IWebGLRenderingContext_clearColor_Proxy ,
    IWebGLRenderingContext_clearDepth_Proxy ,
    IWebGLRenderingContext_clearStencil_Proxy ,
    IWebGLRenderingContext_colorMask_Proxy ,
    IWebGLRenderingContext_compileShader_Proxy ,
    IWebGLRenderingContext_compressedTexImage2D_Proxy ,
    IWebGLRenderingContext_compressedTexSubImage2D_Proxy ,
    IWebGLRenderingContext_copyTexImage2D_Proxy ,
    IWebGLRenderingContext_copyTexSubImage2D_Proxy ,
    IWebGLRenderingContext_createBuffer_Proxy ,
    IWebGLRenderingContext_createFramebuffer_Proxy ,
    IWebGLRenderingContext_createProgram_Proxy ,
    IWebGLRenderingContext_createRenderbuffer_Proxy ,
    IWebGLRenderingContext_createShader_Proxy ,
    IWebGLRenderingContext_createTexture_Proxy ,
    IWebGLRenderingContext_cullFace_Proxy ,
    IWebGLRenderingContext_deleteBuffer_Proxy ,
    IWebGLRenderingContext_deleteFramebuffer_Proxy ,
    IWebGLRenderingContext_deleteProgram_Proxy ,
    IWebGLRenderingContext_deleteRenderbuffer_Proxy ,
    IWebGLRenderingContext_deleteShader_Proxy ,
    IWebGLRenderingContext_deleteTexture_Proxy ,
    IWebGLRenderingContext_depthFunc_Proxy ,
    IWebGLRenderingContext_depthMask_Proxy ,
    IWebGLRenderingContext_depthRange_Proxy ,
    IWebGLRenderingContext_detachShader_Proxy ,
    IWebGLRenderingContext_disable_Proxy ,
    IWebGLRenderingContext_disableVertexAttribArray_Proxy ,
    IWebGLRenderingContext_drawArrays_Proxy ,
    IWebGLRenderingContext_drawElements_Proxy ,
    IWebGLRenderingContext_enable_Proxy ,
    IWebGLRenderingContext_enableVertexAttribArray_Proxy ,
    IWebGLRenderingContext_finish_Proxy ,
    IWebGLRenderingContext_flush_Proxy ,
    IWebGLRenderingContext_framebufferRenderbuffer_Proxy ,
    IWebGLRenderingContext_framebufferTexture2D_Proxy ,
    IWebGLRenderingContext_frontFace_Proxy ,
    IWebGLRenderingContext_generateMipmap_Proxy ,
    IWebGLRenderingContext_getActiveAttrib_Proxy ,
    IWebGLRenderingContext_getActiveUniform_Proxy ,
    IWebGLRenderingContext_getAttachedShaders_Proxy ,
    IWebGLRenderingContext_getAttribLocation_Proxy ,
    IWebGLRenderingContext_getParameter_Proxy ,
    IWebGLRenderingContext_getBufferParameter_Proxy ,
    IWebGLRenderingContext_getError_Proxy ,
    IWebGLRenderingContext_getFramebufferAttachmentParameter_Proxy ,
    IWebGLRenderingContext_getProgramParameter_Proxy ,
    IWebGLRenderingContext_getProgramInfoLog_Proxy ,
    IWebGLRenderingContext_getRenderbufferParameter_Proxy ,
    IWebGLRenderingContext_getShaderParameter_Proxy ,
    IWebGLRenderingContext_getShaderPrecisionFormat_Proxy ,
    IWebGLRenderingContext_getShaderInfoLog_Proxy ,
    IWebGLRenderingContext_getShaderSource_Proxy ,
    IWebGLRenderingContext_getTexParameter_Proxy ,
    IWebGLRenderingContext_getUniform_Proxy ,
    IWebGLRenderingContext_getUniformLocation_Proxy ,
    IWebGLRenderingContext_getVertexAttrib_Proxy ,
    IWebGLRenderingContext_getVertexAttribOffset_Proxy ,
    IWebGLRenderingContext_hint_Proxy ,
    IWebGLRenderingContext_isBuffer_Proxy ,
    IWebGLRenderingContext_isEnabled_Proxy ,
    IWebGLRenderingContext_isFramebuffer_Proxy ,
    IWebGLRenderingContext_isProgram_Proxy ,
    IWebGLRenderingContext_isRenderbuffer_Proxy ,
    IWebGLRenderingContext_isShader_Proxy ,
    IWebGLRenderingContext_isTexture_Proxy ,
    IWebGLRenderingContext_lineWidth_Proxy ,
    IWebGLRenderingContext_linkProgram_Proxy ,
    IWebGLRenderingContext_pixelStorei_Proxy ,
    IWebGLRenderingContext_polygonOffset_Proxy ,
    IWebGLRenderingContext_readPixels_Proxy ,
    IWebGLRenderingContext_renderbufferStorage_Proxy ,
    IWebGLRenderingContext_sampleCoverage_Proxy ,
    IWebGLRenderingContext_scissor_Proxy ,
    IWebGLRenderingContext_shaderSource_Proxy ,
    IWebGLRenderingContext_stencilFunc_Proxy ,
    IWebGLRenderingContext_stencilFuncSeparate_Proxy ,
    IWebGLRenderingContext_stencilMask_Proxy ,
    IWebGLRenderingContext_stencilMaskSeparate_Proxy ,
    IWebGLRenderingContext_stencilOp_Proxy ,
    IWebGLRenderingContext_stencilOpSeparate_Proxy ,
    IWebGLRenderingContext_texImage2D_Proxy ,
    IWebGLRenderingContext_texParameterf_Proxy ,
    IWebGLRenderingContext_texParameteri_Proxy ,
    IWebGLRenderingContext_texSubImage2D_Proxy ,
    IWebGLRenderingContext_uniform1f_Proxy ,
    IWebGLRenderingContext_uniform1fv_Proxy ,
    IWebGLRenderingContext_uniform1i_Proxy ,
    IWebGLRenderingContext_uniform1iv_Proxy ,
    IWebGLRenderingContext_uniform2f_Proxy ,
    IWebGLRenderingContext_uniform2fv_Proxy ,
    IWebGLRenderingContext_uniform2i_Proxy ,
    IWebGLRenderingContext_uniform2iv_Proxy ,
    IWebGLRenderingContext_uniform3f_Proxy ,
    IWebGLRenderingContext_uniform3fv_Proxy ,
    IWebGLRenderingContext_uniform3i_Proxy ,
    IWebGLRenderingContext_uniform3iv_Proxy ,
    IWebGLRenderingContext_uniform4f_Proxy ,
    IWebGLRenderingContext_uniform4fv_Proxy ,
    IWebGLRenderingContext_uniform4i_Proxy ,
    IWebGLRenderingContext_uniform4iv_Proxy ,
    IWebGLRenderingContext_uniformMatrix2fv_Proxy ,
    IWebGLRenderingContext_uniformMatrix3fv_Proxy ,
    IWebGLRenderingContext_uniformMatrix4fv_Proxy ,
    IWebGLRenderingContext_useProgram_Proxy ,
    IWebGLRenderingContext_validateProgram_Proxy ,
    IWebGLRenderingContext_vertexAttrib1f_Proxy ,
    IWebGLRenderingContext_vertexAttrib1fv_Proxy ,
    IWebGLRenderingContext_vertexAttrib2f_Proxy ,
    IWebGLRenderingContext_vertexAttrib2fv_Proxy ,
    IWebGLRenderingContext_vertexAttrib3f_Proxy ,
    IWebGLRenderingContext_vertexAttrib3fv_Proxy ,
    IWebGLRenderingContext_vertexAttrib4f_Proxy ,
    IWebGLRenderingContext_vertexAttrib4fv_Proxy ,
    IWebGLRenderingContext_vertexAttribPointer_Proxy ,
    IWebGLRenderingContext___viewport_Proxy
};


static const PRPC_STUB_FUNCTION IWebGLRenderingContext_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IWebGLRenderingContextStubVtbl =
{
    &IID_IWebGLRenderingContext,
    &IWebGLRenderingContext_ServerInfo,
    442,
    &IWebGLRenderingContext_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};

static const MIDL_STUB_DESC Object_StubDesc = 
    {
    0,
    NdrOleAllocate,
    NdrOleFree,
    0,
    0,
    0,
    0,
    0,
    WebGL__MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0x50002, /* Ndr library version */
    0,
    0x700022b, /* MIDL Version 7.0.555 */
    0,
    UserMarshalRoutines,
    0,  /* notify & notify_flag routine table */
    0x1, /* MIDL flag */
    0, /* cs routines */
    0,   /* proxy/server info */
    0
    };

const CInterfaceProxyVtbl * const _WebGL_ProxyVtblList[] = 
{
    ( CInterfaceProxyVtbl *) &_IWebGLActiveInfoProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWebGLRCConstantsProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWebGLContextAttributesProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IInt32ArrayProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWebGLBufferProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IInt16ArrayProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWebGLRenderingContextProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IFloat64ArrayProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IInt8ArrayProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IJSObjectProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IArrayBufferViewProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ITypedArrayBufferViewProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWebGLRenderbufferProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWebGLUniformLocationProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IUint16ArrayProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWebGLProgramProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IUint8ArrayProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWebGLObjectProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IFloat32ArrayProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IDataArrayViewProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWebGLTextureProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWebGLShaderPrecisionFormatProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWebGLFramebufferProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IArrayBufferProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWebGLShaderProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IUint32ArrayProxyVtbl,
    0
};

const CInterfaceStubVtbl * const _WebGL_StubVtblList[] = 
{
    ( CInterfaceStubVtbl *) &_IWebGLActiveInfoStubVtbl,
    ( CInterfaceStubVtbl *) &_IWebGLRCConstantsStubVtbl,
    ( CInterfaceStubVtbl *) &_IWebGLContextAttributesStubVtbl,
    ( CInterfaceStubVtbl *) &_IInt32ArrayStubVtbl,
    ( CInterfaceStubVtbl *) &_IWebGLBufferStubVtbl,
    ( CInterfaceStubVtbl *) &_IInt16ArrayStubVtbl,
    ( CInterfaceStubVtbl *) &_IWebGLRenderingContextStubVtbl,
    ( CInterfaceStubVtbl *) &_IFloat64ArrayStubVtbl,
    ( CInterfaceStubVtbl *) &_IInt8ArrayStubVtbl,
    ( CInterfaceStubVtbl *) &_IJSObjectStubVtbl,
    ( CInterfaceStubVtbl *) &_IArrayBufferViewStubVtbl,
    ( CInterfaceStubVtbl *) &_ITypedArrayBufferViewStubVtbl,
    ( CInterfaceStubVtbl *) &_IWebGLRenderbufferStubVtbl,
    ( CInterfaceStubVtbl *) &_IWebGLUniformLocationStubVtbl,
    ( CInterfaceStubVtbl *) &_IUint16ArrayStubVtbl,
    ( CInterfaceStubVtbl *) &_IWebGLProgramStubVtbl,
    ( CInterfaceStubVtbl *) &_IUint8ArrayStubVtbl,
    ( CInterfaceStubVtbl *) &_IWebGLObjectStubVtbl,
    ( CInterfaceStubVtbl *) &_IFloat32ArrayStubVtbl,
    ( CInterfaceStubVtbl *) &_IDataArrayViewStubVtbl,
    ( CInterfaceStubVtbl *) &_IWebGLTextureStubVtbl,
    ( CInterfaceStubVtbl *) &_IWebGLShaderPrecisionFormatStubVtbl,
    ( CInterfaceStubVtbl *) &_IWebGLFramebufferStubVtbl,
    ( CInterfaceStubVtbl *) &_IArrayBufferStubVtbl,
    ( CInterfaceStubVtbl *) &_IWebGLShaderStubVtbl,
    ( CInterfaceStubVtbl *) &_IUint32ArrayStubVtbl,
    0
};

PCInterfaceName const _WebGL_InterfaceNamesList[] = 
{
    "IWebGLActiveInfo",
    "IWebGLRCConstants",
    "IWebGLContextAttributes",
    "IInt32Array",
    "IWebGLBuffer",
    "IInt16Array",
    "IWebGLRenderingContext",
    "IFloat64Array",
    "IInt8Array",
    "IJSObject",
    "IArrayBufferView",
    "ITypedArrayBufferView",
    "IWebGLRenderbuffer",
    "IWebGLUniformLocation",
    "IUint16Array",
    "IWebGLProgram",
    "IUint8Array",
    "IWebGLObject",
    "IFloat32Array",
    "IDataArrayView",
    "IWebGLTexture",
    "IWebGLShaderPrecisionFormat",
    "IWebGLFramebuffer",
    "IArrayBuffer",
    "IWebGLShader",
    "IUint32Array",
    0
};

const IID *  const _WebGL_BaseIIDList[] = 
{
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    0
};


#define _WebGL_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _WebGL, pIID, n)

int __stdcall _WebGL_IID_Lookup( const IID * pIID, int * pIndex )
{
    IID_BS_LOOKUP_SETUP

    IID_BS_LOOKUP_INITIAL_TEST( _WebGL, 26, 16 )
    IID_BS_LOOKUP_NEXT_TEST( _WebGL, 8 )
    IID_BS_LOOKUP_NEXT_TEST( _WebGL, 4 )
    IID_BS_LOOKUP_NEXT_TEST( _WebGL, 2 )
    IID_BS_LOOKUP_NEXT_TEST( _WebGL, 1 )
    IID_BS_LOOKUP_RETURN_RESULT( _WebGL, 26, *pIndex )
    
}

const ExtendedProxyFileInfo WebGL_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _WebGL_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _WebGL_StubVtblList,
    (const PCInterfaceName * ) & _WebGL_InterfaceNamesList,
    (const IID ** ) & _WebGL_BaseIIDList,
    & _WebGL_IID_Lookup, 
    26,
    2,
    0, /* table of [async_uuid] interfaces */
    0, /* Filler1 */
    0, /* Filler2 */
    0  /* Filler3 */
};
#pragma optimize("", on )
#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* !defined(_M_IA64) && !defined(_M_AMD64)*/

