

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


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


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __IEWebGL_i_h__
#define __IEWebGL_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IJSObject_FWD_DEFINED__
#define __IJSObject_FWD_DEFINED__
typedef interface IJSObject IJSObject;
#endif 	/* __IJSObject_FWD_DEFINED__ */


#ifndef __IArrayBuffer_FWD_DEFINED__
#define __IArrayBuffer_FWD_DEFINED__
typedef interface IArrayBuffer IArrayBuffer;
#endif 	/* __IArrayBuffer_FWD_DEFINED__ */


#ifndef __IArrayBufferView_FWD_DEFINED__
#define __IArrayBufferView_FWD_DEFINED__
typedef interface IArrayBufferView IArrayBufferView;
#endif 	/* __IArrayBufferView_FWD_DEFINED__ */


#ifndef __ITypedArrayBufferView_FWD_DEFINED__
#define __ITypedArrayBufferView_FWD_DEFINED__
typedef interface ITypedArrayBufferView ITypedArrayBufferView;
#endif 	/* __ITypedArrayBufferView_FWD_DEFINED__ */


#ifndef __IInt8Array_FWD_DEFINED__
#define __IInt8Array_FWD_DEFINED__
typedef interface IInt8Array IInt8Array;
#endif 	/* __IInt8Array_FWD_DEFINED__ */


#ifndef __IUint8Array_FWD_DEFINED__
#define __IUint8Array_FWD_DEFINED__
typedef interface IUint8Array IUint8Array;
#endif 	/* __IUint8Array_FWD_DEFINED__ */


#ifndef __IInt16Array_FWD_DEFINED__
#define __IInt16Array_FWD_DEFINED__
typedef interface IInt16Array IInt16Array;
#endif 	/* __IInt16Array_FWD_DEFINED__ */


#ifndef __IUint16Array_FWD_DEFINED__
#define __IUint16Array_FWD_DEFINED__
typedef interface IUint16Array IUint16Array;
#endif 	/* __IUint16Array_FWD_DEFINED__ */


#ifndef __IInt32Array_FWD_DEFINED__
#define __IInt32Array_FWD_DEFINED__
typedef interface IInt32Array IInt32Array;
#endif 	/* __IInt32Array_FWD_DEFINED__ */


#ifndef __IUint32Array_FWD_DEFINED__
#define __IUint32Array_FWD_DEFINED__
typedef interface IUint32Array IUint32Array;
#endif 	/* __IUint32Array_FWD_DEFINED__ */


#ifndef __IFloat32Array_FWD_DEFINED__
#define __IFloat32Array_FWD_DEFINED__
typedef interface IFloat32Array IFloat32Array;
#endif 	/* __IFloat32Array_FWD_DEFINED__ */


#ifndef __IFloat64Array_FWD_DEFINED__
#define __IFloat64Array_FWD_DEFINED__
typedef interface IFloat64Array IFloat64Array;
#endif 	/* __IFloat64Array_FWD_DEFINED__ */


#ifndef __IDataArrayView_FWD_DEFINED__
#define __IDataArrayView_FWD_DEFINED__
typedef interface IDataArrayView IDataArrayView;
#endif 	/* __IDataArrayView_FWD_DEFINED__ */


#ifndef __IWebGLObject_FWD_DEFINED__
#define __IWebGLObject_FWD_DEFINED__
typedef interface IWebGLObject IWebGLObject;
#endif 	/* __IWebGLObject_FWD_DEFINED__ */


#ifndef __IWebGLBuffer_FWD_DEFINED__
#define __IWebGLBuffer_FWD_DEFINED__
typedef interface IWebGLBuffer IWebGLBuffer;
#endif 	/* __IWebGLBuffer_FWD_DEFINED__ */


#ifndef __IWebGLFramebuffer_FWD_DEFINED__
#define __IWebGLFramebuffer_FWD_DEFINED__
typedef interface IWebGLFramebuffer IWebGLFramebuffer;
#endif 	/* __IWebGLFramebuffer_FWD_DEFINED__ */


#ifndef __IWebGLShader_FWD_DEFINED__
#define __IWebGLShader_FWD_DEFINED__
typedef interface IWebGLShader IWebGLShader;
#endif 	/* __IWebGLShader_FWD_DEFINED__ */


#ifndef __IWebGLProgram_FWD_DEFINED__
#define __IWebGLProgram_FWD_DEFINED__
typedef interface IWebGLProgram IWebGLProgram;
#endif 	/* __IWebGLProgram_FWD_DEFINED__ */


#ifndef __IWebGLRenderbuffer_FWD_DEFINED__
#define __IWebGLRenderbuffer_FWD_DEFINED__
typedef interface IWebGLRenderbuffer IWebGLRenderbuffer;
#endif 	/* __IWebGLRenderbuffer_FWD_DEFINED__ */


#ifndef __IWebGLTexture_FWD_DEFINED__
#define __IWebGLTexture_FWD_DEFINED__
typedef interface IWebGLTexture IWebGLTexture;
#endif 	/* __IWebGLTexture_FWD_DEFINED__ */


#ifndef __IWebGLUniformLocation_FWD_DEFINED__
#define __IWebGLUniformLocation_FWD_DEFINED__
typedef interface IWebGLUniformLocation IWebGLUniformLocation;
#endif 	/* __IWebGLUniformLocation_FWD_DEFINED__ */


#ifndef __IWebGLActiveInfo_FWD_DEFINED__
#define __IWebGLActiveInfo_FWD_DEFINED__
typedef interface IWebGLActiveInfo IWebGLActiveInfo;
#endif 	/* __IWebGLActiveInfo_FWD_DEFINED__ */


#ifndef __IWebGLShaderPrecisionFormat_FWD_DEFINED__
#define __IWebGLShaderPrecisionFormat_FWD_DEFINED__
typedef interface IWebGLShaderPrecisionFormat IWebGLShaderPrecisionFormat;
#endif 	/* __IWebGLShaderPrecisionFormat_FWD_DEFINED__ */


#ifndef __IWebGLContextAttributes_FWD_DEFINED__
#define __IWebGLContextAttributes_FWD_DEFINED__
typedef interface IWebGLContextAttributes IWebGLContextAttributes;
#endif 	/* __IWebGLContextAttributes_FWD_DEFINED__ */


#ifndef __IWebGLRCConstants_FWD_DEFINED__
#define __IWebGLRCConstants_FWD_DEFINED__
typedef interface IWebGLRCConstants IWebGLRCConstants;
#endif 	/* __IWebGLRCConstants_FWD_DEFINED__ */


#ifndef __IWebGLRenderingContext_FWD_DEFINED__
#define __IWebGLRenderingContext_FWD_DEFINED__
typedef interface IWebGLRenderingContext IWebGLRenderingContext;
#endif 	/* __IWebGLRenderingContext_FWD_DEFINED__ */


#ifndef __IWebGLPlugin_FWD_DEFINED__
#define __IWebGLPlugin_FWD_DEFINED__
typedef interface IWebGLPlugin IWebGLPlugin;
#endif 	/* __IWebGLPlugin_FWD_DEFINED__ */


#ifndef __IIEWebGLBHO_FWD_DEFINED__
#define __IIEWebGLBHO_FWD_DEFINED__
typedef interface IIEWebGLBHO IIEWebGLBHO;
#endif 	/* __IIEWebGLBHO_FWD_DEFINED__ */


#ifndef __WebGLPlugin_FWD_DEFINED__
#define __WebGLPlugin_FWD_DEFINED__

#ifdef __cplusplus
typedef class WebGLPlugin WebGLPlugin;
#else
typedef struct WebGLPlugin WebGLPlugin;
#endif /* __cplusplus */

#endif 	/* __WebGLPlugin_FWD_DEFINED__ */


#ifndef __IEWebGLBHO_FWD_DEFINED__
#define __IEWebGLBHO_FWD_DEFINED__

#ifdef __cplusplus
typedef class IEWebGLBHO IEWebGLBHO;
#else
typedef struct IEWebGLBHO IEWebGLBHO;
#endif /* __cplusplus */

#endif 	/* __IEWebGLBHO_FWD_DEFINED__ */


#ifndef __ArrayBuffer_FWD_DEFINED__
#define __ArrayBuffer_FWD_DEFINED__

#ifdef __cplusplus
typedef class ArrayBuffer ArrayBuffer;
#else
typedef struct ArrayBuffer ArrayBuffer;
#endif /* __cplusplus */

#endif 	/* __ArrayBuffer_FWD_DEFINED__ */


#ifndef __Uint8Array_FWD_DEFINED__
#define __Uint8Array_FWD_DEFINED__

#ifdef __cplusplus
typedef class Uint8Array Uint8Array;
#else
typedef struct Uint8Array Uint8Array;
#endif /* __cplusplus */

#endif 	/* __Uint8Array_FWD_DEFINED__ */


#ifndef __Int8Array_FWD_DEFINED__
#define __Int8Array_FWD_DEFINED__

#ifdef __cplusplus
typedef class Int8Array Int8Array;
#else
typedef struct Int8Array Int8Array;
#endif /* __cplusplus */

#endif 	/* __Int8Array_FWD_DEFINED__ */


#ifndef __Uint16Array_FWD_DEFINED__
#define __Uint16Array_FWD_DEFINED__

#ifdef __cplusplus
typedef class Uint16Array Uint16Array;
#else
typedef struct Uint16Array Uint16Array;
#endif /* __cplusplus */

#endif 	/* __Uint16Array_FWD_DEFINED__ */


#ifndef __Int16Array_FWD_DEFINED__
#define __Int16Array_FWD_DEFINED__

#ifdef __cplusplus
typedef class Int16Array Int16Array;
#else
typedef struct Int16Array Int16Array;
#endif /* __cplusplus */

#endif 	/* __Int16Array_FWD_DEFINED__ */


#ifndef __Uint32Array_FWD_DEFINED__
#define __Uint32Array_FWD_DEFINED__

#ifdef __cplusplus
typedef class Uint32Array Uint32Array;
#else
typedef struct Uint32Array Uint32Array;
#endif /* __cplusplus */

#endif 	/* __Uint32Array_FWD_DEFINED__ */


#ifndef __Int32Array_FWD_DEFINED__
#define __Int32Array_FWD_DEFINED__

#ifdef __cplusplus
typedef class Int32Array Int32Array;
#else
typedef struct Int32Array Int32Array;
#endif /* __cplusplus */

#endif 	/* __Int32Array_FWD_DEFINED__ */


#ifndef __Float32Array_FWD_DEFINED__
#define __Float32Array_FWD_DEFINED__

#ifdef __cplusplus
typedef class Float32Array Float32Array;
#else
typedef struct Float32Array Float32Array;
#endif /* __cplusplus */

#endif 	/* __Float32Array_FWD_DEFINED__ */


#ifndef __Float64Array_FWD_DEFINED__
#define __Float64Array_FWD_DEFINED__

#ifdef __cplusplus
typedef class Float64Array Float64Array;
#else
typedef struct Float64Array Float64Array;
#endif /* __cplusplus */

#endif 	/* __Float64Array_FWD_DEFINED__ */


#ifndef __DataArrayView_FWD_DEFINED__
#define __DataArrayView_FWD_DEFINED__

#ifdef __cplusplus
typedef class DataArrayView DataArrayView;
#else
typedef struct DataArrayView DataArrayView;
#endif /* __cplusplus */

#endif 	/* __DataArrayView_FWD_DEFINED__ */


#ifndef __WebGLRenderingContext_FWD_DEFINED__
#define __WebGLRenderingContext_FWD_DEFINED__

#ifdef __cplusplus
typedef class WebGLRenderingContext WebGLRenderingContext;
#else
typedef struct WebGLRenderingContext WebGLRenderingContext;
#endif /* __cplusplus */

#endif 	/* __WebGLRenderingContext_FWD_DEFINED__ */


#ifndef __WebGLShaderPrecisionFormat_FWD_DEFINED__
#define __WebGLShaderPrecisionFormat_FWD_DEFINED__

#ifdef __cplusplus
typedef class WebGLShaderPrecisionFormat WebGLShaderPrecisionFormat;
#else
typedef struct WebGLShaderPrecisionFormat WebGLShaderPrecisionFormat;
#endif /* __cplusplus */

#endif 	/* __WebGLShaderPrecisionFormat_FWD_DEFINED__ */


#ifndef __WebGLContextAttributes_FWD_DEFINED__
#define __WebGLContextAttributes_FWD_DEFINED__

#ifdef __cplusplus
typedef class WebGLContextAttributes WebGLContextAttributes;
#else
typedef struct WebGLContextAttributes WebGLContextAttributes;
#endif /* __cplusplus */

#endif 	/* __WebGLContextAttributes_FWD_DEFINED__ */


#ifndef __IJSObject_FWD_DEFINED__
#define __IJSObject_FWD_DEFINED__
typedef interface IJSObject IJSObject;
#endif 	/* __IJSObject_FWD_DEFINED__ */


#ifndef __IOESTextureFloat_FWD_DEFINED__
#define __IOESTextureFloat_FWD_DEFINED__
typedef interface IOESTextureFloat IOESTextureFloat;
#endif 	/* __IOESTextureFloat_FWD_DEFINED__ */


#ifndef __IOESStandardDerivatives_FWD_DEFINED__
#define __IOESStandardDerivatives_FWD_DEFINED__
typedef interface IOESStandardDerivatives IOESStandardDerivatives;
#endif 	/* __IOESStandardDerivatives_FWD_DEFINED__ */


#ifndef __IWebGLCompressedTextureS3TC_FWD_DEFINED__
#define __IWebGLCompressedTextureS3TC_FWD_DEFINED__
typedef interface IWebGLCompressedTextureS3TC IWebGLCompressedTextureS3TC;
#endif 	/* __IWebGLCompressedTextureS3TC_FWD_DEFINED__ */


#ifndef __IEXTTextureFilterAnisotropic_FWD_DEFINED__
#define __IEXTTextureFilterAnisotropic_FWD_DEFINED__
typedef interface IEXTTextureFilterAnisotropic IEXTTextureFilterAnisotropic;
#endif 	/* __IEXTTextureFilterAnisotropic_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "mshtml.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IJSObject_INTERFACE_DEFINED__
#define __IJSObject_INTERFACE_DEFINED__

/* interface IJSObject */
/* [unique][dual][uuid][object] */ 


EXTERN_C const IID IID_IJSObject;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("96796261-491B-4026-B5BD-ABE212908B3E")
    IJSObject : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE toString( 
            /* [retval][out] */ BSTR *retVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IJSObjectVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IJSObject * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IJSObject * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IJSObject * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IJSObject * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IJSObject * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IJSObject * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IJSObject * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *toString )( 
            IJSObject * This,
            /* [retval][out] */ BSTR *retVal);
        
        END_INTERFACE
    } IJSObjectVtbl;

    interface IJSObject
    {
        CONST_VTBL struct IJSObjectVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IJSObject_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IJSObject_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IJSObject_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IJSObject_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IJSObject_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IJSObject_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IJSObject_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IJSObject_toString(This,retVal)	\
    ( (This)->lpVtbl -> toString(This,retVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IJSObject_INTERFACE_DEFINED__ */


#ifndef __IArrayBuffer_INTERFACE_DEFINED__
#define __IArrayBuffer_INTERFACE_DEFINED__

/* interface IArrayBuffer */
/* [unique][dual][uuid][object] */ 


EXTERN_C const IID IID_IArrayBuffer;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2680D4E8-4474-4B47-9E3F-05F385E9FCF8")
    IArrayBuffer : public IJSObject
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_byteLength( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [restricted][nonbrowsable][hidden][propget][id] */ HRESULT STDMETHODCALLTYPE get_mem( 
            /* [retval][out] */ byte **mem) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IArrayBufferVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IArrayBuffer * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IArrayBuffer * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IArrayBuffer * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IArrayBuffer * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IArrayBuffer * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IArrayBuffer * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IArrayBuffer * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *toString )( 
            IArrayBuffer * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_byteLength )( 
            IArrayBuffer * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [restricted][nonbrowsable][hidden][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_mem )( 
            IArrayBuffer * This,
            /* [retval][out] */ byte **mem);
        
        END_INTERFACE
    } IArrayBufferVtbl;

    interface IArrayBuffer
    {
        CONST_VTBL struct IArrayBufferVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IArrayBuffer_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IArrayBuffer_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IArrayBuffer_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IArrayBuffer_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IArrayBuffer_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IArrayBuffer_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IArrayBuffer_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IArrayBuffer_toString(This,retVal)	\
    ( (This)->lpVtbl -> toString(This,retVal) ) 


#define IArrayBuffer_get_byteLength(This,retVal)	\
    ( (This)->lpVtbl -> get_byteLength(This,retVal) ) 

#define IArrayBuffer_get_mem(This,mem)	\
    ( (This)->lpVtbl -> get_mem(This,mem) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IArrayBuffer_INTERFACE_DEFINED__ */


#ifndef __IArrayBufferView_INTERFACE_DEFINED__
#define __IArrayBufferView_INTERFACE_DEFINED__

/* interface IArrayBufferView */
/* [unique][dual][uuid][object] */ 


EXTERN_C const IID IID_IArrayBufferView;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("20BA6882-1CC8-4E86-AB77-4EFF85F6C0C3")
    IArrayBufferView : public IJSObject
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_buffer( 
            /* [retval][out] */ IArrayBuffer **retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_byteOffset( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_byteLength( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [restricted][nonbrowsable][hidden][propget][id] */ HRESULT STDMETHODCALLTYPE get_mem( 
            /* [retval][out] */ byte **mem) = 0;
        
        virtual /* [restricted][nonbrowsable][hidden][id] */ HRESULT STDMETHODCALLTYPE put_modified( 
            /* [in] */ BOOL isModified) = 0;
        
        virtual /* [restricted][nonbrowsable][hidden][id] */ HRESULT STDMETHODCALLTYPE get_modified( 
            /* [retval][out] */ BOOL *retVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IArrayBufferViewVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IArrayBufferView * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IArrayBufferView * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IArrayBufferView * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IArrayBufferView * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IArrayBufferView * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IArrayBufferView * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IArrayBufferView * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *toString )( 
            IArrayBufferView * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_buffer )( 
            IArrayBufferView * This,
            /* [retval][out] */ IArrayBuffer **retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_byteOffset )( 
            IArrayBufferView * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_byteLength )( 
            IArrayBufferView * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [restricted][nonbrowsable][hidden][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_mem )( 
            IArrayBufferView * This,
            /* [retval][out] */ byte **mem);
        
        /* [restricted][nonbrowsable][hidden][id] */ HRESULT ( STDMETHODCALLTYPE *put_modified )( 
            IArrayBufferView * This,
            /* [in] */ BOOL isModified);
        
        /* [restricted][nonbrowsable][hidden][id] */ HRESULT ( STDMETHODCALLTYPE *get_modified )( 
            IArrayBufferView * This,
            /* [retval][out] */ BOOL *retVal);
        
        END_INTERFACE
    } IArrayBufferViewVtbl;

    interface IArrayBufferView
    {
        CONST_VTBL struct IArrayBufferViewVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IArrayBufferView_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IArrayBufferView_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IArrayBufferView_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IArrayBufferView_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IArrayBufferView_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IArrayBufferView_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IArrayBufferView_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IArrayBufferView_toString(This,retVal)	\
    ( (This)->lpVtbl -> toString(This,retVal) ) 


#define IArrayBufferView_get_buffer(This,retVal)	\
    ( (This)->lpVtbl -> get_buffer(This,retVal) ) 

#define IArrayBufferView_get_byteOffset(This,retVal)	\
    ( (This)->lpVtbl -> get_byteOffset(This,retVal) ) 

#define IArrayBufferView_get_byteLength(This,retVal)	\
    ( (This)->lpVtbl -> get_byteLength(This,retVal) ) 

#define IArrayBufferView_get_mem(This,mem)	\
    ( (This)->lpVtbl -> get_mem(This,mem) ) 

#define IArrayBufferView_put_modified(This,isModified)	\
    ( (This)->lpVtbl -> put_modified(This,isModified) ) 

#define IArrayBufferView_get_modified(This,retVal)	\
    ( (This)->lpVtbl -> get_modified(This,retVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IArrayBufferView_INTERFACE_DEFINED__ */


#ifndef __ITypedArrayBufferView_INTERFACE_DEFINED__
#define __ITypedArrayBufferView_INTERFACE_DEFINED__

/* interface ITypedArrayBufferView */
/* [unique][dual][uuid][object] */ 


EXTERN_C const IID IID_ITypedArrayBufferView;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("CF72AD82-359F-432A-9ED6-589830418751")
    ITypedArrayBufferView : public IArrayBufferView
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_BYTES_PER_ELEMENT( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_length( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE set( 
            /* [in] */ IDispatch *array,
            /* [optional][in] */ VARIANT offset) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE subarray( 
            /* [in] */ long begin,
            /* [optional][in] */ VARIANT end,
            /* [retval][out] */ ITypedArrayBufferView **retVal) = 0;
        
        virtual /* [restricted][nonbrowsable][hidden][propget][id] */ HRESULT STDMETHODCALLTYPE get_item( 
            /* [in] */ ULONG index,
            /* [retval][out] */ VARIANT *retVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ITypedArrayBufferViewVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITypedArrayBufferView * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITypedArrayBufferView * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITypedArrayBufferView * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ITypedArrayBufferView * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ITypedArrayBufferView * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ITypedArrayBufferView * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ITypedArrayBufferView * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *toString )( 
            ITypedArrayBufferView * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_buffer )( 
            ITypedArrayBufferView * This,
            /* [retval][out] */ IArrayBuffer **retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_byteOffset )( 
            ITypedArrayBufferView * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_byteLength )( 
            ITypedArrayBufferView * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [restricted][nonbrowsable][hidden][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_mem )( 
            ITypedArrayBufferView * This,
            /* [retval][out] */ byte **mem);
        
        /* [restricted][nonbrowsable][hidden][id] */ HRESULT ( STDMETHODCALLTYPE *put_modified )( 
            ITypedArrayBufferView * This,
            /* [in] */ BOOL isModified);
        
        /* [restricted][nonbrowsable][hidden][id] */ HRESULT ( STDMETHODCALLTYPE *get_modified )( 
            ITypedArrayBufferView * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_BYTES_PER_ELEMENT )( 
            ITypedArrayBufferView * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_length )( 
            ITypedArrayBufferView * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *set )( 
            ITypedArrayBufferView * This,
            /* [in] */ IDispatch *array,
            /* [optional][in] */ VARIANT offset);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *subarray )( 
            ITypedArrayBufferView * This,
            /* [in] */ long begin,
            /* [optional][in] */ VARIANT end,
            /* [retval][out] */ ITypedArrayBufferView **retVal);
        
        /* [restricted][nonbrowsable][hidden][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_item )( 
            ITypedArrayBufferView * This,
            /* [in] */ ULONG index,
            /* [retval][out] */ VARIANT *retVal);
        
        END_INTERFACE
    } ITypedArrayBufferViewVtbl;

    interface ITypedArrayBufferView
    {
        CONST_VTBL struct ITypedArrayBufferViewVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITypedArrayBufferView_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITypedArrayBufferView_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITypedArrayBufferView_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITypedArrayBufferView_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ITypedArrayBufferView_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ITypedArrayBufferView_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ITypedArrayBufferView_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ITypedArrayBufferView_toString(This,retVal)	\
    ( (This)->lpVtbl -> toString(This,retVal) ) 


#define ITypedArrayBufferView_get_buffer(This,retVal)	\
    ( (This)->lpVtbl -> get_buffer(This,retVal) ) 

#define ITypedArrayBufferView_get_byteOffset(This,retVal)	\
    ( (This)->lpVtbl -> get_byteOffset(This,retVal) ) 

#define ITypedArrayBufferView_get_byteLength(This,retVal)	\
    ( (This)->lpVtbl -> get_byteLength(This,retVal) ) 

#define ITypedArrayBufferView_get_mem(This,mem)	\
    ( (This)->lpVtbl -> get_mem(This,mem) ) 

#define ITypedArrayBufferView_put_modified(This,isModified)	\
    ( (This)->lpVtbl -> put_modified(This,isModified) ) 

#define ITypedArrayBufferView_get_modified(This,retVal)	\
    ( (This)->lpVtbl -> get_modified(This,retVal) ) 


#define ITypedArrayBufferView_get_BYTES_PER_ELEMENT(This,retVal)	\
    ( (This)->lpVtbl -> get_BYTES_PER_ELEMENT(This,retVal) ) 

#define ITypedArrayBufferView_get_length(This,retVal)	\
    ( (This)->lpVtbl -> get_length(This,retVal) ) 

#define ITypedArrayBufferView_set(This,array,offset)	\
    ( (This)->lpVtbl -> set(This,array,offset) ) 

#define ITypedArrayBufferView_subarray(This,begin,end,retVal)	\
    ( (This)->lpVtbl -> subarray(This,begin,end,retVal) ) 

#define ITypedArrayBufferView_get_item(This,index,retVal)	\
    ( (This)->lpVtbl -> get_item(This,index,retVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITypedArrayBufferView_INTERFACE_DEFINED__ */


#ifndef __IInt8Array_INTERFACE_DEFINED__
#define __IInt8Array_INTERFACE_DEFINED__

/* interface IInt8Array */
/* [unique][dual][uuid][object] */ 


EXTERN_C const IID IID_IInt8Array;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7E91334D-695D-491E-BC09-5291C06A233A")
    IInt8Array : public ITypedArrayBufferView
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct IInt8ArrayVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IInt8Array * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IInt8Array * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IInt8Array * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IInt8Array * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IInt8Array * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IInt8Array * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IInt8Array * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *toString )( 
            IInt8Array * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_buffer )( 
            IInt8Array * This,
            /* [retval][out] */ IArrayBuffer **retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_byteOffset )( 
            IInt8Array * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_byteLength )( 
            IInt8Array * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [restricted][nonbrowsable][hidden][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_mem )( 
            IInt8Array * This,
            /* [retval][out] */ byte **mem);
        
        /* [restricted][nonbrowsable][hidden][id] */ HRESULT ( STDMETHODCALLTYPE *put_modified )( 
            IInt8Array * This,
            /* [in] */ BOOL isModified);
        
        /* [restricted][nonbrowsable][hidden][id] */ HRESULT ( STDMETHODCALLTYPE *get_modified )( 
            IInt8Array * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_BYTES_PER_ELEMENT )( 
            IInt8Array * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_length )( 
            IInt8Array * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *set )( 
            IInt8Array * This,
            /* [in] */ IDispatch *array,
            /* [optional][in] */ VARIANT offset);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *subarray )( 
            IInt8Array * This,
            /* [in] */ long begin,
            /* [optional][in] */ VARIANT end,
            /* [retval][out] */ ITypedArrayBufferView **retVal);
        
        /* [restricted][nonbrowsable][hidden][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_item )( 
            IInt8Array * This,
            /* [in] */ ULONG index,
            /* [retval][out] */ VARIANT *retVal);
        
        END_INTERFACE
    } IInt8ArrayVtbl;

    interface IInt8Array
    {
        CONST_VTBL struct IInt8ArrayVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IInt8Array_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IInt8Array_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IInt8Array_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IInt8Array_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IInt8Array_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IInt8Array_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IInt8Array_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IInt8Array_toString(This,retVal)	\
    ( (This)->lpVtbl -> toString(This,retVal) ) 


#define IInt8Array_get_buffer(This,retVal)	\
    ( (This)->lpVtbl -> get_buffer(This,retVal) ) 

#define IInt8Array_get_byteOffset(This,retVal)	\
    ( (This)->lpVtbl -> get_byteOffset(This,retVal) ) 

#define IInt8Array_get_byteLength(This,retVal)	\
    ( (This)->lpVtbl -> get_byteLength(This,retVal) ) 

#define IInt8Array_get_mem(This,mem)	\
    ( (This)->lpVtbl -> get_mem(This,mem) ) 

#define IInt8Array_put_modified(This,isModified)	\
    ( (This)->lpVtbl -> put_modified(This,isModified) ) 

#define IInt8Array_get_modified(This,retVal)	\
    ( (This)->lpVtbl -> get_modified(This,retVal) ) 


#define IInt8Array_get_BYTES_PER_ELEMENT(This,retVal)	\
    ( (This)->lpVtbl -> get_BYTES_PER_ELEMENT(This,retVal) ) 

#define IInt8Array_get_length(This,retVal)	\
    ( (This)->lpVtbl -> get_length(This,retVal) ) 

#define IInt8Array_set(This,array,offset)	\
    ( (This)->lpVtbl -> set(This,array,offset) ) 

#define IInt8Array_subarray(This,begin,end,retVal)	\
    ( (This)->lpVtbl -> subarray(This,begin,end,retVal) ) 

#define IInt8Array_get_item(This,index,retVal)	\
    ( (This)->lpVtbl -> get_item(This,index,retVal) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IInt8Array_INTERFACE_DEFINED__ */


#ifndef __IUint8Array_INTERFACE_DEFINED__
#define __IUint8Array_INTERFACE_DEFINED__

/* interface IUint8Array */
/* [unique][dual][uuid][object] */ 


EXTERN_C const IID IID_IUint8Array;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5B0BEBA6-3CEB-48B7-9047-A6E1D01DF054")
    IUint8Array : public ITypedArrayBufferView
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct IUint8ArrayVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IUint8Array * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IUint8Array * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IUint8Array * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IUint8Array * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IUint8Array * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IUint8Array * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IUint8Array * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *toString )( 
            IUint8Array * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_buffer )( 
            IUint8Array * This,
            /* [retval][out] */ IArrayBuffer **retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_byteOffset )( 
            IUint8Array * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_byteLength )( 
            IUint8Array * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [restricted][nonbrowsable][hidden][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_mem )( 
            IUint8Array * This,
            /* [retval][out] */ byte **mem);
        
        /* [restricted][nonbrowsable][hidden][id] */ HRESULT ( STDMETHODCALLTYPE *put_modified )( 
            IUint8Array * This,
            /* [in] */ BOOL isModified);
        
        /* [restricted][nonbrowsable][hidden][id] */ HRESULT ( STDMETHODCALLTYPE *get_modified )( 
            IUint8Array * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_BYTES_PER_ELEMENT )( 
            IUint8Array * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_length )( 
            IUint8Array * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *set )( 
            IUint8Array * This,
            /* [in] */ IDispatch *array,
            /* [optional][in] */ VARIANT offset);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *subarray )( 
            IUint8Array * This,
            /* [in] */ long begin,
            /* [optional][in] */ VARIANT end,
            /* [retval][out] */ ITypedArrayBufferView **retVal);
        
        /* [restricted][nonbrowsable][hidden][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_item )( 
            IUint8Array * This,
            /* [in] */ ULONG index,
            /* [retval][out] */ VARIANT *retVal);
        
        END_INTERFACE
    } IUint8ArrayVtbl;

    interface IUint8Array
    {
        CONST_VTBL struct IUint8ArrayVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUint8Array_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUint8Array_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUint8Array_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUint8Array_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IUint8Array_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IUint8Array_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IUint8Array_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IUint8Array_toString(This,retVal)	\
    ( (This)->lpVtbl -> toString(This,retVal) ) 


#define IUint8Array_get_buffer(This,retVal)	\
    ( (This)->lpVtbl -> get_buffer(This,retVal) ) 

#define IUint8Array_get_byteOffset(This,retVal)	\
    ( (This)->lpVtbl -> get_byteOffset(This,retVal) ) 

#define IUint8Array_get_byteLength(This,retVal)	\
    ( (This)->lpVtbl -> get_byteLength(This,retVal) ) 

#define IUint8Array_get_mem(This,mem)	\
    ( (This)->lpVtbl -> get_mem(This,mem) ) 

#define IUint8Array_put_modified(This,isModified)	\
    ( (This)->lpVtbl -> put_modified(This,isModified) ) 

#define IUint8Array_get_modified(This,retVal)	\
    ( (This)->lpVtbl -> get_modified(This,retVal) ) 


#define IUint8Array_get_BYTES_PER_ELEMENT(This,retVal)	\
    ( (This)->lpVtbl -> get_BYTES_PER_ELEMENT(This,retVal) ) 

#define IUint8Array_get_length(This,retVal)	\
    ( (This)->lpVtbl -> get_length(This,retVal) ) 

#define IUint8Array_set(This,array,offset)	\
    ( (This)->lpVtbl -> set(This,array,offset) ) 

#define IUint8Array_subarray(This,begin,end,retVal)	\
    ( (This)->lpVtbl -> subarray(This,begin,end,retVal) ) 

#define IUint8Array_get_item(This,index,retVal)	\
    ( (This)->lpVtbl -> get_item(This,index,retVal) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUint8Array_INTERFACE_DEFINED__ */


#ifndef __IInt16Array_INTERFACE_DEFINED__
#define __IInt16Array_INTERFACE_DEFINED__

/* interface IInt16Array */
/* [unique][dual][uuid][object] */ 


EXTERN_C const IID IID_IInt16Array;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("E48BDB2F-6C95-4679-AD39-F7D080B10D50")
    IInt16Array : public ITypedArrayBufferView
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct IInt16ArrayVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IInt16Array * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IInt16Array * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IInt16Array * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IInt16Array * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IInt16Array * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IInt16Array * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IInt16Array * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *toString )( 
            IInt16Array * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_buffer )( 
            IInt16Array * This,
            /* [retval][out] */ IArrayBuffer **retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_byteOffset )( 
            IInt16Array * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_byteLength )( 
            IInt16Array * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [restricted][nonbrowsable][hidden][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_mem )( 
            IInt16Array * This,
            /* [retval][out] */ byte **mem);
        
        /* [restricted][nonbrowsable][hidden][id] */ HRESULT ( STDMETHODCALLTYPE *put_modified )( 
            IInt16Array * This,
            /* [in] */ BOOL isModified);
        
        /* [restricted][nonbrowsable][hidden][id] */ HRESULT ( STDMETHODCALLTYPE *get_modified )( 
            IInt16Array * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_BYTES_PER_ELEMENT )( 
            IInt16Array * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_length )( 
            IInt16Array * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *set )( 
            IInt16Array * This,
            /* [in] */ IDispatch *array,
            /* [optional][in] */ VARIANT offset);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *subarray )( 
            IInt16Array * This,
            /* [in] */ long begin,
            /* [optional][in] */ VARIANT end,
            /* [retval][out] */ ITypedArrayBufferView **retVal);
        
        /* [restricted][nonbrowsable][hidden][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_item )( 
            IInt16Array * This,
            /* [in] */ ULONG index,
            /* [retval][out] */ VARIANT *retVal);
        
        END_INTERFACE
    } IInt16ArrayVtbl;

    interface IInt16Array
    {
        CONST_VTBL struct IInt16ArrayVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IInt16Array_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IInt16Array_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IInt16Array_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IInt16Array_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IInt16Array_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IInt16Array_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IInt16Array_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IInt16Array_toString(This,retVal)	\
    ( (This)->lpVtbl -> toString(This,retVal) ) 


#define IInt16Array_get_buffer(This,retVal)	\
    ( (This)->lpVtbl -> get_buffer(This,retVal) ) 

#define IInt16Array_get_byteOffset(This,retVal)	\
    ( (This)->lpVtbl -> get_byteOffset(This,retVal) ) 

#define IInt16Array_get_byteLength(This,retVal)	\
    ( (This)->lpVtbl -> get_byteLength(This,retVal) ) 

#define IInt16Array_get_mem(This,mem)	\
    ( (This)->lpVtbl -> get_mem(This,mem) ) 

#define IInt16Array_put_modified(This,isModified)	\
    ( (This)->lpVtbl -> put_modified(This,isModified) ) 

#define IInt16Array_get_modified(This,retVal)	\
    ( (This)->lpVtbl -> get_modified(This,retVal) ) 


#define IInt16Array_get_BYTES_PER_ELEMENT(This,retVal)	\
    ( (This)->lpVtbl -> get_BYTES_PER_ELEMENT(This,retVal) ) 

#define IInt16Array_get_length(This,retVal)	\
    ( (This)->lpVtbl -> get_length(This,retVal) ) 

#define IInt16Array_set(This,array,offset)	\
    ( (This)->lpVtbl -> set(This,array,offset) ) 

#define IInt16Array_subarray(This,begin,end,retVal)	\
    ( (This)->lpVtbl -> subarray(This,begin,end,retVal) ) 

#define IInt16Array_get_item(This,index,retVal)	\
    ( (This)->lpVtbl -> get_item(This,index,retVal) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IInt16Array_INTERFACE_DEFINED__ */


#ifndef __IUint16Array_INTERFACE_DEFINED__
#define __IUint16Array_INTERFACE_DEFINED__

/* interface IUint16Array */
/* [unique][dual][uuid][object] */ 


EXTERN_C const IID IID_IUint16Array;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2760D39B-F0C5-4616-88C4-F02FEF95AFEA")
    IUint16Array : public ITypedArrayBufferView
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct IUint16ArrayVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IUint16Array * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IUint16Array * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IUint16Array * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IUint16Array * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IUint16Array * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IUint16Array * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IUint16Array * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *toString )( 
            IUint16Array * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_buffer )( 
            IUint16Array * This,
            /* [retval][out] */ IArrayBuffer **retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_byteOffset )( 
            IUint16Array * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_byteLength )( 
            IUint16Array * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [restricted][nonbrowsable][hidden][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_mem )( 
            IUint16Array * This,
            /* [retval][out] */ byte **mem);
        
        /* [restricted][nonbrowsable][hidden][id] */ HRESULT ( STDMETHODCALLTYPE *put_modified )( 
            IUint16Array * This,
            /* [in] */ BOOL isModified);
        
        /* [restricted][nonbrowsable][hidden][id] */ HRESULT ( STDMETHODCALLTYPE *get_modified )( 
            IUint16Array * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_BYTES_PER_ELEMENT )( 
            IUint16Array * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_length )( 
            IUint16Array * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *set )( 
            IUint16Array * This,
            /* [in] */ IDispatch *array,
            /* [optional][in] */ VARIANT offset);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *subarray )( 
            IUint16Array * This,
            /* [in] */ long begin,
            /* [optional][in] */ VARIANT end,
            /* [retval][out] */ ITypedArrayBufferView **retVal);
        
        /* [restricted][nonbrowsable][hidden][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_item )( 
            IUint16Array * This,
            /* [in] */ ULONG index,
            /* [retval][out] */ VARIANT *retVal);
        
        END_INTERFACE
    } IUint16ArrayVtbl;

    interface IUint16Array
    {
        CONST_VTBL struct IUint16ArrayVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUint16Array_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUint16Array_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUint16Array_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUint16Array_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IUint16Array_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IUint16Array_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IUint16Array_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IUint16Array_toString(This,retVal)	\
    ( (This)->lpVtbl -> toString(This,retVal) ) 


#define IUint16Array_get_buffer(This,retVal)	\
    ( (This)->lpVtbl -> get_buffer(This,retVal) ) 

#define IUint16Array_get_byteOffset(This,retVal)	\
    ( (This)->lpVtbl -> get_byteOffset(This,retVal) ) 

#define IUint16Array_get_byteLength(This,retVal)	\
    ( (This)->lpVtbl -> get_byteLength(This,retVal) ) 

#define IUint16Array_get_mem(This,mem)	\
    ( (This)->lpVtbl -> get_mem(This,mem) ) 

#define IUint16Array_put_modified(This,isModified)	\
    ( (This)->lpVtbl -> put_modified(This,isModified) ) 

#define IUint16Array_get_modified(This,retVal)	\
    ( (This)->lpVtbl -> get_modified(This,retVal) ) 


#define IUint16Array_get_BYTES_PER_ELEMENT(This,retVal)	\
    ( (This)->lpVtbl -> get_BYTES_PER_ELEMENT(This,retVal) ) 

#define IUint16Array_get_length(This,retVal)	\
    ( (This)->lpVtbl -> get_length(This,retVal) ) 

#define IUint16Array_set(This,array,offset)	\
    ( (This)->lpVtbl -> set(This,array,offset) ) 

#define IUint16Array_subarray(This,begin,end,retVal)	\
    ( (This)->lpVtbl -> subarray(This,begin,end,retVal) ) 

#define IUint16Array_get_item(This,index,retVal)	\
    ( (This)->lpVtbl -> get_item(This,index,retVal) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUint16Array_INTERFACE_DEFINED__ */


#ifndef __IInt32Array_INTERFACE_DEFINED__
#define __IInt32Array_INTERFACE_DEFINED__

/* interface IInt32Array */
/* [unique][dual][uuid][object] */ 


EXTERN_C const IID IID_IInt32Array;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4014EF1F-B2EC-4CCD-8EA9-FBE3AE02FE5D")
    IInt32Array : public ITypedArrayBufferView
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct IInt32ArrayVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IInt32Array * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IInt32Array * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IInt32Array * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IInt32Array * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IInt32Array * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IInt32Array * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IInt32Array * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *toString )( 
            IInt32Array * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_buffer )( 
            IInt32Array * This,
            /* [retval][out] */ IArrayBuffer **retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_byteOffset )( 
            IInt32Array * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_byteLength )( 
            IInt32Array * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [restricted][nonbrowsable][hidden][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_mem )( 
            IInt32Array * This,
            /* [retval][out] */ byte **mem);
        
        /* [restricted][nonbrowsable][hidden][id] */ HRESULT ( STDMETHODCALLTYPE *put_modified )( 
            IInt32Array * This,
            /* [in] */ BOOL isModified);
        
        /* [restricted][nonbrowsable][hidden][id] */ HRESULT ( STDMETHODCALLTYPE *get_modified )( 
            IInt32Array * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_BYTES_PER_ELEMENT )( 
            IInt32Array * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_length )( 
            IInt32Array * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *set )( 
            IInt32Array * This,
            /* [in] */ IDispatch *array,
            /* [optional][in] */ VARIANT offset);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *subarray )( 
            IInt32Array * This,
            /* [in] */ long begin,
            /* [optional][in] */ VARIANT end,
            /* [retval][out] */ ITypedArrayBufferView **retVal);
        
        /* [restricted][nonbrowsable][hidden][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_item )( 
            IInt32Array * This,
            /* [in] */ ULONG index,
            /* [retval][out] */ VARIANT *retVal);
        
        END_INTERFACE
    } IInt32ArrayVtbl;

    interface IInt32Array
    {
        CONST_VTBL struct IInt32ArrayVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IInt32Array_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IInt32Array_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IInt32Array_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IInt32Array_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IInt32Array_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IInt32Array_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IInt32Array_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IInt32Array_toString(This,retVal)	\
    ( (This)->lpVtbl -> toString(This,retVal) ) 


#define IInt32Array_get_buffer(This,retVal)	\
    ( (This)->lpVtbl -> get_buffer(This,retVal) ) 

#define IInt32Array_get_byteOffset(This,retVal)	\
    ( (This)->lpVtbl -> get_byteOffset(This,retVal) ) 

#define IInt32Array_get_byteLength(This,retVal)	\
    ( (This)->lpVtbl -> get_byteLength(This,retVal) ) 

#define IInt32Array_get_mem(This,mem)	\
    ( (This)->lpVtbl -> get_mem(This,mem) ) 

#define IInt32Array_put_modified(This,isModified)	\
    ( (This)->lpVtbl -> put_modified(This,isModified) ) 

#define IInt32Array_get_modified(This,retVal)	\
    ( (This)->lpVtbl -> get_modified(This,retVal) ) 


#define IInt32Array_get_BYTES_PER_ELEMENT(This,retVal)	\
    ( (This)->lpVtbl -> get_BYTES_PER_ELEMENT(This,retVal) ) 

#define IInt32Array_get_length(This,retVal)	\
    ( (This)->lpVtbl -> get_length(This,retVal) ) 

#define IInt32Array_set(This,array,offset)	\
    ( (This)->lpVtbl -> set(This,array,offset) ) 

#define IInt32Array_subarray(This,begin,end,retVal)	\
    ( (This)->lpVtbl -> subarray(This,begin,end,retVal) ) 

#define IInt32Array_get_item(This,index,retVal)	\
    ( (This)->lpVtbl -> get_item(This,index,retVal) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IInt32Array_INTERFACE_DEFINED__ */


#ifndef __IUint32Array_INTERFACE_DEFINED__
#define __IUint32Array_INTERFACE_DEFINED__

/* interface IUint32Array */
/* [unique][dual][uuid][object] */ 


EXTERN_C const IID IID_IUint32Array;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("190F92F7-F4EF-4689-A753-9566E620153F")
    IUint32Array : public ITypedArrayBufferView
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct IUint32ArrayVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IUint32Array * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IUint32Array * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IUint32Array * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IUint32Array * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IUint32Array * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IUint32Array * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IUint32Array * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *toString )( 
            IUint32Array * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_buffer )( 
            IUint32Array * This,
            /* [retval][out] */ IArrayBuffer **retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_byteOffset )( 
            IUint32Array * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_byteLength )( 
            IUint32Array * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [restricted][nonbrowsable][hidden][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_mem )( 
            IUint32Array * This,
            /* [retval][out] */ byte **mem);
        
        /* [restricted][nonbrowsable][hidden][id] */ HRESULT ( STDMETHODCALLTYPE *put_modified )( 
            IUint32Array * This,
            /* [in] */ BOOL isModified);
        
        /* [restricted][nonbrowsable][hidden][id] */ HRESULT ( STDMETHODCALLTYPE *get_modified )( 
            IUint32Array * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_BYTES_PER_ELEMENT )( 
            IUint32Array * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_length )( 
            IUint32Array * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *set )( 
            IUint32Array * This,
            /* [in] */ IDispatch *array,
            /* [optional][in] */ VARIANT offset);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *subarray )( 
            IUint32Array * This,
            /* [in] */ long begin,
            /* [optional][in] */ VARIANT end,
            /* [retval][out] */ ITypedArrayBufferView **retVal);
        
        /* [restricted][nonbrowsable][hidden][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_item )( 
            IUint32Array * This,
            /* [in] */ ULONG index,
            /* [retval][out] */ VARIANT *retVal);
        
        END_INTERFACE
    } IUint32ArrayVtbl;

    interface IUint32Array
    {
        CONST_VTBL struct IUint32ArrayVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUint32Array_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUint32Array_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUint32Array_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUint32Array_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IUint32Array_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IUint32Array_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IUint32Array_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IUint32Array_toString(This,retVal)	\
    ( (This)->lpVtbl -> toString(This,retVal) ) 


#define IUint32Array_get_buffer(This,retVal)	\
    ( (This)->lpVtbl -> get_buffer(This,retVal) ) 

#define IUint32Array_get_byteOffset(This,retVal)	\
    ( (This)->lpVtbl -> get_byteOffset(This,retVal) ) 

#define IUint32Array_get_byteLength(This,retVal)	\
    ( (This)->lpVtbl -> get_byteLength(This,retVal) ) 

#define IUint32Array_get_mem(This,mem)	\
    ( (This)->lpVtbl -> get_mem(This,mem) ) 

#define IUint32Array_put_modified(This,isModified)	\
    ( (This)->lpVtbl -> put_modified(This,isModified) ) 

#define IUint32Array_get_modified(This,retVal)	\
    ( (This)->lpVtbl -> get_modified(This,retVal) ) 


#define IUint32Array_get_BYTES_PER_ELEMENT(This,retVal)	\
    ( (This)->lpVtbl -> get_BYTES_PER_ELEMENT(This,retVal) ) 

#define IUint32Array_get_length(This,retVal)	\
    ( (This)->lpVtbl -> get_length(This,retVal) ) 

#define IUint32Array_set(This,array,offset)	\
    ( (This)->lpVtbl -> set(This,array,offset) ) 

#define IUint32Array_subarray(This,begin,end,retVal)	\
    ( (This)->lpVtbl -> subarray(This,begin,end,retVal) ) 

#define IUint32Array_get_item(This,index,retVal)	\
    ( (This)->lpVtbl -> get_item(This,index,retVal) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUint32Array_INTERFACE_DEFINED__ */


#ifndef __IFloat32Array_INTERFACE_DEFINED__
#define __IFloat32Array_INTERFACE_DEFINED__

/* interface IFloat32Array */
/* [unique][dual][uuid][object] */ 


EXTERN_C const IID IID_IFloat32Array;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("718E17BF-737B-42FE-A77F-E3AC34E4DD7C")
    IFloat32Array : public ITypedArrayBufferView
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct IFloat32ArrayVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IFloat32Array * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IFloat32Array * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IFloat32Array * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IFloat32Array * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IFloat32Array * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IFloat32Array * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IFloat32Array * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *toString )( 
            IFloat32Array * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_buffer )( 
            IFloat32Array * This,
            /* [retval][out] */ IArrayBuffer **retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_byteOffset )( 
            IFloat32Array * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_byteLength )( 
            IFloat32Array * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [restricted][nonbrowsable][hidden][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_mem )( 
            IFloat32Array * This,
            /* [retval][out] */ byte **mem);
        
        /* [restricted][nonbrowsable][hidden][id] */ HRESULT ( STDMETHODCALLTYPE *put_modified )( 
            IFloat32Array * This,
            /* [in] */ BOOL isModified);
        
        /* [restricted][nonbrowsable][hidden][id] */ HRESULT ( STDMETHODCALLTYPE *get_modified )( 
            IFloat32Array * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_BYTES_PER_ELEMENT )( 
            IFloat32Array * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_length )( 
            IFloat32Array * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *set )( 
            IFloat32Array * This,
            /* [in] */ IDispatch *array,
            /* [optional][in] */ VARIANT offset);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *subarray )( 
            IFloat32Array * This,
            /* [in] */ long begin,
            /* [optional][in] */ VARIANT end,
            /* [retval][out] */ ITypedArrayBufferView **retVal);
        
        /* [restricted][nonbrowsable][hidden][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_item )( 
            IFloat32Array * This,
            /* [in] */ ULONG index,
            /* [retval][out] */ VARIANT *retVal);
        
        END_INTERFACE
    } IFloat32ArrayVtbl;

    interface IFloat32Array
    {
        CONST_VTBL struct IFloat32ArrayVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFloat32Array_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFloat32Array_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFloat32Array_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFloat32Array_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IFloat32Array_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IFloat32Array_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IFloat32Array_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IFloat32Array_toString(This,retVal)	\
    ( (This)->lpVtbl -> toString(This,retVal) ) 


#define IFloat32Array_get_buffer(This,retVal)	\
    ( (This)->lpVtbl -> get_buffer(This,retVal) ) 

#define IFloat32Array_get_byteOffset(This,retVal)	\
    ( (This)->lpVtbl -> get_byteOffset(This,retVal) ) 

#define IFloat32Array_get_byteLength(This,retVal)	\
    ( (This)->lpVtbl -> get_byteLength(This,retVal) ) 

#define IFloat32Array_get_mem(This,mem)	\
    ( (This)->lpVtbl -> get_mem(This,mem) ) 

#define IFloat32Array_put_modified(This,isModified)	\
    ( (This)->lpVtbl -> put_modified(This,isModified) ) 

#define IFloat32Array_get_modified(This,retVal)	\
    ( (This)->lpVtbl -> get_modified(This,retVal) ) 


#define IFloat32Array_get_BYTES_PER_ELEMENT(This,retVal)	\
    ( (This)->lpVtbl -> get_BYTES_PER_ELEMENT(This,retVal) ) 

#define IFloat32Array_get_length(This,retVal)	\
    ( (This)->lpVtbl -> get_length(This,retVal) ) 

#define IFloat32Array_set(This,array,offset)	\
    ( (This)->lpVtbl -> set(This,array,offset) ) 

#define IFloat32Array_subarray(This,begin,end,retVal)	\
    ( (This)->lpVtbl -> subarray(This,begin,end,retVal) ) 

#define IFloat32Array_get_item(This,index,retVal)	\
    ( (This)->lpVtbl -> get_item(This,index,retVal) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFloat32Array_INTERFACE_DEFINED__ */


#ifndef __IFloat64Array_INTERFACE_DEFINED__
#define __IFloat64Array_INTERFACE_DEFINED__

/* interface IFloat64Array */
/* [unique][dual][uuid][object] */ 


EXTERN_C const IID IID_IFloat64Array;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3EEF1A4A-1B11-49A3-9C1F-94EDC2B189F6")
    IFloat64Array : public ITypedArrayBufferView
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct IFloat64ArrayVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IFloat64Array * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IFloat64Array * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IFloat64Array * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IFloat64Array * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IFloat64Array * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IFloat64Array * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IFloat64Array * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *toString )( 
            IFloat64Array * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_buffer )( 
            IFloat64Array * This,
            /* [retval][out] */ IArrayBuffer **retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_byteOffset )( 
            IFloat64Array * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_byteLength )( 
            IFloat64Array * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [restricted][nonbrowsable][hidden][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_mem )( 
            IFloat64Array * This,
            /* [retval][out] */ byte **mem);
        
        /* [restricted][nonbrowsable][hidden][id] */ HRESULT ( STDMETHODCALLTYPE *put_modified )( 
            IFloat64Array * This,
            /* [in] */ BOOL isModified);
        
        /* [restricted][nonbrowsable][hidden][id] */ HRESULT ( STDMETHODCALLTYPE *get_modified )( 
            IFloat64Array * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_BYTES_PER_ELEMENT )( 
            IFloat64Array * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_length )( 
            IFloat64Array * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *set )( 
            IFloat64Array * This,
            /* [in] */ IDispatch *array,
            /* [optional][in] */ VARIANT offset);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *subarray )( 
            IFloat64Array * This,
            /* [in] */ long begin,
            /* [optional][in] */ VARIANT end,
            /* [retval][out] */ ITypedArrayBufferView **retVal);
        
        /* [restricted][nonbrowsable][hidden][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_item )( 
            IFloat64Array * This,
            /* [in] */ ULONG index,
            /* [retval][out] */ VARIANT *retVal);
        
        END_INTERFACE
    } IFloat64ArrayVtbl;

    interface IFloat64Array
    {
        CONST_VTBL struct IFloat64ArrayVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFloat64Array_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFloat64Array_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFloat64Array_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFloat64Array_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IFloat64Array_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IFloat64Array_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IFloat64Array_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IFloat64Array_toString(This,retVal)	\
    ( (This)->lpVtbl -> toString(This,retVal) ) 


#define IFloat64Array_get_buffer(This,retVal)	\
    ( (This)->lpVtbl -> get_buffer(This,retVal) ) 

#define IFloat64Array_get_byteOffset(This,retVal)	\
    ( (This)->lpVtbl -> get_byteOffset(This,retVal) ) 

#define IFloat64Array_get_byteLength(This,retVal)	\
    ( (This)->lpVtbl -> get_byteLength(This,retVal) ) 

#define IFloat64Array_get_mem(This,mem)	\
    ( (This)->lpVtbl -> get_mem(This,mem) ) 

#define IFloat64Array_put_modified(This,isModified)	\
    ( (This)->lpVtbl -> put_modified(This,isModified) ) 

#define IFloat64Array_get_modified(This,retVal)	\
    ( (This)->lpVtbl -> get_modified(This,retVal) ) 


#define IFloat64Array_get_BYTES_PER_ELEMENT(This,retVal)	\
    ( (This)->lpVtbl -> get_BYTES_PER_ELEMENT(This,retVal) ) 

#define IFloat64Array_get_length(This,retVal)	\
    ( (This)->lpVtbl -> get_length(This,retVal) ) 

#define IFloat64Array_set(This,array,offset)	\
    ( (This)->lpVtbl -> set(This,array,offset) ) 

#define IFloat64Array_subarray(This,begin,end,retVal)	\
    ( (This)->lpVtbl -> subarray(This,begin,end,retVal) ) 

#define IFloat64Array_get_item(This,index,retVal)	\
    ( (This)->lpVtbl -> get_item(This,index,retVal) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFloat64Array_INTERFACE_DEFINED__ */


#ifndef __IDataArrayView_INTERFACE_DEFINED__
#define __IDataArrayView_INTERFACE_DEFINED__

/* interface IDataArrayView */
/* [unique][dual][uuid][object] */ 


EXTERN_C const IID IID_IDataArrayView;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("B058D4CD-FD1C-4E00-94E4-9D9428A0BC6C")
    IDataArrayView : public IArrayBufferView
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE getInt8( 
            /* [in] */ ULONG byteOffset,
            /* [retval][out] */ small *retVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE getUint8( 
            /* [in] */ ULONG __MIDL__IDataArrayView0000,
            /* [retval][out] */ unsigned char *retVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE getInt16( 
            /* [in] */ ULONG byteOffset,
            /* [optional][in] */ VARIANT littleEndian,
            /* [retval][out] */ SHORT *retVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE getUint16( 
            /* [in] */ ULONG byteOffset,
            /* [optional][in] */ VARIANT littleEndian,
            /* [retval][out] */ USHORT *retVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE getInt32( 
            /* [in] */ ULONG byteOffset,
            /* [optional][in] */ VARIANT littleEndian,
            /* [retval][out] */ LONG *retVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE getUint32( 
            /* [in] */ ULONG byteOffset,
            /* [optional][in] */ VARIANT littleEndian,
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE getFloat32( 
            /* [in] */ ULONG byteOffset,
            /* [optional][in] */ VARIANT littleEndian,
            /* [retval][out] */ float *retVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE getFloat64( 
            /* [in] */ ULONG byteOffset,
            /* [optional][in] */ VARIANT littleEndian,
            /* [retval][out] */ double *retVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE setInt8( 
            /* [in] */ ULONG byteOffset,
            /* [in] */ VARIANT value) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE setUint8( 
            /* [in] */ ULONG byteOffset,
            /* [in] */ VARIANT value) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE setInt16( 
            /* [in] */ ULONG byteOffset,
            /* [in] */ VARIANT value,
            /* [optional][in] */ VARIANT littleEndian) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE setUint16( 
            /* [in] */ ULONG byteOffset,
            /* [in] */ VARIANT __MIDL__IDataArrayView0001,
            /* [optional][in] */ VARIANT littleEndian) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE setInt32( 
            /* [in] */ ULONG byteOffset,
            /* [in] */ VARIANT value,
            /* [optional][in] */ VARIANT littleEndian) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE setUint32( 
            /* [in] */ ULONG byteOffset,
            /* [in] */ VARIANT value,
            /* [optional][in] */ VARIANT littleEndian) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE setFloat32( 
            /* [in] */ ULONG byteOffset,
            /* [in] */ VARIANT value,
            /* [optional][in] */ VARIANT littleEndian) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE setFloat64( 
            /* [in] */ ULONG byteOffset,
            /* [in] */ VARIANT value,
            /* [optional][in] */ VARIANT littleEndian) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IDataArrayViewVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDataArrayView * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDataArrayView * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDataArrayView * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDataArrayView * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDataArrayView * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDataArrayView * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDataArrayView * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *toString )( 
            IDataArrayView * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_buffer )( 
            IDataArrayView * This,
            /* [retval][out] */ IArrayBuffer **retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_byteOffset )( 
            IDataArrayView * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_byteLength )( 
            IDataArrayView * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [restricted][nonbrowsable][hidden][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_mem )( 
            IDataArrayView * This,
            /* [retval][out] */ byte **mem);
        
        /* [restricted][nonbrowsable][hidden][id] */ HRESULT ( STDMETHODCALLTYPE *put_modified )( 
            IDataArrayView * This,
            /* [in] */ BOOL isModified);
        
        /* [restricted][nonbrowsable][hidden][id] */ HRESULT ( STDMETHODCALLTYPE *get_modified )( 
            IDataArrayView * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *getInt8 )( 
            IDataArrayView * This,
            /* [in] */ ULONG byteOffset,
            /* [retval][out] */ small *retVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *getUint8 )( 
            IDataArrayView * This,
            /* [in] */ ULONG __MIDL__IDataArrayView0000,
            /* [retval][out] */ unsigned char *retVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *getInt16 )( 
            IDataArrayView * This,
            /* [in] */ ULONG byteOffset,
            /* [optional][in] */ VARIANT littleEndian,
            /* [retval][out] */ SHORT *retVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *getUint16 )( 
            IDataArrayView * This,
            /* [in] */ ULONG byteOffset,
            /* [optional][in] */ VARIANT littleEndian,
            /* [retval][out] */ USHORT *retVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *getInt32 )( 
            IDataArrayView * This,
            /* [in] */ ULONG byteOffset,
            /* [optional][in] */ VARIANT littleEndian,
            /* [retval][out] */ LONG *retVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *getUint32 )( 
            IDataArrayView * This,
            /* [in] */ ULONG byteOffset,
            /* [optional][in] */ VARIANT littleEndian,
            /* [retval][out] */ ULONG *retVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *getFloat32 )( 
            IDataArrayView * This,
            /* [in] */ ULONG byteOffset,
            /* [optional][in] */ VARIANT littleEndian,
            /* [retval][out] */ float *retVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *getFloat64 )( 
            IDataArrayView * This,
            /* [in] */ ULONG byteOffset,
            /* [optional][in] */ VARIANT littleEndian,
            /* [retval][out] */ double *retVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *setInt8 )( 
            IDataArrayView * This,
            /* [in] */ ULONG byteOffset,
            /* [in] */ VARIANT value);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *setUint8 )( 
            IDataArrayView * This,
            /* [in] */ ULONG byteOffset,
            /* [in] */ VARIANT value);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *setInt16 )( 
            IDataArrayView * This,
            /* [in] */ ULONG byteOffset,
            /* [in] */ VARIANT value,
            /* [optional][in] */ VARIANT littleEndian);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *setUint16 )( 
            IDataArrayView * This,
            /* [in] */ ULONG byteOffset,
            /* [in] */ VARIANT __MIDL__IDataArrayView0001,
            /* [optional][in] */ VARIANT littleEndian);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *setInt32 )( 
            IDataArrayView * This,
            /* [in] */ ULONG byteOffset,
            /* [in] */ VARIANT value,
            /* [optional][in] */ VARIANT littleEndian);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *setUint32 )( 
            IDataArrayView * This,
            /* [in] */ ULONG byteOffset,
            /* [in] */ VARIANT value,
            /* [optional][in] */ VARIANT littleEndian);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *setFloat32 )( 
            IDataArrayView * This,
            /* [in] */ ULONG byteOffset,
            /* [in] */ VARIANT value,
            /* [optional][in] */ VARIANT littleEndian);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *setFloat64 )( 
            IDataArrayView * This,
            /* [in] */ ULONG byteOffset,
            /* [in] */ VARIANT value,
            /* [optional][in] */ VARIANT littleEndian);
        
        END_INTERFACE
    } IDataArrayViewVtbl;

    interface IDataArrayView
    {
        CONST_VTBL struct IDataArrayViewVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDataArrayView_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDataArrayView_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDataArrayView_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDataArrayView_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDataArrayView_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDataArrayView_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDataArrayView_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDataArrayView_toString(This,retVal)	\
    ( (This)->lpVtbl -> toString(This,retVal) ) 


#define IDataArrayView_get_buffer(This,retVal)	\
    ( (This)->lpVtbl -> get_buffer(This,retVal) ) 

#define IDataArrayView_get_byteOffset(This,retVal)	\
    ( (This)->lpVtbl -> get_byteOffset(This,retVal) ) 

#define IDataArrayView_get_byteLength(This,retVal)	\
    ( (This)->lpVtbl -> get_byteLength(This,retVal) ) 

#define IDataArrayView_get_mem(This,mem)	\
    ( (This)->lpVtbl -> get_mem(This,mem) ) 

#define IDataArrayView_put_modified(This,isModified)	\
    ( (This)->lpVtbl -> put_modified(This,isModified) ) 

#define IDataArrayView_get_modified(This,retVal)	\
    ( (This)->lpVtbl -> get_modified(This,retVal) ) 


#define IDataArrayView_getInt8(This,byteOffset,retVal)	\
    ( (This)->lpVtbl -> getInt8(This,byteOffset,retVal) ) 

#define IDataArrayView_getUint8(This,__MIDL__IDataArrayView0000,retVal)	\
    ( (This)->lpVtbl -> getUint8(This,__MIDL__IDataArrayView0000,retVal) ) 

#define IDataArrayView_getInt16(This,byteOffset,littleEndian,retVal)	\
    ( (This)->lpVtbl -> getInt16(This,byteOffset,littleEndian,retVal) ) 

#define IDataArrayView_getUint16(This,byteOffset,littleEndian,retVal)	\
    ( (This)->lpVtbl -> getUint16(This,byteOffset,littleEndian,retVal) ) 

#define IDataArrayView_getInt32(This,byteOffset,littleEndian,retVal)	\
    ( (This)->lpVtbl -> getInt32(This,byteOffset,littleEndian,retVal) ) 

#define IDataArrayView_getUint32(This,byteOffset,littleEndian,retVal)	\
    ( (This)->lpVtbl -> getUint32(This,byteOffset,littleEndian,retVal) ) 

#define IDataArrayView_getFloat32(This,byteOffset,littleEndian,retVal)	\
    ( (This)->lpVtbl -> getFloat32(This,byteOffset,littleEndian,retVal) ) 

#define IDataArrayView_getFloat64(This,byteOffset,littleEndian,retVal)	\
    ( (This)->lpVtbl -> getFloat64(This,byteOffset,littleEndian,retVal) ) 

#define IDataArrayView_setInt8(This,byteOffset,value)	\
    ( (This)->lpVtbl -> setInt8(This,byteOffset,value) ) 

#define IDataArrayView_setUint8(This,byteOffset,value)	\
    ( (This)->lpVtbl -> setUint8(This,byteOffset,value) ) 

#define IDataArrayView_setInt16(This,byteOffset,value,littleEndian)	\
    ( (This)->lpVtbl -> setInt16(This,byteOffset,value,littleEndian) ) 

#define IDataArrayView_setUint16(This,byteOffset,__MIDL__IDataArrayView0001,littleEndian)	\
    ( (This)->lpVtbl -> setUint16(This,byteOffset,__MIDL__IDataArrayView0001,littleEndian) ) 

#define IDataArrayView_setInt32(This,byteOffset,value,littleEndian)	\
    ( (This)->lpVtbl -> setInt32(This,byteOffset,value,littleEndian) ) 

#define IDataArrayView_setUint32(This,byteOffset,value,littleEndian)	\
    ( (This)->lpVtbl -> setUint32(This,byteOffset,value,littleEndian) ) 

#define IDataArrayView_setFloat32(This,byteOffset,value,littleEndian)	\
    ( (This)->lpVtbl -> setFloat32(This,byteOffset,value,littleEndian) ) 

#define IDataArrayView_setFloat64(This,byteOffset,value,littleEndian)	\
    ( (This)->lpVtbl -> setFloat64(This,byteOffset,value,littleEndian) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDataArrayView_INTERFACE_DEFINED__ */


#ifndef __IWebGLObject_INTERFACE_DEFINED__
#define __IWebGLObject_INTERFACE_DEFINED__

/* interface IWebGLObject */
/* [unique][dual][uuid][object] */ 


EXTERN_C const IID IID_IWebGLObject;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("789B00A8-6108-4AA3-A37A-A117ED782D73")
    IWebGLObject : public IJSObject
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct IWebGLObjectVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWebGLObject * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWebGLObject * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWebGLObject * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IWebGLObject * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IWebGLObject * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IWebGLObject * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IWebGLObject * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *toString )( 
            IWebGLObject * This,
            /* [retval][out] */ BSTR *retVal);
        
        END_INTERFACE
    } IWebGLObjectVtbl;

    interface IWebGLObject
    {
        CONST_VTBL struct IWebGLObjectVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWebGLObject_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWebGLObject_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWebGLObject_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWebGLObject_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IWebGLObject_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IWebGLObject_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IWebGLObject_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IWebGLObject_toString(This,retVal)	\
    ( (This)->lpVtbl -> toString(This,retVal) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWebGLObject_INTERFACE_DEFINED__ */


#ifndef __IWebGLBuffer_INTERFACE_DEFINED__
#define __IWebGLBuffer_INTERFACE_DEFINED__

/* interface IWebGLBuffer */
/* [unique][dual][uuid][object] */ 


EXTERN_C const IID IID_IWebGLBuffer;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("F0C3A028-4B0F-40B9-A81D-3894D62BCBEF")
    IWebGLBuffer : public IWebGLObject
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct IWebGLBufferVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWebGLBuffer * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWebGLBuffer * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWebGLBuffer * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IWebGLBuffer * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IWebGLBuffer * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IWebGLBuffer * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IWebGLBuffer * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *toString )( 
            IWebGLBuffer * This,
            /* [retval][out] */ BSTR *retVal);
        
        END_INTERFACE
    } IWebGLBufferVtbl;

    interface IWebGLBuffer
    {
        CONST_VTBL struct IWebGLBufferVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWebGLBuffer_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWebGLBuffer_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWebGLBuffer_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWebGLBuffer_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IWebGLBuffer_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IWebGLBuffer_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IWebGLBuffer_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IWebGLBuffer_toString(This,retVal)	\
    ( (This)->lpVtbl -> toString(This,retVal) ) 



#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWebGLBuffer_INTERFACE_DEFINED__ */


#ifndef __IWebGLFramebuffer_INTERFACE_DEFINED__
#define __IWebGLFramebuffer_INTERFACE_DEFINED__

/* interface IWebGLFramebuffer */
/* [unique][dual][uuid][object] */ 


EXTERN_C const IID IID_IWebGLFramebuffer;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("60B196E5-B244-4216-9F4C-D6839EB1297D")
    IWebGLFramebuffer : public IWebGLObject
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct IWebGLFramebufferVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWebGLFramebuffer * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWebGLFramebuffer * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWebGLFramebuffer * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IWebGLFramebuffer * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IWebGLFramebuffer * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IWebGLFramebuffer * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IWebGLFramebuffer * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *toString )( 
            IWebGLFramebuffer * This,
            /* [retval][out] */ BSTR *retVal);
        
        END_INTERFACE
    } IWebGLFramebufferVtbl;

    interface IWebGLFramebuffer
    {
        CONST_VTBL struct IWebGLFramebufferVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWebGLFramebuffer_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWebGLFramebuffer_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWebGLFramebuffer_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWebGLFramebuffer_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IWebGLFramebuffer_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IWebGLFramebuffer_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IWebGLFramebuffer_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IWebGLFramebuffer_toString(This,retVal)	\
    ( (This)->lpVtbl -> toString(This,retVal) ) 



#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWebGLFramebuffer_INTERFACE_DEFINED__ */


#ifndef __IWebGLShader_INTERFACE_DEFINED__
#define __IWebGLShader_INTERFACE_DEFINED__

/* interface IWebGLShader */
/* [unique][dual][uuid][object] */ 


EXTERN_C const IID IID_IWebGLShader;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1D7536F5-82A5-4A36-8F95-C5C4BCE1D410")
    IWebGLShader : public IWebGLObject
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct IWebGLShaderVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWebGLShader * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWebGLShader * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWebGLShader * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IWebGLShader * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IWebGLShader * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IWebGLShader * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IWebGLShader * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *toString )( 
            IWebGLShader * This,
            /* [retval][out] */ BSTR *retVal);
        
        END_INTERFACE
    } IWebGLShaderVtbl;

    interface IWebGLShader
    {
        CONST_VTBL struct IWebGLShaderVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWebGLShader_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWebGLShader_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWebGLShader_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWebGLShader_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IWebGLShader_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IWebGLShader_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IWebGLShader_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IWebGLShader_toString(This,retVal)	\
    ( (This)->lpVtbl -> toString(This,retVal) ) 



#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWebGLShader_INTERFACE_DEFINED__ */


#ifndef __IWebGLProgram_INTERFACE_DEFINED__
#define __IWebGLProgram_INTERFACE_DEFINED__

/* interface IWebGLProgram */
/* [unique][dual][uuid][object] */ 


EXTERN_C const IID IID_IWebGLProgram;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("E6F9DD9E-A066-4FBF-B252-7120007A49C5")
    IWebGLProgram : public IWebGLObject
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct IWebGLProgramVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWebGLProgram * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWebGLProgram * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWebGLProgram * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IWebGLProgram * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IWebGLProgram * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IWebGLProgram * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IWebGLProgram * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *toString )( 
            IWebGLProgram * This,
            /* [retval][out] */ BSTR *retVal);
        
        END_INTERFACE
    } IWebGLProgramVtbl;

    interface IWebGLProgram
    {
        CONST_VTBL struct IWebGLProgramVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWebGLProgram_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWebGLProgram_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWebGLProgram_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWebGLProgram_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IWebGLProgram_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IWebGLProgram_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IWebGLProgram_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IWebGLProgram_toString(This,retVal)	\
    ( (This)->lpVtbl -> toString(This,retVal) ) 



#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWebGLProgram_INTERFACE_DEFINED__ */


#ifndef __IWebGLRenderbuffer_INTERFACE_DEFINED__
#define __IWebGLRenderbuffer_INTERFACE_DEFINED__

/* interface IWebGLRenderbuffer */
/* [unique][dual][uuid][object] */ 


EXTERN_C const IID IID_IWebGLRenderbuffer;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("66FD3A8F-BD05-4F92-90FB-B0CC425FE293")
    IWebGLRenderbuffer : public IWebGLObject
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct IWebGLRenderbufferVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWebGLRenderbuffer * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWebGLRenderbuffer * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWebGLRenderbuffer * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IWebGLRenderbuffer * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IWebGLRenderbuffer * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IWebGLRenderbuffer * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IWebGLRenderbuffer * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *toString )( 
            IWebGLRenderbuffer * This,
            /* [retval][out] */ BSTR *retVal);
        
        END_INTERFACE
    } IWebGLRenderbufferVtbl;

    interface IWebGLRenderbuffer
    {
        CONST_VTBL struct IWebGLRenderbufferVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWebGLRenderbuffer_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWebGLRenderbuffer_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWebGLRenderbuffer_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWebGLRenderbuffer_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IWebGLRenderbuffer_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IWebGLRenderbuffer_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IWebGLRenderbuffer_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IWebGLRenderbuffer_toString(This,retVal)	\
    ( (This)->lpVtbl -> toString(This,retVal) ) 



#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWebGLRenderbuffer_INTERFACE_DEFINED__ */


#ifndef __IWebGLTexture_INTERFACE_DEFINED__
#define __IWebGLTexture_INTERFACE_DEFINED__

/* interface IWebGLTexture */
/* [unique][dual][uuid][object] */ 


EXTERN_C const IID IID_IWebGLTexture;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3DB713CF-263B-4AAF-B107-0BC4515BAE84")
    IWebGLTexture : public IWebGLObject
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct IWebGLTextureVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWebGLTexture * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWebGLTexture * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWebGLTexture * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IWebGLTexture * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IWebGLTexture * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IWebGLTexture * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IWebGLTexture * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *toString )( 
            IWebGLTexture * This,
            /* [retval][out] */ BSTR *retVal);
        
        END_INTERFACE
    } IWebGLTextureVtbl;

    interface IWebGLTexture
    {
        CONST_VTBL struct IWebGLTextureVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWebGLTexture_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWebGLTexture_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWebGLTexture_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWebGLTexture_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IWebGLTexture_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IWebGLTexture_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IWebGLTexture_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IWebGLTexture_toString(This,retVal)	\
    ( (This)->lpVtbl -> toString(This,retVal) ) 



#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWebGLTexture_INTERFACE_DEFINED__ */


#ifndef __IWebGLUniformLocation_INTERFACE_DEFINED__
#define __IWebGLUniformLocation_INTERFACE_DEFINED__

/* interface IWebGLUniformLocation */
/* [unique][dual][uuid][object] */ 


EXTERN_C const IID IID_IWebGLUniformLocation;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("36DD7F98-156D-4A1D-A3BD-CF89796D78B2")
    IWebGLUniformLocation : public IDispatch
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct IWebGLUniformLocationVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWebGLUniformLocation * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWebGLUniformLocation * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWebGLUniformLocation * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IWebGLUniformLocation * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IWebGLUniformLocation * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IWebGLUniformLocation * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IWebGLUniformLocation * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } IWebGLUniformLocationVtbl;

    interface IWebGLUniformLocation
    {
        CONST_VTBL struct IWebGLUniformLocationVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWebGLUniformLocation_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWebGLUniformLocation_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWebGLUniformLocation_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWebGLUniformLocation_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IWebGLUniformLocation_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IWebGLUniformLocation_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IWebGLUniformLocation_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWebGLUniformLocation_INTERFACE_DEFINED__ */


#ifndef __IWebGLActiveInfo_INTERFACE_DEFINED__
#define __IWebGLActiveInfo_INTERFACE_DEFINED__

/* interface IWebGLActiveInfo */
/* [unique][dual][uuid][object] */ 


EXTERN_C const IID IID_IWebGLActiveInfo;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("41C94606-D923-407C-BDD9-8CF6D9DD1619")
    IWebGLActiveInfo : public IJSObject
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_size( 
            /* [retval][out] */ LONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_type( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_name( 
            /* [retval][out] */ BSTR *retVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWebGLActiveInfoVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWebGLActiveInfo * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWebGLActiveInfo * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWebGLActiveInfo * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IWebGLActiveInfo * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IWebGLActiveInfo * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IWebGLActiveInfo * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IWebGLActiveInfo * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *toString )( 
            IWebGLActiveInfo * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_size )( 
            IWebGLActiveInfo * This,
            /* [retval][out] */ LONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_type )( 
            IWebGLActiveInfo * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_name )( 
            IWebGLActiveInfo * This,
            /* [retval][out] */ BSTR *retVal);
        
        END_INTERFACE
    } IWebGLActiveInfoVtbl;

    interface IWebGLActiveInfo
    {
        CONST_VTBL struct IWebGLActiveInfoVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWebGLActiveInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWebGLActiveInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWebGLActiveInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWebGLActiveInfo_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IWebGLActiveInfo_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IWebGLActiveInfo_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IWebGLActiveInfo_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IWebGLActiveInfo_toString(This,retVal)	\
    ( (This)->lpVtbl -> toString(This,retVal) ) 


#define IWebGLActiveInfo_get_size(This,retVal)	\
    ( (This)->lpVtbl -> get_size(This,retVal) ) 

#define IWebGLActiveInfo_get_type(This,retVal)	\
    ( (This)->lpVtbl -> get_type(This,retVal) ) 

#define IWebGLActiveInfo_get_name(This,retVal)	\
    ( (This)->lpVtbl -> get_name(This,retVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWebGLActiveInfo_INTERFACE_DEFINED__ */


#ifndef __IWebGLShaderPrecisionFormat_INTERFACE_DEFINED__
#define __IWebGLShaderPrecisionFormat_INTERFACE_DEFINED__

/* interface IWebGLShaderPrecisionFormat */
/* [unique][dual][uuid][object] */ 


EXTERN_C const IID IID_IWebGLShaderPrecisionFormat;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47E629D7-62C1-46C9-9113-85176A97A360")
    IWebGLShaderPrecisionFormat : public IJSObject
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_rangeMin( 
            /* [retval][out] */ LONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_rangeMax( 
            /* [retval][out] */ LONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_precision( 
            /* [retval][out] */ LONG *retVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWebGLShaderPrecisionFormatVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWebGLShaderPrecisionFormat * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWebGLShaderPrecisionFormat * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWebGLShaderPrecisionFormat * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IWebGLShaderPrecisionFormat * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IWebGLShaderPrecisionFormat * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IWebGLShaderPrecisionFormat * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IWebGLShaderPrecisionFormat * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *toString )( 
            IWebGLShaderPrecisionFormat * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_rangeMin )( 
            IWebGLShaderPrecisionFormat * This,
            /* [retval][out] */ LONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_rangeMax )( 
            IWebGLShaderPrecisionFormat * This,
            /* [retval][out] */ LONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_precision )( 
            IWebGLShaderPrecisionFormat * This,
            /* [retval][out] */ LONG *retVal);
        
        END_INTERFACE
    } IWebGLShaderPrecisionFormatVtbl;

    interface IWebGLShaderPrecisionFormat
    {
        CONST_VTBL struct IWebGLShaderPrecisionFormatVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWebGLShaderPrecisionFormat_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWebGLShaderPrecisionFormat_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWebGLShaderPrecisionFormat_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWebGLShaderPrecisionFormat_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IWebGLShaderPrecisionFormat_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IWebGLShaderPrecisionFormat_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IWebGLShaderPrecisionFormat_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IWebGLShaderPrecisionFormat_toString(This,retVal)	\
    ( (This)->lpVtbl -> toString(This,retVal) ) 


#define IWebGLShaderPrecisionFormat_get_rangeMin(This,retVal)	\
    ( (This)->lpVtbl -> get_rangeMin(This,retVal) ) 

#define IWebGLShaderPrecisionFormat_get_rangeMax(This,retVal)	\
    ( (This)->lpVtbl -> get_rangeMax(This,retVal) ) 

#define IWebGLShaderPrecisionFormat_get_precision(This,retVal)	\
    ( (This)->lpVtbl -> get_precision(This,retVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWebGLShaderPrecisionFormat_INTERFACE_DEFINED__ */


#ifndef __IWebGLContextAttributes_INTERFACE_DEFINED__
#define __IWebGLContextAttributes_INTERFACE_DEFINED__

/* interface IWebGLContextAttributes */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IWebGLContextAttributes;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("76E43B1A-9D20-4C64-BD58-BCDD21B8A8A9")
    IWebGLContextAttributes : public IJSObject
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_alpha( 
            /* [retval][out] */ VARIANT *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_depth( 
            /* [retval][out] */ VARIANT *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_stencil( 
            /* [retval][out] */ VARIANT *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_antialias( 
            /* [retval][out] */ VARIANT *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_premultipliedAlpha( 
            /* [retval][out] */ VARIANT *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_preserveDrawingBuffer( 
            /* [retval][out] */ VARIANT *retVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWebGLContextAttributesVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWebGLContextAttributes * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWebGLContextAttributes * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWebGLContextAttributes * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IWebGLContextAttributes * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IWebGLContextAttributes * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IWebGLContextAttributes * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IWebGLContextAttributes * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *toString )( 
            IWebGLContextAttributes * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_alpha )( 
            IWebGLContextAttributes * This,
            /* [retval][out] */ VARIANT *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_depth )( 
            IWebGLContextAttributes * This,
            /* [retval][out] */ VARIANT *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_stencil )( 
            IWebGLContextAttributes * This,
            /* [retval][out] */ VARIANT *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_antialias )( 
            IWebGLContextAttributes * This,
            /* [retval][out] */ VARIANT *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_premultipliedAlpha )( 
            IWebGLContextAttributes * This,
            /* [retval][out] */ VARIANT *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_preserveDrawingBuffer )( 
            IWebGLContextAttributes * This,
            /* [retval][out] */ VARIANT *retVal);
        
        END_INTERFACE
    } IWebGLContextAttributesVtbl;

    interface IWebGLContextAttributes
    {
        CONST_VTBL struct IWebGLContextAttributesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWebGLContextAttributes_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWebGLContextAttributes_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWebGLContextAttributes_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWebGLContextAttributes_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IWebGLContextAttributes_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IWebGLContextAttributes_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IWebGLContextAttributes_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IWebGLContextAttributes_toString(This,retVal)	\
    ( (This)->lpVtbl -> toString(This,retVal) ) 


#define IWebGLContextAttributes_get_alpha(This,retVal)	\
    ( (This)->lpVtbl -> get_alpha(This,retVal) ) 

#define IWebGLContextAttributes_get_depth(This,retVal)	\
    ( (This)->lpVtbl -> get_depth(This,retVal) ) 

#define IWebGLContextAttributes_get_stencil(This,retVal)	\
    ( (This)->lpVtbl -> get_stencil(This,retVal) ) 

#define IWebGLContextAttributes_get_antialias(This,retVal)	\
    ( (This)->lpVtbl -> get_antialias(This,retVal) ) 

#define IWebGLContextAttributes_get_premultipliedAlpha(This,retVal)	\
    ( (This)->lpVtbl -> get_premultipliedAlpha(This,retVal) ) 

#define IWebGLContextAttributes_get_preserveDrawingBuffer(This,retVal)	\
    ( (This)->lpVtbl -> get_preserveDrawingBuffer(This,retVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWebGLContextAttributes_INTERFACE_DEFINED__ */


#ifndef __IWebGLRCConstants_INTERFACE_DEFINED__
#define __IWebGLRCConstants_INTERFACE_DEFINED__

/* interface IWebGLRCConstants */
/* [unique][dual][uuid][object] */ 


EXTERN_C const IID IID_IWebGLRCConstants;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("D0291412-9F48-4300-8AA8-38E030477E77")
    IWebGLRCConstants : public IJSObject
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_DEPTH_BUFFER_BIT( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_STENCIL_BUFFER_BIT( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_COLOR_BUFFER_BIT( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_POINTS( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_LINES( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_LINE_LOOP( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_LINE_STRIP( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_TRIANGLES( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_TRIANGLE_STRIP( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_TRIANGLE_FAN( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_ZERO( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_ONE( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_SRC_COLOR( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_ONE_MINUS_SRC_COLOR( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_SRC_ALPHA( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_ONE_MINUS_SRC_ALPHA( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_DST_ALPHA( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_ONE_MINUS_DST_ALPHA( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_DST_COLOR( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_ONE_MINUS_DST_COLOR( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_SRC_ALPHA_SATURATE( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_FUNC_ADD( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_BLEND_EQUATION( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_BLEND_EQUATION_RGB( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_BLEND_EQUATION_ALPHA( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_FUNC_SUBTRACT( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_FUNC_REVERSE_SUBTRACT( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_BLEND_DST_RGB( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_BLEND_SRC_RGB( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_BLEND_DST_ALPHA( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_BLEND_SRC_ALPHA( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_CONSTANT_COLOR( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_ONE_MINUS_CONSTANT_COLOR( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_CONSTANT_ALPHA( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_ONE_MINUS_CONSTANT_ALPHA( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_BLEND_COLOR( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_ARRAY_BUFFER( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_ELEMENT_ARRAY_BUFFER( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_ARRAY_BUFFER_BINDING( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_ELEMENT_ARRAY_BUFFER_BINDING( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_STREAM_DRAW( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_STATIC_DRAW( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_DYNAMIC_DRAW( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_BUFFER_SIZE( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_BUFFER_USAGE( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_CURRENT_VERTEX_ATTRIB( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_FRONT( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_BACK( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_FRONT_AND_BACK( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_CULL_FACE( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_BLEND( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_DITHER( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_STENCIL_TEST( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_DEPTH_TEST( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_SCISSOR_TEST( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_POLYGON_OFFSET_FILL( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_SAMPLE_ALPHA_TO_COVERAGE( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_SAMPLE_COVERAGE( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_NO_ERROR( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_INVALID_ENUM( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_INVALID_VALUE( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_INVALID_OPERATION( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_OUT_OF_MEMORY( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_CW( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_CCW( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_LINE_WIDTH( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_ALIASED_POINT_SIZE_RANGE( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_ALIASED_LINE_WIDTH_RANGE( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_CULL_FACE_MODE( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_FRONT_FACE( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_DEPTH_RANGE( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_DEPTH_WRITEMASK( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_DEPTH_CLEAR_VALUE( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_DEPTH_FUNC( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_STENCIL_CLEAR_VALUE( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_STENCIL_FUNC( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_STENCIL_FAIL( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_STENCIL_PASS_DEPTH_FAIL( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_STENCIL_PASS_DEPTH_PASS( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_STENCIL_REF( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_STENCIL_VALUE_MASK( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_STENCIL_WRITEMASK( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_STENCIL_BACK_FUNC( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_STENCIL_BACK_FAIL( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_STENCIL_BACK_PASS_DEPTH_FAIL( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_STENCIL_BACK_PASS_DEPTH_PASS( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_STENCIL_BACK_REF( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_STENCIL_BACK_VALUE_MASK( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_STENCIL_BACK_WRITEMASK( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_VIEWPORT( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_SCISSOR_BOX( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_COLOR_CLEAR_VALUE( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_COLOR_WRITEMASK( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_UNPACK_ALIGNMENT( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_PACK_ALIGNMENT( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_MAX_TEXTURE_SIZE( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_MAX_VIEWPORT_DIMS( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_SUBPIXEL_BITS( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_RED_BITS( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_GREEN_BITS( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_BLUE_BITS( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_ALPHA_BITS( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_DEPTH_BITS( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_STENCIL_BITS( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_POLYGON_OFFSET_UNITS( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_POLYGON_OFFSET_FACTOR( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_TEXTURE_BINDING_2D( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_SAMPLE_BUFFERS( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_SAMPLES( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_SAMPLE_COVERAGE_VALUE( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_SAMPLE_COVERAGE_INVERT( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_COMPRESSED_TEXTURE_FORMATS( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_DONT_CARE( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_FASTEST( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_NICEST( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_GENERATE_MIPMAP_HINT( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_BYTE( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_UNSIGNED_BYTE( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_SHORT( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_UNSIGNED_SHORT( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_INT( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_UNSIGNED_INT( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_FLOAT( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_DEPTH_COMPONENT( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_ALPHA( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_RGB( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_RGBA( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_LUMINANCE( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_LUMINANCE_ALPHA( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_UNSIGNED_SHORT_4_4_4_4( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_UNSIGNED_SHORT_5_5_5_1( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_UNSIGNED_SHORT_5_6_5( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_FRAGMENT_SHADER( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_VERTEX_SHADER( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_MAX_VERTEX_ATTRIBS( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_MAX_VERTEX_UNIFORM_VECTORS( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_MAX_VARYING_VECTORS( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_MAX_COMBINED_TEXTURE_IMAGE_UNITS( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_MAX_VERTEX_TEXTURE_IMAGE_UNITS( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_MAX_TEXTURE_IMAGE_UNITS( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_MAX_FRAGMENT_UNIFORM_VECTORS( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_SHADER_TYPE( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_DELETE_STATUS( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_LINK_STATUS( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_VALIDATE_STATUS( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_ATTACHED_SHADERS( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_ACTIVE_UNIFORMS( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_ACTIVE_ATTRIBUTES( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_SHADING_LANGUAGE_VERSION( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_CURRENT_PROGRAM( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_NEVER( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_LESS( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_EQUAL( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_LEQUAL( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_GREATER( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_NOTEQUAL( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_GEQUAL( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_ALWAYS( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_KEEP( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_REPLACE( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_INCR( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_DECR( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_INVERT( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_INCR_WRAP( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_DECR_WRAP( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_VENDOR( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_RENDERER( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_VERSION( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_NEAREST( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_LINEAR( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_NEAREST_MIPMAP_NEAREST( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_LINEAR_MIPMAP_NEAREST( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_NEAREST_MIPMAP_LINEAR( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_LINEAR_MIPMAP_LINEAR( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_TEXTURE_MAG_FILTER( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_TEXTURE_MIN_FILTER( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_TEXTURE_WRAP_S( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_TEXTURE_WRAP_T( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_TEXTURE_2D( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_TEXTURE( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_TEXTURE_CUBE_MAP( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_TEXTURE_BINDING_CUBE_MAP( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_TEXTURE_CUBE_MAP_POSITIVE_X( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_TEXTURE_CUBE_MAP_NEGATIVE_X( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_TEXTURE_CUBE_MAP_POSITIVE_Y( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_TEXTURE_CUBE_MAP_NEGATIVE_Y( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_TEXTURE_CUBE_MAP_POSITIVE_Z( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_TEXTURE_CUBE_MAP_NEGATIVE_Z( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_MAX_CUBE_MAP_TEXTURE_SIZE( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_TEXTURE0( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_TEXTURE1( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_TEXTURE2( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_TEXTURE3( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_TEXTURE4( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_TEXTURE5( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_TEXTURE6( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_TEXTURE7( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_TEXTURE8( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_TEXTURE9( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_TEXTURE10( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_TEXTURE11( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_TEXTURE12( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_TEXTURE13( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_TEXTURE14( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_TEXTURE15( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_TEXTURE16( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_TEXTURE17( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_TEXTURE18( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_TEXTURE19( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_TEXTURE20( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_TEXTURE21( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_TEXTURE22( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_TEXTURE23( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_TEXTURE24( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_TEXTURE25( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_TEXTURE26( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_TEXTURE27( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_TEXTURE28( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_TEXTURE29( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_TEXTURE30( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_TEXTURE31( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_ACTIVE_TEXTURE( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_REPEAT( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_CLAMP_TO_EDGE( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_MIRRORED_REPEAT( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_FLOAT_VEC2( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_FLOAT_VEC3( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_FLOAT_VEC4( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_INT_VEC2( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_INT_VEC3( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_INT_VEC4( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_BOOL( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_BOOL_VEC2( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_BOOL_VEC3( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_BOOL_VEC4( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_FLOAT_MAT2( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_FLOAT_MAT3( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_FLOAT_MAT4( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_SAMPLER_2D( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_SAMPLER_CUBE( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_VERTEX_ATTRIB_ARRAY_ENABLED( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_VERTEX_ATTRIB_ARRAY_SIZE( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_VERTEX_ATTRIB_ARRAY_STRIDE( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_VERTEX_ATTRIB_ARRAY_TYPE( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_VERTEX_ATTRIB_ARRAY_NORMALIZED( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_VERTEX_ATTRIB_ARRAY_POINTER( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_COMPILE_STATUS( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_LOW_FLOAT( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_MEDIUM_FLOAT( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_HIGH_FLOAT( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_LOW_INT( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_MEDIUM_INT( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_HIGH_INT( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_FRAMEBUFFER( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_RENDERBUFFER( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_RGBA4( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_RGB5_A1( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_RGB565( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_DEPTH_COMPONENT16( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_STENCIL_INDEX( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_STENCIL_INDEX8( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_DEPTH_STENCIL( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_RENDERBUFFER_WIDTH( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_RENDERBUFFER_HEIGHT( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_RENDERBUFFER_INTERNAL_FORMAT( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_RENDERBUFFER_RED_SIZE( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_RENDERBUFFER_GREEN_SIZE( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_RENDERBUFFER_BLUE_SIZE( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_RENDERBUFFER_ALPHA_SIZE( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_RENDERBUFFER_DEPTH_SIZE( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_RENDERBUFFER_STENCIL_SIZE( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_FRAMEBUFFER_ATTACHMENT_OBJECT_NAME( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_COLOR_ATTACHMENT0( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_DEPTH_ATTACHMENT( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_STENCIL_ATTACHMENT( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_DEPTH_STENCIL_ATTACHMENT( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_NONE( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_FRAMEBUFFER_COMPLETE( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_FRAMEBUFFER_INCOMPLETE_ATTACHMENT( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_FRAMEBUFFER_INCOMPLETE_DIMENSIONS( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_FRAMEBUFFER_UNSUPPORTED( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_FRAMEBUFFER_BINDING( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_RENDERBUFFER_BINDING( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_MAX_RENDERBUFFER_SIZE( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_INVALID_FRAMEBUFFER_OPERATION( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_UNPACK_FLIP_Y_WEBGL( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_UNPACK_PREMULTIPLY_ALPHA_WEBGL( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_CONTEXT_LOST_WEBGL( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_UNPACK_COLORSPACE_CONVERSION_WEBGL( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_BROWSER_DEFAULT_WEBGL( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWebGLRCConstantsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWebGLRCConstants * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWebGLRCConstants * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWebGLRCConstants * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IWebGLRCConstants * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IWebGLRCConstants * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IWebGLRCConstants * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IWebGLRCConstants * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *toString )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DEPTH_BUFFER_BIT )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_STENCIL_BUFFER_BIT )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_COLOR_BUFFER_BIT )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_POINTS )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_LINES )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_LINE_LOOP )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_LINE_STRIP )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TRIANGLES )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TRIANGLE_STRIP )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TRIANGLE_FAN )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ZERO )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ONE )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SRC_COLOR )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ONE_MINUS_SRC_COLOR )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SRC_ALPHA )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ONE_MINUS_SRC_ALPHA )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DST_ALPHA )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ONE_MINUS_DST_ALPHA )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DST_COLOR )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ONE_MINUS_DST_COLOR )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SRC_ALPHA_SATURATE )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FUNC_ADD )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_BLEND_EQUATION )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_BLEND_EQUATION_RGB )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_BLEND_EQUATION_ALPHA )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FUNC_SUBTRACT )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FUNC_REVERSE_SUBTRACT )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_BLEND_DST_RGB )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_BLEND_SRC_RGB )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_BLEND_DST_ALPHA )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_BLEND_SRC_ALPHA )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CONSTANT_COLOR )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ONE_MINUS_CONSTANT_COLOR )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CONSTANT_ALPHA )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ONE_MINUS_CONSTANT_ALPHA )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_BLEND_COLOR )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ARRAY_BUFFER )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ELEMENT_ARRAY_BUFFER )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ARRAY_BUFFER_BINDING )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ELEMENT_ARRAY_BUFFER_BINDING )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_STREAM_DRAW )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_STATIC_DRAW )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DYNAMIC_DRAW )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_BUFFER_SIZE )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_BUFFER_USAGE )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CURRENT_VERTEX_ATTRIB )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FRONT )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_BACK )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FRONT_AND_BACK )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CULL_FACE )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_BLEND )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DITHER )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_STENCIL_TEST )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DEPTH_TEST )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SCISSOR_TEST )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_POLYGON_OFFSET_FILL )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SAMPLE_ALPHA_TO_COVERAGE )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SAMPLE_COVERAGE )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_NO_ERROR )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_INVALID_ENUM )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_INVALID_VALUE )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_INVALID_OPERATION )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_OUT_OF_MEMORY )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CW )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CCW )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_LINE_WIDTH )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ALIASED_POINT_SIZE_RANGE )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ALIASED_LINE_WIDTH_RANGE )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CULL_FACE_MODE )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FRONT_FACE )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DEPTH_RANGE )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DEPTH_WRITEMASK )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DEPTH_CLEAR_VALUE )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DEPTH_FUNC )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_STENCIL_CLEAR_VALUE )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_STENCIL_FUNC )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_STENCIL_FAIL )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_STENCIL_PASS_DEPTH_FAIL )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_STENCIL_PASS_DEPTH_PASS )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_STENCIL_REF )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_STENCIL_VALUE_MASK )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_STENCIL_WRITEMASK )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_STENCIL_BACK_FUNC )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_STENCIL_BACK_FAIL )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_STENCIL_BACK_PASS_DEPTH_FAIL )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_STENCIL_BACK_PASS_DEPTH_PASS )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_STENCIL_BACK_REF )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_STENCIL_BACK_VALUE_MASK )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_STENCIL_BACK_WRITEMASK )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_VIEWPORT )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SCISSOR_BOX )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_COLOR_CLEAR_VALUE )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_COLOR_WRITEMASK )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_UNPACK_ALIGNMENT )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PACK_ALIGNMENT )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_MAX_TEXTURE_SIZE )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_MAX_VIEWPORT_DIMS )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SUBPIXEL_BITS )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RED_BITS )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_GREEN_BITS )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_BLUE_BITS )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ALPHA_BITS )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DEPTH_BITS )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_STENCIL_BITS )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_POLYGON_OFFSET_UNITS )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_POLYGON_OFFSET_FACTOR )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TEXTURE_BINDING_2D )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SAMPLE_BUFFERS )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SAMPLES )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SAMPLE_COVERAGE_VALUE )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SAMPLE_COVERAGE_INVERT )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_COMPRESSED_TEXTURE_FORMATS )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DONT_CARE )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FASTEST )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_NICEST )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_GENERATE_MIPMAP_HINT )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_BYTE )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_UNSIGNED_BYTE )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SHORT )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_UNSIGNED_SHORT )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_INT )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_UNSIGNED_INT )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FLOAT )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DEPTH_COMPONENT )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ALPHA )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RGB )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RGBA )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_LUMINANCE )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_LUMINANCE_ALPHA )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_UNSIGNED_SHORT_4_4_4_4 )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_UNSIGNED_SHORT_5_5_5_1 )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_UNSIGNED_SHORT_5_6_5 )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FRAGMENT_SHADER )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_VERTEX_SHADER )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_MAX_VERTEX_ATTRIBS )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_MAX_VERTEX_UNIFORM_VECTORS )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_MAX_VARYING_VECTORS )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_MAX_COMBINED_TEXTURE_IMAGE_UNITS )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_MAX_VERTEX_TEXTURE_IMAGE_UNITS )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_MAX_TEXTURE_IMAGE_UNITS )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_MAX_FRAGMENT_UNIFORM_VECTORS )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SHADER_TYPE )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DELETE_STATUS )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_LINK_STATUS )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_VALIDATE_STATUS )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ATTACHED_SHADERS )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ACTIVE_UNIFORMS )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ACTIVE_ATTRIBUTES )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SHADING_LANGUAGE_VERSION )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CURRENT_PROGRAM )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_NEVER )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_LESS )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_EQUAL )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_LEQUAL )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_GREATER )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_NOTEQUAL )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_GEQUAL )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ALWAYS )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_KEEP )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_REPLACE )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_INCR )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DECR )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_INVERT )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_INCR_WRAP )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DECR_WRAP )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_VENDOR )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RENDERER )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_VERSION )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_NEAREST )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_LINEAR )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_NEAREST_MIPMAP_NEAREST )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_LINEAR_MIPMAP_NEAREST )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_NEAREST_MIPMAP_LINEAR )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_LINEAR_MIPMAP_LINEAR )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TEXTURE_MAG_FILTER )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TEXTURE_MIN_FILTER )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TEXTURE_WRAP_S )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TEXTURE_WRAP_T )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TEXTURE_2D )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TEXTURE )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TEXTURE_CUBE_MAP )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TEXTURE_BINDING_CUBE_MAP )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TEXTURE_CUBE_MAP_POSITIVE_X )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TEXTURE_CUBE_MAP_NEGATIVE_X )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TEXTURE_CUBE_MAP_POSITIVE_Y )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TEXTURE_CUBE_MAP_NEGATIVE_Y )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TEXTURE_CUBE_MAP_POSITIVE_Z )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TEXTURE_CUBE_MAP_NEGATIVE_Z )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_MAX_CUBE_MAP_TEXTURE_SIZE )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TEXTURE0 )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TEXTURE1 )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TEXTURE2 )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TEXTURE3 )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TEXTURE4 )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TEXTURE5 )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TEXTURE6 )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TEXTURE7 )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TEXTURE8 )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TEXTURE9 )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TEXTURE10 )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TEXTURE11 )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TEXTURE12 )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TEXTURE13 )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TEXTURE14 )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TEXTURE15 )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TEXTURE16 )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TEXTURE17 )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TEXTURE18 )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TEXTURE19 )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TEXTURE20 )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TEXTURE21 )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TEXTURE22 )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TEXTURE23 )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TEXTURE24 )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TEXTURE25 )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TEXTURE26 )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TEXTURE27 )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TEXTURE28 )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TEXTURE29 )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TEXTURE30 )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TEXTURE31 )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ACTIVE_TEXTURE )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_REPEAT )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CLAMP_TO_EDGE )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_MIRRORED_REPEAT )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FLOAT_VEC2 )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FLOAT_VEC3 )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FLOAT_VEC4 )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_INT_VEC2 )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_INT_VEC3 )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_INT_VEC4 )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_BOOL )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_BOOL_VEC2 )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_BOOL_VEC3 )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_BOOL_VEC4 )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FLOAT_MAT2 )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FLOAT_MAT3 )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FLOAT_MAT4 )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SAMPLER_2D )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SAMPLER_CUBE )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_VERTEX_ATTRIB_ARRAY_ENABLED )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_VERTEX_ATTRIB_ARRAY_SIZE )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_VERTEX_ATTRIB_ARRAY_STRIDE )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_VERTEX_ATTRIB_ARRAY_TYPE )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_VERTEX_ATTRIB_ARRAY_NORMALIZED )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_VERTEX_ATTRIB_ARRAY_POINTER )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_COMPILE_STATUS )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_LOW_FLOAT )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_MEDIUM_FLOAT )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HIGH_FLOAT )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_LOW_INT )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_MEDIUM_INT )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HIGH_INT )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FRAMEBUFFER )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RENDERBUFFER )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RGBA4 )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RGB5_A1 )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RGB565 )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DEPTH_COMPONENT16 )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_STENCIL_INDEX )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_STENCIL_INDEX8 )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DEPTH_STENCIL )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RENDERBUFFER_WIDTH )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RENDERBUFFER_HEIGHT )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RENDERBUFFER_INTERNAL_FORMAT )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RENDERBUFFER_RED_SIZE )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RENDERBUFFER_GREEN_SIZE )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RENDERBUFFER_BLUE_SIZE )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RENDERBUFFER_ALPHA_SIZE )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RENDERBUFFER_DEPTH_SIZE )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RENDERBUFFER_STENCIL_SIZE )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FRAMEBUFFER_ATTACHMENT_OBJECT_NAME )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_COLOR_ATTACHMENT0 )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DEPTH_ATTACHMENT )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_STENCIL_ATTACHMENT )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DEPTH_STENCIL_ATTACHMENT )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_NONE )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FRAMEBUFFER_COMPLETE )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FRAMEBUFFER_INCOMPLETE_ATTACHMENT )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FRAMEBUFFER_INCOMPLETE_DIMENSIONS )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FRAMEBUFFER_UNSUPPORTED )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FRAMEBUFFER_BINDING )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RENDERBUFFER_BINDING )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_MAX_RENDERBUFFER_SIZE )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_INVALID_FRAMEBUFFER_OPERATION )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_UNPACK_FLIP_Y_WEBGL )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_UNPACK_PREMULTIPLY_ALPHA_WEBGL )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CONTEXT_LOST_WEBGL )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_UNPACK_COLORSPACE_CONVERSION_WEBGL )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_BROWSER_DEFAULT_WEBGL )( 
            IWebGLRCConstants * This,
            /* [retval][out] */ ULONG *retVal);
        
        END_INTERFACE
    } IWebGLRCConstantsVtbl;

    interface IWebGLRCConstants
    {
        CONST_VTBL struct IWebGLRCConstantsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWebGLRCConstants_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWebGLRCConstants_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWebGLRCConstants_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWebGLRCConstants_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IWebGLRCConstants_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IWebGLRCConstants_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IWebGLRCConstants_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IWebGLRCConstants_toString(This,retVal)	\
    ( (This)->lpVtbl -> toString(This,retVal) ) 


#define IWebGLRCConstants_get_DEPTH_BUFFER_BIT(This,retVal)	\
    ( (This)->lpVtbl -> get_DEPTH_BUFFER_BIT(This,retVal) ) 

#define IWebGLRCConstants_get_STENCIL_BUFFER_BIT(This,retVal)	\
    ( (This)->lpVtbl -> get_STENCIL_BUFFER_BIT(This,retVal) ) 

#define IWebGLRCConstants_get_COLOR_BUFFER_BIT(This,retVal)	\
    ( (This)->lpVtbl -> get_COLOR_BUFFER_BIT(This,retVal) ) 

#define IWebGLRCConstants_get_POINTS(This,retVal)	\
    ( (This)->lpVtbl -> get_POINTS(This,retVal) ) 

#define IWebGLRCConstants_get_LINES(This,retVal)	\
    ( (This)->lpVtbl -> get_LINES(This,retVal) ) 

#define IWebGLRCConstants_get_LINE_LOOP(This,retVal)	\
    ( (This)->lpVtbl -> get_LINE_LOOP(This,retVal) ) 

#define IWebGLRCConstants_get_LINE_STRIP(This,retVal)	\
    ( (This)->lpVtbl -> get_LINE_STRIP(This,retVal) ) 

#define IWebGLRCConstants_get_TRIANGLES(This,retVal)	\
    ( (This)->lpVtbl -> get_TRIANGLES(This,retVal) ) 

#define IWebGLRCConstants_get_TRIANGLE_STRIP(This,retVal)	\
    ( (This)->lpVtbl -> get_TRIANGLE_STRIP(This,retVal) ) 

#define IWebGLRCConstants_get_TRIANGLE_FAN(This,retVal)	\
    ( (This)->lpVtbl -> get_TRIANGLE_FAN(This,retVal) ) 

#define IWebGLRCConstants_get_ZERO(This,retVal)	\
    ( (This)->lpVtbl -> get_ZERO(This,retVal) ) 

#define IWebGLRCConstants_get_ONE(This,retVal)	\
    ( (This)->lpVtbl -> get_ONE(This,retVal) ) 

#define IWebGLRCConstants_get_SRC_COLOR(This,retVal)	\
    ( (This)->lpVtbl -> get_SRC_COLOR(This,retVal) ) 

#define IWebGLRCConstants_get_ONE_MINUS_SRC_COLOR(This,retVal)	\
    ( (This)->lpVtbl -> get_ONE_MINUS_SRC_COLOR(This,retVal) ) 

#define IWebGLRCConstants_get_SRC_ALPHA(This,retVal)	\
    ( (This)->lpVtbl -> get_SRC_ALPHA(This,retVal) ) 

#define IWebGLRCConstants_get_ONE_MINUS_SRC_ALPHA(This,retVal)	\
    ( (This)->lpVtbl -> get_ONE_MINUS_SRC_ALPHA(This,retVal) ) 

#define IWebGLRCConstants_get_DST_ALPHA(This,retVal)	\
    ( (This)->lpVtbl -> get_DST_ALPHA(This,retVal) ) 

#define IWebGLRCConstants_get_ONE_MINUS_DST_ALPHA(This,retVal)	\
    ( (This)->lpVtbl -> get_ONE_MINUS_DST_ALPHA(This,retVal) ) 

#define IWebGLRCConstants_get_DST_COLOR(This,retVal)	\
    ( (This)->lpVtbl -> get_DST_COLOR(This,retVal) ) 

#define IWebGLRCConstants_get_ONE_MINUS_DST_COLOR(This,retVal)	\
    ( (This)->lpVtbl -> get_ONE_MINUS_DST_COLOR(This,retVal) ) 

#define IWebGLRCConstants_get_SRC_ALPHA_SATURATE(This,retVal)	\
    ( (This)->lpVtbl -> get_SRC_ALPHA_SATURATE(This,retVal) ) 

#define IWebGLRCConstants_get_FUNC_ADD(This,retVal)	\
    ( (This)->lpVtbl -> get_FUNC_ADD(This,retVal) ) 

#define IWebGLRCConstants_get_BLEND_EQUATION(This,retVal)	\
    ( (This)->lpVtbl -> get_BLEND_EQUATION(This,retVal) ) 

#define IWebGLRCConstants_get_BLEND_EQUATION_RGB(This,retVal)	\
    ( (This)->lpVtbl -> get_BLEND_EQUATION_RGB(This,retVal) ) 

#define IWebGLRCConstants_get_BLEND_EQUATION_ALPHA(This,retVal)	\
    ( (This)->lpVtbl -> get_BLEND_EQUATION_ALPHA(This,retVal) ) 

#define IWebGLRCConstants_get_FUNC_SUBTRACT(This,retVal)	\
    ( (This)->lpVtbl -> get_FUNC_SUBTRACT(This,retVal) ) 

#define IWebGLRCConstants_get_FUNC_REVERSE_SUBTRACT(This,retVal)	\
    ( (This)->lpVtbl -> get_FUNC_REVERSE_SUBTRACT(This,retVal) ) 

#define IWebGLRCConstants_get_BLEND_DST_RGB(This,retVal)	\
    ( (This)->lpVtbl -> get_BLEND_DST_RGB(This,retVal) ) 

#define IWebGLRCConstants_get_BLEND_SRC_RGB(This,retVal)	\
    ( (This)->lpVtbl -> get_BLEND_SRC_RGB(This,retVal) ) 

#define IWebGLRCConstants_get_BLEND_DST_ALPHA(This,retVal)	\
    ( (This)->lpVtbl -> get_BLEND_DST_ALPHA(This,retVal) ) 

#define IWebGLRCConstants_get_BLEND_SRC_ALPHA(This,retVal)	\
    ( (This)->lpVtbl -> get_BLEND_SRC_ALPHA(This,retVal) ) 

#define IWebGLRCConstants_get_CONSTANT_COLOR(This,retVal)	\
    ( (This)->lpVtbl -> get_CONSTANT_COLOR(This,retVal) ) 

#define IWebGLRCConstants_get_ONE_MINUS_CONSTANT_COLOR(This,retVal)	\
    ( (This)->lpVtbl -> get_ONE_MINUS_CONSTANT_COLOR(This,retVal) ) 

#define IWebGLRCConstants_get_CONSTANT_ALPHA(This,retVal)	\
    ( (This)->lpVtbl -> get_CONSTANT_ALPHA(This,retVal) ) 

#define IWebGLRCConstants_get_ONE_MINUS_CONSTANT_ALPHA(This,retVal)	\
    ( (This)->lpVtbl -> get_ONE_MINUS_CONSTANT_ALPHA(This,retVal) ) 

#define IWebGLRCConstants_get_BLEND_COLOR(This,retVal)	\
    ( (This)->lpVtbl -> get_BLEND_COLOR(This,retVal) ) 

#define IWebGLRCConstants_get_ARRAY_BUFFER(This,retVal)	\
    ( (This)->lpVtbl -> get_ARRAY_BUFFER(This,retVal) ) 

#define IWebGLRCConstants_get_ELEMENT_ARRAY_BUFFER(This,retVal)	\
    ( (This)->lpVtbl -> get_ELEMENT_ARRAY_BUFFER(This,retVal) ) 

#define IWebGLRCConstants_get_ARRAY_BUFFER_BINDING(This,retVal)	\
    ( (This)->lpVtbl -> get_ARRAY_BUFFER_BINDING(This,retVal) ) 

#define IWebGLRCConstants_get_ELEMENT_ARRAY_BUFFER_BINDING(This,retVal)	\
    ( (This)->lpVtbl -> get_ELEMENT_ARRAY_BUFFER_BINDING(This,retVal) ) 

#define IWebGLRCConstants_get_STREAM_DRAW(This,retVal)	\
    ( (This)->lpVtbl -> get_STREAM_DRAW(This,retVal) ) 

#define IWebGLRCConstants_get_STATIC_DRAW(This,retVal)	\
    ( (This)->lpVtbl -> get_STATIC_DRAW(This,retVal) ) 

#define IWebGLRCConstants_get_DYNAMIC_DRAW(This,retVal)	\
    ( (This)->lpVtbl -> get_DYNAMIC_DRAW(This,retVal) ) 

#define IWebGLRCConstants_get_BUFFER_SIZE(This,retVal)	\
    ( (This)->lpVtbl -> get_BUFFER_SIZE(This,retVal) ) 

#define IWebGLRCConstants_get_BUFFER_USAGE(This,retVal)	\
    ( (This)->lpVtbl -> get_BUFFER_USAGE(This,retVal) ) 

#define IWebGLRCConstants_get_CURRENT_VERTEX_ATTRIB(This,retVal)	\
    ( (This)->lpVtbl -> get_CURRENT_VERTEX_ATTRIB(This,retVal) ) 

#define IWebGLRCConstants_get_FRONT(This,retVal)	\
    ( (This)->lpVtbl -> get_FRONT(This,retVal) ) 

#define IWebGLRCConstants_get_BACK(This,retVal)	\
    ( (This)->lpVtbl -> get_BACK(This,retVal) ) 

#define IWebGLRCConstants_get_FRONT_AND_BACK(This,retVal)	\
    ( (This)->lpVtbl -> get_FRONT_AND_BACK(This,retVal) ) 

#define IWebGLRCConstants_get_CULL_FACE(This,retVal)	\
    ( (This)->lpVtbl -> get_CULL_FACE(This,retVal) ) 

#define IWebGLRCConstants_get_BLEND(This,retVal)	\
    ( (This)->lpVtbl -> get_BLEND(This,retVal) ) 

#define IWebGLRCConstants_get_DITHER(This,retVal)	\
    ( (This)->lpVtbl -> get_DITHER(This,retVal) ) 

#define IWebGLRCConstants_get_STENCIL_TEST(This,retVal)	\
    ( (This)->lpVtbl -> get_STENCIL_TEST(This,retVal) ) 

#define IWebGLRCConstants_get_DEPTH_TEST(This,retVal)	\
    ( (This)->lpVtbl -> get_DEPTH_TEST(This,retVal) ) 

#define IWebGLRCConstants_get_SCISSOR_TEST(This,retVal)	\
    ( (This)->lpVtbl -> get_SCISSOR_TEST(This,retVal) ) 

#define IWebGLRCConstants_get_POLYGON_OFFSET_FILL(This,retVal)	\
    ( (This)->lpVtbl -> get_POLYGON_OFFSET_FILL(This,retVal) ) 

#define IWebGLRCConstants_get_SAMPLE_ALPHA_TO_COVERAGE(This,retVal)	\
    ( (This)->lpVtbl -> get_SAMPLE_ALPHA_TO_COVERAGE(This,retVal) ) 

#define IWebGLRCConstants_get_SAMPLE_COVERAGE(This,retVal)	\
    ( (This)->lpVtbl -> get_SAMPLE_COVERAGE(This,retVal) ) 

#define IWebGLRCConstants_get_NO_ERROR(This,retVal)	\
    ( (This)->lpVtbl -> get_NO_ERROR(This,retVal) ) 

#define IWebGLRCConstants_get_INVALID_ENUM(This,retVal)	\
    ( (This)->lpVtbl -> get_INVALID_ENUM(This,retVal) ) 

#define IWebGLRCConstants_get_INVALID_VALUE(This,retVal)	\
    ( (This)->lpVtbl -> get_INVALID_VALUE(This,retVal) ) 

#define IWebGLRCConstants_get_INVALID_OPERATION(This,retVal)	\
    ( (This)->lpVtbl -> get_INVALID_OPERATION(This,retVal) ) 

#define IWebGLRCConstants_get_OUT_OF_MEMORY(This,retVal)	\
    ( (This)->lpVtbl -> get_OUT_OF_MEMORY(This,retVal) ) 

#define IWebGLRCConstants_get_CW(This,retVal)	\
    ( (This)->lpVtbl -> get_CW(This,retVal) ) 

#define IWebGLRCConstants_get_CCW(This,retVal)	\
    ( (This)->lpVtbl -> get_CCW(This,retVal) ) 

#define IWebGLRCConstants_get_LINE_WIDTH(This,retVal)	\
    ( (This)->lpVtbl -> get_LINE_WIDTH(This,retVal) ) 

#define IWebGLRCConstants_get_ALIASED_POINT_SIZE_RANGE(This,retVal)	\
    ( (This)->lpVtbl -> get_ALIASED_POINT_SIZE_RANGE(This,retVal) ) 

#define IWebGLRCConstants_get_ALIASED_LINE_WIDTH_RANGE(This,retVal)	\
    ( (This)->lpVtbl -> get_ALIASED_LINE_WIDTH_RANGE(This,retVal) ) 

#define IWebGLRCConstants_get_CULL_FACE_MODE(This,retVal)	\
    ( (This)->lpVtbl -> get_CULL_FACE_MODE(This,retVal) ) 

#define IWebGLRCConstants_get_FRONT_FACE(This,retVal)	\
    ( (This)->lpVtbl -> get_FRONT_FACE(This,retVal) ) 

#define IWebGLRCConstants_get_DEPTH_RANGE(This,retVal)	\
    ( (This)->lpVtbl -> get_DEPTH_RANGE(This,retVal) ) 

#define IWebGLRCConstants_get_DEPTH_WRITEMASK(This,retVal)	\
    ( (This)->lpVtbl -> get_DEPTH_WRITEMASK(This,retVal) ) 

#define IWebGLRCConstants_get_DEPTH_CLEAR_VALUE(This,retVal)	\
    ( (This)->lpVtbl -> get_DEPTH_CLEAR_VALUE(This,retVal) ) 

#define IWebGLRCConstants_get_DEPTH_FUNC(This,retVal)	\
    ( (This)->lpVtbl -> get_DEPTH_FUNC(This,retVal) ) 

#define IWebGLRCConstants_get_STENCIL_CLEAR_VALUE(This,retVal)	\
    ( (This)->lpVtbl -> get_STENCIL_CLEAR_VALUE(This,retVal) ) 

#define IWebGLRCConstants_get_STENCIL_FUNC(This,retVal)	\
    ( (This)->lpVtbl -> get_STENCIL_FUNC(This,retVal) ) 

#define IWebGLRCConstants_get_STENCIL_FAIL(This,retVal)	\
    ( (This)->lpVtbl -> get_STENCIL_FAIL(This,retVal) ) 

#define IWebGLRCConstants_get_STENCIL_PASS_DEPTH_FAIL(This,retVal)	\
    ( (This)->lpVtbl -> get_STENCIL_PASS_DEPTH_FAIL(This,retVal) ) 

#define IWebGLRCConstants_get_STENCIL_PASS_DEPTH_PASS(This,retVal)	\
    ( (This)->lpVtbl -> get_STENCIL_PASS_DEPTH_PASS(This,retVal) ) 

#define IWebGLRCConstants_get_STENCIL_REF(This,retVal)	\
    ( (This)->lpVtbl -> get_STENCIL_REF(This,retVal) ) 

#define IWebGLRCConstants_get_STENCIL_VALUE_MASK(This,retVal)	\
    ( (This)->lpVtbl -> get_STENCIL_VALUE_MASK(This,retVal) ) 

#define IWebGLRCConstants_get_STENCIL_WRITEMASK(This,retVal)	\
    ( (This)->lpVtbl -> get_STENCIL_WRITEMASK(This,retVal) ) 

#define IWebGLRCConstants_get_STENCIL_BACK_FUNC(This,retVal)	\
    ( (This)->lpVtbl -> get_STENCIL_BACK_FUNC(This,retVal) ) 

#define IWebGLRCConstants_get_STENCIL_BACK_FAIL(This,retVal)	\
    ( (This)->lpVtbl -> get_STENCIL_BACK_FAIL(This,retVal) ) 

#define IWebGLRCConstants_get_STENCIL_BACK_PASS_DEPTH_FAIL(This,retVal)	\
    ( (This)->lpVtbl -> get_STENCIL_BACK_PASS_DEPTH_FAIL(This,retVal) ) 

#define IWebGLRCConstants_get_STENCIL_BACK_PASS_DEPTH_PASS(This,retVal)	\
    ( (This)->lpVtbl -> get_STENCIL_BACK_PASS_DEPTH_PASS(This,retVal) ) 

#define IWebGLRCConstants_get_STENCIL_BACK_REF(This,retVal)	\
    ( (This)->lpVtbl -> get_STENCIL_BACK_REF(This,retVal) ) 

#define IWebGLRCConstants_get_STENCIL_BACK_VALUE_MASK(This,retVal)	\
    ( (This)->lpVtbl -> get_STENCIL_BACK_VALUE_MASK(This,retVal) ) 

#define IWebGLRCConstants_get_STENCIL_BACK_WRITEMASK(This,retVal)	\
    ( (This)->lpVtbl -> get_STENCIL_BACK_WRITEMASK(This,retVal) ) 

#define IWebGLRCConstants_get_VIEWPORT(This,retVal)	\
    ( (This)->lpVtbl -> get_VIEWPORT(This,retVal) ) 

#define IWebGLRCConstants_get_SCISSOR_BOX(This,retVal)	\
    ( (This)->lpVtbl -> get_SCISSOR_BOX(This,retVal) ) 

#define IWebGLRCConstants_get_COLOR_CLEAR_VALUE(This,retVal)	\
    ( (This)->lpVtbl -> get_COLOR_CLEAR_VALUE(This,retVal) ) 

#define IWebGLRCConstants_get_COLOR_WRITEMASK(This,retVal)	\
    ( (This)->lpVtbl -> get_COLOR_WRITEMASK(This,retVal) ) 

#define IWebGLRCConstants_get_UNPACK_ALIGNMENT(This,retVal)	\
    ( (This)->lpVtbl -> get_UNPACK_ALIGNMENT(This,retVal) ) 

#define IWebGLRCConstants_get_PACK_ALIGNMENT(This,retVal)	\
    ( (This)->lpVtbl -> get_PACK_ALIGNMENT(This,retVal) ) 

#define IWebGLRCConstants_get_MAX_TEXTURE_SIZE(This,retVal)	\
    ( (This)->lpVtbl -> get_MAX_TEXTURE_SIZE(This,retVal) ) 

#define IWebGLRCConstants_get_MAX_VIEWPORT_DIMS(This,retVal)	\
    ( (This)->lpVtbl -> get_MAX_VIEWPORT_DIMS(This,retVal) ) 

#define IWebGLRCConstants_get_SUBPIXEL_BITS(This,retVal)	\
    ( (This)->lpVtbl -> get_SUBPIXEL_BITS(This,retVal) ) 

#define IWebGLRCConstants_get_RED_BITS(This,retVal)	\
    ( (This)->lpVtbl -> get_RED_BITS(This,retVal) ) 

#define IWebGLRCConstants_get_GREEN_BITS(This,retVal)	\
    ( (This)->lpVtbl -> get_GREEN_BITS(This,retVal) ) 

#define IWebGLRCConstants_get_BLUE_BITS(This,retVal)	\
    ( (This)->lpVtbl -> get_BLUE_BITS(This,retVal) ) 

#define IWebGLRCConstants_get_ALPHA_BITS(This,retVal)	\
    ( (This)->lpVtbl -> get_ALPHA_BITS(This,retVal) ) 

#define IWebGLRCConstants_get_DEPTH_BITS(This,retVal)	\
    ( (This)->lpVtbl -> get_DEPTH_BITS(This,retVal) ) 

#define IWebGLRCConstants_get_STENCIL_BITS(This,retVal)	\
    ( (This)->lpVtbl -> get_STENCIL_BITS(This,retVal) ) 

#define IWebGLRCConstants_get_POLYGON_OFFSET_UNITS(This,retVal)	\
    ( (This)->lpVtbl -> get_POLYGON_OFFSET_UNITS(This,retVal) ) 

#define IWebGLRCConstants_get_POLYGON_OFFSET_FACTOR(This,retVal)	\
    ( (This)->lpVtbl -> get_POLYGON_OFFSET_FACTOR(This,retVal) ) 

#define IWebGLRCConstants_get_TEXTURE_BINDING_2D(This,retVal)	\
    ( (This)->lpVtbl -> get_TEXTURE_BINDING_2D(This,retVal) ) 

#define IWebGLRCConstants_get_SAMPLE_BUFFERS(This,retVal)	\
    ( (This)->lpVtbl -> get_SAMPLE_BUFFERS(This,retVal) ) 

#define IWebGLRCConstants_get_SAMPLES(This,retVal)	\
    ( (This)->lpVtbl -> get_SAMPLES(This,retVal) ) 

#define IWebGLRCConstants_get_SAMPLE_COVERAGE_VALUE(This,retVal)	\
    ( (This)->lpVtbl -> get_SAMPLE_COVERAGE_VALUE(This,retVal) ) 

#define IWebGLRCConstants_get_SAMPLE_COVERAGE_INVERT(This,retVal)	\
    ( (This)->lpVtbl -> get_SAMPLE_COVERAGE_INVERT(This,retVal) ) 

#define IWebGLRCConstants_get_COMPRESSED_TEXTURE_FORMATS(This,retVal)	\
    ( (This)->lpVtbl -> get_COMPRESSED_TEXTURE_FORMATS(This,retVal) ) 

#define IWebGLRCConstants_get_DONT_CARE(This,retVal)	\
    ( (This)->lpVtbl -> get_DONT_CARE(This,retVal) ) 

#define IWebGLRCConstants_get_FASTEST(This,retVal)	\
    ( (This)->lpVtbl -> get_FASTEST(This,retVal) ) 

#define IWebGLRCConstants_get_NICEST(This,retVal)	\
    ( (This)->lpVtbl -> get_NICEST(This,retVal) ) 

#define IWebGLRCConstants_get_GENERATE_MIPMAP_HINT(This,retVal)	\
    ( (This)->lpVtbl -> get_GENERATE_MIPMAP_HINT(This,retVal) ) 

#define IWebGLRCConstants_get_BYTE(This,retVal)	\
    ( (This)->lpVtbl -> get_BYTE(This,retVal) ) 

#define IWebGLRCConstants_get_UNSIGNED_BYTE(This,retVal)	\
    ( (This)->lpVtbl -> get_UNSIGNED_BYTE(This,retVal) ) 

#define IWebGLRCConstants_get_SHORT(This,retVal)	\
    ( (This)->lpVtbl -> get_SHORT(This,retVal) ) 

#define IWebGLRCConstants_get_UNSIGNED_SHORT(This,retVal)	\
    ( (This)->lpVtbl -> get_UNSIGNED_SHORT(This,retVal) ) 

#define IWebGLRCConstants_get_INT(This,retVal)	\
    ( (This)->lpVtbl -> get_INT(This,retVal) ) 

#define IWebGLRCConstants_get_UNSIGNED_INT(This,retVal)	\
    ( (This)->lpVtbl -> get_UNSIGNED_INT(This,retVal) ) 

#define IWebGLRCConstants_get_FLOAT(This,retVal)	\
    ( (This)->lpVtbl -> get_FLOAT(This,retVal) ) 

#define IWebGLRCConstants_get_DEPTH_COMPONENT(This,retVal)	\
    ( (This)->lpVtbl -> get_DEPTH_COMPONENT(This,retVal) ) 

#define IWebGLRCConstants_get_ALPHA(This,retVal)	\
    ( (This)->lpVtbl -> get_ALPHA(This,retVal) ) 

#define IWebGLRCConstants_get_RGB(This,retVal)	\
    ( (This)->lpVtbl -> get_RGB(This,retVal) ) 

#define IWebGLRCConstants_get_RGBA(This,retVal)	\
    ( (This)->lpVtbl -> get_RGBA(This,retVal) ) 

#define IWebGLRCConstants_get_LUMINANCE(This,retVal)	\
    ( (This)->lpVtbl -> get_LUMINANCE(This,retVal) ) 

#define IWebGLRCConstants_get_LUMINANCE_ALPHA(This,retVal)	\
    ( (This)->lpVtbl -> get_LUMINANCE_ALPHA(This,retVal) ) 

#define IWebGLRCConstants_get_UNSIGNED_SHORT_4_4_4_4(This,retVal)	\
    ( (This)->lpVtbl -> get_UNSIGNED_SHORT_4_4_4_4(This,retVal) ) 

#define IWebGLRCConstants_get_UNSIGNED_SHORT_5_5_5_1(This,retVal)	\
    ( (This)->lpVtbl -> get_UNSIGNED_SHORT_5_5_5_1(This,retVal) ) 

#define IWebGLRCConstants_get_UNSIGNED_SHORT_5_6_5(This,retVal)	\
    ( (This)->lpVtbl -> get_UNSIGNED_SHORT_5_6_5(This,retVal) ) 

#define IWebGLRCConstants_get_FRAGMENT_SHADER(This,retVal)	\
    ( (This)->lpVtbl -> get_FRAGMENT_SHADER(This,retVal) ) 

#define IWebGLRCConstants_get_VERTEX_SHADER(This,retVal)	\
    ( (This)->lpVtbl -> get_VERTEX_SHADER(This,retVal) ) 

#define IWebGLRCConstants_get_MAX_VERTEX_ATTRIBS(This,retVal)	\
    ( (This)->lpVtbl -> get_MAX_VERTEX_ATTRIBS(This,retVal) ) 

#define IWebGLRCConstants_get_MAX_VERTEX_UNIFORM_VECTORS(This,retVal)	\
    ( (This)->lpVtbl -> get_MAX_VERTEX_UNIFORM_VECTORS(This,retVal) ) 

#define IWebGLRCConstants_get_MAX_VARYING_VECTORS(This,retVal)	\
    ( (This)->lpVtbl -> get_MAX_VARYING_VECTORS(This,retVal) ) 

#define IWebGLRCConstants_get_MAX_COMBINED_TEXTURE_IMAGE_UNITS(This,retVal)	\
    ( (This)->lpVtbl -> get_MAX_COMBINED_TEXTURE_IMAGE_UNITS(This,retVal) ) 

#define IWebGLRCConstants_get_MAX_VERTEX_TEXTURE_IMAGE_UNITS(This,retVal)	\
    ( (This)->lpVtbl -> get_MAX_VERTEX_TEXTURE_IMAGE_UNITS(This,retVal) ) 

#define IWebGLRCConstants_get_MAX_TEXTURE_IMAGE_UNITS(This,retVal)	\
    ( (This)->lpVtbl -> get_MAX_TEXTURE_IMAGE_UNITS(This,retVal) ) 

#define IWebGLRCConstants_get_MAX_FRAGMENT_UNIFORM_VECTORS(This,retVal)	\
    ( (This)->lpVtbl -> get_MAX_FRAGMENT_UNIFORM_VECTORS(This,retVal) ) 

#define IWebGLRCConstants_get_SHADER_TYPE(This,retVal)	\
    ( (This)->lpVtbl -> get_SHADER_TYPE(This,retVal) ) 

#define IWebGLRCConstants_get_DELETE_STATUS(This,retVal)	\
    ( (This)->lpVtbl -> get_DELETE_STATUS(This,retVal) ) 

#define IWebGLRCConstants_get_LINK_STATUS(This,retVal)	\
    ( (This)->lpVtbl -> get_LINK_STATUS(This,retVal) ) 

#define IWebGLRCConstants_get_VALIDATE_STATUS(This,retVal)	\
    ( (This)->lpVtbl -> get_VALIDATE_STATUS(This,retVal) ) 

#define IWebGLRCConstants_get_ATTACHED_SHADERS(This,retVal)	\
    ( (This)->lpVtbl -> get_ATTACHED_SHADERS(This,retVal) ) 

#define IWebGLRCConstants_get_ACTIVE_UNIFORMS(This,retVal)	\
    ( (This)->lpVtbl -> get_ACTIVE_UNIFORMS(This,retVal) ) 

#define IWebGLRCConstants_get_ACTIVE_ATTRIBUTES(This,retVal)	\
    ( (This)->lpVtbl -> get_ACTIVE_ATTRIBUTES(This,retVal) ) 

#define IWebGLRCConstants_get_SHADING_LANGUAGE_VERSION(This,retVal)	\
    ( (This)->lpVtbl -> get_SHADING_LANGUAGE_VERSION(This,retVal) ) 

#define IWebGLRCConstants_get_CURRENT_PROGRAM(This,retVal)	\
    ( (This)->lpVtbl -> get_CURRENT_PROGRAM(This,retVal) ) 

#define IWebGLRCConstants_get_NEVER(This,retVal)	\
    ( (This)->lpVtbl -> get_NEVER(This,retVal) ) 

#define IWebGLRCConstants_get_LESS(This,retVal)	\
    ( (This)->lpVtbl -> get_LESS(This,retVal) ) 

#define IWebGLRCConstants_get_EQUAL(This,retVal)	\
    ( (This)->lpVtbl -> get_EQUAL(This,retVal) ) 

#define IWebGLRCConstants_get_LEQUAL(This,retVal)	\
    ( (This)->lpVtbl -> get_LEQUAL(This,retVal) ) 

#define IWebGLRCConstants_get_GREATER(This,retVal)	\
    ( (This)->lpVtbl -> get_GREATER(This,retVal) ) 

#define IWebGLRCConstants_get_NOTEQUAL(This,retVal)	\
    ( (This)->lpVtbl -> get_NOTEQUAL(This,retVal) ) 

#define IWebGLRCConstants_get_GEQUAL(This,retVal)	\
    ( (This)->lpVtbl -> get_GEQUAL(This,retVal) ) 

#define IWebGLRCConstants_get_ALWAYS(This,retVal)	\
    ( (This)->lpVtbl -> get_ALWAYS(This,retVal) ) 

#define IWebGLRCConstants_get_KEEP(This,retVal)	\
    ( (This)->lpVtbl -> get_KEEP(This,retVal) ) 

#define IWebGLRCConstants_get_REPLACE(This,retVal)	\
    ( (This)->lpVtbl -> get_REPLACE(This,retVal) ) 

#define IWebGLRCConstants_get_INCR(This,retVal)	\
    ( (This)->lpVtbl -> get_INCR(This,retVal) ) 

#define IWebGLRCConstants_get_DECR(This,retVal)	\
    ( (This)->lpVtbl -> get_DECR(This,retVal) ) 

#define IWebGLRCConstants_get_INVERT(This,retVal)	\
    ( (This)->lpVtbl -> get_INVERT(This,retVal) ) 

#define IWebGLRCConstants_get_INCR_WRAP(This,retVal)	\
    ( (This)->lpVtbl -> get_INCR_WRAP(This,retVal) ) 

#define IWebGLRCConstants_get_DECR_WRAP(This,retVal)	\
    ( (This)->lpVtbl -> get_DECR_WRAP(This,retVal) ) 

#define IWebGLRCConstants_get_VENDOR(This,retVal)	\
    ( (This)->lpVtbl -> get_VENDOR(This,retVal) ) 

#define IWebGLRCConstants_get_RENDERER(This,retVal)	\
    ( (This)->lpVtbl -> get_RENDERER(This,retVal) ) 

#define IWebGLRCConstants_get_VERSION(This,retVal)	\
    ( (This)->lpVtbl -> get_VERSION(This,retVal) ) 

#define IWebGLRCConstants_get_NEAREST(This,retVal)	\
    ( (This)->lpVtbl -> get_NEAREST(This,retVal) ) 

#define IWebGLRCConstants_get_LINEAR(This,retVal)	\
    ( (This)->lpVtbl -> get_LINEAR(This,retVal) ) 

#define IWebGLRCConstants_get_NEAREST_MIPMAP_NEAREST(This,retVal)	\
    ( (This)->lpVtbl -> get_NEAREST_MIPMAP_NEAREST(This,retVal) ) 

#define IWebGLRCConstants_get_LINEAR_MIPMAP_NEAREST(This,retVal)	\
    ( (This)->lpVtbl -> get_LINEAR_MIPMAP_NEAREST(This,retVal) ) 

#define IWebGLRCConstants_get_NEAREST_MIPMAP_LINEAR(This,retVal)	\
    ( (This)->lpVtbl -> get_NEAREST_MIPMAP_LINEAR(This,retVal) ) 

#define IWebGLRCConstants_get_LINEAR_MIPMAP_LINEAR(This,retVal)	\
    ( (This)->lpVtbl -> get_LINEAR_MIPMAP_LINEAR(This,retVal) ) 

#define IWebGLRCConstants_get_TEXTURE_MAG_FILTER(This,retVal)	\
    ( (This)->lpVtbl -> get_TEXTURE_MAG_FILTER(This,retVal) ) 

#define IWebGLRCConstants_get_TEXTURE_MIN_FILTER(This,retVal)	\
    ( (This)->lpVtbl -> get_TEXTURE_MIN_FILTER(This,retVal) ) 

#define IWebGLRCConstants_get_TEXTURE_WRAP_S(This,retVal)	\
    ( (This)->lpVtbl -> get_TEXTURE_WRAP_S(This,retVal) ) 

#define IWebGLRCConstants_get_TEXTURE_WRAP_T(This,retVal)	\
    ( (This)->lpVtbl -> get_TEXTURE_WRAP_T(This,retVal) ) 

#define IWebGLRCConstants_get_TEXTURE_2D(This,retVal)	\
    ( (This)->lpVtbl -> get_TEXTURE_2D(This,retVal) ) 

#define IWebGLRCConstants_get_TEXTURE(This,retVal)	\
    ( (This)->lpVtbl -> get_TEXTURE(This,retVal) ) 

#define IWebGLRCConstants_get_TEXTURE_CUBE_MAP(This,retVal)	\
    ( (This)->lpVtbl -> get_TEXTURE_CUBE_MAP(This,retVal) ) 

#define IWebGLRCConstants_get_TEXTURE_BINDING_CUBE_MAP(This,retVal)	\
    ( (This)->lpVtbl -> get_TEXTURE_BINDING_CUBE_MAP(This,retVal) ) 

#define IWebGLRCConstants_get_TEXTURE_CUBE_MAP_POSITIVE_X(This,retVal)	\
    ( (This)->lpVtbl -> get_TEXTURE_CUBE_MAP_POSITIVE_X(This,retVal) ) 

#define IWebGLRCConstants_get_TEXTURE_CUBE_MAP_NEGATIVE_X(This,retVal)	\
    ( (This)->lpVtbl -> get_TEXTURE_CUBE_MAP_NEGATIVE_X(This,retVal) ) 

#define IWebGLRCConstants_get_TEXTURE_CUBE_MAP_POSITIVE_Y(This,retVal)	\
    ( (This)->lpVtbl -> get_TEXTURE_CUBE_MAP_POSITIVE_Y(This,retVal) ) 

#define IWebGLRCConstants_get_TEXTURE_CUBE_MAP_NEGATIVE_Y(This,retVal)	\
    ( (This)->lpVtbl -> get_TEXTURE_CUBE_MAP_NEGATIVE_Y(This,retVal) ) 

#define IWebGLRCConstants_get_TEXTURE_CUBE_MAP_POSITIVE_Z(This,retVal)	\
    ( (This)->lpVtbl -> get_TEXTURE_CUBE_MAP_POSITIVE_Z(This,retVal) ) 

#define IWebGLRCConstants_get_TEXTURE_CUBE_MAP_NEGATIVE_Z(This,retVal)	\
    ( (This)->lpVtbl -> get_TEXTURE_CUBE_MAP_NEGATIVE_Z(This,retVal) ) 

#define IWebGLRCConstants_get_MAX_CUBE_MAP_TEXTURE_SIZE(This,retVal)	\
    ( (This)->lpVtbl -> get_MAX_CUBE_MAP_TEXTURE_SIZE(This,retVal) ) 

#define IWebGLRCConstants_get_TEXTURE0(This,retVal)	\
    ( (This)->lpVtbl -> get_TEXTURE0(This,retVal) ) 

#define IWebGLRCConstants_get_TEXTURE1(This,retVal)	\
    ( (This)->lpVtbl -> get_TEXTURE1(This,retVal) ) 

#define IWebGLRCConstants_get_TEXTURE2(This,retVal)	\
    ( (This)->lpVtbl -> get_TEXTURE2(This,retVal) ) 

#define IWebGLRCConstants_get_TEXTURE3(This,retVal)	\
    ( (This)->lpVtbl -> get_TEXTURE3(This,retVal) ) 

#define IWebGLRCConstants_get_TEXTURE4(This,retVal)	\
    ( (This)->lpVtbl -> get_TEXTURE4(This,retVal) ) 

#define IWebGLRCConstants_get_TEXTURE5(This,retVal)	\
    ( (This)->lpVtbl -> get_TEXTURE5(This,retVal) ) 

#define IWebGLRCConstants_get_TEXTURE6(This,retVal)	\
    ( (This)->lpVtbl -> get_TEXTURE6(This,retVal) ) 

#define IWebGLRCConstants_get_TEXTURE7(This,retVal)	\
    ( (This)->lpVtbl -> get_TEXTURE7(This,retVal) ) 

#define IWebGLRCConstants_get_TEXTURE8(This,retVal)	\
    ( (This)->lpVtbl -> get_TEXTURE8(This,retVal) ) 

#define IWebGLRCConstants_get_TEXTURE9(This,retVal)	\
    ( (This)->lpVtbl -> get_TEXTURE9(This,retVal) ) 

#define IWebGLRCConstants_get_TEXTURE10(This,retVal)	\
    ( (This)->lpVtbl -> get_TEXTURE10(This,retVal) ) 

#define IWebGLRCConstants_get_TEXTURE11(This,retVal)	\
    ( (This)->lpVtbl -> get_TEXTURE11(This,retVal) ) 

#define IWebGLRCConstants_get_TEXTURE12(This,retVal)	\
    ( (This)->lpVtbl -> get_TEXTURE12(This,retVal) ) 

#define IWebGLRCConstants_get_TEXTURE13(This,retVal)	\
    ( (This)->lpVtbl -> get_TEXTURE13(This,retVal) ) 

#define IWebGLRCConstants_get_TEXTURE14(This,retVal)	\
    ( (This)->lpVtbl -> get_TEXTURE14(This,retVal) ) 

#define IWebGLRCConstants_get_TEXTURE15(This,retVal)	\
    ( (This)->lpVtbl -> get_TEXTURE15(This,retVal) ) 

#define IWebGLRCConstants_get_TEXTURE16(This,retVal)	\
    ( (This)->lpVtbl -> get_TEXTURE16(This,retVal) ) 

#define IWebGLRCConstants_get_TEXTURE17(This,retVal)	\
    ( (This)->lpVtbl -> get_TEXTURE17(This,retVal) ) 

#define IWebGLRCConstants_get_TEXTURE18(This,retVal)	\
    ( (This)->lpVtbl -> get_TEXTURE18(This,retVal) ) 

#define IWebGLRCConstants_get_TEXTURE19(This,retVal)	\
    ( (This)->lpVtbl -> get_TEXTURE19(This,retVal) ) 

#define IWebGLRCConstants_get_TEXTURE20(This,retVal)	\
    ( (This)->lpVtbl -> get_TEXTURE20(This,retVal) ) 

#define IWebGLRCConstants_get_TEXTURE21(This,retVal)	\
    ( (This)->lpVtbl -> get_TEXTURE21(This,retVal) ) 

#define IWebGLRCConstants_get_TEXTURE22(This,retVal)	\
    ( (This)->lpVtbl -> get_TEXTURE22(This,retVal) ) 

#define IWebGLRCConstants_get_TEXTURE23(This,retVal)	\
    ( (This)->lpVtbl -> get_TEXTURE23(This,retVal) ) 

#define IWebGLRCConstants_get_TEXTURE24(This,retVal)	\
    ( (This)->lpVtbl -> get_TEXTURE24(This,retVal) ) 

#define IWebGLRCConstants_get_TEXTURE25(This,retVal)	\
    ( (This)->lpVtbl -> get_TEXTURE25(This,retVal) ) 

#define IWebGLRCConstants_get_TEXTURE26(This,retVal)	\
    ( (This)->lpVtbl -> get_TEXTURE26(This,retVal) ) 

#define IWebGLRCConstants_get_TEXTURE27(This,retVal)	\
    ( (This)->lpVtbl -> get_TEXTURE27(This,retVal) ) 

#define IWebGLRCConstants_get_TEXTURE28(This,retVal)	\
    ( (This)->lpVtbl -> get_TEXTURE28(This,retVal) ) 

#define IWebGLRCConstants_get_TEXTURE29(This,retVal)	\
    ( (This)->lpVtbl -> get_TEXTURE29(This,retVal) ) 

#define IWebGLRCConstants_get_TEXTURE30(This,retVal)	\
    ( (This)->lpVtbl -> get_TEXTURE30(This,retVal) ) 

#define IWebGLRCConstants_get_TEXTURE31(This,retVal)	\
    ( (This)->lpVtbl -> get_TEXTURE31(This,retVal) ) 

#define IWebGLRCConstants_get_ACTIVE_TEXTURE(This,retVal)	\
    ( (This)->lpVtbl -> get_ACTIVE_TEXTURE(This,retVal) ) 

#define IWebGLRCConstants_get_REPEAT(This,retVal)	\
    ( (This)->lpVtbl -> get_REPEAT(This,retVal) ) 

#define IWebGLRCConstants_get_CLAMP_TO_EDGE(This,retVal)	\
    ( (This)->lpVtbl -> get_CLAMP_TO_EDGE(This,retVal) ) 

#define IWebGLRCConstants_get_MIRRORED_REPEAT(This,retVal)	\
    ( (This)->lpVtbl -> get_MIRRORED_REPEAT(This,retVal) ) 

#define IWebGLRCConstants_get_FLOAT_VEC2(This,retVal)	\
    ( (This)->lpVtbl -> get_FLOAT_VEC2(This,retVal) ) 

#define IWebGLRCConstants_get_FLOAT_VEC3(This,retVal)	\
    ( (This)->lpVtbl -> get_FLOAT_VEC3(This,retVal) ) 

#define IWebGLRCConstants_get_FLOAT_VEC4(This,retVal)	\
    ( (This)->lpVtbl -> get_FLOAT_VEC4(This,retVal) ) 

#define IWebGLRCConstants_get_INT_VEC2(This,retVal)	\
    ( (This)->lpVtbl -> get_INT_VEC2(This,retVal) ) 

#define IWebGLRCConstants_get_INT_VEC3(This,retVal)	\
    ( (This)->lpVtbl -> get_INT_VEC3(This,retVal) ) 

#define IWebGLRCConstants_get_INT_VEC4(This,retVal)	\
    ( (This)->lpVtbl -> get_INT_VEC4(This,retVal) ) 

#define IWebGLRCConstants_get_BOOL(This,retVal)	\
    ( (This)->lpVtbl -> get_BOOL(This,retVal) ) 

#define IWebGLRCConstants_get_BOOL_VEC2(This,retVal)	\
    ( (This)->lpVtbl -> get_BOOL_VEC2(This,retVal) ) 

#define IWebGLRCConstants_get_BOOL_VEC3(This,retVal)	\
    ( (This)->lpVtbl -> get_BOOL_VEC3(This,retVal) ) 

#define IWebGLRCConstants_get_BOOL_VEC4(This,retVal)	\
    ( (This)->lpVtbl -> get_BOOL_VEC4(This,retVal) ) 

#define IWebGLRCConstants_get_FLOAT_MAT2(This,retVal)	\
    ( (This)->lpVtbl -> get_FLOAT_MAT2(This,retVal) ) 

#define IWebGLRCConstants_get_FLOAT_MAT3(This,retVal)	\
    ( (This)->lpVtbl -> get_FLOAT_MAT3(This,retVal) ) 

#define IWebGLRCConstants_get_FLOAT_MAT4(This,retVal)	\
    ( (This)->lpVtbl -> get_FLOAT_MAT4(This,retVal) ) 

#define IWebGLRCConstants_get_SAMPLER_2D(This,retVal)	\
    ( (This)->lpVtbl -> get_SAMPLER_2D(This,retVal) ) 

#define IWebGLRCConstants_get_SAMPLER_CUBE(This,retVal)	\
    ( (This)->lpVtbl -> get_SAMPLER_CUBE(This,retVal) ) 

#define IWebGLRCConstants_get_VERTEX_ATTRIB_ARRAY_ENABLED(This,retVal)	\
    ( (This)->lpVtbl -> get_VERTEX_ATTRIB_ARRAY_ENABLED(This,retVal) ) 

#define IWebGLRCConstants_get_VERTEX_ATTRIB_ARRAY_SIZE(This,retVal)	\
    ( (This)->lpVtbl -> get_VERTEX_ATTRIB_ARRAY_SIZE(This,retVal) ) 

#define IWebGLRCConstants_get_VERTEX_ATTRIB_ARRAY_STRIDE(This,retVal)	\
    ( (This)->lpVtbl -> get_VERTEX_ATTRIB_ARRAY_STRIDE(This,retVal) ) 

#define IWebGLRCConstants_get_VERTEX_ATTRIB_ARRAY_TYPE(This,retVal)	\
    ( (This)->lpVtbl -> get_VERTEX_ATTRIB_ARRAY_TYPE(This,retVal) ) 

#define IWebGLRCConstants_get_VERTEX_ATTRIB_ARRAY_NORMALIZED(This,retVal)	\
    ( (This)->lpVtbl -> get_VERTEX_ATTRIB_ARRAY_NORMALIZED(This,retVal) ) 

#define IWebGLRCConstants_get_VERTEX_ATTRIB_ARRAY_POINTER(This,retVal)	\
    ( (This)->lpVtbl -> get_VERTEX_ATTRIB_ARRAY_POINTER(This,retVal) ) 

#define IWebGLRCConstants_get_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING(This,retVal)	\
    ( (This)->lpVtbl -> get_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING(This,retVal) ) 

#define IWebGLRCConstants_get_COMPILE_STATUS(This,retVal)	\
    ( (This)->lpVtbl -> get_COMPILE_STATUS(This,retVal) ) 

#define IWebGLRCConstants_get_LOW_FLOAT(This,retVal)	\
    ( (This)->lpVtbl -> get_LOW_FLOAT(This,retVal) ) 

#define IWebGLRCConstants_get_MEDIUM_FLOAT(This,retVal)	\
    ( (This)->lpVtbl -> get_MEDIUM_FLOAT(This,retVal) ) 

#define IWebGLRCConstants_get_HIGH_FLOAT(This,retVal)	\
    ( (This)->lpVtbl -> get_HIGH_FLOAT(This,retVal) ) 

#define IWebGLRCConstants_get_LOW_INT(This,retVal)	\
    ( (This)->lpVtbl -> get_LOW_INT(This,retVal) ) 

#define IWebGLRCConstants_get_MEDIUM_INT(This,retVal)	\
    ( (This)->lpVtbl -> get_MEDIUM_INT(This,retVal) ) 

#define IWebGLRCConstants_get_HIGH_INT(This,retVal)	\
    ( (This)->lpVtbl -> get_HIGH_INT(This,retVal) ) 

#define IWebGLRCConstants_get_FRAMEBUFFER(This,retVal)	\
    ( (This)->lpVtbl -> get_FRAMEBUFFER(This,retVal) ) 

#define IWebGLRCConstants_get_RENDERBUFFER(This,retVal)	\
    ( (This)->lpVtbl -> get_RENDERBUFFER(This,retVal) ) 

#define IWebGLRCConstants_get_RGBA4(This,retVal)	\
    ( (This)->lpVtbl -> get_RGBA4(This,retVal) ) 

#define IWebGLRCConstants_get_RGB5_A1(This,retVal)	\
    ( (This)->lpVtbl -> get_RGB5_A1(This,retVal) ) 

#define IWebGLRCConstants_get_RGB565(This,retVal)	\
    ( (This)->lpVtbl -> get_RGB565(This,retVal) ) 

#define IWebGLRCConstants_get_DEPTH_COMPONENT16(This,retVal)	\
    ( (This)->lpVtbl -> get_DEPTH_COMPONENT16(This,retVal) ) 

#define IWebGLRCConstants_get_STENCIL_INDEX(This,retVal)	\
    ( (This)->lpVtbl -> get_STENCIL_INDEX(This,retVal) ) 

#define IWebGLRCConstants_get_STENCIL_INDEX8(This,retVal)	\
    ( (This)->lpVtbl -> get_STENCIL_INDEX8(This,retVal) ) 

#define IWebGLRCConstants_get_DEPTH_STENCIL(This,retVal)	\
    ( (This)->lpVtbl -> get_DEPTH_STENCIL(This,retVal) ) 

#define IWebGLRCConstants_get_RENDERBUFFER_WIDTH(This,retVal)	\
    ( (This)->lpVtbl -> get_RENDERBUFFER_WIDTH(This,retVal) ) 

#define IWebGLRCConstants_get_RENDERBUFFER_HEIGHT(This,retVal)	\
    ( (This)->lpVtbl -> get_RENDERBUFFER_HEIGHT(This,retVal) ) 

#define IWebGLRCConstants_get_RENDERBUFFER_INTERNAL_FORMAT(This,retVal)	\
    ( (This)->lpVtbl -> get_RENDERBUFFER_INTERNAL_FORMAT(This,retVal) ) 

#define IWebGLRCConstants_get_RENDERBUFFER_RED_SIZE(This,retVal)	\
    ( (This)->lpVtbl -> get_RENDERBUFFER_RED_SIZE(This,retVal) ) 

#define IWebGLRCConstants_get_RENDERBUFFER_GREEN_SIZE(This,retVal)	\
    ( (This)->lpVtbl -> get_RENDERBUFFER_GREEN_SIZE(This,retVal) ) 

#define IWebGLRCConstants_get_RENDERBUFFER_BLUE_SIZE(This,retVal)	\
    ( (This)->lpVtbl -> get_RENDERBUFFER_BLUE_SIZE(This,retVal) ) 

#define IWebGLRCConstants_get_RENDERBUFFER_ALPHA_SIZE(This,retVal)	\
    ( (This)->lpVtbl -> get_RENDERBUFFER_ALPHA_SIZE(This,retVal) ) 

#define IWebGLRCConstants_get_RENDERBUFFER_DEPTH_SIZE(This,retVal)	\
    ( (This)->lpVtbl -> get_RENDERBUFFER_DEPTH_SIZE(This,retVal) ) 

#define IWebGLRCConstants_get_RENDERBUFFER_STENCIL_SIZE(This,retVal)	\
    ( (This)->lpVtbl -> get_RENDERBUFFER_STENCIL_SIZE(This,retVal) ) 

#define IWebGLRCConstants_get_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE(This,retVal)	\
    ( (This)->lpVtbl -> get_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE(This,retVal) ) 

#define IWebGLRCConstants_get_FRAMEBUFFER_ATTACHMENT_OBJECT_NAME(This,retVal)	\
    ( (This)->lpVtbl -> get_FRAMEBUFFER_ATTACHMENT_OBJECT_NAME(This,retVal) ) 

#define IWebGLRCConstants_get_FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL(This,retVal)	\
    ( (This)->lpVtbl -> get_FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL(This,retVal) ) 

#define IWebGLRCConstants_get_FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE(This,retVal)	\
    ( (This)->lpVtbl -> get_FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE(This,retVal) ) 

#define IWebGLRCConstants_get_COLOR_ATTACHMENT0(This,retVal)	\
    ( (This)->lpVtbl -> get_COLOR_ATTACHMENT0(This,retVal) ) 

#define IWebGLRCConstants_get_DEPTH_ATTACHMENT(This,retVal)	\
    ( (This)->lpVtbl -> get_DEPTH_ATTACHMENT(This,retVal) ) 

#define IWebGLRCConstants_get_STENCIL_ATTACHMENT(This,retVal)	\
    ( (This)->lpVtbl -> get_STENCIL_ATTACHMENT(This,retVal) ) 

#define IWebGLRCConstants_get_DEPTH_STENCIL_ATTACHMENT(This,retVal)	\
    ( (This)->lpVtbl -> get_DEPTH_STENCIL_ATTACHMENT(This,retVal) ) 

#define IWebGLRCConstants_get_NONE(This,retVal)	\
    ( (This)->lpVtbl -> get_NONE(This,retVal) ) 

#define IWebGLRCConstants_get_FRAMEBUFFER_COMPLETE(This,retVal)	\
    ( (This)->lpVtbl -> get_FRAMEBUFFER_COMPLETE(This,retVal) ) 

#define IWebGLRCConstants_get_FRAMEBUFFER_INCOMPLETE_ATTACHMENT(This,retVal)	\
    ( (This)->lpVtbl -> get_FRAMEBUFFER_INCOMPLETE_ATTACHMENT(This,retVal) ) 

#define IWebGLRCConstants_get_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT(This,retVal)	\
    ( (This)->lpVtbl -> get_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT(This,retVal) ) 

#define IWebGLRCConstants_get_FRAMEBUFFER_INCOMPLETE_DIMENSIONS(This,retVal)	\
    ( (This)->lpVtbl -> get_FRAMEBUFFER_INCOMPLETE_DIMENSIONS(This,retVal) ) 

#define IWebGLRCConstants_get_FRAMEBUFFER_UNSUPPORTED(This,retVal)	\
    ( (This)->lpVtbl -> get_FRAMEBUFFER_UNSUPPORTED(This,retVal) ) 

#define IWebGLRCConstants_get_FRAMEBUFFER_BINDING(This,retVal)	\
    ( (This)->lpVtbl -> get_FRAMEBUFFER_BINDING(This,retVal) ) 

#define IWebGLRCConstants_get_RENDERBUFFER_BINDING(This,retVal)	\
    ( (This)->lpVtbl -> get_RENDERBUFFER_BINDING(This,retVal) ) 

#define IWebGLRCConstants_get_MAX_RENDERBUFFER_SIZE(This,retVal)	\
    ( (This)->lpVtbl -> get_MAX_RENDERBUFFER_SIZE(This,retVal) ) 

#define IWebGLRCConstants_get_INVALID_FRAMEBUFFER_OPERATION(This,retVal)	\
    ( (This)->lpVtbl -> get_INVALID_FRAMEBUFFER_OPERATION(This,retVal) ) 

#define IWebGLRCConstants_get_UNPACK_FLIP_Y_WEBGL(This,retVal)	\
    ( (This)->lpVtbl -> get_UNPACK_FLIP_Y_WEBGL(This,retVal) ) 

#define IWebGLRCConstants_get_UNPACK_PREMULTIPLY_ALPHA_WEBGL(This,retVal)	\
    ( (This)->lpVtbl -> get_UNPACK_PREMULTIPLY_ALPHA_WEBGL(This,retVal) ) 

#define IWebGLRCConstants_get_CONTEXT_LOST_WEBGL(This,retVal)	\
    ( (This)->lpVtbl -> get_CONTEXT_LOST_WEBGL(This,retVal) ) 

#define IWebGLRCConstants_get_UNPACK_COLORSPACE_CONVERSION_WEBGL(This,retVal)	\
    ( (This)->lpVtbl -> get_UNPACK_COLORSPACE_CONVERSION_WEBGL(This,retVal) ) 

#define IWebGLRCConstants_get_BROWSER_DEFAULT_WEBGL(This,retVal)	\
    ( (This)->lpVtbl -> get_BROWSER_DEFAULT_WEBGL(This,retVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_INT_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_INT_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_UNSIGNED_INT_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_UNSIGNED_INT_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_FLOAT_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_FLOAT_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_DEPTH_COMPONENT_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_DEPTH_COMPONENT_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_ALPHA_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_ALPHA_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_RGB_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_RGB_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_RGBA_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_RGBA_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_LUMINANCE_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_LUMINANCE_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_LUMINANCE_ALPHA_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_LUMINANCE_ALPHA_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_UNSIGNED_SHORT_4_4_4_4_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_UNSIGNED_SHORT_4_4_4_4_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_UNSIGNED_SHORT_5_5_5_1_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_UNSIGNED_SHORT_5_5_5_1_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_UNSIGNED_SHORT_5_6_5_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_UNSIGNED_SHORT_5_6_5_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_FRAGMENT_SHADER_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_FRAGMENT_SHADER_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_VERTEX_SHADER_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_VERTEX_SHADER_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_MAX_VERTEX_ATTRIBS_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_MAX_VERTEX_ATTRIBS_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_MAX_VERTEX_UNIFORM_VECTORS_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_MAX_VERTEX_UNIFORM_VECTORS_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_MAX_VARYING_VECTORS_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_MAX_VARYING_VECTORS_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_MAX_COMBINED_TEXTURE_IMAGE_UNITS_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_MAX_COMBINED_TEXTURE_IMAGE_UNITS_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_MAX_VERTEX_TEXTURE_IMAGE_UNITS_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_MAX_VERTEX_TEXTURE_IMAGE_UNITS_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_MAX_TEXTURE_IMAGE_UNITS_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_MAX_TEXTURE_IMAGE_UNITS_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_MAX_FRAGMENT_UNIFORM_VECTORS_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_MAX_FRAGMENT_UNIFORM_VECTORS_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_SHADER_TYPE_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_SHADER_TYPE_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_DELETE_STATUS_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_DELETE_STATUS_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_LINK_STATUS_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_LINK_STATUS_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_VALIDATE_STATUS_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_VALIDATE_STATUS_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_ATTACHED_SHADERS_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_ATTACHED_SHADERS_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_ACTIVE_UNIFORMS_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_ACTIVE_UNIFORMS_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_ACTIVE_ATTRIBUTES_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_ACTIVE_ATTRIBUTES_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_SHADING_LANGUAGE_VERSION_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_SHADING_LANGUAGE_VERSION_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_CURRENT_PROGRAM_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_CURRENT_PROGRAM_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_NEVER_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_NEVER_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_LESS_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_LESS_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_EQUAL_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_EQUAL_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_LEQUAL_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_LEQUAL_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_GREATER_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_GREATER_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_NOTEQUAL_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_NOTEQUAL_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_GEQUAL_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_GEQUAL_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_ALWAYS_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_ALWAYS_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_KEEP_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_KEEP_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_REPLACE_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_REPLACE_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_INCR_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_INCR_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_DECR_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_DECR_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_INVERT_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_INVERT_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_INCR_WRAP_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_INCR_WRAP_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_DECR_WRAP_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_DECR_WRAP_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_VENDOR_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_VENDOR_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_RENDERER_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_RENDERER_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_VERSION_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_VERSION_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_NEAREST_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_NEAREST_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_LINEAR_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_LINEAR_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_NEAREST_MIPMAP_NEAREST_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_NEAREST_MIPMAP_NEAREST_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_LINEAR_MIPMAP_NEAREST_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_LINEAR_MIPMAP_NEAREST_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_NEAREST_MIPMAP_LINEAR_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_NEAREST_MIPMAP_LINEAR_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_LINEAR_MIPMAP_LINEAR_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_LINEAR_MIPMAP_LINEAR_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_TEXTURE_MAG_FILTER_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_TEXTURE_MAG_FILTER_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_TEXTURE_MIN_FILTER_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_TEXTURE_MIN_FILTER_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_TEXTURE_WRAP_S_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_TEXTURE_WRAP_S_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_TEXTURE_WRAP_T_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_TEXTURE_WRAP_T_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_TEXTURE_2D_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_TEXTURE_2D_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_TEXTURE_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_TEXTURE_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_TEXTURE_CUBE_MAP_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_TEXTURE_CUBE_MAP_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_TEXTURE_BINDING_CUBE_MAP_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_TEXTURE_BINDING_CUBE_MAP_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_TEXTURE_CUBE_MAP_POSITIVE_X_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_TEXTURE_CUBE_MAP_POSITIVE_X_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_TEXTURE_CUBE_MAP_NEGATIVE_X_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_TEXTURE_CUBE_MAP_NEGATIVE_X_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_TEXTURE_CUBE_MAP_POSITIVE_Y_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_TEXTURE_CUBE_MAP_POSITIVE_Y_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_TEXTURE_CUBE_MAP_NEGATIVE_Y_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_TEXTURE_CUBE_MAP_NEGATIVE_Y_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_TEXTURE_CUBE_MAP_POSITIVE_Z_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_TEXTURE_CUBE_MAP_POSITIVE_Z_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_TEXTURE_CUBE_MAP_NEGATIVE_Z_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_TEXTURE_CUBE_MAP_NEGATIVE_Z_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_MAX_CUBE_MAP_TEXTURE_SIZE_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_MAX_CUBE_MAP_TEXTURE_SIZE_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_TEXTURE0_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_TEXTURE0_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_TEXTURE1_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_TEXTURE1_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_TEXTURE2_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_TEXTURE2_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_TEXTURE3_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_TEXTURE3_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_TEXTURE4_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_TEXTURE4_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_TEXTURE5_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_TEXTURE5_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_TEXTURE6_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_TEXTURE6_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_TEXTURE7_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_TEXTURE7_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_TEXTURE8_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_TEXTURE8_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_TEXTURE9_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_TEXTURE9_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_TEXTURE10_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_TEXTURE10_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_TEXTURE11_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_TEXTURE11_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_TEXTURE12_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_TEXTURE12_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_TEXTURE13_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_TEXTURE13_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_TEXTURE14_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_TEXTURE14_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_TEXTURE15_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_TEXTURE15_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_TEXTURE16_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_TEXTURE16_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_TEXTURE17_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_TEXTURE17_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_TEXTURE18_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_TEXTURE18_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_TEXTURE19_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_TEXTURE19_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_TEXTURE20_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_TEXTURE20_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_TEXTURE21_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_TEXTURE21_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_TEXTURE22_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_TEXTURE22_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_TEXTURE23_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_TEXTURE23_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_TEXTURE24_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_TEXTURE24_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_TEXTURE25_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_TEXTURE25_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_TEXTURE26_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_TEXTURE26_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_TEXTURE27_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_TEXTURE27_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_TEXTURE28_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_TEXTURE28_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_TEXTURE29_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_TEXTURE29_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_TEXTURE30_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_TEXTURE30_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_TEXTURE31_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_TEXTURE31_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_ACTIVE_TEXTURE_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_ACTIVE_TEXTURE_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_REPEAT_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_REPEAT_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_CLAMP_TO_EDGE_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_CLAMP_TO_EDGE_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_MIRRORED_REPEAT_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_MIRRORED_REPEAT_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_FLOAT_VEC2_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_FLOAT_VEC2_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_FLOAT_VEC3_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_FLOAT_VEC3_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_FLOAT_VEC4_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_FLOAT_VEC4_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_INT_VEC2_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_INT_VEC2_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_INT_VEC3_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_INT_VEC3_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_INT_VEC4_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_INT_VEC4_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_BOOL_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_BOOL_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_BOOL_VEC2_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_BOOL_VEC2_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_BOOL_VEC3_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_BOOL_VEC3_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_BOOL_VEC4_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_BOOL_VEC4_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_FLOAT_MAT2_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_FLOAT_MAT2_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_FLOAT_MAT3_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_FLOAT_MAT3_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_FLOAT_MAT4_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_FLOAT_MAT4_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_SAMPLER_2D_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_SAMPLER_2D_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_SAMPLER_CUBE_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_SAMPLER_CUBE_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_VERTEX_ATTRIB_ARRAY_ENABLED_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_VERTEX_ATTRIB_ARRAY_ENABLED_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_VERTEX_ATTRIB_ARRAY_SIZE_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_VERTEX_ATTRIB_ARRAY_SIZE_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_VERTEX_ATTRIB_ARRAY_STRIDE_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_VERTEX_ATTRIB_ARRAY_STRIDE_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_VERTEX_ATTRIB_ARRAY_TYPE_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_VERTEX_ATTRIB_ARRAY_TYPE_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_VERTEX_ATTRIB_ARRAY_NORMALIZED_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_VERTEX_ATTRIB_ARRAY_NORMALIZED_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_VERTEX_ATTRIB_ARRAY_POINTER_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_VERTEX_ATTRIB_ARRAY_POINTER_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_COMPILE_STATUS_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_COMPILE_STATUS_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_LOW_FLOAT_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_LOW_FLOAT_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_MEDIUM_FLOAT_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_MEDIUM_FLOAT_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_HIGH_FLOAT_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_HIGH_FLOAT_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_LOW_INT_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_LOW_INT_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_MEDIUM_INT_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_MEDIUM_INT_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_HIGH_INT_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_HIGH_INT_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_FRAMEBUFFER_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_FRAMEBUFFER_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_RENDERBUFFER_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_RENDERBUFFER_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_RGBA4_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_RGBA4_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_RGB5_A1_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_RGB5_A1_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_RGB565_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_RGB565_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_DEPTH_COMPONENT16_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_DEPTH_COMPONENT16_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_STENCIL_INDEX_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_STENCIL_INDEX_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_STENCIL_INDEX8_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_STENCIL_INDEX8_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_DEPTH_STENCIL_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_DEPTH_STENCIL_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_RENDERBUFFER_WIDTH_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_RENDERBUFFER_WIDTH_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_RENDERBUFFER_HEIGHT_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_RENDERBUFFER_HEIGHT_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_RENDERBUFFER_INTERNAL_FORMAT_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_RENDERBUFFER_INTERNAL_FORMAT_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_RENDERBUFFER_RED_SIZE_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_RENDERBUFFER_RED_SIZE_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_RENDERBUFFER_GREEN_SIZE_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_RENDERBUFFER_GREEN_SIZE_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_RENDERBUFFER_BLUE_SIZE_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_RENDERBUFFER_BLUE_SIZE_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_RENDERBUFFER_ALPHA_SIZE_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_RENDERBUFFER_ALPHA_SIZE_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_RENDERBUFFER_DEPTH_SIZE_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_RENDERBUFFER_DEPTH_SIZE_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_RENDERBUFFER_STENCIL_SIZE_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_RENDERBUFFER_STENCIL_SIZE_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_FRAMEBUFFER_ATTACHMENT_OBJECT_NAME_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_FRAMEBUFFER_ATTACHMENT_OBJECT_NAME_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_COLOR_ATTACHMENT0_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_COLOR_ATTACHMENT0_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_DEPTH_ATTACHMENT_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_DEPTH_ATTACHMENT_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_STENCIL_ATTACHMENT_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_STENCIL_ATTACHMENT_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_DEPTH_STENCIL_ATTACHMENT_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_DEPTH_STENCIL_ATTACHMENT_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_NONE_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_NONE_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_FRAMEBUFFER_COMPLETE_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_FRAMEBUFFER_COMPLETE_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_FRAMEBUFFER_INCOMPLETE_ATTACHMENT_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_FRAMEBUFFER_INCOMPLETE_ATTACHMENT_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_FRAMEBUFFER_INCOMPLETE_DIMENSIONS_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_FRAMEBUFFER_INCOMPLETE_DIMENSIONS_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_FRAMEBUFFER_UNSUPPORTED_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_FRAMEBUFFER_UNSUPPORTED_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_FRAMEBUFFER_BINDING_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_FRAMEBUFFER_BINDING_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_RENDERBUFFER_BINDING_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_RENDERBUFFER_BINDING_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_MAX_RENDERBUFFER_SIZE_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_MAX_RENDERBUFFER_SIZE_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_INVALID_FRAMEBUFFER_OPERATION_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_INVALID_FRAMEBUFFER_OPERATION_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_UNPACK_FLIP_Y_WEBGL_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_UNPACK_FLIP_Y_WEBGL_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_UNPACK_PREMULTIPLY_ALPHA_WEBGL_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_UNPACK_PREMULTIPLY_ALPHA_WEBGL_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_CONTEXT_LOST_WEBGL_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_CONTEXT_LOST_WEBGL_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_UNPACK_COLORSPACE_CONVERSION_WEBGL_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_UNPACK_COLORSPACE_CONVERSION_WEBGL_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRCConstants_get_BROWSER_DEFAULT_WEBGL_Proxy( 
    IWebGLRCConstants * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRCConstants_get_BROWSER_DEFAULT_WEBGL_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IWebGLRCConstants_INTERFACE_DEFINED__ */


#ifndef __IWebGLRenderingContext_INTERFACE_DEFINED__
#define __IWebGLRenderingContext_INTERFACE_DEFINED__

/* interface IWebGLRenderingContext */
/* [unique][dual][uuid][object] */ 


EXTERN_C const IID IID_IWebGLRenderingContext;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4444FB36-946C-4ED8-B2EB-B3908D1E33AF")
    IWebGLRenderingContext : public IWebGLRCConstants
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_canvas( 
            /* [retval][out] */ IDispatch **retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_drawingBufferWidth( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_drawingBufferHeight( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE getContextAttributes( 
            /* [retval][out] */ IWebGLContextAttributes **retVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE isContextLost( 
            /* [retval][out] */ VARIANT *retVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE getSupportedExtensions( 
            /* [retval][out] */ IDispatch **retVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE getExtension( 
            /* [in] */ BSTR name,
            /* [retval][out] */ IDispatch **retVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE activeTexture( 
            /* [in] */ ULONG texture) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE attachShader( 
            /* [in] */ IWebGLProgram *program,
            /* [in] */ IWebGLShader *shader) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE bindAttribLocation( 
            /* [in] */ IWebGLProgram *program,
            /* [in] */ ULONG index,
            /* [in] */ BSTR name) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE bindBuffer( 
            /* [in] */ ULONG target,
            /* [in] */ IWebGLBuffer *buffer) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE bindFramebuffer( 
            /* [in] */ ULONG target,
            /* [in] */ IWebGLFramebuffer *framebuffer) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE bindRenderbuffer( 
            /* [in] */ ULONG target,
            /* [in] */ IWebGLRenderbuffer *renderbuffer) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE bindTexture( 
            /* [in] */ ULONG target,
            /* [in] */ IWebGLTexture *texture) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE blendColor( 
            /* [in] */ FLOAT red,
            /* [in] */ FLOAT green,
            /* [in] */ FLOAT blue,
            /* [in] */ FLOAT alpha) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE blendEquation( 
            /* [in] */ ULONG mode) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE blendEquationSeparate( 
            /* [in] */ ULONG modeRGB,
            /* [in] */ ULONG modeAlpha) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE blendFunc( 
            /* [in] */ ULONG sfactor,
            /* [in] */ ULONG dfactor) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE blendFuncSeparate( 
            /* [in] */ ULONG srcRGB,
            /* [in] */ ULONG dstRGB,
            /* [in] */ ULONG srcAlpha,
            /* [in] */ ULONG dstAlpha) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE bufferData( 
            /* [in] */ ULONG target,
            /* [in] */ VARIANT arg1,
            /* [in] */ VARIANT arg2) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE bufferSubData( 
            /* [in] */ ULONG target,
            /* [in] */ LONG offset,
            /* [in] */ IDispatch *data) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE checkFramebufferStatus( 
            /* [in] */ ULONG target,
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE clear( 
            /* [in] */ ULONG mask) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE clearColor( 
            /* [in] */ FLOAT red,
            /* [in] */ FLOAT green,
            /* [in] */ FLOAT blue,
            /* [in] */ FLOAT alpha) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE clearDepth( 
            /* [in] */ FLOAT depth) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE clearStencil( 
            /* [in] */ LONG s) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE colorMask( 
            /* [in] */ BOOL red,
            /* [in] */ BOOL green,
            /* [in] */ BOOL blue,
            /* [in] */ BOOL alpha) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE compileShader( 
            /* [in] */ IWebGLShader *shader) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE compressedTexImage2D( 
            /* [in] */ ULONG target,
            /* [in] */ LONG level,
            /* [in] */ ULONG internalformat,
            /* [in] */ LONG width,
            /* [in] */ LONG height,
            /* [in] */ LONG border,
            /* [in] */ IArrayBufferView *data) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE compressedTexSubImage2D( 
            /* [in] */ ULONG target,
            /* [in] */ LONG level,
            /* [in] */ LONG xoffset,
            /* [in] */ LONG yoffset,
            /* [in] */ LONG width,
            /* [in] */ LONG height,
            /* [in] */ ULONG format,
            /* [in] */ IArrayBufferView *data) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE copyTexImage2D( 
            /* [in] */ ULONG target,
            /* [in] */ LONG level,
            /* [in] */ ULONG internalformat,
            /* [in] */ LONG x,
            /* [in] */ LONG y,
            /* [in] */ LONG width,
            /* [in] */ LONG height,
            /* [in] */ LONG border) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE copyTexSubImage2D( 
            /* [in] */ ULONG target,
            /* [in] */ LONG level,
            /* [in] */ LONG xoffset,
            /* [in] */ LONG yoffset,
            /* [in] */ LONG x,
            /* [in] */ LONG y,
            /* [in] */ LONG width,
            /* [in] */ LONG height) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE createBuffer( 
            /* [retval][out] */ IWebGLBuffer **retVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE createFramebuffer( 
            /* [retval][out] */ IWebGLFramebuffer **retVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE createProgram( 
            /* [retval][out] */ IWebGLProgram **retVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE createRenderbuffer( 
            /* [retval][out] */ IWebGLRenderbuffer **retVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE createShader( 
            /* [in] */ ULONG type,
            /* [retval][out] */ IWebGLShader **retVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE createTexture( 
            /* [retval][out] */ IWebGLTexture **retVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE cullFace( 
            /* [in] */ ULONG mode) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE deleteBuffer( 
            /* [in] */ IWebGLBuffer *buffer) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE deleteFramebuffer( 
            /* [in] */ IWebGLFramebuffer *framebuffer) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE deleteProgram( 
            /* [in] */ IWebGLProgram *program) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE deleteRenderbuffer( 
            /* [in] */ IWebGLRenderbuffer *renderbuffer) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE deleteShader( 
            /* [in] */ IWebGLShader *shader) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE deleteTexture( 
            /* [in] */ IWebGLTexture *texture) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE depthFunc( 
            /* [in] */ ULONG func) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE depthMask( 
            /* [in] */ BOOL flag) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE depthRange( 
            /* [in] */ FLOAT zNear,
            /* [in] */ FLOAT zFar) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE detachShader( 
            /* [in] */ IWebGLProgram *program,
            /* [in] */ IWebGLShader *shader) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE disable( 
            /* [in] */ ULONG cap) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE disableVertexAttribArray( 
            /* [in] */ ULONG index) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE drawArrays( 
            /* [in] */ ULONG mode,
            /* [in] */ LONG first,
            /* [in] */ LONG count) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE drawElements( 
            /* [in] */ ULONG mode,
            /* [in] */ LONG count,
            /* [in] */ ULONG type,
            /* [in] */ LONG offset) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE enable( 
            /* [in] */ ULONG cap) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE enableVertexAttribArray( 
            /* [in] */ ULONG index) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE finish( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE flush( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE framebufferRenderbuffer( 
            /* [in] */ ULONG target,
            /* [in] */ ULONG attachment,
            /* [in] */ ULONG renderbuffertarget,
            /* [in] */ IWebGLRenderbuffer *renderbuffer) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE framebufferTexture2D( 
            /* [in] */ ULONG target,
            /* [in] */ ULONG attachment,
            /* [in] */ ULONG textarget,
            /* [in] */ IWebGLTexture *texture,
            /* [in] */ LONG level) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE frontFace( 
            /* [in] */ ULONG mode) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE generateMipmap( 
            /* [in] */ ULONG target) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE getActiveAttrib( 
            /* [in] */ IWebGLProgram *program,
            /* [in] */ ULONG index,
            /* [retval][out] */ IWebGLActiveInfo **retVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE getActiveUniform( 
            /* [in] */ IWebGLProgram *program,
            /* [in] */ ULONG index,
            /* [retval][out] */ IWebGLActiveInfo **retVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE getAttachedShaders( 
            /* [in] */ IWebGLProgram *program,
            /* [retval][out] */ IDispatch **retVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE getAttribLocation( 
            /* [in] */ IWebGLProgram *program,
            /* [in] */ BSTR name,
            /* [retval][out] */ LONG *retVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE getParameter( 
            /* [in] */ ULONG pname,
            /* [retval][out] */ VARIANT *retVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE getBufferParameter( 
            /* [in] */ ULONG target,
            /* [in] */ ULONG pname,
            /* [retval][out] */ VARIANT *retVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE getError( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE getFramebufferAttachmentParameter( 
            /* [in] */ ULONG target,
            /* [in] */ ULONG attachment,
            /* [in] */ ULONG pname,
            /* [retval][out] */ VARIANT *retVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE getProgramParameter( 
            /* [in] */ IWebGLProgram *program,
            /* [in] */ ULONG pname,
            /* [retval][out] */ VARIANT *retVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE getProgramInfoLog( 
            /* [in] */ IWebGLProgram *program,
            /* [retval][out] */ BSTR *retVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE getRenderbufferParameter( 
            /* [in] */ ULONG target,
            /* [in] */ ULONG pname,
            /* [retval][out] */ VARIANT *retVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE getShaderParameter( 
            /* [in] */ IWebGLShader *shader,
            /* [in] */ ULONG pname,
            /* [retval][out] */ VARIANT *retVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE getShaderPrecisionFormat( 
            /* [in] */ ULONG shadertype,
            /* [in] */ ULONG precisiontype,
            /* [retval][out] */ IWebGLShaderPrecisionFormat **retVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE getShaderInfoLog( 
            /* [in] */ IWebGLShader *shader,
            /* [retval][out] */ BSTR *retVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE getShaderSource( 
            /* [in] */ IWebGLShader *shader,
            /* [retval][out] */ BSTR *retVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE getTexParameter( 
            /* [in] */ ULONG target,
            /* [in] */ ULONG pname,
            /* [retval][out] */ VARIANT *retVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE getUniform( 
            /* [in] */ IWebGLProgram *program,
            /* [in] */ IWebGLUniformLocation *location,
            /* [retval][out] */ VARIANT *retVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE getUniformLocation( 
            /* [in] */ IWebGLProgram *program,
            /* [in] */ BSTR name,
            /* [retval][out] */ IWebGLUniformLocation **retVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE getVertexAttrib( 
            /* [in] */ ULONG index,
            /* [in] */ ULONG pname,
            /* [retval][out] */ VARIANT *retVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE getVertexAttribOffset( 
            /* [in] */ ULONG index,
            /* [in] */ ULONG pname,
            /* [retval][out] */ LONG *retVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE hint( 
            /* [in] */ ULONG target,
            /* [in] */ ULONG mode) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE isBuffer( 
            /* [in] */ IWebGLBuffer *buffer,
            /* [retval][out] */ VARIANT *retVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE isEnabled( 
            /* [in] */ ULONG cap,
            /* [retval][out] */ VARIANT *retVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE isFramebuffer( 
            /* [in] */ IWebGLFramebuffer *framebuffer,
            /* [retval][out] */ VARIANT *retVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE isProgram( 
            /* [in] */ IWebGLProgram *program,
            /* [retval][out] */ VARIANT *retVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE isRenderbuffer( 
            /* [in] */ IWebGLRenderbuffer *renderbuffer,
            /* [retval][out] */ VARIANT *retVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE isShader( 
            /* [in] */ IWebGLShader *shader,
            /* [retval][out] */ VARIANT *retVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE isTexture( 
            /* [in] */ IWebGLTexture *texture,
            /* [retval][out] */ VARIANT *retVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE lineWidth( 
            /* [in] */ FLOAT width) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE linkProgram( 
            /* [in] */ IWebGLProgram *program) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE pixelStorei( 
            /* [in] */ ULONG pname,
            /* [in] */ LONG param) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE polygonOffset( 
            /* [in] */ FLOAT factor,
            /* [in] */ FLOAT units) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE readPixels( 
            /* [in] */ LONG x,
            /* [in] */ LONG y,
            /* [in] */ LONG width,
            /* [in] */ LONG height,
            /* [in] */ ULONG format,
            /* [in] */ ULONG type,
            /* [in] */ IArrayBufferView *pixels) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE renderbufferStorage( 
            /* [in] */ ULONG target,
            /* [in] */ ULONG internalformat,
            /* [in] */ LONG width,
            /* [in] */ LONG height) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE sampleCoverage( 
            FLOAT value,
            /* [in] */ BOOL invert) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE scissor( 
            /* [in] */ LONG x,
            /* [in] */ LONG y,
            /* [in] */ LONG width,
            /* [in] */ LONG height) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE shaderSource( 
            /* [in] */ IWebGLShader *shader,
            /* [in] */ BSTR source) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE stencilFunc( 
            /* [in] */ ULONG func,
            /* [in] */ LONG ref,
            /* [in] */ ULONG mask) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE stencilFuncSeparate( 
            /* [in] */ ULONG face,
            /* [in] */ ULONG func,
            /* [in] */ LONG ref,
            /* [in] */ ULONG mask) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE stencilMask( 
            /* [in] */ ULONG mask) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE stencilMaskSeparate( 
            /* [in] */ ULONG face,
            /* [in] */ ULONG mask) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE stencilOp( 
            /* [in] */ ULONG fail,
            /* [in] */ ULONG zfail,
            /* [in] */ ULONG zpass) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE stencilOpSeparate( 
            /* [in] */ ULONG face,
            /* [in] */ ULONG fail,
            /* [in] */ ULONG zfail,
            /* [in] */ ULONG zpass) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE texImage2D( 
            /* [in] */ ULONG target,
            /* [in] */ LONG level,
            /* [in] */ ULONG internalformat,
            /* [in] */ VARIANT arg0,
            /* [in] */ VARIANT arg1,
            /* [in] */ VARIANT arg2,
            /* [optional][in] */ VARIANT arg3,
            /* [optional][in] */ VARIANT arg4,
            /* [optional][in] */ VARIANT arg5) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE texParameterf( 
            /* [in] */ ULONG target,
            /* [in] */ ULONG pname,
            /* [in] */ FLOAT param) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE texParameteri( 
            /* [in] */ ULONG target,
            /* [in] */ ULONG pname,
            /* [in] */ LONG param) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE texSubImage2D( 
            /* [in] */ ULONG target,
            /* [in] */ LONG level,
            /* [in] */ LONG xoffset,
            /* [in] */ LONG yoffset,
            /* [in] */ VARIANT arg0,
            /* [in] */ VARIANT arg1,
            /* [in] */ VARIANT arg2,
            /* [optional][in] */ VARIANT arg3,
            /* [optional][in] */ VARIANT arg4) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE uniform1f( 
            /* [in] */ IWebGLUniformLocation *location,
            /* [in] */ FLOAT x) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE uniform1fv( 
            /* [in] */ IWebGLUniformLocation *location,
            /* [in] */ IDispatch *v) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE uniform1i( 
            /* [in] */ IWebGLUniformLocation *location,
            /* [in] */ LONG x) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE uniform1iv( 
            /* [in] */ IWebGLUniformLocation *location,
            /* [in] */ IDispatch *v) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE uniform2f( 
            /* [in] */ IWebGLUniformLocation *location,
            /* [in] */ FLOAT x,
            /* [in] */ FLOAT y) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE uniform2fv( 
            /* [in] */ IWebGLUniformLocation *location,
            /* [in] */ IDispatch *v) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE uniform2i( 
            /* [in] */ IWebGLUniformLocation *location,
            /* [in] */ LONG x,
            /* [in] */ LONG y) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE uniform2iv( 
            /* [in] */ IWebGLUniformLocation *location,
            /* [in] */ IDispatch *v) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE uniform3f( 
            /* [in] */ IWebGLUniformLocation *location,
            /* [in] */ FLOAT x,
            /* [in] */ FLOAT y,
            /* [in] */ FLOAT z) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE uniform3fv( 
            /* [in] */ IWebGLUniformLocation *location,
            /* [in] */ IDispatch *v) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE uniform3i( 
            /* [in] */ IWebGLUniformLocation *location,
            /* [in] */ LONG x,
            /* [in] */ LONG y,
            /* [in] */ LONG z) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE uniform3iv( 
            /* [in] */ IWebGLUniformLocation *location,
            /* [in] */ IDispatch *v) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE uniform4f( 
            /* [in] */ IWebGLUniformLocation *location,
            /* [in] */ FLOAT x,
            /* [in] */ FLOAT y,
            /* [in] */ FLOAT z,
            /* [in] */ FLOAT w) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE uniform4fv( 
            /* [in] */ IWebGLUniformLocation *location,
            /* [in] */ IDispatch *v) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE uniform4i( 
            /* [in] */ IWebGLUniformLocation *location,
            /* [in] */ LONG x,
            /* [in] */ LONG y,
            /* [in] */ LONG z,
            /* [in] */ LONG w) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE uniform4iv( 
            /* [in] */ IWebGLUniformLocation *location,
            /* [in] */ IDispatch *v) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE uniformMatrix2fv( 
            /* [in] */ IWebGLUniformLocation *location,
            /* [in] */ BOOL transpose,
            /* [in] */ IDispatch *value) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE uniformMatrix3fv( 
            /* [in] */ IWebGLUniformLocation *location,
            /* [in] */ BOOL transpose,
            /* [in] */ IDispatch *value) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE uniformMatrix4fv( 
            /* [in] */ IWebGLUniformLocation *location,
            /* [in] */ BOOL transpose,
            /* [in] */ IDispatch *value) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE useProgram( 
            /* [in] */ IWebGLProgram *program) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE validateProgram( 
            /* [in] */ IWebGLProgram *program) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE vertexAttrib1f( 
            /* [in] */ ULONG indx,
            /* [in] */ FLOAT x) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE vertexAttrib1fv( 
            /* [in] */ ULONG indx,
            /* [in] */ IDispatch *v) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE vertexAttrib2f( 
            /* [in] */ ULONG indx,
            /* [in] */ FLOAT x,
            /* [in] */ FLOAT y) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE vertexAttrib2fv( 
            /* [in] */ ULONG indx,
            /* [in] */ IDispatch *v) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE vertexAttrib3f( 
            /* [in] */ ULONG indx,
            /* [in] */ FLOAT x,
            /* [in] */ FLOAT y,
            /* [in] */ FLOAT z) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE vertexAttrib3fv( 
            /* [in] */ ULONG indx,
            /* [in] */ IDispatch *v) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE vertexAttrib4f( 
            /* [in] */ ULONG indx,
            /* [in] */ FLOAT x,
            /* [in] */ FLOAT y,
            /* [in] */ FLOAT z,
            /* [in] */ FLOAT w) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE vertexAttrib4fv( 
            /* [in] */ ULONG indx,
            /* [in] */ IDispatch *v) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE vertexAttribPointer( 
            /* [in] */ ULONG indx,
            /* [in] */ LONG size,
            /* [in] */ ULONG type,
            /* [in] */ BOOL normalized,
            /* [in] */ LONG stride,
            /* [in] */ LONG offset) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE __viewport( 
            /* [in] */ LONG x,
            /* [in] */ LONG y,
            /* [in] */ LONG width,
            /* [in] */ LONG height) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWebGLRenderingContextVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWebGLRenderingContext * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWebGLRenderingContext * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWebGLRenderingContext * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IWebGLRenderingContext * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IWebGLRenderingContext * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IWebGLRenderingContext * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IWebGLRenderingContext * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *toString )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DEPTH_BUFFER_BIT )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_STENCIL_BUFFER_BIT )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_COLOR_BUFFER_BIT )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_POINTS )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_LINES )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_LINE_LOOP )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_LINE_STRIP )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TRIANGLES )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TRIANGLE_STRIP )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TRIANGLE_FAN )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ZERO )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ONE )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SRC_COLOR )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ONE_MINUS_SRC_COLOR )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SRC_ALPHA )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ONE_MINUS_SRC_ALPHA )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DST_ALPHA )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ONE_MINUS_DST_ALPHA )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DST_COLOR )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ONE_MINUS_DST_COLOR )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SRC_ALPHA_SATURATE )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FUNC_ADD )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_BLEND_EQUATION )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_BLEND_EQUATION_RGB )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_BLEND_EQUATION_ALPHA )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FUNC_SUBTRACT )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FUNC_REVERSE_SUBTRACT )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_BLEND_DST_RGB )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_BLEND_SRC_RGB )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_BLEND_DST_ALPHA )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_BLEND_SRC_ALPHA )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CONSTANT_COLOR )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ONE_MINUS_CONSTANT_COLOR )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CONSTANT_ALPHA )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ONE_MINUS_CONSTANT_ALPHA )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_BLEND_COLOR )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ARRAY_BUFFER )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ELEMENT_ARRAY_BUFFER )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ARRAY_BUFFER_BINDING )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ELEMENT_ARRAY_BUFFER_BINDING )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_STREAM_DRAW )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_STATIC_DRAW )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DYNAMIC_DRAW )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_BUFFER_SIZE )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_BUFFER_USAGE )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CURRENT_VERTEX_ATTRIB )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FRONT )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_BACK )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FRONT_AND_BACK )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CULL_FACE )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_BLEND )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DITHER )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_STENCIL_TEST )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DEPTH_TEST )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SCISSOR_TEST )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_POLYGON_OFFSET_FILL )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SAMPLE_ALPHA_TO_COVERAGE )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SAMPLE_COVERAGE )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_NO_ERROR )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_INVALID_ENUM )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_INVALID_VALUE )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_INVALID_OPERATION )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_OUT_OF_MEMORY )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CW )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CCW )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_LINE_WIDTH )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ALIASED_POINT_SIZE_RANGE )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ALIASED_LINE_WIDTH_RANGE )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CULL_FACE_MODE )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FRONT_FACE )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DEPTH_RANGE )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DEPTH_WRITEMASK )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DEPTH_CLEAR_VALUE )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DEPTH_FUNC )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_STENCIL_CLEAR_VALUE )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_STENCIL_FUNC )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_STENCIL_FAIL )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_STENCIL_PASS_DEPTH_FAIL )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_STENCIL_PASS_DEPTH_PASS )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_STENCIL_REF )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_STENCIL_VALUE_MASK )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_STENCIL_WRITEMASK )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_STENCIL_BACK_FUNC )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_STENCIL_BACK_FAIL )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_STENCIL_BACK_PASS_DEPTH_FAIL )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_STENCIL_BACK_PASS_DEPTH_PASS )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_STENCIL_BACK_REF )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_STENCIL_BACK_VALUE_MASK )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_STENCIL_BACK_WRITEMASK )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_VIEWPORT )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SCISSOR_BOX )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_COLOR_CLEAR_VALUE )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_COLOR_WRITEMASK )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_UNPACK_ALIGNMENT )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PACK_ALIGNMENT )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_MAX_TEXTURE_SIZE )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_MAX_VIEWPORT_DIMS )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SUBPIXEL_BITS )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RED_BITS )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_GREEN_BITS )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_BLUE_BITS )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ALPHA_BITS )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DEPTH_BITS )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_STENCIL_BITS )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_POLYGON_OFFSET_UNITS )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_POLYGON_OFFSET_FACTOR )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TEXTURE_BINDING_2D )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SAMPLE_BUFFERS )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SAMPLES )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SAMPLE_COVERAGE_VALUE )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SAMPLE_COVERAGE_INVERT )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_COMPRESSED_TEXTURE_FORMATS )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DONT_CARE )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FASTEST )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_NICEST )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_GENERATE_MIPMAP_HINT )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_BYTE )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_UNSIGNED_BYTE )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SHORT )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_UNSIGNED_SHORT )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_INT )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_UNSIGNED_INT )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FLOAT )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DEPTH_COMPONENT )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ALPHA )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RGB )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RGBA )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_LUMINANCE )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_LUMINANCE_ALPHA )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_UNSIGNED_SHORT_4_4_4_4 )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_UNSIGNED_SHORT_5_5_5_1 )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_UNSIGNED_SHORT_5_6_5 )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FRAGMENT_SHADER )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_VERTEX_SHADER )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_MAX_VERTEX_ATTRIBS )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_MAX_VERTEX_UNIFORM_VECTORS )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_MAX_VARYING_VECTORS )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_MAX_COMBINED_TEXTURE_IMAGE_UNITS )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_MAX_VERTEX_TEXTURE_IMAGE_UNITS )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_MAX_TEXTURE_IMAGE_UNITS )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_MAX_FRAGMENT_UNIFORM_VECTORS )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SHADER_TYPE )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DELETE_STATUS )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_LINK_STATUS )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_VALIDATE_STATUS )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ATTACHED_SHADERS )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ACTIVE_UNIFORMS )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ACTIVE_ATTRIBUTES )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SHADING_LANGUAGE_VERSION )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CURRENT_PROGRAM )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_NEVER )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_LESS )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_EQUAL )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_LEQUAL )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_GREATER )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_NOTEQUAL )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_GEQUAL )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ALWAYS )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_KEEP )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_REPLACE )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_INCR )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DECR )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_INVERT )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_INCR_WRAP )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DECR_WRAP )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_VENDOR )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RENDERER )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_VERSION )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_NEAREST )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_LINEAR )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_NEAREST_MIPMAP_NEAREST )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_LINEAR_MIPMAP_NEAREST )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_NEAREST_MIPMAP_LINEAR )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_LINEAR_MIPMAP_LINEAR )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TEXTURE_MAG_FILTER )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TEXTURE_MIN_FILTER )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TEXTURE_WRAP_S )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TEXTURE_WRAP_T )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TEXTURE_2D )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TEXTURE )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TEXTURE_CUBE_MAP )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TEXTURE_BINDING_CUBE_MAP )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TEXTURE_CUBE_MAP_POSITIVE_X )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TEXTURE_CUBE_MAP_NEGATIVE_X )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TEXTURE_CUBE_MAP_POSITIVE_Y )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TEXTURE_CUBE_MAP_NEGATIVE_Y )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TEXTURE_CUBE_MAP_POSITIVE_Z )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TEXTURE_CUBE_MAP_NEGATIVE_Z )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_MAX_CUBE_MAP_TEXTURE_SIZE )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TEXTURE0 )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TEXTURE1 )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TEXTURE2 )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TEXTURE3 )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TEXTURE4 )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TEXTURE5 )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TEXTURE6 )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TEXTURE7 )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TEXTURE8 )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TEXTURE9 )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TEXTURE10 )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TEXTURE11 )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TEXTURE12 )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TEXTURE13 )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TEXTURE14 )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TEXTURE15 )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TEXTURE16 )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TEXTURE17 )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TEXTURE18 )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TEXTURE19 )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TEXTURE20 )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TEXTURE21 )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TEXTURE22 )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TEXTURE23 )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TEXTURE24 )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TEXTURE25 )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TEXTURE26 )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TEXTURE27 )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TEXTURE28 )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TEXTURE29 )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TEXTURE30 )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TEXTURE31 )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ACTIVE_TEXTURE )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_REPEAT )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CLAMP_TO_EDGE )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_MIRRORED_REPEAT )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FLOAT_VEC2 )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FLOAT_VEC3 )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FLOAT_VEC4 )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_INT_VEC2 )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_INT_VEC3 )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_INT_VEC4 )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_BOOL )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_BOOL_VEC2 )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_BOOL_VEC3 )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_BOOL_VEC4 )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FLOAT_MAT2 )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FLOAT_MAT3 )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FLOAT_MAT4 )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SAMPLER_2D )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SAMPLER_CUBE )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_VERTEX_ATTRIB_ARRAY_ENABLED )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_VERTEX_ATTRIB_ARRAY_SIZE )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_VERTEX_ATTRIB_ARRAY_STRIDE )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_VERTEX_ATTRIB_ARRAY_TYPE )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_VERTEX_ATTRIB_ARRAY_NORMALIZED )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_VERTEX_ATTRIB_ARRAY_POINTER )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_COMPILE_STATUS )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_LOW_FLOAT )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_MEDIUM_FLOAT )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HIGH_FLOAT )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_LOW_INT )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_MEDIUM_INT )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HIGH_INT )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FRAMEBUFFER )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RENDERBUFFER )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RGBA4 )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RGB5_A1 )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RGB565 )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DEPTH_COMPONENT16 )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_STENCIL_INDEX )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_STENCIL_INDEX8 )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DEPTH_STENCIL )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RENDERBUFFER_WIDTH )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RENDERBUFFER_HEIGHT )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RENDERBUFFER_INTERNAL_FORMAT )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RENDERBUFFER_RED_SIZE )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RENDERBUFFER_GREEN_SIZE )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RENDERBUFFER_BLUE_SIZE )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RENDERBUFFER_ALPHA_SIZE )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RENDERBUFFER_DEPTH_SIZE )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RENDERBUFFER_STENCIL_SIZE )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FRAMEBUFFER_ATTACHMENT_OBJECT_NAME )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_COLOR_ATTACHMENT0 )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DEPTH_ATTACHMENT )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_STENCIL_ATTACHMENT )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DEPTH_STENCIL_ATTACHMENT )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_NONE )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FRAMEBUFFER_COMPLETE )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FRAMEBUFFER_INCOMPLETE_ATTACHMENT )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FRAMEBUFFER_INCOMPLETE_DIMENSIONS )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FRAMEBUFFER_UNSUPPORTED )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FRAMEBUFFER_BINDING )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RENDERBUFFER_BINDING )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_MAX_RENDERBUFFER_SIZE )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_INVALID_FRAMEBUFFER_OPERATION )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_UNPACK_FLIP_Y_WEBGL )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_UNPACK_PREMULTIPLY_ALPHA_WEBGL )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CONTEXT_LOST_WEBGL )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_UNPACK_COLORSPACE_CONVERSION_WEBGL )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_BROWSER_DEFAULT_WEBGL )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_canvas )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ IDispatch **retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_drawingBufferWidth )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_drawingBufferHeight )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *getContextAttributes )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ IWebGLContextAttributes **retVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *isContextLost )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ VARIANT *retVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *getSupportedExtensions )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ IDispatch **retVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *getExtension )( 
            IWebGLRenderingContext * This,
            /* [in] */ BSTR name,
            /* [retval][out] */ IDispatch **retVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *activeTexture )( 
            IWebGLRenderingContext * This,
            /* [in] */ ULONG texture);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *attachShader )( 
            IWebGLRenderingContext * This,
            /* [in] */ IWebGLProgram *program,
            /* [in] */ IWebGLShader *shader);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *bindAttribLocation )( 
            IWebGLRenderingContext * This,
            /* [in] */ IWebGLProgram *program,
            /* [in] */ ULONG index,
            /* [in] */ BSTR name);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *bindBuffer )( 
            IWebGLRenderingContext * This,
            /* [in] */ ULONG target,
            /* [in] */ IWebGLBuffer *buffer);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *bindFramebuffer )( 
            IWebGLRenderingContext * This,
            /* [in] */ ULONG target,
            /* [in] */ IWebGLFramebuffer *framebuffer);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *bindRenderbuffer )( 
            IWebGLRenderingContext * This,
            /* [in] */ ULONG target,
            /* [in] */ IWebGLRenderbuffer *renderbuffer);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *bindTexture )( 
            IWebGLRenderingContext * This,
            /* [in] */ ULONG target,
            /* [in] */ IWebGLTexture *texture);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *blendColor )( 
            IWebGLRenderingContext * This,
            /* [in] */ FLOAT red,
            /* [in] */ FLOAT green,
            /* [in] */ FLOAT blue,
            /* [in] */ FLOAT alpha);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *blendEquation )( 
            IWebGLRenderingContext * This,
            /* [in] */ ULONG mode);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *blendEquationSeparate )( 
            IWebGLRenderingContext * This,
            /* [in] */ ULONG modeRGB,
            /* [in] */ ULONG modeAlpha);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *blendFunc )( 
            IWebGLRenderingContext * This,
            /* [in] */ ULONG sfactor,
            /* [in] */ ULONG dfactor);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *blendFuncSeparate )( 
            IWebGLRenderingContext * This,
            /* [in] */ ULONG srcRGB,
            /* [in] */ ULONG dstRGB,
            /* [in] */ ULONG srcAlpha,
            /* [in] */ ULONG dstAlpha);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *bufferData )( 
            IWebGLRenderingContext * This,
            /* [in] */ ULONG target,
            /* [in] */ VARIANT arg1,
            /* [in] */ VARIANT arg2);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *bufferSubData )( 
            IWebGLRenderingContext * This,
            /* [in] */ ULONG target,
            /* [in] */ LONG offset,
            /* [in] */ IDispatch *data);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *checkFramebufferStatus )( 
            IWebGLRenderingContext * This,
            /* [in] */ ULONG target,
            /* [retval][out] */ ULONG *retVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *clear )( 
            IWebGLRenderingContext * This,
            /* [in] */ ULONG mask);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *clearColor )( 
            IWebGLRenderingContext * This,
            /* [in] */ FLOAT red,
            /* [in] */ FLOAT green,
            /* [in] */ FLOAT blue,
            /* [in] */ FLOAT alpha);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *clearDepth )( 
            IWebGLRenderingContext * This,
            /* [in] */ FLOAT depth);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *clearStencil )( 
            IWebGLRenderingContext * This,
            /* [in] */ LONG s);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *colorMask )( 
            IWebGLRenderingContext * This,
            /* [in] */ BOOL red,
            /* [in] */ BOOL green,
            /* [in] */ BOOL blue,
            /* [in] */ BOOL alpha);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *compileShader )( 
            IWebGLRenderingContext * This,
            /* [in] */ IWebGLShader *shader);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *compressedTexImage2D )( 
            IWebGLRenderingContext * This,
            /* [in] */ ULONG target,
            /* [in] */ LONG level,
            /* [in] */ ULONG internalformat,
            /* [in] */ LONG width,
            /* [in] */ LONG height,
            /* [in] */ LONG border,
            /* [in] */ IArrayBufferView *data);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *compressedTexSubImage2D )( 
            IWebGLRenderingContext * This,
            /* [in] */ ULONG target,
            /* [in] */ LONG level,
            /* [in] */ LONG xoffset,
            /* [in] */ LONG yoffset,
            /* [in] */ LONG width,
            /* [in] */ LONG height,
            /* [in] */ ULONG format,
            /* [in] */ IArrayBufferView *data);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *copyTexImage2D )( 
            IWebGLRenderingContext * This,
            /* [in] */ ULONG target,
            /* [in] */ LONG level,
            /* [in] */ ULONG internalformat,
            /* [in] */ LONG x,
            /* [in] */ LONG y,
            /* [in] */ LONG width,
            /* [in] */ LONG height,
            /* [in] */ LONG border);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *copyTexSubImage2D )( 
            IWebGLRenderingContext * This,
            /* [in] */ ULONG target,
            /* [in] */ LONG level,
            /* [in] */ LONG xoffset,
            /* [in] */ LONG yoffset,
            /* [in] */ LONG x,
            /* [in] */ LONG y,
            /* [in] */ LONG width,
            /* [in] */ LONG height);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *createBuffer )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ IWebGLBuffer **retVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *createFramebuffer )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ IWebGLFramebuffer **retVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *createProgram )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ IWebGLProgram **retVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *createRenderbuffer )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ IWebGLRenderbuffer **retVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *createShader )( 
            IWebGLRenderingContext * This,
            /* [in] */ ULONG type,
            /* [retval][out] */ IWebGLShader **retVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *createTexture )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ IWebGLTexture **retVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *cullFace )( 
            IWebGLRenderingContext * This,
            /* [in] */ ULONG mode);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *deleteBuffer )( 
            IWebGLRenderingContext * This,
            /* [in] */ IWebGLBuffer *buffer);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *deleteFramebuffer )( 
            IWebGLRenderingContext * This,
            /* [in] */ IWebGLFramebuffer *framebuffer);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *deleteProgram )( 
            IWebGLRenderingContext * This,
            /* [in] */ IWebGLProgram *program);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *deleteRenderbuffer )( 
            IWebGLRenderingContext * This,
            /* [in] */ IWebGLRenderbuffer *renderbuffer);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *deleteShader )( 
            IWebGLRenderingContext * This,
            /* [in] */ IWebGLShader *shader);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *deleteTexture )( 
            IWebGLRenderingContext * This,
            /* [in] */ IWebGLTexture *texture);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *depthFunc )( 
            IWebGLRenderingContext * This,
            /* [in] */ ULONG func);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *depthMask )( 
            IWebGLRenderingContext * This,
            /* [in] */ BOOL flag);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *depthRange )( 
            IWebGLRenderingContext * This,
            /* [in] */ FLOAT zNear,
            /* [in] */ FLOAT zFar);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *detachShader )( 
            IWebGLRenderingContext * This,
            /* [in] */ IWebGLProgram *program,
            /* [in] */ IWebGLShader *shader);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *disable )( 
            IWebGLRenderingContext * This,
            /* [in] */ ULONG cap);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *disableVertexAttribArray )( 
            IWebGLRenderingContext * This,
            /* [in] */ ULONG index);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *drawArrays )( 
            IWebGLRenderingContext * This,
            /* [in] */ ULONG mode,
            /* [in] */ LONG first,
            /* [in] */ LONG count);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *drawElements )( 
            IWebGLRenderingContext * This,
            /* [in] */ ULONG mode,
            /* [in] */ LONG count,
            /* [in] */ ULONG type,
            /* [in] */ LONG offset);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *enable )( 
            IWebGLRenderingContext * This,
            /* [in] */ ULONG cap);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *enableVertexAttribArray )( 
            IWebGLRenderingContext * This,
            /* [in] */ ULONG index);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *finish )( 
            IWebGLRenderingContext * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *flush )( 
            IWebGLRenderingContext * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *framebufferRenderbuffer )( 
            IWebGLRenderingContext * This,
            /* [in] */ ULONG target,
            /* [in] */ ULONG attachment,
            /* [in] */ ULONG renderbuffertarget,
            /* [in] */ IWebGLRenderbuffer *renderbuffer);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *framebufferTexture2D )( 
            IWebGLRenderingContext * This,
            /* [in] */ ULONG target,
            /* [in] */ ULONG attachment,
            /* [in] */ ULONG textarget,
            /* [in] */ IWebGLTexture *texture,
            /* [in] */ LONG level);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *frontFace )( 
            IWebGLRenderingContext * This,
            /* [in] */ ULONG mode);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *generateMipmap )( 
            IWebGLRenderingContext * This,
            /* [in] */ ULONG target);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *getActiveAttrib )( 
            IWebGLRenderingContext * This,
            /* [in] */ IWebGLProgram *program,
            /* [in] */ ULONG index,
            /* [retval][out] */ IWebGLActiveInfo **retVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *getActiveUniform )( 
            IWebGLRenderingContext * This,
            /* [in] */ IWebGLProgram *program,
            /* [in] */ ULONG index,
            /* [retval][out] */ IWebGLActiveInfo **retVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *getAttachedShaders )( 
            IWebGLRenderingContext * This,
            /* [in] */ IWebGLProgram *program,
            /* [retval][out] */ IDispatch **retVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *getAttribLocation )( 
            IWebGLRenderingContext * This,
            /* [in] */ IWebGLProgram *program,
            /* [in] */ BSTR name,
            /* [retval][out] */ LONG *retVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *getParameter )( 
            IWebGLRenderingContext * This,
            /* [in] */ ULONG pname,
            /* [retval][out] */ VARIANT *retVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *getBufferParameter )( 
            IWebGLRenderingContext * This,
            /* [in] */ ULONG target,
            /* [in] */ ULONG pname,
            /* [retval][out] */ VARIANT *retVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *getError )( 
            IWebGLRenderingContext * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *getFramebufferAttachmentParameter )( 
            IWebGLRenderingContext * This,
            /* [in] */ ULONG target,
            /* [in] */ ULONG attachment,
            /* [in] */ ULONG pname,
            /* [retval][out] */ VARIANT *retVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *getProgramParameter )( 
            IWebGLRenderingContext * This,
            /* [in] */ IWebGLProgram *program,
            /* [in] */ ULONG pname,
            /* [retval][out] */ VARIANT *retVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *getProgramInfoLog )( 
            IWebGLRenderingContext * This,
            /* [in] */ IWebGLProgram *program,
            /* [retval][out] */ BSTR *retVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *getRenderbufferParameter )( 
            IWebGLRenderingContext * This,
            /* [in] */ ULONG target,
            /* [in] */ ULONG pname,
            /* [retval][out] */ VARIANT *retVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *getShaderParameter )( 
            IWebGLRenderingContext * This,
            /* [in] */ IWebGLShader *shader,
            /* [in] */ ULONG pname,
            /* [retval][out] */ VARIANT *retVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *getShaderPrecisionFormat )( 
            IWebGLRenderingContext * This,
            /* [in] */ ULONG shadertype,
            /* [in] */ ULONG precisiontype,
            /* [retval][out] */ IWebGLShaderPrecisionFormat **retVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *getShaderInfoLog )( 
            IWebGLRenderingContext * This,
            /* [in] */ IWebGLShader *shader,
            /* [retval][out] */ BSTR *retVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *getShaderSource )( 
            IWebGLRenderingContext * This,
            /* [in] */ IWebGLShader *shader,
            /* [retval][out] */ BSTR *retVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *getTexParameter )( 
            IWebGLRenderingContext * This,
            /* [in] */ ULONG target,
            /* [in] */ ULONG pname,
            /* [retval][out] */ VARIANT *retVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *getUniform )( 
            IWebGLRenderingContext * This,
            /* [in] */ IWebGLProgram *program,
            /* [in] */ IWebGLUniformLocation *location,
            /* [retval][out] */ VARIANT *retVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *getUniformLocation )( 
            IWebGLRenderingContext * This,
            /* [in] */ IWebGLProgram *program,
            /* [in] */ BSTR name,
            /* [retval][out] */ IWebGLUniformLocation **retVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *getVertexAttrib )( 
            IWebGLRenderingContext * This,
            /* [in] */ ULONG index,
            /* [in] */ ULONG pname,
            /* [retval][out] */ VARIANT *retVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *getVertexAttribOffset )( 
            IWebGLRenderingContext * This,
            /* [in] */ ULONG index,
            /* [in] */ ULONG pname,
            /* [retval][out] */ LONG *retVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *hint )( 
            IWebGLRenderingContext * This,
            /* [in] */ ULONG target,
            /* [in] */ ULONG mode);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *isBuffer )( 
            IWebGLRenderingContext * This,
            /* [in] */ IWebGLBuffer *buffer,
            /* [retval][out] */ VARIANT *retVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *isEnabled )( 
            IWebGLRenderingContext * This,
            /* [in] */ ULONG cap,
            /* [retval][out] */ VARIANT *retVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *isFramebuffer )( 
            IWebGLRenderingContext * This,
            /* [in] */ IWebGLFramebuffer *framebuffer,
            /* [retval][out] */ VARIANT *retVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *isProgram )( 
            IWebGLRenderingContext * This,
            /* [in] */ IWebGLProgram *program,
            /* [retval][out] */ VARIANT *retVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *isRenderbuffer )( 
            IWebGLRenderingContext * This,
            /* [in] */ IWebGLRenderbuffer *renderbuffer,
            /* [retval][out] */ VARIANT *retVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *isShader )( 
            IWebGLRenderingContext * This,
            /* [in] */ IWebGLShader *shader,
            /* [retval][out] */ VARIANT *retVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *isTexture )( 
            IWebGLRenderingContext * This,
            /* [in] */ IWebGLTexture *texture,
            /* [retval][out] */ VARIANT *retVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *lineWidth )( 
            IWebGLRenderingContext * This,
            /* [in] */ FLOAT width);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *linkProgram )( 
            IWebGLRenderingContext * This,
            /* [in] */ IWebGLProgram *program);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *pixelStorei )( 
            IWebGLRenderingContext * This,
            /* [in] */ ULONG pname,
            /* [in] */ LONG param);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *polygonOffset )( 
            IWebGLRenderingContext * This,
            /* [in] */ FLOAT factor,
            /* [in] */ FLOAT units);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *readPixels )( 
            IWebGLRenderingContext * This,
            /* [in] */ LONG x,
            /* [in] */ LONG y,
            /* [in] */ LONG width,
            /* [in] */ LONG height,
            /* [in] */ ULONG format,
            /* [in] */ ULONG type,
            /* [in] */ IArrayBufferView *pixels);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *renderbufferStorage )( 
            IWebGLRenderingContext * This,
            /* [in] */ ULONG target,
            /* [in] */ ULONG internalformat,
            /* [in] */ LONG width,
            /* [in] */ LONG height);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *sampleCoverage )( 
            IWebGLRenderingContext * This,
            FLOAT value,
            /* [in] */ BOOL invert);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *scissor )( 
            IWebGLRenderingContext * This,
            /* [in] */ LONG x,
            /* [in] */ LONG y,
            /* [in] */ LONG width,
            /* [in] */ LONG height);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *shaderSource )( 
            IWebGLRenderingContext * This,
            /* [in] */ IWebGLShader *shader,
            /* [in] */ BSTR source);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *stencilFunc )( 
            IWebGLRenderingContext * This,
            /* [in] */ ULONG func,
            /* [in] */ LONG ref,
            /* [in] */ ULONG mask);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *stencilFuncSeparate )( 
            IWebGLRenderingContext * This,
            /* [in] */ ULONG face,
            /* [in] */ ULONG func,
            /* [in] */ LONG ref,
            /* [in] */ ULONG mask);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *stencilMask )( 
            IWebGLRenderingContext * This,
            /* [in] */ ULONG mask);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *stencilMaskSeparate )( 
            IWebGLRenderingContext * This,
            /* [in] */ ULONG face,
            /* [in] */ ULONG mask);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *stencilOp )( 
            IWebGLRenderingContext * This,
            /* [in] */ ULONG fail,
            /* [in] */ ULONG zfail,
            /* [in] */ ULONG zpass);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *stencilOpSeparate )( 
            IWebGLRenderingContext * This,
            /* [in] */ ULONG face,
            /* [in] */ ULONG fail,
            /* [in] */ ULONG zfail,
            /* [in] */ ULONG zpass);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *texImage2D )( 
            IWebGLRenderingContext * This,
            /* [in] */ ULONG target,
            /* [in] */ LONG level,
            /* [in] */ ULONG internalformat,
            /* [in] */ VARIANT arg0,
            /* [in] */ VARIANT arg1,
            /* [in] */ VARIANT arg2,
            /* [optional][in] */ VARIANT arg3,
            /* [optional][in] */ VARIANT arg4,
            /* [optional][in] */ VARIANT arg5);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *texParameterf )( 
            IWebGLRenderingContext * This,
            /* [in] */ ULONG target,
            /* [in] */ ULONG pname,
            /* [in] */ FLOAT param);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *texParameteri )( 
            IWebGLRenderingContext * This,
            /* [in] */ ULONG target,
            /* [in] */ ULONG pname,
            /* [in] */ LONG param);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *texSubImage2D )( 
            IWebGLRenderingContext * This,
            /* [in] */ ULONG target,
            /* [in] */ LONG level,
            /* [in] */ LONG xoffset,
            /* [in] */ LONG yoffset,
            /* [in] */ VARIANT arg0,
            /* [in] */ VARIANT arg1,
            /* [in] */ VARIANT arg2,
            /* [optional][in] */ VARIANT arg3,
            /* [optional][in] */ VARIANT arg4);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *uniform1f )( 
            IWebGLRenderingContext * This,
            /* [in] */ IWebGLUniformLocation *location,
            /* [in] */ FLOAT x);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *uniform1fv )( 
            IWebGLRenderingContext * This,
            /* [in] */ IWebGLUniformLocation *location,
            /* [in] */ IDispatch *v);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *uniform1i )( 
            IWebGLRenderingContext * This,
            /* [in] */ IWebGLUniformLocation *location,
            /* [in] */ LONG x);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *uniform1iv )( 
            IWebGLRenderingContext * This,
            /* [in] */ IWebGLUniformLocation *location,
            /* [in] */ IDispatch *v);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *uniform2f )( 
            IWebGLRenderingContext * This,
            /* [in] */ IWebGLUniformLocation *location,
            /* [in] */ FLOAT x,
            /* [in] */ FLOAT y);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *uniform2fv )( 
            IWebGLRenderingContext * This,
            /* [in] */ IWebGLUniformLocation *location,
            /* [in] */ IDispatch *v);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *uniform2i )( 
            IWebGLRenderingContext * This,
            /* [in] */ IWebGLUniformLocation *location,
            /* [in] */ LONG x,
            /* [in] */ LONG y);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *uniform2iv )( 
            IWebGLRenderingContext * This,
            /* [in] */ IWebGLUniformLocation *location,
            /* [in] */ IDispatch *v);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *uniform3f )( 
            IWebGLRenderingContext * This,
            /* [in] */ IWebGLUniformLocation *location,
            /* [in] */ FLOAT x,
            /* [in] */ FLOAT y,
            /* [in] */ FLOAT z);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *uniform3fv )( 
            IWebGLRenderingContext * This,
            /* [in] */ IWebGLUniformLocation *location,
            /* [in] */ IDispatch *v);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *uniform3i )( 
            IWebGLRenderingContext * This,
            /* [in] */ IWebGLUniformLocation *location,
            /* [in] */ LONG x,
            /* [in] */ LONG y,
            /* [in] */ LONG z);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *uniform3iv )( 
            IWebGLRenderingContext * This,
            /* [in] */ IWebGLUniformLocation *location,
            /* [in] */ IDispatch *v);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *uniform4f )( 
            IWebGLRenderingContext * This,
            /* [in] */ IWebGLUniformLocation *location,
            /* [in] */ FLOAT x,
            /* [in] */ FLOAT y,
            /* [in] */ FLOAT z,
            /* [in] */ FLOAT w);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *uniform4fv )( 
            IWebGLRenderingContext * This,
            /* [in] */ IWebGLUniformLocation *location,
            /* [in] */ IDispatch *v);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *uniform4i )( 
            IWebGLRenderingContext * This,
            /* [in] */ IWebGLUniformLocation *location,
            /* [in] */ LONG x,
            /* [in] */ LONG y,
            /* [in] */ LONG z,
            /* [in] */ LONG w);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *uniform4iv )( 
            IWebGLRenderingContext * This,
            /* [in] */ IWebGLUniformLocation *location,
            /* [in] */ IDispatch *v);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *uniformMatrix2fv )( 
            IWebGLRenderingContext * This,
            /* [in] */ IWebGLUniformLocation *location,
            /* [in] */ BOOL transpose,
            /* [in] */ IDispatch *value);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *uniformMatrix3fv )( 
            IWebGLRenderingContext * This,
            /* [in] */ IWebGLUniformLocation *location,
            /* [in] */ BOOL transpose,
            /* [in] */ IDispatch *value);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *uniformMatrix4fv )( 
            IWebGLRenderingContext * This,
            /* [in] */ IWebGLUniformLocation *location,
            /* [in] */ BOOL transpose,
            /* [in] */ IDispatch *value);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *useProgram )( 
            IWebGLRenderingContext * This,
            /* [in] */ IWebGLProgram *program);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *validateProgram )( 
            IWebGLRenderingContext * This,
            /* [in] */ IWebGLProgram *program);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *vertexAttrib1f )( 
            IWebGLRenderingContext * This,
            /* [in] */ ULONG indx,
            /* [in] */ FLOAT x);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *vertexAttrib1fv )( 
            IWebGLRenderingContext * This,
            /* [in] */ ULONG indx,
            /* [in] */ IDispatch *v);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *vertexAttrib2f )( 
            IWebGLRenderingContext * This,
            /* [in] */ ULONG indx,
            /* [in] */ FLOAT x,
            /* [in] */ FLOAT y);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *vertexAttrib2fv )( 
            IWebGLRenderingContext * This,
            /* [in] */ ULONG indx,
            /* [in] */ IDispatch *v);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *vertexAttrib3f )( 
            IWebGLRenderingContext * This,
            /* [in] */ ULONG indx,
            /* [in] */ FLOAT x,
            /* [in] */ FLOAT y,
            /* [in] */ FLOAT z);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *vertexAttrib3fv )( 
            IWebGLRenderingContext * This,
            /* [in] */ ULONG indx,
            /* [in] */ IDispatch *v);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *vertexAttrib4f )( 
            IWebGLRenderingContext * This,
            /* [in] */ ULONG indx,
            /* [in] */ FLOAT x,
            /* [in] */ FLOAT y,
            /* [in] */ FLOAT z,
            /* [in] */ FLOAT w);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *vertexAttrib4fv )( 
            IWebGLRenderingContext * This,
            /* [in] */ ULONG indx,
            /* [in] */ IDispatch *v);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *vertexAttribPointer )( 
            IWebGLRenderingContext * This,
            /* [in] */ ULONG indx,
            /* [in] */ LONG size,
            /* [in] */ ULONG type,
            /* [in] */ BOOL normalized,
            /* [in] */ LONG stride,
            /* [in] */ LONG offset);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *__viewport )( 
            IWebGLRenderingContext * This,
            /* [in] */ LONG x,
            /* [in] */ LONG y,
            /* [in] */ LONG width,
            /* [in] */ LONG height);
        
        END_INTERFACE
    } IWebGLRenderingContextVtbl;

    interface IWebGLRenderingContext
    {
        CONST_VTBL struct IWebGLRenderingContextVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWebGLRenderingContext_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWebGLRenderingContext_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWebGLRenderingContext_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWebGLRenderingContext_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IWebGLRenderingContext_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IWebGLRenderingContext_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IWebGLRenderingContext_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IWebGLRenderingContext_toString(This,retVal)	\
    ( (This)->lpVtbl -> toString(This,retVal) ) 


#define IWebGLRenderingContext_get_DEPTH_BUFFER_BIT(This,retVal)	\
    ( (This)->lpVtbl -> get_DEPTH_BUFFER_BIT(This,retVal) ) 

#define IWebGLRenderingContext_get_STENCIL_BUFFER_BIT(This,retVal)	\
    ( (This)->lpVtbl -> get_STENCIL_BUFFER_BIT(This,retVal) ) 

#define IWebGLRenderingContext_get_COLOR_BUFFER_BIT(This,retVal)	\
    ( (This)->lpVtbl -> get_COLOR_BUFFER_BIT(This,retVal) ) 

#define IWebGLRenderingContext_get_POINTS(This,retVal)	\
    ( (This)->lpVtbl -> get_POINTS(This,retVal) ) 

#define IWebGLRenderingContext_get_LINES(This,retVal)	\
    ( (This)->lpVtbl -> get_LINES(This,retVal) ) 

#define IWebGLRenderingContext_get_LINE_LOOP(This,retVal)	\
    ( (This)->lpVtbl -> get_LINE_LOOP(This,retVal) ) 

#define IWebGLRenderingContext_get_LINE_STRIP(This,retVal)	\
    ( (This)->lpVtbl -> get_LINE_STRIP(This,retVal) ) 

#define IWebGLRenderingContext_get_TRIANGLES(This,retVal)	\
    ( (This)->lpVtbl -> get_TRIANGLES(This,retVal) ) 

#define IWebGLRenderingContext_get_TRIANGLE_STRIP(This,retVal)	\
    ( (This)->lpVtbl -> get_TRIANGLE_STRIP(This,retVal) ) 

#define IWebGLRenderingContext_get_TRIANGLE_FAN(This,retVal)	\
    ( (This)->lpVtbl -> get_TRIANGLE_FAN(This,retVal) ) 

#define IWebGLRenderingContext_get_ZERO(This,retVal)	\
    ( (This)->lpVtbl -> get_ZERO(This,retVal) ) 

#define IWebGLRenderingContext_get_ONE(This,retVal)	\
    ( (This)->lpVtbl -> get_ONE(This,retVal) ) 

#define IWebGLRenderingContext_get_SRC_COLOR(This,retVal)	\
    ( (This)->lpVtbl -> get_SRC_COLOR(This,retVal) ) 

#define IWebGLRenderingContext_get_ONE_MINUS_SRC_COLOR(This,retVal)	\
    ( (This)->lpVtbl -> get_ONE_MINUS_SRC_COLOR(This,retVal) ) 

#define IWebGLRenderingContext_get_SRC_ALPHA(This,retVal)	\
    ( (This)->lpVtbl -> get_SRC_ALPHA(This,retVal) ) 

#define IWebGLRenderingContext_get_ONE_MINUS_SRC_ALPHA(This,retVal)	\
    ( (This)->lpVtbl -> get_ONE_MINUS_SRC_ALPHA(This,retVal) ) 

#define IWebGLRenderingContext_get_DST_ALPHA(This,retVal)	\
    ( (This)->lpVtbl -> get_DST_ALPHA(This,retVal) ) 

#define IWebGLRenderingContext_get_ONE_MINUS_DST_ALPHA(This,retVal)	\
    ( (This)->lpVtbl -> get_ONE_MINUS_DST_ALPHA(This,retVal) ) 

#define IWebGLRenderingContext_get_DST_COLOR(This,retVal)	\
    ( (This)->lpVtbl -> get_DST_COLOR(This,retVal) ) 

#define IWebGLRenderingContext_get_ONE_MINUS_DST_COLOR(This,retVal)	\
    ( (This)->lpVtbl -> get_ONE_MINUS_DST_COLOR(This,retVal) ) 

#define IWebGLRenderingContext_get_SRC_ALPHA_SATURATE(This,retVal)	\
    ( (This)->lpVtbl -> get_SRC_ALPHA_SATURATE(This,retVal) ) 

#define IWebGLRenderingContext_get_FUNC_ADD(This,retVal)	\
    ( (This)->lpVtbl -> get_FUNC_ADD(This,retVal) ) 

#define IWebGLRenderingContext_get_BLEND_EQUATION(This,retVal)	\
    ( (This)->lpVtbl -> get_BLEND_EQUATION(This,retVal) ) 

#define IWebGLRenderingContext_get_BLEND_EQUATION_RGB(This,retVal)	\
    ( (This)->lpVtbl -> get_BLEND_EQUATION_RGB(This,retVal) ) 

#define IWebGLRenderingContext_get_BLEND_EQUATION_ALPHA(This,retVal)	\
    ( (This)->lpVtbl -> get_BLEND_EQUATION_ALPHA(This,retVal) ) 

#define IWebGLRenderingContext_get_FUNC_SUBTRACT(This,retVal)	\
    ( (This)->lpVtbl -> get_FUNC_SUBTRACT(This,retVal) ) 

#define IWebGLRenderingContext_get_FUNC_REVERSE_SUBTRACT(This,retVal)	\
    ( (This)->lpVtbl -> get_FUNC_REVERSE_SUBTRACT(This,retVal) ) 

#define IWebGLRenderingContext_get_BLEND_DST_RGB(This,retVal)	\
    ( (This)->lpVtbl -> get_BLEND_DST_RGB(This,retVal) ) 

#define IWebGLRenderingContext_get_BLEND_SRC_RGB(This,retVal)	\
    ( (This)->lpVtbl -> get_BLEND_SRC_RGB(This,retVal) ) 

#define IWebGLRenderingContext_get_BLEND_DST_ALPHA(This,retVal)	\
    ( (This)->lpVtbl -> get_BLEND_DST_ALPHA(This,retVal) ) 

#define IWebGLRenderingContext_get_BLEND_SRC_ALPHA(This,retVal)	\
    ( (This)->lpVtbl -> get_BLEND_SRC_ALPHA(This,retVal) ) 

#define IWebGLRenderingContext_get_CONSTANT_COLOR(This,retVal)	\
    ( (This)->lpVtbl -> get_CONSTANT_COLOR(This,retVal) ) 

#define IWebGLRenderingContext_get_ONE_MINUS_CONSTANT_COLOR(This,retVal)	\
    ( (This)->lpVtbl -> get_ONE_MINUS_CONSTANT_COLOR(This,retVal) ) 

#define IWebGLRenderingContext_get_CONSTANT_ALPHA(This,retVal)	\
    ( (This)->lpVtbl -> get_CONSTANT_ALPHA(This,retVal) ) 

#define IWebGLRenderingContext_get_ONE_MINUS_CONSTANT_ALPHA(This,retVal)	\
    ( (This)->lpVtbl -> get_ONE_MINUS_CONSTANT_ALPHA(This,retVal) ) 

#define IWebGLRenderingContext_get_BLEND_COLOR(This,retVal)	\
    ( (This)->lpVtbl -> get_BLEND_COLOR(This,retVal) ) 

#define IWebGLRenderingContext_get_ARRAY_BUFFER(This,retVal)	\
    ( (This)->lpVtbl -> get_ARRAY_BUFFER(This,retVal) ) 

#define IWebGLRenderingContext_get_ELEMENT_ARRAY_BUFFER(This,retVal)	\
    ( (This)->lpVtbl -> get_ELEMENT_ARRAY_BUFFER(This,retVal) ) 

#define IWebGLRenderingContext_get_ARRAY_BUFFER_BINDING(This,retVal)	\
    ( (This)->lpVtbl -> get_ARRAY_BUFFER_BINDING(This,retVal) ) 

#define IWebGLRenderingContext_get_ELEMENT_ARRAY_BUFFER_BINDING(This,retVal)	\
    ( (This)->lpVtbl -> get_ELEMENT_ARRAY_BUFFER_BINDING(This,retVal) ) 

#define IWebGLRenderingContext_get_STREAM_DRAW(This,retVal)	\
    ( (This)->lpVtbl -> get_STREAM_DRAW(This,retVal) ) 

#define IWebGLRenderingContext_get_STATIC_DRAW(This,retVal)	\
    ( (This)->lpVtbl -> get_STATIC_DRAW(This,retVal) ) 

#define IWebGLRenderingContext_get_DYNAMIC_DRAW(This,retVal)	\
    ( (This)->lpVtbl -> get_DYNAMIC_DRAW(This,retVal) ) 

#define IWebGLRenderingContext_get_BUFFER_SIZE(This,retVal)	\
    ( (This)->lpVtbl -> get_BUFFER_SIZE(This,retVal) ) 

#define IWebGLRenderingContext_get_BUFFER_USAGE(This,retVal)	\
    ( (This)->lpVtbl -> get_BUFFER_USAGE(This,retVal) ) 

#define IWebGLRenderingContext_get_CURRENT_VERTEX_ATTRIB(This,retVal)	\
    ( (This)->lpVtbl -> get_CURRENT_VERTEX_ATTRIB(This,retVal) ) 

#define IWebGLRenderingContext_get_FRONT(This,retVal)	\
    ( (This)->lpVtbl -> get_FRONT(This,retVal) ) 

#define IWebGLRenderingContext_get_BACK(This,retVal)	\
    ( (This)->lpVtbl -> get_BACK(This,retVal) ) 

#define IWebGLRenderingContext_get_FRONT_AND_BACK(This,retVal)	\
    ( (This)->lpVtbl -> get_FRONT_AND_BACK(This,retVal) ) 

#define IWebGLRenderingContext_get_CULL_FACE(This,retVal)	\
    ( (This)->lpVtbl -> get_CULL_FACE(This,retVal) ) 

#define IWebGLRenderingContext_get_BLEND(This,retVal)	\
    ( (This)->lpVtbl -> get_BLEND(This,retVal) ) 

#define IWebGLRenderingContext_get_DITHER(This,retVal)	\
    ( (This)->lpVtbl -> get_DITHER(This,retVal) ) 

#define IWebGLRenderingContext_get_STENCIL_TEST(This,retVal)	\
    ( (This)->lpVtbl -> get_STENCIL_TEST(This,retVal) ) 

#define IWebGLRenderingContext_get_DEPTH_TEST(This,retVal)	\
    ( (This)->lpVtbl -> get_DEPTH_TEST(This,retVal) ) 

#define IWebGLRenderingContext_get_SCISSOR_TEST(This,retVal)	\
    ( (This)->lpVtbl -> get_SCISSOR_TEST(This,retVal) ) 

#define IWebGLRenderingContext_get_POLYGON_OFFSET_FILL(This,retVal)	\
    ( (This)->lpVtbl -> get_POLYGON_OFFSET_FILL(This,retVal) ) 

#define IWebGLRenderingContext_get_SAMPLE_ALPHA_TO_COVERAGE(This,retVal)	\
    ( (This)->lpVtbl -> get_SAMPLE_ALPHA_TO_COVERAGE(This,retVal) ) 

#define IWebGLRenderingContext_get_SAMPLE_COVERAGE(This,retVal)	\
    ( (This)->lpVtbl -> get_SAMPLE_COVERAGE(This,retVal) ) 

#define IWebGLRenderingContext_get_NO_ERROR(This,retVal)	\
    ( (This)->lpVtbl -> get_NO_ERROR(This,retVal) ) 

#define IWebGLRenderingContext_get_INVALID_ENUM(This,retVal)	\
    ( (This)->lpVtbl -> get_INVALID_ENUM(This,retVal) ) 

#define IWebGLRenderingContext_get_INVALID_VALUE(This,retVal)	\
    ( (This)->lpVtbl -> get_INVALID_VALUE(This,retVal) ) 

#define IWebGLRenderingContext_get_INVALID_OPERATION(This,retVal)	\
    ( (This)->lpVtbl -> get_INVALID_OPERATION(This,retVal) ) 

#define IWebGLRenderingContext_get_OUT_OF_MEMORY(This,retVal)	\
    ( (This)->lpVtbl -> get_OUT_OF_MEMORY(This,retVal) ) 

#define IWebGLRenderingContext_get_CW(This,retVal)	\
    ( (This)->lpVtbl -> get_CW(This,retVal) ) 

#define IWebGLRenderingContext_get_CCW(This,retVal)	\
    ( (This)->lpVtbl -> get_CCW(This,retVal) ) 

#define IWebGLRenderingContext_get_LINE_WIDTH(This,retVal)	\
    ( (This)->lpVtbl -> get_LINE_WIDTH(This,retVal) ) 

#define IWebGLRenderingContext_get_ALIASED_POINT_SIZE_RANGE(This,retVal)	\
    ( (This)->lpVtbl -> get_ALIASED_POINT_SIZE_RANGE(This,retVal) ) 

#define IWebGLRenderingContext_get_ALIASED_LINE_WIDTH_RANGE(This,retVal)	\
    ( (This)->lpVtbl -> get_ALIASED_LINE_WIDTH_RANGE(This,retVal) ) 

#define IWebGLRenderingContext_get_CULL_FACE_MODE(This,retVal)	\
    ( (This)->lpVtbl -> get_CULL_FACE_MODE(This,retVal) ) 

#define IWebGLRenderingContext_get_FRONT_FACE(This,retVal)	\
    ( (This)->lpVtbl -> get_FRONT_FACE(This,retVal) ) 

#define IWebGLRenderingContext_get_DEPTH_RANGE(This,retVal)	\
    ( (This)->lpVtbl -> get_DEPTH_RANGE(This,retVal) ) 

#define IWebGLRenderingContext_get_DEPTH_WRITEMASK(This,retVal)	\
    ( (This)->lpVtbl -> get_DEPTH_WRITEMASK(This,retVal) ) 

#define IWebGLRenderingContext_get_DEPTH_CLEAR_VALUE(This,retVal)	\
    ( (This)->lpVtbl -> get_DEPTH_CLEAR_VALUE(This,retVal) ) 

#define IWebGLRenderingContext_get_DEPTH_FUNC(This,retVal)	\
    ( (This)->lpVtbl -> get_DEPTH_FUNC(This,retVal) ) 

#define IWebGLRenderingContext_get_STENCIL_CLEAR_VALUE(This,retVal)	\
    ( (This)->lpVtbl -> get_STENCIL_CLEAR_VALUE(This,retVal) ) 

#define IWebGLRenderingContext_get_STENCIL_FUNC(This,retVal)	\
    ( (This)->lpVtbl -> get_STENCIL_FUNC(This,retVal) ) 

#define IWebGLRenderingContext_get_STENCIL_FAIL(This,retVal)	\
    ( (This)->lpVtbl -> get_STENCIL_FAIL(This,retVal) ) 

#define IWebGLRenderingContext_get_STENCIL_PASS_DEPTH_FAIL(This,retVal)	\
    ( (This)->lpVtbl -> get_STENCIL_PASS_DEPTH_FAIL(This,retVal) ) 

#define IWebGLRenderingContext_get_STENCIL_PASS_DEPTH_PASS(This,retVal)	\
    ( (This)->lpVtbl -> get_STENCIL_PASS_DEPTH_PASS(This,retVal) ) 

#define IWebGLRenderingContext_get_STENCIL_REF(This,retVal)	\
    ( (This)->lpVtbl -> get_STENCIL_REF(This,retVal) ) 

#define IWebGLRenderingContext_get_STENCIL_VALUE_MASK(This,retVal)	\
    ( (This)->lpVtbl -> get_STENCIL_VALUE_MASK(This,retVal) ) 

#define IWebGLRenderingContext_get_STENCIL_WRITEMASK(This,retVal)	\
    ( (This)->lpVtbl -> get_STENCIL_WRITEMASK(This,retVal) ) 

#define IWebGLRenderingContext_get_STENCIL_BACK_FUNC(This,retVal)	\
    ( (This)->lpVtbl -> get_STENCIL_BACK_FUNC(This,retVal) ) 

#define IWebGLRenderingContext_get_STENCIL_BACK_FAIL(This,retVal)	\
    ( (This)->lpVtbl -> get_STENCIL_BACK_FAIL(This,retVal) ) 

#define IWebGLRenderingContext_get_STENCIL_BACK_PASS_DEPTH_FAIL(This,retVal)	\
    ( (This)->lpVtbl -> get_STENCIL_BACK_PASS_DEPTH_FAIL(This,retVal) ) 

#define IWebGLRenderingContext_get_STENCIL_BACK_PASS_DEPTH_PASS(This,retVal)	\
    ( (This)->lpVtbl -> get_STENCIL_BACK_PASS_DEPTH_PASS(This,retVal) ) 

#define IWebGLRenderingContext_get_STENCIL_BACK_REF(This,retVal)	\
    ( (This)->lpVtbl -> get_STENCIL_BACK_REF(This,retVal) ) 

#define IWebGLRenderingContext_get_STENCIL_BACK_VALUE_MASK(This,retVal)	\
    ( (This)->lpVtbl -> get_STENCIL_BACK_VALUE_MASK(This,retVal) ) 

#define IWebGLRenderingContext_get_STENCIL_BACK_WRITEMASK(This,retVal)	\
    ( (This)->lpVtbl -> get_STENCIL_BACK_WRITEMASK(This,retVal) ) 

#define IWebGLRenderingContext_get_VIEWPORT(This,retVal)	\
    ( (This)->lpVtbl -> get_VIEWPORT(This,retVal) ) 

#define IWebGLRenderingContext_get_SCISSOR_BOX(This,retVal)	\
    ( (This)->lpVtbl -> get_SCISSOR_BOX(This,retVal) ) 

#define IWebGLRenderingContext_get_COLOR_CLEAR_VALUE(This,retVal)	\
    ( (This)->lpVtbl -> get_COLOR_CLEAR_VALUE(This,retVal) ) 

#define IWebGLRenderingContext_get_COLOR_WRITEMASK(This,retVal)	\
    ( (This)->lpVtbl -> get_COLOR_WRITEMASK(This,retVal) ) 

#define IWebGLRenderingContext_get_UNPACK_ALIGNMENT(This,retVal)	\
    ( (This)->lpVtbl -> get_UNPACK_ALIGNMENT(This,retVal) ) 

#define IWebGLRenderingContext_get_PACK_ALIGNMENT(This,retVal)	\
    ( (This)->lpVtbl -> get_PACK_ALIGNMENT(This,retVal) ) 

#define IWebGLRenderingContext_get_MAX_TEXTURE_SIZE(This,retVal)	\
    ( (This)->lpVtbl -> get_MAX_TEXTURE_SIZE(This,retVal) ) 

#define IWebGLRenderingContext_get_MAX_VIEWPORT_DIMS(This,retVal)	\
    ( (This)->lpVtbl -> get_MAX_VIEWPORT_DIMS(This,retVal) ) 

#define IWebGLRenderingContext_get_SUBPIXEL_BITS(This,retVal)	\
    ( (This)->lpVtbl -> get_SUBPIXEL_BITS(This,retVal) ) 

#define IWebGLRenderingContext_get_RED_BITS(This,retVal)	\
    ( (This)->lpVtbl -> get_RED_BITS(This,retVal) ) 

#define IWebGLRenderingContext_get_GREEN_BITS(This,retVal)	\
    ( (This)->lpVtbl -> get_GREEN_BITS(This,retVal) ) 

#define IWebGLRenderingContext_get_BLUE_BITS(This,retVal)	\
    ( (This)->lpVtbl -> get_BLUE_BITS(This,retVal) ) 

#define IWebGLRenderingContext_get_ALPHA_BITS(This,retVal)	\
    ( (This)->lpVtbl -> get_ALPHA_BITS(This,retVal) ) 

#define IWebGLRenderingContext_get_DEPTH_BITS(This,retVal)	\
    ( (This)->lpVtbl -> get_DEPTH_BITS(This,retVal) ) 

#define IWebGLRenderingContext_get_STENCIL_BITS(This,retVal)	\
    ( (This)->lpVtbl -> get_STENCIL_BITS(This,retVal) ) 

#define IWebGLRenderingContext_get_POLYGON_OFFSET_UNITS(This,retVal)	\
    ( (This)->lpVtbl -> get_POLYGON_OFFSET_UNITS(This,retVal) ) 

#define IWebGLRenderingContext_get_POLYGON_OFFSET_FACTOR(This,retVal)	\
    ( (This)->lpVtbl -> get_POLYGON_OFFSET_FACTOR(This,retVal) ) 

#define IWebGLRenderingContext_get_TEXTURE_BINDING_2D(This,retVal)	\
    ( (This)->lpVtbl -> get_TEXTURE_BINDING_2D(This,retVal) ) 

#define IWebGLRenderingContext_get_SAMPLE_BUFFERS(This,retVal)	\
    ( (This)->lpVtbl -> get_SAMPLE_BUFFERS(This,retVal) ) 

#define IWebGLRenderingContext_get_SAMPLES(This,retVal)	\
    ( (This)->lpVtbl -> get_SAMPLES(This,retVal) ) 

#define IWebGLRenderingContext_get_SAMPLE_COVERAGE_VALUE(This,retVal)	\
    ( (This)->lpVtbl -> get_SAMPLE_COVERAGE_VALUE(This,retVal) ) 

#define IWebGLRenderingContext_get_SAMPLE_COVERAGE_INVERT(This,retVal)	\
    ( (This)->lpVtbl -> get_SAMPLE_COVERAGE_INVERT(This,retVal) ) 

#define IWebGLRenderingContext_get_COMPRESSED_TEXTURE_FORMATS(This,retVal)	\
    ( (This)->lpVtbl -> get_COMPRESSED_TEXTURE_FORMATS(This,retVal) ) 

#define IWebGLRenderingContext_get_DONT_CARE(This,retVal)	\
    ( (This)->lpVtbl -> get_DONT_CARE(This,retVal) ) 

#define IWebGLRenderingContext_get_FASTEST(This,retVal)	\
    ( (This)->lpVtbl -> get_FASTEST(This,retVal) ) 

#define IWebGLRenderingContext_get_NICEST(This,retVal)	\
    ( (This)->lpVtbl -> get_NICEST(This,retVal) ) 

#define IWebGLRenderingContext_get_GENERATE_MIPMAP_HINT(This,retVal)	\
    ( (This)->lpVtbl -> get_GENERATE_MIPMAP_HINT(This,retVal) ) 

#define IWebGLRenderingContext_get_BYTE(This,retVal)	\
    ( (This)->lpVtbl -> get_BYTE(This,retVal) ) 

#define IWebGLRenderingContext_get_UNSIGNED_BYTE(This,retVal)	\
    ( (This)->lpVtbl -> get_UNSIGNED_BYTE(This,retVal) ) 

#define IWebGLRenderingContext_get_SHORT(This,retVal)	\
    ( (This)->lpVtbl -> get_SHORT(This,retVal) ) 

#define IWebGLRenderingContext_get_UNSIGNED_SHORT(This,retVal)	\
    ( (This)->lpVtbl -> get_UNSIGNED_SHORT(This,retVal) ) 

#define IWebGLRenderingContext_get_INT(This,retVal)	\
    ( (This)->lpVtbl -> get_INT(This,retVal) ) 

#define IWebGLRenderingContext_get_UNSIGNED_INT(This,retVal)	\
    ( (This)->lpVtbl -> get_UNSIGNED_INT(This,retVal) ) 

#define IWebGLRenderingContext_get_FLOAT(This,retVal)	\
    ( (This)->lpVtbl -> get_FLOAT(This,retVal) ) 

#define IWebGLRenderingContext_get_DEPTH_COMPONENT(This,retVal)	\
    ( (This)->lpVtbl -> get_DEPTH_COMPONENT(This,retVal) ) 

#define IWebGLRenderingContext_get_ALPHA(This,retVal)	\
    ( (This)->lpVtbl -> get_ALPHA(This,retVal) ) 

#define IWebGLRenderingContext_get_RGB(This,retVal)	\
    ( (This)->lpVtbl -> get_RGB(This,retVal) ) 

#define IWebGLRenderingContext_get_RGBA(This,retVal)	\
    ( (This)->lpVtbl -> get_RGBA(This,retVal) ) 

#define IWebGLRenderingContext_get_LUMINANCE(This,retVal)	\
    ( (This)->lpVtbl -> get_LUMINANCE(This,retVal) ) 

#define IWebGLRenderingContext_get_LUMINANCE_ALPHA(This,retVal)	\
    ( (This)->lpVtbl -> get_LUMINANCE_ALPHA(This,retVal) ) 

#define IWebGLRenderingContext_get_UNSIGNED_SHORT_4_4_4_4(This,retVal)	\
    ( (This)->lpVtbl -> get_UNSIGNED_SHORT_4_4_4_4(This,retVal) ) 

#define IWebGLRenderingContext_get_UNSIGNED_SHORT_5_5_5_1(This,retVal)	\
    ( (This)->lpVtbl -> get_UNSIGNED_SHORT_5_5_5_1(This,retVal) ) 

#define IWebGLRenderingContext_get_UNSIGNED_SHORT_5_6_5(This,retVal)	\
    ( (This)->lpVtbl -> get_UNSIGNED_SHORT_5_6_5(This,retVal) ) 

#define IWebGLRenderingContext_get_FRAGMENT_SHADER(This,retVal)	\
    ( (This)->lpVtbl -> get_FRAGMENT_SHADER(This,retVal) ) 

#define IWebGLRenderingContext_get_VERTEX_SHADER(This,retVal)	\
    ( (This)->lpVtbl -> get_VERTEX_SHADER(This,retVal) ) 

#define IWebGLRenderingContext_get_MAX_VERTEX_ATTRIBS(This,retVal)	\
    ( (This)->lpVtbl -> get_MAX_VERTEX_ATTRIBS(This,retVal) ) 

#define IWebGLRenderingContext_get_MAX_VERTEX_UNIFORM_VECTORS(This,retVal)	\
    ( (This)->lpVtbl -> get_MAX_VERTEX_UNIFORM_VECTORS(This,retVal) ) 

#define IWebGLRenderingContext_get_MAX_VARYING_VECTORS(This,retVal)	\
    ( (This)->lpVtbl -> get_MAX_VARYING_VECTORS(This,retVal) ) 

#define IWebGLRenderingContext_get_MAX_COMBINED_TEXTURE_IMAGE_UNITS(This,retVal)	\
    ( (This)->lpVtbl -> get_MAX_COMBINED_TEXTURE_IMAGE_UNITS(This,retVal) ) 

#define IWebGLRenderingContext_get_MAX_VERTEX_TEXTURE_IMAGE_UNITS(This,retVal)	\
    ( (This)->lpVtbl -> get_MAX_VERTEX_TEXTURE_IMAGE_UNITS(This,retVal) ) 

#define IWebGLRenderingContext_get_MAX_TEXTURE_IMAGE_UNITS(This,retVal)	\
    ( (This)->lpVtbl -> get_MAX_TEXTURE_IMAGE_UNITS(This,retVal) ) 

#define IWebGLRenderingContext_get_MAX_FRAGMENT_UNIFORM_VECTORS(This,retVal)	\
    ( (This)->lpVtbl -> get_MAX_FRAGMENT_UNIFORM_VECTORS(This,retVal) ) 

#define IWebGLRenderingContext_get_SHADER_TYPE(This,retVal)	\
    ( (This)->lpVtbl -> get_SHADER_TYPE(This,retVal) ) 

#define IWebGLRenderingContext_get_DELETE_STATUS(This,retVal)	\
    ( (This)->lpVtbl -> get_DELETE_STATUS(This,retVal) ) 

#define IWebGLRenderingContext_get_LINK_STATUS(This,retVal)	\
    ( (This)->lpVtbl -> get_LINK_STATUS(This,retVal) ) 

#define IWebGLRenderingContext_get_VALIDATE_STATUS(This,retVal)	\
    ( (This)->lpVtbl -> get_VALIDATE_STATUS(This,retVal) ) 

#define IWebGLRenderingContext_get_ATTACHED_SHADERS(This,retVal)	\
    ( (This)->lpVtbl -> get_ATTACHED_SHADERS(This,retVal) ) 

#define IWebGLRenderingContext_get_ACTIVE_UNIFORMS(This,retVal)	\
    ( (This)->lpVtbl -> get_ACTIVE_UNIFORMS(This,retVal) ) 

#define IWebGLRenderingContext_get_ACTIVE_ATTRIBUTES(This,retVal)	\
    ( (This)->lpVtbl -> get_ACTIVE_ATTRIBUTES(This,retVal) ) 

#define IWebGLRenderingContext_get_SHADING_LANGUAGE_VERSION(This,retVal)	\
    ( (This)->lpVtbl -> get_SHADING_LANGUAGE_VERSION(This,retVal) ) 

#define IWebGLRenderingContext_get_CURRENT_PROGRAM(This,retVal)	\
    ( (This)->lpVtbl -> get_CURRENT_PROGRAM(This,retVal) ) 

#define IWebGLRenderingContext_get_NEVER(This,retVal)	\
    ( (This)->lpVtbl -> get_NEVER(This,retVal) ) 

#define IWebGLRenderingContext_get_LESS(This,retVal)	\
    ( (This)->lpVtbl -> get_LESS(This,retVal) ) 

#define IWebGLRenderingContext_get_EQUAL(This,retVal)	\
    ( (This)->lpVtbl -> get_EQUAL(This,retVal) ) 

#define IWebGLRenderingContext_get_LEQUAL(This,retVal)	\
    ( (This)->lpVtbl -> get_LEQUAL(This,retVal) ) 

#define IWebGLRenderingContext_get_GREATER(This,retVal)	\
    ( (This)->lpVtbl -> get_GREATER(This,retVal) ) 

#define IWebGLRenderingContext_get_NOTEQUAL(This,retVal)	\
    ( (This)->lpVtbl -> get_NOTEQUAL(This,retVal) ) 

#define IWebGLRenderingContext_get_GEQUAL(This,retVal)	\
    ( (This)->lpVtbl -> get_GEQUAL(This,retVal) ) 

#define IWebGLRenderingContext_get_ALWAYS(This,retVal)	\
    ( (This)->lpVtbl -> get_ALWAYS(This,retVal) ) 

#define IWebGLRenderingContext_get_KEEP(This,retVal)	\
    ( (This)->lpVtbl -> get_KEEP(This,retVal) ) 

#define IWebGLRenderingContext_get_REPLACE(This,retVal)	\
    ( (This)->lpVtbl -> get_REPLACE(This,retVal) ) 

#define IWebGLRenderingContext_get_INCR(This,retVal)	\
    ( (This)->lpVtbl -> get_INCR(This,retVal) ) 

#define IWebGLRenderingContext_get_DECR(This,retVal)	\
    ( (This)->lpVtbl -> get_DECR(This,retVal) ) 

#define IWebGLRenderingContext_get_INVERT(This,retVal)	\
    ( (This)->lpVtbl -> get_INVERT(This,retVal) ) 

#define IWebGLRenderingContext_get_INCR_WRAP(This,retVal)	\
    ( (This)->lpVtbl -> get_INCR_WRAP(This,retVal) ) 

#define IWebGLRenderingContext_get_DECR_WRAP(This,retVal)	\
    ( (This)->lpVtbl -> get_DECR_WRAP(This,retVal) ) 

#define IWebGLRenderingContext_get_VENDOR(This,retVal)	\
    ( (This)->lpVtbl -> get_VENDOR(This,retVal) ) 

#define IWebGLRenderingContext_get_RENDERER(This,retVal)	\
    ( (This)->lpVtbl -> get_RENDERER(This,retVal) ) 

#define IWebGLRenderingContext_get_VERSION(This,retVal)	\
    ( (This)->lpVtbl -> get_VERSION(This,retVal) ) 

#define IWebGLRenderingContext_get_NEAREST(This,retVal)	\
    ( (This)->lpVtbl -> get_NEAREST(This,retVal) ) 

#define IWebGLRenderingContext_get_LINEAR(This,retVal)	\
    ( (This)->lpVtbl -> get_LINEAR(This,retVal) ) 

#define IWebGLRenderingContext_get_NEAREST_MIPMAP_NEAREST(This,retVal)	\
    ( (This)->lpVtbl -> get_NEAREST_MIPMAP_NEAREST(This,retVal) ) 

#define IWebGLRenderingContext_get_LINEAR_MIPMAP_NEAREST(This,retVal)	\
    ( (This)->lpVtbl -> get_LINEAR_MIPMAP_NEAREST(This,retVal) ) 

#define IWebGLRenderingContext_get_NEAREST_MIPMAP_LINEAR(This,retVal)	\
    ( (This)->lpVtbl -> get_NEAREST_MIPMAP_LINEAR(This,retVal) ) 

#define IWebGLRenderingContext_get_LINEAR_MIPMAP_LINEAR(This,retVal)	\
    ( (This)->lpVtbl -> get_LINEAR_MIPMAP_LINEAR(This,retVal) ) 

#define IWebGLRenderingContext_get_TEXTURE_MAG_FILTER(This,retVal)	\
    ( (This)->lpVtbl -> get_TEXTURE_MAG_FILTER(This,retVal) ) 

#define IWebGLRenderingContext_get_TEXTURE_MIN_FILTER(This,retVal)	\
    ( (This)->lpVtbl -> get_TEXTURE_MIN_FILTER(This,retVal) ) 

#define IWebGLRenderingContext_get_TEXTURE_WRAP_S(This,retVal)	\
    ( (This)->lpVtbl -> get_TEXTURE_WRAP_S(This,retVal) ) 

#define IWebGLRenderingContext_get_TEXTURE_WRAP_T(This,retVal)	\
    ( (This)->lpVtbl -> get_TEXTURE_WRAP_T(This,retVal) ) 

#define IWebGLRenderingContext_get_TEXTURE_2D(This,retVal)	\
    ( (This)->lpVtbl -> get_TEXTURE_2D(This,retVal) ) 

#define IWebGLRenderingContext_get_TEXTURE(This,retVal)	\
    ( (This)->lpVtbl -> get_TEXTURE(This,retVal) ) 

#define IWebGLRenderingContext_get_TEXTURE_CUBE_MAP(This,retVal)	\
    ( (This)->lpVtbl -> get_TEXTURE_CUBE_MAP(This,retVal) ) 

#define IWebGLRenderingContext_get_TEXTURE_BINDING_CUBE_MAP(This,retVal)	\
    ( (This)->lpVtbl -> get_TEXTURE_BINDING_CUBE_MAP(This,retVal) ) 

#define IWebGLRenderingContext_get_TEXTURE_CUBE_MAP_POSITIVE_X(This,retVal)	\
    ( (This)->lpVtbl -> get_TEXTURE_CUBE_MAP_POSITIVE_X(This,retVal) ) 

#define IWebGLRenderingContext_get_TEXTURE_CUBE_MAP_NEGATIVE_X(This,retVal)	\
    ( (This)->lpVtbl -> get_TEXTURE_CUBE_MAP_NEGATIVE_X(This,retVal) ) 

#define IWebGLRenderingContext_get_TEXTURE_CUBE_MAP_POSITIVE_Y(This,retVal)	\
    ( (This)->lpVtbl -> get_TEXTURE_CUBE_MAP_POSITIVE_Y(This,retVal) ) 

#define IWebGLRenderingContext_get_TEXTURE_CUBE_MAP_NEGATIVE_Y(This,retVal)	\
    ( (This)->lpVtbl -> get_TEXTURE_CUBE_MAP_NEGATIVE_Y(This,retVal) ) 

#define IWebGLRenderingContext_get_TEXTURE_CUBE_MAP_POSITIVE_Z(This,retVal)	\
    ( (This)->lpVtbl -> get_TEXTURE_CUBE_MAP_POSITIVE_Z(This,retVal) ) 

#define IWebGLRenderingContext_get_TEXTURE_CUBE_MAP_NEGATIVE_Z(This,retVal)	\
    ( (This)->lpVtbl -> get_TEXTURE_CUBE_MAP_NEGATIVE_Z(This,retVal) ) 

#define IWebGLRenderingContext_get_MAX_CUBE_MAP_TEXTURE_SIZE(This,retVal)	\
    ( (This)->lpVtbl -> get_MAX_CUBE_MAP_TEXTURE_SIZE(This,retVal) ) 

#define IWebGLRenderingContext_get_TEXTURE0(This,retVal)	\
    ( (This)->lpVtbl -> get_TEXTURE0(This,retVal) ) 

#define IWebGLRenderingContext_get_TEXTURE1(This,retVal)	\
    ( (This)->lpVtbl -> get_TEXTURE1(This,retVal) ) 

#define IWebGLRenderingContext_get_TEXTURE2(This,retVal)	\
    ( (This)->lpVtbl -> get_TEXTURE2(This,retVal) ) 

#define IWebGLRenderingContext_get_TEXTURE3(This,retVal)	\
    ( (This)->lpVtbl -> get_TEXTURE3(This,retVal) ) 

#define IWebGLRenderingContext_get_TEXTURE4(This,retVal)	\
    ( (This)->lpVtbl -> get_TEXTURE4(This,retVal) ) 

#define IWebGLRenderingContext_get_TEXTURE5(This,retVal)	\
    ( (This)->lpVtbl -> get_TEXTURE5(This,retVal) ) 

#define IWebGLRenderingContext_get_TEXTURE6(This,retVal)	\
    ( (This)->lpVtbl -> get_TEXTURE6(This,retVal) ) 

#define IWebGLRenderingContext_get_TEXTURE7(This,retVal)	\
    ( (This)->lpVtbl -> get_TEXTURE7(This,retVal) ) 

#define IWebGLRenderingContext_get_TEXTURE8(This,retVal)	\
    ( (This)->lpVtbl -> get_TEXTURE8(This,retVal) ) 

#define IWebGLRenderingContext_get_TEXTURE9(This,retVal)	\
    ( (This)->lpVtbl -> get_TEXTURE9(This,retVal) ) 

#define IWebGLRenderingContext_get_TEXTURE10(This,retVal)	\
    ( (This)->lpVtbl -> get_TEXTURE10(This,retVal) ) 

#define IWebGLRenderingContext_get_TEXTURE11(This,retVal)	\
    ( (This)->lpVtbl -> get_TEXTURE11(This,retVal) ) 

#define IWebGLRenderingContext_get_TEXTURE12(This,retVal)	\
    ( (This)->lpVtbl -> get_TEXTURE12(This,retVal) ) 

#define IWebGLRenderingContext_get_TEXTURE13(This,retVal)	\
    ( (This)->lpVtbl -> get_TEXTURE13(This,retVal) ) 

#define IWebGLRenderingContext_get_TEXTURE14(This,retVal)	\
    ( (This)->lpVtbl -> get_TEXTURE14(This,retVal) ) 

#define IWebGLRenderingContext_get_TEXTURE15(This,retVal)	\
    ( (This)->lpVtbl -> get_TEXTURE15(This,retVal) ) 

#define IWebGLRenderingContext_get_TEXTURE16(This,retVal)	\
    ( (This)->lpVtbl -> get_TEXTURE16(This,retVal) ) 

#define IWebGLRenderingContext_get_TEXTURE17(This,retVal)	\
    ( (This)->lpVtbl -> get_TEXTURE17(This,retVal) ) 

#define IWebGLRenderingContext_get_TEXTURE18(This,retVal)	\
    ( (This)->lpVtbl -> get_TEXTURE18(This,retVal) ) 

#define IWebGLRenderingContext_get_TEXTURE19(This,retVal)	\
    ( (This)->lpVtbl -> get_TEXTURE19(This,retVal) ) 

#define IWebGLRenderingContext_get_TEXTURE20(This,retVal)	\
    ( (This)->lpVtbl -> get_TEXTURE20(This,retVal) ) 

#define IWebGLRenderingContext_get_TEXTURE21(This,retVal)	\
    ( (This)->lpVtbl -> get_TEXTURE21(This,retVal) ) 

#define IWebGLRenderingContext_get_TEXTURE22(This,retVal)	\
    ( (This)->lpVtbl -> get_TEXTURE22(This,retVal) ) 

#define IWebGLRenderingContext_get_TEXTURE23(This,retVal)	\
    ( (This)->lpVtbl -> get_TEXTURE23(This,retVal) ) 

#define IWebGLRenderingContext_get_TEXTURE24(This,retVal)	\
    ( (This)->lpVtbl -> get_TEXTURE24(This,retVal) ) 

#define IWebGLRenderingContext_get_TEXTURE25(This,retVal)	\
    ( (This)->lpVtbl -> get_TEXTURE25(This,retVal) ) 

#define IWebGLRenderingContext_get_TEXTURE26(This,retVal)	\
    ( (This)->lpVtbl -> get_TEXTURE26(This,retVal) ) 

#define IWebGLRenderingContext_get_TEXTURE27(This,retVal)	\
    ( (This)->lpVtbl -> get_TEXTURE27(This,retVal) ) 

#define IWebGLRenderingContext_get_TEXTURE28(This,retVal)	\
    ( (This)->lpVtbl -> get_TEXTURE28(This,retVal) ) 

#define IWebGLRenderingContext_get_TEXTURE29(This,retVal)	\
    ( (This)->lpVtbl -> get_TEXTURE29(This,retVal) ) 

#define IWebGLRenderingContext_get_TEXTURE30(This,retVal)	\
    ( (This)->lpVtbl -> get_TEXTURE30(This,retVal) ) 

#define IWebGLRenderingContext_get_TEXTURE31(This,retVal)	\
    ( (This)->lpVtbl -> get_TEXTURE31(This,retVal) ) 

#define IWebGLRenderingContext_get_ACTIVE_TEXTURE(This,retVal)	\
    ( (This)->lpVtbl -> get_ACTIVE_TEXTURE(This,retVal) ) 

#define IWebGLRenderingContext_get_REPEAT(This,retVal)	\
    ( (This)->lpVtbl -> get_REPEAT(This,retVal) ) 

#define IWebGLRenderingContext_get_CLAMP_TO_EDGE(This,retVal)	\
    ( (This)->lpVtbl -> get_CLAMP_TO_EDGE(This,retVal) ) 

#define IWebGLRenderingContext_get_MIRRORED_REPEAT(This,retVal)	\
    ( (This)->lpVtbl -> get_MIRRORED_REPEAT(This,retVal) ) 

#define IWebGLRenderingContext_get_FLOAT_VEC2(This,retVal)	\
    ( (This)->lpVtbl -> get_FLOAT_VEC2(This,retVal) ) 

#define IWebGLRenderingContext_get_FLOAT_VEC3(This,retVal)	\
    ( (This)->lpVtbl -> get_FLOAT_VEC3(This,retVal) ) 

#define IWebGLRenderingContext_get_FLOAT_VEC4(This,retVal)	\
    ( (This)->lpVtbl -> get_FLOAT_VEC4(This,retVal) ) 

#define IWebGLRenderingContext_get_INT_VEC2(This,retVal)	\
    ( (This)->lpVtbl -> get_INT_VEC2(This,retVal) ) 

#define IWebGLRenderingContext_get_INT_VEC3(This,retVal)	\
    ( (This)->lpVtbl -> get_INT_VEC3(This,retVal) ) 

#define IWebGLRenderingContext_get_INT_VEC4(This,retVal)	\
    ( (This)->lpVtbl -> get_INT_VEC4(This,retVal) ) 

#define IWebGLRenderingContext_get_BOOL(This,retVal)	\
    ( (This)->lpVtbl -> get_BOOL(This,retVal) ) 

#define IWebGLRenderingContext_get_BOOL_VEC2(This,retVal)	\
    ( (This)->lpVtbl -> get_BOOL_VEC2(This,retVal) ) 

#define IWebGLRenderingContext_get_BOOL_VEC3(This,retVal)	\
    ( (This)->lpVtbl -> get_BOOL_VEC3(This,retVal) ) 

#define IWebGLRenderingContext_get_BOOL_VEC4(This,retVal)	\
    ( (This)->lpVtbl -> get_BOOL_VEC4(This,retVal) ) 

#define IWebGLRenderingContext_get_FLOAT_MAT2(This,retVal)	\
    ( (This)->lpVtbl -> get_FLOAT_MAT2(This,retVal) ) 

#define IWebGLRenderingContext_get_FLOAT_MAT3(This,retVal)	\
    ( (This)->lpVtbl -> get_FLOAT_MAT3(This,retVal) ) 

#define IWebGLRenderingContext_get_FLOAT_MAT4(This,retVal)	\
    ( (This)->lpVtbl -> get_FLOAT_MAT4(This,retVal) ) 

#define IWebGLRenderingContext_get_SAMPLER_2D(This,retVal)	\
    ( (This)->lpVtbl -> get_SAMPLER_2D(This,retVal) ) 

#define IWebGLRenderingContext_get_SAMPLER_CUBE(This,retVal)	\
    ( (This)->lpVtbl -> get_SAMPLER_CUBE(This,retVal) ) 

#define IWebGLRenderingContext_get_VERTEX_ATTRIB_ARRAY_ENABLED(This,retVal)	\
    ( (This)->lpVtbl -> get_VERTEX_ATTRIB_ARRAY_ENABLED(This,retVal) ) 

#define IWebGLRenderingContext_get_VERTEX_ATTRIB_ARRAY_SIZE(This,retVal)	\
    ( (This)->lpVtbl -> get_VERTEX_ATTRIB_ARRAY_SIZE(This,retVal) ) 

#define IWebGLRenderingContext_get_VERTEX_ATTRIB_ARRAY_STRIDE(This,retVal)	\
    ( (This)->lpVtbl -> get_VERTEX_ATTRIB_ARRAY_STRIDE(This,retVal) ) 

#define IWebGLRenderingContext_get_VERTEX_ATTRIB_ARRAY_TYPE(This,retVal)	\
    ( (This)->lpVtbl -> get_VERTEX_ATTRIB_ARRAY_TYPE(This,retVal) ) 

#define IWebGLRenderingContext_get_VERTEX_ATTRIB_ARRAY_NORMALIZED(This,retVal)	\
    ( (This)->lpVtbl -> get_VERTEX_ATTRIB_ARRAY_NORMALIZED(This,retVal) ) 

#define IWebGLRenderingContext_get_VERTEX_ATTRIB_ARRAY_POINTER(This,retVal)	\
    ( (This)->lpVtbl -> get_VERTEX_ATTRIB_ARRAY_POINTER(This,retVal) ) 

#define IWebGLRenderingContext_get_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING(This,retVal)	\
    ( (This)->lpVtbl -> get_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING(This,retVal) ) 

#define IWebGLRenderingContext_get_COMPILE_STATUS(This,retVal)	\
    ( (This)->lpVtbl -> get_COMPILE_STATUS(This,retVal) ) 

#define IWebGLRenderingContext_get_LOW_FLOAT(This,retVal)	\
    ( (This)->lpVtbl -> get_LOW_FLOAT(This,retVal) ) 

#define IWebGLRenderingContext_get_MEDIUM_FLOAT(This,retVal)	\
    ( (This)->lpVtbl -> get_MEDIUM_FLOAT(This,retVal) ) 

#define IWebGLRenderingContext_get_HIGH_FLOAT(This,retVal)	\
    ( (This)->lpVtbl -> get_HIGH_FLOAT(This,retVal) ) 

#define IWebGLRenderingContext_get_LOW_INT(This,retVal)	\
    ( (This)->lpVtbl -> get_LOW_INT(This,retVal) ) 

#define IWebGLRenderingContext_get_MEDIUM_INT(This,retVal)	\
    ( (This)->lpVtbl -> get_MEDIUM_INT(This,retVal) ) 

#define IWebGLRenderingContext_get_HIGH_INT(This,retVal)	\
    ( (This)->lpVtbl -> get_HIGH_INT(This,retVal) ) 

#define IWebGLRenderingContext_get_FRAMEBUFFER(This,retVal)	\
    ( (This)->lpVtbl -> get_FRAMEBUFFER(This,retVal) ) 

#define IWebGLRenderingContext_get_RENDERBUFFER(This,retVal)	\
    ( (This)->lpVtbl -> get_RENDERBUFFER(This,retVal) ) 

#define IWebGLRenderingContext_get_RGBA4(This,retVal)	\
    ( (This)->lpVtbl -> get_RGBA4(This,retVal) ) 

#define IWebGLRenderingContext_get_RGB5_A1(This,retVal)	\
    ( (This)->lpVtbl -> get_RGB5_A1(This,retVal) ) 

#define IWebGLRenderingContext_get_RGB565(This,retVal)	\
    ( (This)->lpVtbl -> get_RGB565(This,retVal) ) 

#define IWebGLRenderingContext_get_DEPTH_COMPONENT16(This,retVal)	\
    ( (This)->lpVtbl -> get_DEPTH_COMPONENT16(This,retVal) ) 

#define IWebGLRenderingContext_get_STENCIL_INDEX(This,retVal)	\
    ( (This)->lpVtbl -> get_STENCIL_INDEX(This,retVal) ) 

#define IWebGLRenderingContext_get_STENCIL_INDEX8(This,retVal)	\
    ( (This)->lpVtbl -> get_STENCIL_INDEX8(This,retVal) ) 

#define IWebGLRenderingContext_get_DEPTH_STENCIL(This,retVal)	\
    ( (This)->lpVtbl -> get_DEPTH_STENCIL(This,retVal) ) 

#define IWebGLRenderingContext_get_RENDERBUFFER_WIDTH(This,retVal)	\
    ( (This)->lpVtbl -> get_RENDERBUFFER_WIDTH(This,retVal) ) 

#define IWebGLRenderingContext_get_RENDERBUFFER_HEIGHT(This,retVal)	\
    ( (This)->lpVtbl -> get_RENDERBUFFER_HEIGHT(This,retVal) ) 

#define IWebGLRenderingContext_get_RENDERBUFFER_INTERNAL_FORMAT(This,retVal)	\
    ( (This)->lpVtbl -> get_RENDERBUFFER_INTERNAL_FORMAT(This,retVal) ) 

#define IWebGLRenderingContext_get_RENDERBUFFER_RED_SIZE(This,retVal)	\
    ( (This)->lpVtbl -> get_RENDERBUFFER_RED_SIZE(This,retVal) ) 

#define IWebGLRenderingContext_get_RENDERBUFFER_GREEN_SIZE(This,retVal)	\
    ( (This)->lpVtbl -> get_RENDERBUFFER_GREEN_SIZE(This,retVal) ) 

#define IWebGLRenderingContext_get_RENDERBUFFER_BLUE_SIZE(This,retVal)	\
    ( (This)->lpVtbl -> get_RENDERBUFFER_BLUE_SIZE(This,retVal) ) 

#define IWebGLRenderingContext_get_RENDERBUFFER_ALPHA_SIZE(This,retVal)	\
    ( (This)->lpVtbl -> get_RENDERBUFFER_ALPHA_SIZE(This,retVal) ) 

#define IWebGLRenderingContext_get_RENDERBUFFER_DEPTH_SIZE(This,retVal)	\
    ( (This)->lpVtbl -> get_RENDERBUFFER_DEPTH_SIZE(This,retVal) ) 

#define IWebGLRenderingContext_get_RENDERBUFFER_STENCIL_SIZE(This,retVal)	\
    ( (This)->lpVtbl -> get_RENDERBUFFER_STENCIL_SIZE(This,retVal) ) 

#define IWebGLRenderingContext_get_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE(This,retVal)	\
    ( (This)->lpVtbl -> get_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE(This,retVal) ) 

#define IWebGLRenderingContext_get_FRAMEBUFFER_ATTACHMENT_OBJECT_NAME(This,retVal)	\
    ( (This)->lpVtbl -> get_FRAMEBUFFER_ATTACHMENT_OBJECT_NAME(This,retVal) ) 

#define IWebGLRenderingContext_get_FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL(This,retVal)	\
    ( (This)->lpVtbl -> get_FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL(This,retVal) ) 

#define IWebGLRenderingContext_get_FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE(This,retVal)	\
    ( (This)->lpVtbl -> get_FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE(This,retVal) ) 

#define IWebGLRenderingContext_get_COLOR_ATTACHMENT0(This,retVal)	\
    ( (This)->lpVtbl -> get_COLOR_ATTACHMENT0(This,retVal) ) 

#define IWebGLRenderingContext_get_DEPTH_ATTACHMENT(This,retVal)	\
    ( (This)->lpVtbl -> get_DEPTH_ATTACHMENT(This,retVal) ) 

#define IWebGLRenderingContext_get_STENCIL_ATTACHMENT(This,retVal)	\
    ( (This)->lpVtbl -> get_STENCIL_ATTACHMENT(This,retVal) ) 

#define IWebGLRenderingContext_get_DEPTH_STENCIL_ATTACHMENT(This,retVal)	\
    ( (This)->lpVtbl -> get_DEPTH_STENCIL_ATTACHMENT(This,retVal) ) 

#define IWebGLRenderingContext_get_NONE(This,retVal)	\
    ( (This)->lpVtbl -> get_NONE(This,retVal) ) 

#define IWebGLRenderingContext_get_FRAMEBUFFER_COMPLETE(This,retVal)	\
    ( (This)->lpVtbl -> get_FRAMEBUFFER_COMPLETE(This,retVal) ) 

#define IWebGLRenderingContext_get_FRAMEBUFFER_INCOMPLETE_ATTACHMENT(This,retVal)	\
    ( (This)->lpVtbl -> get_FRAMEBUFFER_INCOMPLETE_ATTACHMENT(This,retVal) ) 

#define IWebGLRenderingContext_get_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT(This,retVal)	\
    ( (This)->lpVtbl -> get_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT(This,retVal) ) 

#define IWebGLRenderingContext_get_FRAMEBUFFER_INCOMPLETE_DIMENSIONS(This,retVal)	\
    ( (This)->lpVtbl -> get_FRAMEBUFFER_INCOMPLETE_DIMENSIONS(This,retVal) ) 

#define IWebGLRenderingContext_get_FRAMEBUFFER_UNSUPPORTED(This,retVal)	\
    ( (This)->lpVtbl -> get_FRAMEBUFFER_UNSUPPORTED(This,retVal) ) 

#define IWebGLRenderingContext_get_FRAMEBUFFER_BINDING(This,retVal)	\
    ( (This)->lpVtbl -> get_FRAMEBUFFER_BINDING(This,retVal) ) 

#define IWebGLRenderingContext_get_RENDERBUFFER_BINDING(This,retVal)	\
    ( (This)->lpVtbl -> get_RENDERBUFFER_BINDING(This,retVal) ) 

#define IWebGLRenderingContext_get_MAX_RENDERBUFFER_SIZE(This,retVal)	\
    ( (This)->lpVtbl -> get_MAX_RENDERBUFFER_SIZE(This,retVal) ) 

#define IWebGLRenderingContext_get_INVALID_FRAMEBUFFER_OPERATION(This,retVal)	\
    ( (This)->lpVtbl -> get_INVALID_FRAMEBUFFER_OPERATION(This,retVal) ) 

#define IWebGLRenderingContext_get_UNPACK_FLIP_Y_WEBGL(This,retVal)	\
    ( (This)->lpVtbl -> get_UNPACK_FLIP_Y_WEBGL(This,retVal) ) 

#define IWebGLRenderingContext_get_UNPACK_PREMULTIPLY_ALPHA_WEBGL(This,retVal)	\
    ( (This)->lpVtbl -> get_UNPACK_PREMULTIPLY_ALPHA_WEBGL(This,retVal) ) 

#define IWebGLRenderingContext_get_CONTEXT_LOST_WEBGL(This,retVal)	\
    ( (This)->lpVtbl -> get_CONTEXT_LOST_WEBGL(This,retVal) ) 

#define IWebGLRenderingContext_get_UNPACK_COLORSPACE_CONVERSION_WEBGL(This,retVal)	\
    ( (This)->lpVtbl -> get_UNPACK_COLORSPACE_CONVERSION_WEBGL(This,retVal) ) 

#define IWebGLRenderingContext_get_BROWSER_DEFAULT_WEBGL(This,retVal)	\
    ( (This)->lpVtbl -> get_BROWSER_DEFAULT_WEBGL(This,retVal) ) 


#define IWebGLRenderingContext_get_canvas(This,retVal)	\
    ( (This)->lpVtbl -> get_canvas(This,retVal) ) 

#define IWebGLRenderingContext_get_drawingBufferWidth(This,retVal)	\
    ( (This)->lpVtbl -> get_drawingBufferWidth(This,retVal) ) 

#define IWebGLRenderingContext_get_drawingBufferHeight(This,retVal)	\
    ( (This)->lpVtbl -> get_drawingBufferHeight(This,retVal) ) 

#define IWebGLRenderingContext_getContextAttributes(This,retVal)	\
    ( (This)->lpVtbl -> getContextAttributes(This,retVal) ) 

#define IWebGLRenderingContext_isContextLost(This,retVal)	\
    ( (This)->lpVtbl -> isContextLost(This,retVal) ) 

#define IWebGLRenderingContext_getSupportedExtensions(This,retVal)	\
    ( (This)->lpVtbl -> getSupportedExtensions(This,retVal) ) 

#define IWebGLRenderingContext_getExtension(This,name,retVal)	\
    ( (This)->lpVtbl -> getExtension(This,name,retVal) ) 

#define IWebGLRenderingContext_activeTexture(This,texture)	\
    ( (This)->lpVtbl -> activeTexture(This,texture) ) 

#define IWebGLRenderingContext_attachShader(This,program,shader)	\
    ( (This)->lpVtbl -> attachShader(This,program,shader) ) 

#define IWebGLRenderingContext_bindAttribLocation(This,program,index,name)	\
    ( (This)->lpVtbl -> bindAttribLocation(This,program,index,name) ) 

#define IWebGLRenderingContext_bindBuffer(This,target,buffer)	\
    ( (This)->lpVtbl -> bindBuffer(This,target,buffer) ) 

#define IWebGLRenderingContext_bindFramebuffer(This,target,framebuffer)	\
    ( (This)->lpVtbl -> bindFramebuffer(This,target,framebuffer) ) 

#define IWebGLRenderingContext_bindRenderbuffer(This,target,renderbuffer)	\
    ( (This)->lpVtbl -> bindRenderbuffer(This,target,renderbuffer) ) 

#define IWebGLRenderingContext_bindTexture(This,target,texture)	\
    ( (This)->lpVtbl -> bindTexture(This,target,texture) ) 

#define IWebGLRenderingContext_blendColor(This,red,green,blue,alpha)	\
    ( (This)->lpVtbl -> blendColor(This,red,green,blue,alpha) ) 

#define IWebGLRenderingContext_blendEquation(This,mode)	\
    ( (This)->lpVtbl -> blendEquation(This,mode) ) 

#define IWebGLRenderingContext_blendEquationSeparate(This,modeRGB,modeAlpha)	\
    ( (This)->lpVtbl -> blendEquationSeparate(This,modeRGB,modeAlpha) ) 

#define IWebGLRenderingContext_blendFunc(This,sfactor,dfactor)	\
    ( (This)->lpVtbl -> blendFunc(This,sfactor,dfactor) ) 

#define IWebGLRenderingContext_blendFuncSeparate(This,srcRGB,dstRGB,srcAlpha,dstAlpha)	\
    ( (This)->lpVtbl -> blendFuncSeparate(This,srcRGB,dstRGB,srcAlpha,dstAlpha) ) 

#define IWebGLRenderingContext_bufferData(This,target,arg1,arg2)	\
    ( (This)->lpVtbl -> bufferData(This,target,arg1,arg2) ) 

#define IWebGLRenderingContext_bufferSubData(This,target,offset,data)	\
    ( (This)->lpVtbl -> bufferSubData(This,target,offset,data) ) 

#define IWebGLRenderingContext_checkFramebufferStatus(This,target,retVal)	\
    ( (This)->lpVtbl -> checkFramebufferStatus(This,target,retVal) ) 

#define IWebGLRenderingContext_clear(This,mask)	\
    ( (This)->lpVtbl -> clear(This,mask) ) 

#define IWebGLRenderingContext_clearColor(This,red,green,blue,alpha)	\
    ( (This)->lpVtbl -> clearColor(This,red,green,blue,alpha) ) 

#define IWebGLRenderingContext_clearDepth(This,depth)	\
    ( (This)->lpVtbl -> clearDepth(This,depth) ) 

#define IWebGLRenderingContext_clearStencil(This,s)	\
    ( (This)->lpVtbl -> clearStencil(This,s) ) 

#define IWebGLRenderingContext_colorMask(This,red,green,blue,alpha)	\
    ( (This)->lpVtbl -> colorMask(This,red,green,blue,alpha) ) 

#define IWebGLRenderingContext_compileShader(This,shader)	\
    ( (This)->lpVtbl -> compileShader(This,shader) ) 

#define IWebGLRenderingContext_compressedTexImage2D(This,target,level,internalformat,width,height,border,data)	\
    ( (This)->lpVtbl -> compressedTexImage2D(This,target,level,internalformat,width,height,border,data) ) 

#define IWebGLRenderingContext_compressedTexSubImage2D(This,target,level,xoffset,yoffset,width,height,format,data)	\
    ( (This)->lpVtbl -> compressedTexSubImage2D(This,target,level,xoffset,yoffset,width,height,format,data) ) 

#define IWebGLRenderingContext_copyTexImage2D(This,target,level,internalformat,x,y,width,height,border)	\
    ( (This)->lpVtbl -> copyTexImage2D(This,target,level,internalformat,x,y,width,height,border) ) 

#define IWebGLRenderingContext_copyTexSubImage2D(This,target,level,xoffset,yoffset,x,y,width,height)	\
    ( (This)->lpVtbl -> copyTexSubImage2D(This,target,level,xoffset,yoffset,x,y,width,height) ) 

#define IWebGLRenderingContext_createBuffer(This,retVal)	\
    ( (This)->lpVtbl -> createBuffer(This,retVal) ) 

#define IWebGLRenderingContext_createFramebuffer(This,retVal)	\
    ( (This)->lpVtbl -> createFramebuffer(This,retVal) ) 

#define IWebGLRenderingContext_createProgram(This,retVal)	\
    ( (This)->lpVtbl -> createProgram(This,retVal) ) 

#define IWebGLRenderingContext_createRenderbuffer(This,retVal)	\
    ( (This)->lpVtbl -> createRenderbuffer(This,retVal) ) 

#define IWebGLRenderingContext_createShader(This,type,retVal)	\
    ( (This)->lpVtbl -> createShader(This,type,retVal) ) 

#define IWebGLRenderingContext_createTexture(This,retVal)	\
    ( (This)->lpVtbl -> createTexture(This,retVal) ) 

#define IWebGLRenderingContext_cullFace(This,mode)	\
    ( (This)->lpVtbl -> cullFace(This,mode) ) 

#define IWebGLRenderingContext_deleteBuffer(This,buffer)	\
    ( (This)->lpVtbl -> deleteBuffer(This,buffer) ) 

#define IWebGLRenderingContext_deleteFramebuffer(This,framebuffer)	\
    ( (This)->lpVtbl -> deleteFramebuffer(This,framebuffer) ) 

#define IWebGLRenderingContext_deleteProgram(This,program)	\
    ( (This)->lpVtbl -> deleteProgram(This,program) ) 

#define IWebGLRenderingContext_deleteRenderbuffer(This,renderbuffer)	\
    ( (This)->lpVtbl -> deleteRenderbuffer(This,renderbuffer) ) 

#define IWebGLRenderingContext_deleteShader(This,shader)	\
    ( (This)->lpVtbl -> deleteShader(This,shader) ) 

#define IWebGLRenderingContext_deleteTexture(This,texture)	\
    ( (This)->lpVtbl -> deleteTexture(This,texture) ) 

#define IWebGLRenderingContext_depthFunc(This,func)	\
    ( (This)->lpVtbl -> depthFunc(This,func) ) 

#define IWebGLRenderingContext_depthMask(This,flag)	\
    ( (This)->lpVtbl -> depthMask(This,flag) ) 

#define IWebGLRenderingContext_depthRange(This,zNear,zFar)	\
    ( (This)->lpVtbl -> depthRange(This,zNear,zFar) ) 

#define IWebGLRenderingContext_detachShader(This,program,shader)	\
    ( (This)->lpVtbl -> detachShader(This,program,shader) ) 

#define IWebGLRenderingContext_disable(This,cap)	\
    ( (This)->lpVtbl -> disable(This,cap) ) 

#define IWebGLRenderingContext_disableVertexAttribArray(This,index)	\
    ( (This)->lpVtbl -> disableVertexAttribArray(This,index) ) 

#define IWebGLRenderingContext_drawArrays(This,mode,first,count)	\
    ( (This)->lpVtbl -> drawArrays(This,mode,first,count) ) 

#define IWebGLRenderingContext_drawElements(This,mode,count,type,offset)	\
    ( (This)->lpVtbl -> drawElements(This,mode,count,type,offset) ) 

#define IWebGLRenderingContext_enable(This,cap)	\
    ( (This)->lpVtbl -> enable(This,cap) ) 

#define IWebGLRenderingContext_enableVertexAttribArray(This,index)	\
    ( (This)->lpVtbl -> enableVertexAttribArray(This,index) ) 

#define IWebGLRenderingContext_finish(This)	\
    ( (This)->lpVtbl -> finish(This) ) 

#define IWebGLRenderingContext_flush(This)	\
    ( (This)->lpVtbl -> flush(This) ) 

#define IWebGLRenderingContext_framebufferRenderbuffer(This,target,attachment,renderbuffertarget,renderbuffer)	\
    ( (This)->lpVtbl -> framebufferRenderbuffer(This,target,attachment,renderbuffertarget,renderbuffer) ) 

#define IWebGLRenderingContext_framebufferTexture2D(This,target,attachment,textarget,texture,level)	\
    ( (This)->lpVtbl -> framebufferTexture2D(This,target,attachment,textarget,texture,level) ) 

#define IWebGLRenderingContext_frontFace(This,mode)	\
    ( (This)->lpVtbl -> frontFace(This,mode) ) 

#define IWebGLRenderingContext_generateMipmap(This,target)	\
    ( (This)->lpVtbl -> generateMipmap(This,target) ) 

#define IWebGLRenderingContext_getActiveAttrib(This,program,index,retVal)	\
    ( (This)->lpVtbl -> getActiveAttrib(This,program,index,retVal) ) 

#define IWebGLRenderingContext_getActiveUniform(This,program,index,retVal)	\
    ( (This)->lpVtbl -> getActiveUniform(This,program,index,retVal) ) 

#define IWebGLRenderingContext_getAttachedShaders(This,program,retVal)	\
    ( (This)->lpVtbl -> getAttachedShaders(This,program,retVal) ) 

#define IWebGLRenderingContext_getAttribLocation(This,program,name,retVal)	\
    ( (This)->lpVtbl -> getAttribLocation(This,program,name,retVal) ) 

#define IWebGLRenderingContext_getParameter(This,pname,retVal)	\
    ( (This)->lpVtbl -> getParameter(This,pname,retVal) ) 

#define IWebGLRenderingContext_getBufferParameter(This,target,pname,retVal)	\
    ( (This)->lpVtbl -> getBufferParameter(This,target,pname,retVal) ) 

#define IWebGLRenderingContext_getError(This,retVal)	\
    ( (This)->lpVtbl -> getError(This,retVal) ) 

#define IWebGLRenderingContext_getFramebufferAttachmentParameter(This,target,attachment,pname,retVal)	\
    ( (This)->lpVtbl -> getFramebufferAttachmentParameter(This,target,attachment,pname,retVal) ) 

#define IWebGLRenderingContext_getProgramParameter(This,program,pname,retVal)	\
    ( (This)->lpVtbl -> getProgramParameter(This,program,pname,retVal) ) 

#define IWebGLRenderingContext_getProgramInfoLog(This,program,retVal)	\
    ( (This)->lpVtbl -> getProgramInfoLog(This,program,retVal) ) 

#define IWebGLRenderingContext_getRenderbufferParameter(This,target,pname,retVal)	\
    ( (This)->lpVtbl -> getRenderbufferParameter(This,target,pname,retVal) ) 

#define IWebGLRenderingContext_getShaderParameter(This,shader,pname,retVal)	\
    ( (This)->lpVtbl -> getShaderParameter(This,shader,pname,retVal) ) 

#define IWebGLRenderingContext_getShaderPrecisionFormat(This,shadertype,precisiontype,retVal)	\
    ( (This)->lpVtbl -> getShaderPrecisionFormat(This,shadertype,precisiontype,retVal) ) 

#define IWebGLRenderingContext_getShaderInfoLog(This,shader,retVal)	\
    ( (This)->lpVtbl -> getShaderInfoLog(This,shader,retVal) ) 

#define IWebGLRenderingContext_getShaderSource(This,shader,retVal)	\
    ( (This)->lpVtbl -> getShaderSource(This,shader,retVal) ) 

#define IWebGLRenderingContext_getTexParameter(This,target,pname,retVal)	\
    ( (This)->lpVtbl -> getTexParameter(This,target,pname,retVal) ) 

#define IWebGLRenderingContext_getUniform(This,program,location,retVal)	\
    ( (This)->lpVtbl -> getUniform(This,program,location,retVal) ) 

#define IWebGLRenderingContext_getUniformLocation(This,program,name,retVal)	\
    ( (This)->lpVtbl -> getUniformLocation(This,program,name,retVal) ) 

#define IWebGLRenderingContext_getVertexAttrib(This,index,pname,retVal)	\
    ( (This)->lpVtbl -> getVertexAttrib(This,index,pname,retVal) ) 

#define IWebGLRenderingContext_getVertexAttribOffset(This,index,pname,retVal)	\
    ( (This)->lpVtbl -> getVertexAttribOffset(This,index,pname,retVal) ) 

#define IWebGLRenderingContext_hint(This,target,mode)	\
    ( (This)->lpVtbl -> hint(This,target,mode) ) 

#define IWebGLRenderingContext_isBuffer(This,buffer,retVal)	\
    ( (This)->lpVtbl -> isBuffer(This,buffer,retVal) ) 

#define IWebGLRenderingContext_isEnabled(This,cap,retVal)	\
    ( (This)->lpVtbl -> isEnabled(This,cap,retVal) ) 

#define IWebGLRenderingContext_isFramebuffer(This,framebuffer,retVal)	\
    ( (This)->lpVtbl -> isFramebuffer(This,framebuffer,retVal) ) 

#define IWebGLRenderingContext_isProgram(This,program,retVal)	\
    ( (This)->lpVtbl -> isProgram(This,program,retVal) ) 

#define IWebGLRenderingContext_isRenderbuffer(This,renderbuffer,retVal)	\
    ( (This)->lpVtbl -> isRenderbuffer(This,renderbuffer,retVal) ) 

#define IWebGLRenderingContext_isShader(This,shader,retVal)	\
    ( (This)->lpVtbl -> isShader(This,shader,retVal) ) 

#define IWebGLRenderingContext_isTexture(This,texture,retVal)	\
    ( (This)->lpVtbl -> isTexture(This,texture,retVal) ) 

#define IWebGLRenderingContext_lineWidth(This,width)	\
    ( (This)->lpVtbl -> lineWidth(This,width) ) 

#define IWebGLRenderingContext_linkProgram(This,program)	\
    ( (This)->lpVtbl -> linkProgram(This,program) ) 

#define IWebGLRenderingContext_pixelStorei(This,pname,param)	\
    ( (This)->lpVtbl -> pixelStorei(This,pname,param) ) 

#define IWebGLRenderingContext_polygonOffset(This,factor,units)	\
    ( (This)->lpVtbl -> polygonOffset(This,factor,units) ) 

#define IWebGLRenderingContext_readPixels(This,x,y,width,height,format,type,pixels)	\
    ( (This)->lpVtbl -> readPixels(This,x,y,width,height,format,type,pixels) ) 

#define IWebGLRenderingContext_renderbufferStorage(This,target,internalformat,width,height)	\
    ( (This)->lpVtbl -> renderbufferStorage(This,target,internalformat,width,height) ) 

#define IWebGLRenderingContext_sampleCoverage(This,value,invert)	\
    ( (This)->lpVtbl -> sampleCoverage(This,value,invert) ) 

#define IWebGLRenderingContext_scissor(This,x,y,width,height)	\
    ( (This)->lpVtbl -> scissor(This,x,y,width,height) ) 

#define IWebGLRenderingContext_shaderSource(This,shader,source)	\
    ( (This)->lpVtbl -> shaderSource(This,shader,source) ) 

#define IWebGLRenderingContext_stencilFunc(This,func,ref,mask)	\
    ( (This)->lpVtbl -> stencilFunc(This,func,ref,mask) ) 

#define IWebGLRenderingContext_stencilFuncSeparate(This,face,func,ref,mask)	\
    ( (This)->lpVtbl -> stencilFuncSeparate(This,face,func,ref,mask) ) 

#define IWebGLRenderingContext_stencilMask(This,mask)	\
    ( (This)->lpVtbl -> stencilMask(This,mask) ) 

#define IWebGLRenderingContext_stencilMaskSeparate(This,face,mask)	\
    ( (This)->lpVtbl -> stencilMaskSeparate(This,face,mask) ) 

#define IWebGLRenderingContext_stencilOp(This,fail,zfail,zpass)	\
    ( (This)->lpVtbl -> stencilOp(This,fail,zfail,zpass) ) 

#define IWebGLRenderingContext_stencilOpSeparate(This,face,fail,zfail,zpass)	\
    ( (This)->lpVtbl -> stencilOpSeparate(This,face,fail,zfail,zpass) ) 

#define IWebGLRenderingContext_texImage2D(This,target,level,internalformat,arg0,arg1,arg2,arg3,arg4,arg5)	\
    ( (This)->lpVtbl -> texImage2D(This,target,level,internalformat,arg0,arg1,arg2,arg3,arg4,arg5) ) 

#define IWebGLRenderingContext_texParameterf(This,target,pname,param)	\
    ( (This)->lpVtbl -> texParameterf(This,target,pname,param) ) 

#define IWebGLRenderingContext_texParameteri(This,target,pname,param)	\
    ( (This)->lpVtbl -> texParameteri(This,target,pname,param) ) 

#define IWebGLRenderingContext_texSubImage2D(This,target,level,xoffset,yoffset,arg0,arg1,arg2,arg3,arg4)	\
    ( (This)->lpVtbl -> texSubImage2D(This,target,level,xoffset,yoffset,arg0,arg1,arg2,arg3,arg4) ) 

#define IWebGLRenderingContext_uniform1f(This,location,x)	\
    ( (This)->lpVtbl -> uniform1f(This,location,x) ) 

#define IWebGLRenderingContext_uniform1fv(This,location,v)	\
    ( (This)->lpVtbl -> uniform1fv(This,location,v) ) 

#define IWebGLRenderingContext_uniform1i(This,location,x)	\
    ( (This)->lpVtbl -> uniform1i(This,location,x) ) 

#define IWebGLRenderingContext_uniform1iv(This,location,v)	\
    ( (This)->lpVtbl -> uniform1iv(This,location,v) ) 

#define IWebGLRenderingContext_uniform2f(This,location,x,y)	\
    ( (This)->lpVtbl -> uniform2f(This,location,x,y) ) 

#define IWebGLRenderingContext_uniform2fv(This,location,v)	\
    ( (This)->lpVtbl -> uniform2fv(This,location,v) ) 

#define IWebGLRenderingContext_uniform2i(This,location,x,y)	\
    ( (This)->lpVtbl -> uniform2i(This,location,x,y) ) 

#define IWebGLRenderingContext_uniform2iv(This,location,v)	\
    ( (This)->lpVtbl -> uniform2iv(This,location,v) ) 

#define IWebGLRenderingContext_uniform3f(This,location,x,y,z)	\
    ( (This)->lpVtbl -> uniform3f(This,location,x,y,z) ) 

#define IWebGLRenderingContext_uniform3fv(This,location,v)	\
    ( (This)->lpVtbl -> uniform3fv(This,location,v) ) 

#define IWebGLRenderingContext_uniform3i(This,location,x,y,z)	\
    ( (This)->lpVtbl -> uniform3i(This,location,x,y,z) ) 

#define IWebGLRenderingContext_uniform3iv(This,location,v)	\
    ( (This)->lpVtbl -> uniform3iv(This,location,v) ) 

#define IWebGLRenderingContext_uniform4f(This,location,x,y,z,w)	\
    ( (This)->lpVtbl -> uniform4f(This,location,x,y,z,w) ) 

#define IWebGLRenderingContext_uniform4fv(This,location,v)	\
    ( (This)->lpVtbl -> uniform4fv(This,location,v) ) 

#define IWebGLRenderingContext_uniform4i(This,location,x,y,z,w)	\
    ( (This)->lpVtbl -> uniform4i(This,location,x,y,z,w) ) 

#define IWebGLRenderingContext_uniform4iv(This,location,v)	\
    ( (This)->lpVtbl -> uniform4iv(This,location,v) ) 

#define IWebGLRenderingContext_uniformMatrix2fv(This,location,transpose,value)	\
    ( (This)->lpVtbl -> uniformMatrix2fv(This,location,transpose,value) ) 

#define IWebGLRenderingContext_uniformMatrix3fv(This,location,transpose,value)	\
    ( (This)->lpVtbl -> uniformMatrix3fv(This,location,transpose,value) ) 

#define IWebGLRenderingContext_uniformMatrix4fv(This,location,transpose,value)	\
    ( (This)->lpVtbl -> uniformMatrix4fv(This,location,transpose,value) ) 

#define IWebGLRenderingContext_useProgram(This,program)	\
    ( (This)->lpVtbl -> useProgram(This,program) ) 

#define IWebGLRenderingContext_validateProgram(This,program)	\
    ( (This)->lpVtbl -> validateProgram(This,program) ) 

#define IWebGLRenderingContext_vertexAttrib1f(This,indx,x)	\
    ( (This)->lpVtbl -> vertexAttrib1f(This,indx,x) ) 

#define IWebGLRenderingContext_vertexAttrib1fv(This,indx,v)	\
    ( (This)->lpVtbl -> vertexAttrib1fv(This,indx,v) ) 

#define IWebGLRenderingContext_vertexAttrib2f(This,indx,x,y)	\
    ( (This)->lpVtbl -> vertexAttrib2f(This,indx,x,y) ) 

#define IWebGLRenderingContext_vertexAttrib2fv(This,indx,v)	\
    ( (This)->lpVtbl -> vertexAttrib2fv(This,indx,v) ) 

#define IWebGLRenderingContext_vertexAttrib3f(This,indx,x,y,z)	\
    ( (This)->lpVtbl -> vertexAttrib3f(This,indx,x,y,z) ) 

#define IWebGLRenderingContext_vertexAttrib3fv(This,indx,v)	\
    ( (This)->lpVtbl -> vertexAttrib3fv(This,indx,v) ) 

#define IWebGLRenderingContext_vertexAttrib4f(This,indx,x,y,z,w)	\
    ( (This)->lpVtbl -> vertexAttrib4f(This,indx,x,y,z,w) ) 

#define IWebGLRenderingContext_vertexAttrib4fv(This,indx,v)	\
    ( (This)->lpVtbl -> vertexAttrib4fv(This,indx,v) ) 

#define IWebGLRenderingContext_vertexAttribPointer(This,indx,size,type,normalized,stride,offset)	\
    ( (This)->lpVtbl -> vertexAttribPointer(This,indx,size,type,normalized,stride,offset) ) 

#define IWebGLRenderingContext___viewport(This,x,y,width,height)	\
    ( (This)->lpVtbl -> __viewport(This,x,y,width,height) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_get_canvas_Proxy( 
    IWebGLRenderingContext * This,
    /* [retval][out] */ IDispatch **retVal);


void __RPC_STUB IWebGLRenderingContext_get_canvas_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_get_drawingBufferWidth_Proxy( 
    IWebGLRenderingContext * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRenderingContext_get_drawingBufferWidth_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_get_drawingBufferHeight_Proxy( 
    IWebGLRenderingContext * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRenderingContext_get_drawingBufferHeight_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_getContextAttributes_Proxy( 
    IWebGLRenderingContext * This,
    /* [retval][out] */ IWebGLContextAttributes **retVal);


void __RPC_STUB IWebGLRenderingContext_getContextAttributes_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_isContextLost_Proxy( 
    IWebGLRenderingContext * This,
    /* [retval][out] */ VARIANT *retVal);


void __RPC_STUB IWebGLRenderingContext_isContextLost_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_getSupportedExtensions_Proxy( 
    IWebGLRenderingContext * This,
    /* [retval][out] */ IDispatch **retVal);


void __RPC_STUB IWebGLRenderingContext_getSupportedExtensions_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_getExtension_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ BSTR name,
    /* [retval][out] */ IDispatch **retVal);


void __RPC_STUB IWebGLRenderingContext_getExtension_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_activeTexture_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ ULONG texture);


void __RPC_STUB IWebGLRenderingContext_activeTexture_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_attachShader_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ IWebGLProgram *program,
    /* [in] */ IWebGLShader *shader);


void __RPC_STUB IWebGLRenderingContext_attachShader_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_bindAttribLocation_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ IWebGLProgram *program,
    /* [in] */ ULONG index,
    /* [in] */ BSTR name);


void __RPC_STUB IWebGLRenderingContext_bindAttribLocation_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_bindBuffer_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ ULONG target,
    /* [in] */ IWebGLBuffer *buffer);


void __RPC_STUB IWebGLRenderingContext_bindBuffer_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_bindFramebuffer_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ ULONG target,
    /* [in] */ IWebGLFramebuffer *framebuffer);


void __RPC_STUB IWebGLRenderingContext_bindFramebuffer_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_bindRenderbuffer_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ ULONG target,
    /* [in] */ IWebGLRenderbuffer *renderbuffer);


void __RPC_STUB IWebGLRenderingContext_bindRenderbuffer_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_bindTexture_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ ULONG target,
    /* [in] */ IWebGLTexture *texture);


void __RPC_STUB IWebGLRenderingContext_bindTexture_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_blendColor_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ FLOAT red,
    /* [in] */ FLOAT green,
    /* [in] */ FLOAT blue,
    /* [in] */ FLOAT alpha);


void __RPC_STUB IWebGLRenderingContext_blendColor_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_blendEquation_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ ULONG mode);


void __RPC_STUB IWebGLRenderingContext_blendEquation_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_blendEquationSeparate_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ ULONG modeRGB,
    /* [in] */ ULONG modeAlpha);


void __RPC_STUB IWebGLRenderingContext_blendEquationSeparate_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_blendFunc_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ ULONG sfactor,
    /* [in] */ ULONG dfactor);


void __RPC_STUB IWebGLRenderingContext_blendFunc_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_blendFuncSeparate_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ ULONG srcRGB,
    /* [in] */ ULONG dstRGB,
    /* [in] */ ULONG srcAlpha,
    /* [in] */ ULONG dstAlpha);


void __RPC_STUB IWebGLRenderingContext_blendFuncSeparate_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_bufferData_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ ULONG target,
    /* [in] */ VARIANT arg1,
    /* [in] */ VARIANT arg2);


void __RPC_STUB IWebGLRenderingContext_bufferData_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_bufferSubData_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ ULONG target,
    /* [in] */ LONG offset,
    /* [in] */ IDispatch *data);


void __RPC_STUB IWebGLRenderingContext_bufferSubData_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_checkFramebufferStatus_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ ULONG target,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRenderingContext_checkFramebufferStatus_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_clear_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ ULONG mask);


void __RPC_STUB IWebGLRenderingContext_clear_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_clearColor_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ FLOAT red,
    /* [in] */ FLOAT green,
    /* [in] */ FLOAT blue,
    /* [in] */ FLOAT alpha);


void __RPC_STUB IWebGLRenderingContext_clearColor_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_clearDepth_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ FLOAT depth);


void __RPC_STUB IWebGLRenderingContext_clearDepth_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_clearStencil_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ LONG s);


void __RPC_STUB IWebGLRenderingContext_clearStencil_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_colorMask_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ BOOL red,
    /* [in] */ BOOL green,
    /* [in] */ BOOL blue,
    /* [in] */ BOOL alpha);


void __RPC_STUB IWebGLRenderingContext_colorMask_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_compileShader_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ IWebGLShader *shader);


void __RPC_STUB IWebGLRenderingContext_compileShader_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_compressedTexImage2D_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ ULONG target,
    /* [in] */ LONG level,
    /* [in] */ ULONG internalformat,
    /* [in] */ LONG width,
    /* [in] */ LONG height,
    /* [in] */ LONG border,
    /* [in] */ IArrayBufferView *data);


void __RPC_STUB IWebGLRenderingContext_compressedTexImage2D_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_compressedTexSubImage2D_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ ULONG target,
    /* [in] */ LONG level,
    /* [in] */ LONG xoffset,
    /* [in] */ LONG yoffset,
    /* [in] */ LONG width,
    /* [in] */ LONG height,
    /* [in] */ ULONG format,
    /* [in] */ IArrayBufferView *data);


void __RPC_STUB IWebGLRenderingContext_compressedTexSubImage2D_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_copyTexImage2D_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ ULONG target,
    /* [in] */ LONG level,
    /* [in] */ ULONG internalformat,
    /* [in] */ LONG x,
    /* [in] */ LONG y,
    /* [in] */ LONG width,
    /* [in] */ LONG height,
    /* [in] */ LONG border);


void __RPC_STUB IWebGLRenderingContext_copyTexImage2D_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_copyTexSubImage2D_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ ULONG target,
    /* [in] */ LONG level,
    /* [in] */ LONG xoffset,
    /* [in] */ LONG yoffset,
    /* [in] */ LONG x,
    /* [in] */ LONG y,
    /* [in] */ LONG width,
    /* [in] */ LONG height);


void __RPC_STUB IWebGLRenderingContext_copyTexSubImage2D_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_createBuffer_Proxy( 
    IWebGLRenderingContext * This,
    /* [retval][out] */ IWebGLBuffer **retVal);


void __RPC_STUB IWebGLRenderingContext_createBuffer_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_createFramebuffer_Proxy( 
    IWebGLRenderingContext * This,
    /* [retval][out] */ IWebGLFramebuffer **retVal);


void __RPC_STUB IWebGLRenderingContext_createFramebuffer_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_createProgram_Proxy( 
    IWebGLRenderingContext * This,
    /* [retval][out] */ IWebGLProgram **retVal);


void __RPC_STUB IWebGLRenderingContext_createProgram_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_createRenderbuffer_Proxy( 
    IWebGLRenderingContext * This,
    /* [retval][out] */ IWebGLRenderbuffer **retVal);


void __RPC_STUB IWebGLRenderingContext_createRenderbuffer_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_createShader_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ ULONG type,
    /* [retval][out] */ IWebGLShader **retVal);


void __RPC_STUB IWebGLRenderingContext_createShader_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_createTexture_Proxy( 
    IWebGLRenderingContext * This,
    /* [retval][out] */ IWebGLTexture **retVal);


void __RPC_STUB IWebGLRenderingContext_createTexture_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_cullFace_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ ULONG mode);


void __RPC_STUB IWebGLRenderingContext_cullFace_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_deleteBuffer_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ IWebGLBuffer *buffer);


void __RPC_STUB IWebGLRenderingContext_deleteBuffer_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_deleteFramebuffer_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ IWebGLFramebuffer *framebuffer);


void __RPC_STUB IWebGLRenderingContext_deleteFramebuffer_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_deleteProgram_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ IWebGLProgram *program);


void __RPC_STUB IWebGLRenderingContext_deleteProgram_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_deleteRenderbuffer_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ IWebGLRenderbuffer *renderbuffer);


void __RPC_STUB IWebGLRenderingContext_deleteRenderbuffer_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_deleteShader_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ IWebGLShader *shader);


void __RPC_STUB IWebGLRenderingContext_deleteShader_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_deleteTexture_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ IWebGLTexture *texture);


void __RPC_STUB IWebGLRenderingContext_deleteTexture_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_depthFunc_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ ULONG func);


void __RPC_STUB IWebGLRenderingContext_depthFunc_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_depthMask_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ BOOL flag);


void __RPC_STUB IWebGLRenderingContext_depthMask_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_depthRange_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ FLOAT zNear,
    /* [in] */ FLOAT zFar);


void __RPC_STUB IWebGLRenderingContext_depthRange_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_detachShader_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ IWebGLProgram *program,
    /* [in] */ IWebGLShader *shader);


void __RPC_STUB IWebGLRenderingContext_detachShader_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_disable_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ ULONG cap);


void __RPC_STUB IWebGLRenderingContext_disable_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_disableVertexAttribArray_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ ULONG index);


void __RPC_STUB IWebGLRenderingContext_disableVertexAttribArray_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_drawArrays_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ ULONG mode,
    /* [in] */ LONG first,
    /* [in] */ LONG count);


void __RPC_STUB IWebGLRenderingContext_drawArrays_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_drawElements_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ ULONG mode,
    /* [in] */ LONG count,
    /* [in] */ ULONG type,
    /* [in] */ LONG offset);


void __RPC_STUB IWebGLRenderingContext_drawElements_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_enable_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ ULONG cap);


void __RPC_STUB IWebGLRenderingContext_enable_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_enableVertexAttribArray_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ ULONG index);


void __RPC_STUB IWebGLRenderingContext_enableVertexAttribArray_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_finish_Proxy( 
    IWebGLRenderingContext * This);


void __RPC_STUB IWebGLRenderingContext_finish_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_flush_Proxy( 
    IWebGLRenderingContext * This);


void __RPC_STUB IWebGLRenderingContext_flush_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_framebufferRenderbuffer_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ ULONG target,
    /* [in] */ ULONG attachment,
    /* [in] */ ULONG renderbuffertarget,
    /* [in] */ IWebGLRenderbuffer *renderbuffer);


void __RPC_STUB IWebGLRenderingContext_framebufferRenderbuffer_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_framebufferTexture2D_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ ULONG target,
    /* [in] */ ULONG attachment,
    /* [in] */ ULONG textarget,
    /* [in] */ IWebGLTexture *texture,
    /* [in] */ LONG level);


void __RPC_STUB IWebGLRenderingContext_framebufferTexture2D_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_frontFace_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ ULONG mode);


void __RPC_STUB IWebGLRenderingContext_frontFace_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_generateMipmap_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ ULONG target);


void __RPC_STUB IWebGLRenderingContext_generateMipmap_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_getActiveAttrib_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ IWebGLProgram *program,
    /* [in] */ ULONG index,
    /* [retval][out] */ IWebGLActiveInfo **retVal);


void __RPC_STUB IWebGLRenderingContext_getActiveAttrib_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_getActiveUniform_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ IWebGLProgram *program,
    /* [in] */ ULONG index,
    /* [retval][out] */ IWebGLActiveInfo **retVal);


void __RPC_STUB IWebGLRenderingContext_getActiveUniform_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_getAttachedShaders_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ IWebGLProgram *program,
    /* [retval][out] */ IDispatch **retVal);


void __RPC_STUB IWebGLRenderingContext_getAttachedShaders_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_getAttribLocation_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ IWebGLProgram *program,
    /* [in] */ BSTR name,
    /* [retval][out] */ LONG *retVal);


void __RPC_STUB IWebGLRenderingContext_getAttribLocation_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_getParameter_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ ULONG pname,
    /* [retval][out] */ VARIANT *retVal);


void __RPC_STUB IWebGLRenderingContext_getParameter_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_getBufferParameter_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ ULONG target,
    /* [in] */ ULONG pname,
    /* [retval][out] */ VARIANT *retVal);


void __RPC_STUB IWebGLRenderingContext_getBufferParameter_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_getError_Proxy( 
    IWebGLRenderingContext * This,
    /* [retval][out] */ ULONG *retVal);


void __RPC_STUB IWebGLRenderingContext_getError_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_getFramebufferAttachmentParameter_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ ULONG target,
    /* [in] */ ULONG attachment,
    /* [in] */ ULONG pname,
    /* [retval][out] */ VARIANT *retVal);


void __RPC_STUB IWebGLRenderingContext_getFramebufferAttachmentParameter_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_getProgramParameter_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ IWebGLProgram *program,
    /* [in] */ ULONG pname,
    /* [retval][out] */ VARIANT *retVal);


void __RPC_STUB IWebGLRenderingContext_getProgramParameter_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_getProgramInfoLog_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ IWebGLProgram *program,
    /* [retval][out] */ BSTR *retVal);


void __RPC_STUB IWebGLRenderingContext_getProgramInfoLog_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_getRenderbufferParameter_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ ULONG target,
    /* [in] */ ULONG pname,
    /* [retval][out] */ VARIANT *retVal);


void __RPC_STUB IWebGLRenderingContext_getRenderbufferParameter_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_getShaderParameter_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ IWebGLShader *shader,
    /* [in] */ ULONG pname,
    /* [retval][out] */ VARIANT *retVal);


void __RPC_STUB IWebGLRenderingContext_getShaderParameter_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_getShaderPrecisionFormat_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ ULONG shadertype,
    /* [in] */ ULONG precisiontype,
    /* [retval][out] */ IWebGLShaderPrecisionFormat **retVal);


void __RPC_STUB IWebGLRenderingContext_getShaderPrecisionFormat_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_getShaderInfoLog_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ IWebGLShader *shader,
    /* [retval][out] */ BSTR *retVal);


void __RPC_STUB IWebGLRenderingContext_getShaderInfoLog_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_getShaderSource_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ IWebGLShader *shader,
    /* [retval][out] */ BSTR *retVal);


void __RPC_STUB IWebGLRenderingContext_getShaderSource_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_getTexParameter_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ ULONG target,
    /* [in] */ ULONG pname,
    /* [retval][out] */ VARIANT *retVal);


void __RPC_STUB IWebGLRenderingContext_getTexParameter_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_getUniform_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ IWebGLProgram *program,
    /* [in] */ IWebGLUniformLocation *location,
    /* [retval][out] */ VARIANT *retVal);


void __RPC_STUB IWebGLRenderingContext_getUniform_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_getUniformLocation_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ IWebGLProgram *program,
    /* [in] */ BSTR name,
    /* [retval][out] */ IWebGLUniformLocation **retVal);


void __RPC_STUB IWebGLRenderingContext_getUniformLocation_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_getVertexAttrib_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ ULONG index,
    /* [in] */ ULONG pname,
    /* [retval][out] */ VARIANT *retVal);


void __RPC_STUB IWebGLRenderingContext_getVertexAttrib_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_getVertexAttribOffset_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ ULONG index,
    /* [in] */ ULONG pname,
    /* [retval][out] */ LONG *retVal);


void __RPC_STUB IWebGLRenderingContext_getVertexAttribOffset_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_hint_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ ULONG target,
    /* [in] */ ULONG mode);


void __RPC_STUB IWebGLRenderingContext_hint_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_isBuffer_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ IWebGLBuffer *buffer,
    /* [retval][out] */ VARIANT *retVal);


void __RPC_STUB IWebGLRenderingContext_isBuffer_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_isEnabled_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ ULONG cap,
    /* [retval][out] */ VARIANT *retVal);


void __RPC_STUB IWebGLRenderingContext_isEnabled_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_isFramebuffer_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ IWebGLFramebuffer *framebuffer,
    /* [retval][out] */ VARIANT *retVal);


void __RPC_STUB IWebGLRenderingContext_isFramebuffer_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_isProgram_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ IWebGLProgram *program,
    /* [retval][out] */ VARIANT *retVal);


void __RPC_STUB IWebGLRenderingContext_isProgram_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_isRenderbuffer_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ IWebGLRenderbuffer *renderbuffer,
    /* [retval][out] */ VARIANT *retVal);


void __RPC_STUB IWebGLRenderingContext_isRenderbuffer_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_isShader_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ IWebGLShader *shader,
    /* [retval][out] */ VARIANT *retVal);


void __RPC_STUB IWebGLRenderingContext_isShader_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_isTexture_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ IWebGLTexture *texture,
    /* [retval][out] */ VARIANT *retVal);


void __RPC_STUB IWebGLRenderingContext_isTexture_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_lineWidth_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ FLOAT width);


void __RPC_STUB IWebGLRenderingContext_lineWidth_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_linkProgram_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ IWebGLProgram *program);


void __RPC_STUB IWebGLRenderingContext_linkProgram_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_pixelStorei_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ ULONG pname,
    /* [in] */ LONG param);


void __RPC_STUB IWebGLRenderingContext_pixelStorei_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_polygonOffset_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ FLOAT factor,
    /* [in] */ FLOAT units);


void __RPC_STUB IWebGLRenderingContext_polygonOffset_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_readPixels_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ LONG x,
    /* [in] */ LONG y,
    /* [in] */ LONG width,
    /* [in] */ LONG height,
    /* [in] */ ULONG format,
    /* [in] */ ULONG type,
    /* [in] */ IArrayBufferView *pixels);


void __RPC_STUB IWebGLRenderingContext_readPixels_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_renderbufferStorage_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ ULONG target,
    /* [in] */ ULONG internalformat,
    /* [in] */ LONG width,
    /* [in] */ LONG height);


void __RPC_STUB IWebGLRenderingContext_renderbufferStorage_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_sampleCoverage_Proxy( 
    IWebGLRenderingContext * This,
    FLOAT value,
    /* [in] */ BOOL invert);


void __RPC_STUB IWebGLRenderingContext_sampleCoverage_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_scissor_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ LONG x,
    /* [in] */ LONG y,
    /* [in] */ LONG width,
    /* [in] */ LONG height);


void __RPC_STUB IWebGLRenderingContext_scissor_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_shaderSource_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ IWebGLShader *shader,
    /* [in] */ BSTR source);


void __RPC_STUB IWebGLRenderingContext_shaderSource_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_stencilFunc_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ ULONG func,
    /* [in] */ LONG ref,
    /* [in] */ ULONG mask);


void __RPC_STUB IWebGLRenderingContext_stencilFunc_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_stencilFuncSeparate_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ ULONG face,
    /* [in] */ ULONG func,
    /* [in] */ LONG ref,
    /* [in] */ ULONG mask);


void __RPC_STUB IWebGLRenderingContext_stencilFuncSeparate_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_stencilMask_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ ULONG mask);


void __RPC_STUB IWebGLRenderingContext_stencilMask_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_stencilMaskSeparate_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ ULONG face,
    /* [in] */ ULONG mask);


void __RPC_STUB IWebGLRenderingContext_stencilMaskSeparate_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_stencilOp_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ ULONG fail,
    /* [in] */ ULONG zfail,
    /* [in] */ ULONG zpass);


void __RPC_STUB IWebGLRenderingContext_stencilOp_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_stencilOpSeparate_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ ULONG face,
    /* [in] */ ULONG fail,
    /* [in] */ ULONG zfail,
    /* [in] */ ULONG zpass);


void __RPC_STUB IWebGLRenderingContext_stencilOpSeparate_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


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
    /* [optional][in] */ VARIANT arg5);


void __RPC_STUB IWebGLRenderingContext_texImage2D_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_texParameterf_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ ULONG target,
    /* [in] */ ULONG pname,
    /* [in] */ FLOAT param);


void __RPC_STUB IWebGLRenderingContext_texParameterf_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_texParameteri_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ ULONG target,
    /* [in] */ ULONG pname,
    /* [in] */ LONG param);


void __RPC_STUB IWebGLRenderingContext_texParameteri_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


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
    /* [optional][in] */ VARIANT arg4);


void __RPC_STUB IWebGLRenderingContext_texSubImage2D_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_uniform1f_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ IWebGLUniformLocation *location,
    /* [in] */ FLOAT x);


void __RPC_STUB IWebGLRenderingContext_uniform1f_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_uniform1fv_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ IWebGLUniformLocation *location,
    /* [in] */ IDispatch *v);


void __RPC_STUB IWebGLRenderingContext_uniform1fv_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_uniform1i_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ IWebGLUniformLocation *location,
    /* [in] */ LONG x);


void __RPC_STUB IWebGLRenderingContext_uniform1i_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_uniform1iv_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ IWebGLUniformLocation *location,
    /* [in] */ IDispatch *v);


void __RPC_STUB IWebGLRenderingContext_uniform1iv_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_uniform2f_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ IWebGLUniformLocation *location,
    /* [in] */ FLOAT x,
    /* [in] */ FLOAT y);


void __RPC_STUB IWebGLRenderingContext_uniform2f_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_uniform2fv_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ IWebGLUniformLocation *location,
    /* [in] */ IDispatch *v);


void __RPC_STUB IWebGLRenderingContext_uniform2fv_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_uniform2i_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ IWebGLUniformLocation *location,
    /* [in] */ LONG x,
    /* [in] */ LONG y);


void __RPC_STUB IWebGLRenderingContext_uniform2i_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_uniform2iv_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ IWebGLUniformLocation *location,
    /* [in] */ IDispatch *v);


void __RPC_STUB IWebGLRenderingContext_uniform2iv_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_uniform3f_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ IWebGLUniformLocation *location,
    /* [in] */ FLOAT x,
    /* [in] */ FLOAT y,
    /* [in] */ FLOAT z);


void __RPC_STUB IWebGLRenderingContext_uniform3f_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_uniform3fv_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ IWebGLUniformLocation *location,
    /* [in] */ IDispatch *v);


void __RPC_STUB IWebGLRenderingContext_uniform3fv_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_uniform3i_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ IWebGLUniformLocation *location,
    /* [in] */ LONG x,
    /* [in] */ LONG y,
    /* [in] */ LONG z);


void __RPC_STUB IWebGLRenderingContext_uniform3i_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_uniform3iv_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ IWebGLUniformLocation *location,
    /* [in] */ IDispatch *v);


void __RPC_STUB IWebGLRenderingContext_uniform3iv_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_uniform4f_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ IWebGLUniformLocation *location,
    /* [in] */ FLOAT x,
    /* [in] */ FLOAT y,
    /* [in] */ FLOAT z,
    /* [in] */ FLOAT w);


void __RPC_STUB IWebGLRenderingContext_uniform4f_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_uniform4fv_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ IWebGLUniformLocation *location,
    /* [in] */ IDispatch *v);


void __RPC_STUB IWebGLRenderingContext_uniform4fv_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_uniform4i_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ IWebGLUniformLocation *location,
    /* [in] */ LONG x,
    /* [in] */ LONG y,
    /* [in] */ LONG z,
    /* [in] */ LONG w);


void __RPC_STUB IWebGLRenderingContext_uniform4i_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_uniform4iv_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ IWebGLUniformLocation *location,
    /* [in] */ IDispatch *v);


void __RPC_STUB IWebGLRenderingContext_uniform4iv_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_uniformMatrix2fv_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ IWebGLUniformLocation *location,
    /* [in] */ BOOL transpose,
    /* [in] */ IDispatch *value);


void __RPC_STUB IWebGLRenderingContext_uniformMatrix2fv_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_uniformMatrix3fv_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ IWebGLUniformLocation *location,
    /* [in] */ BOOL transpose,
    /* [in] */ IDispatch *value);


void __RPC_STUB IWebGLRenderingContext_uniformMatrix3fv_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_uniformMatrix4fv_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ IWebGLUniformLocation *location,
    /* [in] */ BOOL transpose,
    /* [in] */ IDispatch *value);


void __RPC_STUB IWebGLRenderingContext_uniformMatrix4fv_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_useProgram_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ IWebGLProgram *program);


void __RPC_STUB IWebGLRenderingContext_useProgram_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_validateProgram_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ IWebGLProgram *program);


void __RPC_STUB IWebGLRenderingContext_validateProgram_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_vertexAttrib1f_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ ULONG indx,
    /* [in] */ FLOAT x);


void __RPC_STUB IWebGLRenderingContext_vertexAttrib1f_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_vertexAttrib1fv_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ ULONG indx,
    /* [in] */ IDispatch *v);


void __RPC_STUB IWebGLRenderingContext_vertexAttrib1fv_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_vertexAttrib2f_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ ULONG indx,
    /* [in] */ FLOAT x,
    /* [in] */ FLOAT y);


void __RPC_STUB IWebGLRenderingContext_vertexAttrib2f_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_vertexAttrib2fv_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ ULONG indx,
    /* [in] */ IDispatch *v);


void __RPC_STUB IWebGLRenderingContext_vertexAttrib2fv_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_vertexAttrib3f_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ ULONG indx,
    /* [in] */ FLOAT x,
    /* [in] */ FLOAT y,
    /* [in] */ FLOAT z);


void __RPC_STUB IWebGLRenderingContext_vertexAttrib3f_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_vertexAttrib3fv_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ ULONG indx,
    /* [in] */ IDispatch *v);


void __RPC_STUB IWebGLRenderingContext_vertexAttrib3fv_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_vertexAttrib4f_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ ULONG indx,
    /* [in] */ FLOAT x,
    /* [in] */ FLOAT y,
    /* [in] */ FLOAT z,
    /* [in] */ FLOAT w);


void __RPC_STUB IWebGLRenderingContext_vertexAttrib4f_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_vertexAttrib4fv_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ ULONG indx,
    /* [in] */ IDispatch *v);


void __RPC_STUB IWebGLRenderingContext_vertexAttrib4fv_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext_vertexAttribPointer_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ ULONG indx,
    /* [in] */ LONG size,
    /* [in] */ ULONG type,
    /* [in] */ BOOL normalized,
    /* [in] */ LONG stride,
    /* [in] */ LONG offset);


void __RPC_STUB IWebGLRenderingContext_vertexAttribPointer_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IWebGLRenderingContext___viewport_Proxy( 
    IWebGLRenderingContext * This,
    /* [in] */ LONG x,
    /* [in] */ LONG y,
    /* [in] */ LONG width,
    /* [in] */ LONG height);


void __RPC_STUB IWebGLRenderingContext___viewport_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IWebGLRenderingContext_INTERFACE_DEFINED__ */


#ifndef __IWebGLPlugin_INTERFACE_DEFINED__
#define __IWebGLPlugin_INTERFACE_DEFINED__

/* interface IWebGLPlugin */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IWebGLPlugin;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4A670C5D-BB06-41A8-A288-E001A4A59CBA")
    IWebGLPlugin : public IDispatch
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_width( 
            /* [retval][out] */ LONG *retVal) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_width( 
            /* [in] */ VARIANT val) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_height( 
            /* [retval][out] */ LONG *retVal) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_height( 
            /* [in] */ VARIANT val) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE getContext( 
            /* [in] */ BSTR contextName,
            /* [optional][in] */ VARIANT contextAttributes,
            /* [retval][out] */ IWebGLRenderingContext **retVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE toDataURL( 
            /* [optional][in] */ VARIANT type,
            /* [optional][in] */ VARIANT jpegquality,
            /* [retval][out] */ BSTR *retVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE getNativeCanvas( 
            /* [retval][out] */ IDispatch **retVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE updateNativeCanvas( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWebGLPluginVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWebGLPlugin * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWebGLPlugin * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWebGLPlugin * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IWebGLPlugin * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IWebGLPlugin * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IWebGLPlugin * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IWebGLPlugin * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_width )( 
            IWebGLPlugin * This,
            /* [retval][out] */ LONG *retVal);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_width )( 
            IWebGLPlugin * This,
            /* [in] */ VARIANT val);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_height )( 
            IWebGLPlugin * This,
            /* [retval][out] */ LONG *retVal);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_height )( 
            IWebGLPlugin * This,
            /* [in] */ VARIANT val);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *getContext )( 
            IWebGLPlugin * This,
            /* [in] */ BSTR contextName,
            /* [optional][in] */ VARIANT contextAttributes,
            /* [retval][out] */ IWebGLRenderingContext **retVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *toDataURL )( 
            IWebGLPlugin * This,
            /* [optional][in] */ VARIANT type,
            /* [optional][in] */ VARIANT jpegquality,
            /* [retval][out] */ BSTR *retVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *getNativeCanvas )( 
            IWebGLPlugin * This,
            /* [retval][out] */ IDispatch **retVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *updateNativeCanvas )( 
            IWebGLPlugin * This);
        
        END_INTERFACE
    } IWebGLPluginVtbl;

    interface IWebGLPlugin
    {
        CONST_VTBL struct IWebGLPluginVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWebGLPlugin_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWebGLPlugin_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWebGLPlugin_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWebGLPlugin_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IWebGLPlugin_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IWebGLPlugin_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IWebGLPlugin_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IWebGLPlugin_get_width(This,retVal)	\
    ( (This)->lpVtbl -> get_width(This,retVal) ) 

#define IWebGLPlugin_put_width(This,val)	\
    ( (This)->lpVtbl -> put_width(This,val) ) 

#define IWebGLPlugin_get_height(This,retVal)	\
    ( (This)->lpVtbl -> get_height(This,retVal) ) 

#define IWebGLPlugin_put_height(This,val)	\
    ( (This)->lpVtbl -> put_height(This,val) ) 

#define IWebGLPlugin_getContext(This,contextName,contextAttributes,retVal)	\
    ( (This)->lpVtbl -> getContext(This,contextName,contextAttributes,retVal) ) 

#define IWebGLPlugin_toDataURL(This,type,jpegquality,retVal)	\
    ( (This)->lpVtbl -> toDataURL(This,type,jpegquality,retVal) ) 

#define IWebGLPlugin_getNativeCanvas(This,retVal)	\
    ( (This)->lpVtbl -> getNativeCanvas(This,retVal) ) 

#define IWebGLPlugin_updateNativeCanvas(This)	\
    ( (This)->lpVtbl -> updateNativeCanvas(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWebGLPlugin_INTERFACE_DEFINED__ */


#ifndef __IIEWebGLBHO_INTERFACE_DEFINED__
#define __IIEWebGLBHO_INTERFACE_DEFINED__

/* interface IIEWebGLBHO */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IIEWebGLBHO;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("637009F6-37A9-4D27-85BC-B4364E0787BF")
    IIEWebGLBHO : public IUnknown
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct IIEWebGLBHOVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIEWebGLBHO * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIEWebGLBHO * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIEWebGLBHO * This);
        
        END_INTERFACE
    } IIEWebGLBHOVtbl;

    interface IIEWebGLBHO
    {
        CONST_VTBL struct IIEWebGLBHOVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIEWebGLBHO_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIEWebGLBHO_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIEWebGLBHO_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIEWebGLBHO_INTERFACE_DEFINED__ */



#ifndef __IEWebGLLib_LIBRARY_DEFINED__
#define __IEWebGLLib_LIBRARY_DEFINED__

/* library IEWebGLLib */
/* [version][uuid] */ 


EXTERN_C const IID LIBID_IEWebGLLib;

EXTERN_C const CLSID CLSID_WebGLPlugin;

#ifdef __cplusplus

class DECLSPEC_UUID("D694F78F-A696-4A03-9841-24BB33AF9F48")
WebGLPlugin;
#endif

EXTERN_C const CLSID CLSID_IEWebGLBHO;

#ifdef __cplusplus

class DECLSPEC_UUID("424F5422-EFE8-4BBE-BCBC-8EC095EC9A8F")
IEWebGLBHO;
#endif

EXTERN_C const CLSID CLSID_ArrayBuffer;

#ifdef __cplusplus

class DECLSPEC_UUID("425DF043-792B-4C23-8E57-D1CCBF8C1687")
ArrayBuffer;
#endif

EXTERN_C const CLSID CLSID_Uint8Array;

#ifdef __cplusplus

class DECLSPEC_UUID("71D927BC-F79E-4BC3-8D46-ACB2DB621282")
Uint8Array;
#endif

EXTERN_C const CLSID CLSID_Int8Array;

#ifdef __cplusplus

class DECLSPEC_UUID("254BFE05-0837-48C2-A243-7B5CC29E7CC5")
Int8Array;
#endif

EXTERN_C const CLSID CLSID_Uint16Array;

#ifdef __cplusplus

class DECLSPEC_UUID("FB50E7D2-D09E-4A6B-9396-A58F5AC09944")
Uint16Array;
#endif

EXTERN_C const CLSID CLSID_Int16Array;

#ifdef __cplusplus

class DECLSPEC_UUID("0E710FA3-4858-46AE-8609-3D959B17D257")
Int16Array;
#endif

EXTERN_C const CLSID CLSID_Uint32Array;

#ifdef __cplusplus

class DECLSPEC_UUID("1D45621F-8601-434A-9CDC-61C89B96E76C")
Uint32Array;
#endif

EXTERN_C const CLSID CLSID_Int32Array;

#ifdef __cplusplus

class DECLSPEC_UUID("F078A1CD-3355-47E0-8888-04E1CC9E938F")
Int32Array;
#endif

EXTERN_C const CLSID CLSID_Float32Array;

#ifdef __cplusplus

class DECLSPEC_UUID("1C59BAB2-21F0-467C-A41A-326925389D5E")
Float32Array;
#endif

EXTERN_C const CLSID CLSID_Float64Array;

#ifdef __cplusplus

class DECLSPEC_UUID("605CFDFF-26C1-4293-8C45-AAEF4DE49C83")
Float64Array;
#endif

EXTERN_C const CLSID CLSID_DataArrayView;

#ifdef __cplusplus

class DECLSPEC_UUID("CB600F32-7513-4615-A841-4F40FDC03E4D")
DataArrayView;
#endif

EXTERN_C const CLSID CLSID_WebGLRenderingContext;

#ifdef __cplusplus

class DECLSPEC_UUID("E864B09B-CED5-4439-B4FA-8E9E7E840595")
WebGLRenderingContext;
#endif

EXTERN_C const CLSID CLSID_WebGLShaderPrecisionFormat;

#ifdef __cplusplus

class DECLSPEC_UUID("0D5CE1B4-22A0-4E80-AA48-A0B3B9515E07")
WebGLShaderPrecisionFormat;
#endif

EXTERN_C const CLSID CLSID_WebGLContextAttributes;

#ifdef __cplusplus

class DECLSPEC_UUID("B2838EB2-6FFF-411F-A5C6-18A81D3866D9")
WebGLContextAttributes;
#endif

#ifndef __IOESTextureFloat_INTERFACE_DEFINED__
#define __IOESTextureFloat_INTERFACE_DEFINED__

/* interface IOESTextureFloat */
/* [unique][dual][uuid][object] */ 


EXTERN_C const IID IID_IOESTextureFloat;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("CC2B8A2D-82BC-4014-8BB5-0E788EB0DA6B")
    IOESTextureFloat : public IJSObject
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct IOESTextureFloatVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IOESTextureFloat * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IOESTextureFloat * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IOESTextureFloat * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IOESTextureFloat * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IOESTextureFloat * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IOESTextureFloat * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IOESTextureFloat * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *toString )( 
            IOESTextureFloat * This,
            /* [retval][out] */ BSTR *retVal);
        
        END_INTERFACE
    } IOESTextureFloatVtbl;

    interface IOESTextureFloat
    {
        CONST_VTBL struct IOESTextureFloatVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IOESTextureFloat_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IOESTextureFloat_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IOESTextureFloat_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IOESTextureFloat_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IOESTextureFloat_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IOESTextureFloat_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IOESTextureFloat_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IOESTextureFloat_toString(This,retVal)	\
    ( (This)->lpVtbl -> toString(This,retVal) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IOESTextureFloat_INTERFACE_DEFINED__ */


#ifndef __IOESStandardDerivatives_INTERFACE_DEFINED__
#define __IOESStandardDerivatives_INTERFACE_DEFINED__

/* interface IOESStandardDerivatives */
/* [unique][dual][uuid][object] */ 


EXTERN_C const IID IID_IOESStandardDerivatives;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2CE2C63A-2526-4D8C-8B0B-DA2905CD8B95")
    IOESStandardDerivatives : public IJSObject
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_FRAGMENT_SHADER_DERIVATIVE_HINT_OES( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IOESStandardDerivativesVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IOESStandardDerivatives * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IOESStandardDerivatives * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IOESStandardDerivatives * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IOESStandardDerivatives * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IOESStandardDerivatives * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IOESStandardDerivatives * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IOESStandardDerivatives * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *toString )( 
            IOESStandardDerivatives * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FRAGMENT_SHADER_DERIVATIVE_HINT_OES )( 
            IOESStandardDerivatives * This,
            /* [retval][out] */ ULONG *retVal);
        
        END_INTERFACE
    } IOESStandardDerivativesVtbl;

    interface IOESStandardDerivatives
    {
        CONST_VTBL struct IOESStandardDerivativesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IOESStandardDerivatives_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IOESStandardDerivatives_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IOESStandardDerivatives_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IOESStandardDerivatives_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IOESStandardDerivatives_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IOESStandardDerivatives_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IOESStandardDerivatives_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IOESStandardDerivatives_toString(This,retVal)	\
    ( (This)->lpVtbl -> toString(This,retVal) ) 


#define IOESStandardDerivatives_get_FRAGMENT_SHADER_DERIVATIVE_HINT_OES(This,retVal)	\
    ( (This)->lpVtbl -> get_FRAGMENT_SHADER_DERIVATIVE_HINT_OES(This,retVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IOESStandardDerivatives_INTERFACE_DEFINED__ */


#ifndef __IWebGLCompressedTextureS3TC_INTERFACE_DEFINED__
#define __IWebGLCompressedTextureS3TC_INTERFACE_DEFINED__

/* interface IWebGLCompressedTextureS3TC */
/* [unique][dual][uuid][object] */ 


EXTERN_C const IID IID_IWebGLCompressedTextureS3TC;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("43B375EA-3236-427F-A71D-D45CF2B71DD7")
    IWebGLCompressedTextureS3TC : public IJSObject
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_COMPRESSED_RGB_S3TC_DXT1_EXT( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_COMPRESSED_RGBA_S3TC_DXT1_EXT( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_COMPRESSED_RGBA_S3TC_DXT3_EXT( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_COMPRESSED_RGBA_S3TC_DXT5_EXT( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWebGLCompressedTextureS3TCVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWebGLCompressedTextureS3TC * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWebGLCompressedTextureS3TC * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWebGLCompressedTextureS3TC * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IWebGLCompressedTextureS3TC * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IWebGLCompressedTextureS3TC * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IWebGLCompressedTextureS3TC * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IWebGLCompressedTextureS3TC * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *toString )( 
            IWebGLCompressedTextureS3TC * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_COMPRESSED_RGB_S3TC_DXT1_EXT )( 
            IWebGLCompressedTextureS3TC * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_COMPRESSED_RGBA_S3TC_DXT1_EXT )( 
            IWebGLCompressedTextureS3TC * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_COMPRESSED_RGBA_S3TC_DXT3_EXT )( 
            IWebGLCompressedTextureS3TC * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_COMPRESSED_RGBA_S3TC_DXT5_EXT )( 
            IWebGLCompressedTextureS3TC * This,
            /* [retval][out] */ ULONG *retVal);
        
        END_INTERFACE
    } IWebGLCompressedTextureS3TCVtbl;

    interface IWebGLCompressedTextureS3TC
    {
        CONST_VTBL struct IWebGLCompressedTextureS3TCVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWebGLCompressedTextureS3TC_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWebGLCompressedTextureS3TC_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWebGLCompressedTextureS3TC_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWebGLCompressedTextureS3TC_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IWebGLCompressedTextureS3TC_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IWebGLCompressedTextureS3TC_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IWebGLCompressedTextureS3TC_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IWebGLCompressedTextureS3TC_toString(This,retVal)	\
    ( (This)->lpVtbl -> toString(This,retVal) ) 


#define IWebGLCompressedTextureS3TC_get_COMPRESSED_RGB_S3TC_DXT1_EXT(This,retVal)	\
    ( (This)->lpVtbl -> get_COMPRESSED_RGB_S3TC_DXT1_EXT(This,retVal) ) 

#define IWebGLCompressedTextureS3TC_get_COMPRESSED_RGBA_S3TC_DXT1_EXT(This,retVal)	\
    ( (This)->lpVtbl -> get_COMPRESSED_RGBA_S3TC_DXT1_EXT(This,retVal) ) 

#define IWebGLCompressedTextureS3TC_get_COMPRESSED_RGBA_S3TC_DXT3_EXT(This,retVal)	\
    ( (This)->lpVtbl -> get_COMPRESSED_RGBA_S3TC_DXT3_EXT(This,retVal) ) 

#define IWebGLCompressedTextureS3TC_get_COMPRESSED_RGBA_S3TC_DXT5_EXT(This,retVal)	\
    ( (This)->lpVtbl -> get_COMPRESSED_RGBA_S3TC_DXT5_EXT(This,retVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWebGLCompressedTextureS3TC_INTERFACE_DEFINED__ */


#ifndef __IEXTTextureFilterAnisotropic_INTERFACE_DEFINED__
#define __IEXTTextureFilterAnisotropic_INTERFACE_DEFINED__

/* interface IEXTTextureFilterAnisotropic */
/* [unique][dual][uuid][object] */ 


EXTERN_C const IID IID_IEXTTextureFilterAnisotropic;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("D79EE8BF-F2E2-46DA-91F0-4D29268C15FC")
    IEXTTextureFilterAnisotropic : public IJSObject
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_TEXTURE_MAX_ANISOTROPY_EXT( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_MAX_TEXTURE_MAX_ANISOTROPY_EXT( 
            /* [retval][out] */ ULONG *retVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IEXTTextureFilterAnisotropicVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IEXTTextureFilterAnisotropic * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IEXTTextureFilterAnisotropic * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IEXTTextureFilterAnisotropic * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IEXTTextureFilterAnisotropic * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IEXTTextureFilterAnisotropic * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IEXTTextureFilterAnisotropic * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IEXTTextureFilterAnisotropic * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *toString )( 
            IEXTTextureFilterAnisotropic * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TEXTURE_MAX_ANISOTROPY_EXT )( 
            IEXTTextureFilterAnisotropic * This,
            /* [retval][out] */ ULONG *retVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_MAX_TEXTURE_MAX_ANISOTROPY_EXT )( 
            IEXTTextureFilterAnisotropic * This,
            /* [retval][out] */ ULONG *retVal);
        
        END_INTERFACE
    } IEXTTextureFilterAnisotropicVtbl;

    interface IEXTTextureFilterAnisotropic
    {
        CONST_VTBL struct IEXTTextureFilterAnisotropicVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEXTTextureFilterAnisotropic_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEXTTextureFilterAnisotropic_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEXTTextureFilterAnisotropic_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEXTTextureFilterAnisotropic_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IEXTTextureFilterAnisotropic_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IEXTTextureFilterAnisotropic_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IEXTTextureFilterAnisotropic_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IEXTTextureFilterAnisotropic_toString(This,retVal)	\
    ( (This)->lpVtbl -> toString(This,retVal) ) 


#define IEXTTextureFilterAnisotropic_get_TEXTURE_MAX_ANISOTROPY_EXT(This,retVal)	\
    ( (This)->lpVtbl -> get_TEXTURE_MAX_ANISOTROPY_EXT(This,retVal) ) 

#define IEXTTextureFilterAnisotropic_get_MAX_TEXTURE_MAX_ANISOTROPY_EXT(This,retVal)	\
    ( (This)->lpVtbl -> get_MAX_TEXTURE_MAX_ANISOTROPY_EXT(This,retVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IEXTTextureFilterAnisotropic_INTERFACE_DEFINED__ */

#endif /* __IEWebGLLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree(     unsigned long *, BSTR * ); 

unsigned long             __RPC_USER  VARIANT_UserSize(     unsigned long *, unsigned long            , VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserMarshal(  unsigned long *, unsigned char *, VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserUnmarshal(unsigned long *, unsigned char *, VARIANT * ); 
void                      __RPC_USER  VARIANT_UserFree(     unsigned long *, VARIANT * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


