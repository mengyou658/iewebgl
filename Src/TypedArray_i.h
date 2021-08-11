

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


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

#ifndef __TypedArray_i_h__
#define __TypedArray_i_h__

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


