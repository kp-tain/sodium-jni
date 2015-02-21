/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 3.0.2
 *
 * This file is not intended to be easily readable and contains a number of
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG
 * interface file instead.
 * ----------------------------------------------------------------------------- */

#define SWIGJAVA

/* -----------------------------------------------------------------------------
 *  This section contains generic SWIG labels for method/variable
 *  declarations/attributes, and other compiler dependent labels.
 * ----------------------------------------------------------------------------- */

/* template workaround for compilers that cannot correctly implement the C++ standard */
#ifndef SWIGTEMPLATEDISAMBIGUATOR
# if defined(__SUNPRO_CC) && (__SUNPRO_CC <= 0x560)
#  define SWIGTEMPLATEDISAMBIGUATOR template
# elif defined(__HP_aCC)
/* Needed even with `aCC -AA' when `aCC -V' reports HP ANSI C++ B3910B A.03.55 */
/* If we find a maximum version that requires this, the test would be __HP_aCC <= 35500 for A.03.55 */
#  define SWIGTEMPLATEDISAMBIGUATOR template
# else
#  define SWIGTEMPLATEDISAMBIGUATOR
# endif
#endif

/* inline attribute */
#ifndef SWIGINLINE
# if defined(__cplusplus) || (defined(__GNUC__) && !defined(__STRICT_ANSI__))
#   define SWIGINLINE inline
# else
#   define SWIGINLINE
# endif
#endif

/* attribute recognised by some compilers to avoid 'unused' warnings */
#ifndef SWIGUNUSED
# if defined(__GNUC__)
#   if !(defined(__cplusplus)) || (__GNUC__ > 3 || (__GNUC__ == 3 && __GNUC_MINOR__ >= 4))
#     define SWIGUNUSED __attribute__ ((__unused__))
#   else
#     define SWIGUNUSED
#   endif
# elif defined(__ICC)
#   define SWIGUNUSED __attribute__ ((__unused__))
# else
#   define SWIGUNUSED
# endif
#endif

#ifndef SWIG_MSC_UNSUPPRESS_4505
# if defined(_MSC_VER)
#   pragma warning(disable : 4505) /* unreferenced local function has been removed */
# endif
#endif

#ifndef SWIGUNUSEDPARM
# ifdef __cplusplus
#   define SWIGUNUSEDPARM(p)
# else
#   define SWIGUNUSEDPARM(p) p SWIGUNUSED
# endif
#endif

/* internal SWIG method */
#ifndef SWIGINTERN
# define SWIGINTERN static SWIGUNUSED
#endif

/* internal inline SWIG method */
#ifndef SWIGINTERNINLINE
# define SWIGINTERNINLINE SWIGINTERN SWIGINLINE
#endif

/* exporting methods */
#if (__GNUC__ >= 4) || (__GNUC__ == 3 && __GNUC_MINOR__ >= 4)
#  ifndef GCC_HASCLASSVISIBILITY
#    define GCC_HASCLASSVISIBILITY
#  endif
#endif

#ifndef SWIGEXPORT
# if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
#   if defined(STATIC_LINKED)
#     define SWIGEXPORT
#   else
#     define SWIGEXPORT __declspec(dllexport)
#   endif
# else
#   if defined(__GNUC__) && defined(GCC_HASCLASSVISIBILITY)
#     define SWIGEXPORT __attribute__ ((visibility("default")))
#   else
#     define SWIGEXPORT
#   endif
# endif
#endif

/* calling conventions for Windows */
#ifndef SWIGSTDCALL
# if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
#   define SWIGSTDCALL __stdcall
# else
#   define SWIGSTDCALL
# endif
#endif

/* Deal with Microsoft's attempt at deprecating C standard runtime functions */
#if !defined(SWIG_NO_CRT_SECURE_NO_DEPRECATE) && defined(_MSC_VER) && !defined(_CRT_SECURE_NO_DEPRECATE)
# define _CRT_SECURE_NO_DEPRECATE
#endif

/* Deal with Microsoft's attempt at deprecating methods in the standard C++ library */
#if !defined(SWIG_NO_SCL_SECURE_NO_DEPRECATE) && defined(_MSC_VER) && !defined(_SCL_SECURE_NO_DEPRECATE)
# define _SCL_SECURE_NO_DEPRECATE
#endif



/* Fix for jlong on some versions of gcc on Windows */
#if defined(__GNUC__) && !defined(__INTEL_COMPILER)
  typedef long long __int64;
#endif

/* Fix for jlong on 64-bit x86 Solaris */
#if defined(__x86_64)
# ifdef _LP64
#   undef _LP64
# endif
#endif

#include <jni.h>
#include <stdlib.h>
#include <string.h>


/* Support for throwing Java exceptions */
typedef enum {
  SWIG_JavaOutOfMemoryError = 1, 
  SWIG_JavaIOException, 
  SWIG_JavaRuntimeException, 
  SWIG_JavaIndexOutOfBoundsException,
  SWIG_JavaArithmeticException,
  SWIG_JavaIllegalArgumentException,
  SWIG_JavaNullPointerException,
  SWIG_JavaDirectorPureVirtual,
  SWIG_JavaUnknownError
} SWIG_JavaExceptionCodes;

typedef struct {
  SWIG_JavaExceptionCodes code;
  const char *java_exception;
} SWIG_JavaExceptions_t;


static void SWIGUNUSED SWIG_JavaThrowException(JNIEnv *jenv, SWIG_JavaExceptionCodes code, const char *msg) {
  jclass excep;
  static const SWIG_JavaExceptions_t java_exceptions[] = {
    { SWIG_JavaOutOfMemoryError, "java/lang/OutOfMemoryError" },
    { SWIG_JavaIOException, "java/io/IOException" },
    { SWIG_JavaRuntimeException, "java/lang/RuntimeException" },
    { SWIG_JavaIndexOutOfBoundsException, "java/lang/IndexOutOfBoundsException" },
    { SWIG_JavaArithmeticException, "java/lang/ArithmeticException" },
    { SWIG_JavaIllegalArgumentException, "java/lang/IllegalArgumentException" },
    { SWIG_JavaNullPointerException, "java/lang/NullPointerException" },
    { SWIG_JavaDirectorPureVirtual, "java/lang/RuntimeException" },
    { SWIG_JavaUnknownError,  "java/lang/UnknownError" },
    { (SWIG_JavaExceptionCodes)0,  "java/lang/UnknownError" }
  };
  const SWIG_JavaExceptions_t *except_ptr = java_exceptions;

  while (except_ptr->code != code && except_ptr->code)
    except_ptr++;

  (*jenv)->ExceptionClear(jenv);
  excep = (*jenv)->FindClass(jenv, except_ptr->java_exception);
  if (excep)
    (*jenv)->ThrowNew(jenv, excep, msg);
}


/* Contract support */

#define SWIG_contract_assert(nullreturn, expr, msg) if (!(expr)) {SWIG_JavaThrowException(jenv, SWIG_JavaIllegalArgumentException, msg); return nullreturn; } else


#include "sodium.h"


#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT jint JNICALL Java_com_jackwink_libsodium_jni_SodiumJNI_sodium_1init(JNIEnv *jenv, jclass jcls) {
  jint jresult = 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  result = (int)sodium_init();
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jstring JNICALL Java_com_jackwink_libsodium_jni_SodiumJNI_sodium_1version_1string(JNIEnv *jenv, jclass jcls) {
  jstring jresult = 0 ;
  char *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (char *)sodium_version_string();
  if (result) jresult = (*jenv)->NewStringUTF(jenv, (const char *)result);
  return jresult;
}


SWIGEXPORT void JNICALL Java_com_jackwink_libsodium_jni_SodiumJNI_randombytes_1buf(JNIEnv *jenv, jclass jcls, jbyteArray jarg1, jint jarg2) {
  void *arg1 = (void *) (void *)0 ;
  size_t arg2 ;
  
  (void)jenv;
  (void)jcls;
  {
    arg1 = (unsigned char *) (*jenv)->GetByteArrayElements(jenv, jarg1, 0); 
  }
  arg2 = (size_t)jarg2; 
  randombytes_buf(arg1,arg2);
  {
    (*jenv)->ReleaseByteArrayElements(jenv, jarg1, (jbyte *) arg1, 0); 
  }
  
}


SWIGEXPORT jint JNICALL Java_com_jackwink_libsodium_jni_SodiumJNI_randombytes_1random(JNIEnv *jenv, jclass jcls) {
  jint jresult = 0 ;
  uint32_t result;
  
  (void)jenv;
  (void)jcls;
  result = randombytes_random();
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_com_jackwink_libsodium_jni_SodiumJNI_randombytes_1uniform(JNIEnv *jenv, jclass jcls, jint jarg1) {
  jint jresult = 0 ;
  uint32_t arg1 ;
  uint32_t result;
  
  (void)jenv;
  (void)jcls;
  arg1 = (uint32_t)jarg1; 
  result = randombytes_uniform(arg1);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_com_jackwink_libsodium_jni_SodiumJNI_crypto_1sign_1keypair(JNIEnv *jenv, jclass jcls, jbyteArray jarg1, jbyteArray jarg2) {
  jint jresult = 0 ;
  unsigned char *arg1 = (unsigned char *) 0 ;
  unsigned char *arg2 = (unsigned char *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  {
    arg1 = (unsigned char *) (*jenv)->GetByteArrayElements(jenv, jarg1, 0); 
  }
  {
    arg2 = (unsigned char *) (*jenv)->GetByteArrayElements(jenv, jarg2, 0); 
  }
  result = (int)crypto_sign_keypair(arg1,arg2);
  jresult = (jint)result; 
  {
    (*jenv)->ReleaseByteArrayElements(jenv, jarg1, (jbyte *) arg1, 0); 
  }
  {
    (*jenv)->ReleaseByteArrayElements(jenv, jarg2, (jbyte *) arg2, 0); 
  }
  
  
  return jresult;
}


SWIGEXPORT jint JNICALL Java_com_jackwink_libsodium_jni_SodiumJNI_crypto_1sign_1seed_1keypair(JNIEnv *jenv, jclass jcls, jbyteArray jarg1, jbyteArray jarg2, jbyteArray jarg3) {
  jint jresult = 0 ;
  unsigned char *arg1 = (unsigned char *) 0 ;
  unsigned char *arg2 = (unsigned char *) 0 ;
  unsigned char *arg3 = (unsigned char *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  {
    arg1 = (unsigned char *) (*jenv)->GetByteArrayElements(jenv, jarg1, 0); 
  }
  {
    arg2 = (unsigned char *) (*jenv)->GetByteArrayElements(jenv, jarg2, 0); 
  }
  {
    arg3 = (unsigned char *) (*jenv)->GetByteArrayElements(jenv, jarg3, 0); 
  }
  result = (int)crypto_sign_seed_keypair(arg1,arg2,(unsigned char const *)arg3);
  jresult = (jint)result; 
  {
    (*jenv)->ReleaseByteArrayElements(jenv, jarg1, (jbyte *) arg1, 0); 
  }
  {
    (*jenv)->ReleaseByteArrayElements(jenv, jarg2, (jbyte *) arg2, 0); 
  }
  {
    (*jenv)->ReleaseByteArrayElements(jenv, jarg3, (jbyte *) arg3, 0); 
  }
  
  
  
  return jresult;
}


SWIGEXPORT jint JNICALL Java_com_jackwink_libsodium_jni_SodiumJNI_crypto_1sign(JNIEnv *jenv, jclass jcls, jbyteArray jarg1, jlong jarg2, jbyteArray jarg3, jlong jarg4, jbyteArray jarg5) {
  jint jresult = 0 ;
  unsigned char *arg1 = (unsigned char *) 0 ;
  unsigned long long *arg2 = (unsigned long long *) 0 ;
  unsigned char *arg3 = (unsigned char *) 0 ;
  unsigned long long arg4 ;
  unsigned char *arg5 = (unsigned char *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  {
    arg1 = (unsigned char *) (*jenv)->GetByteArrayElements(jenv, jarg1, 0); 
  }
  arg2 = *(unsigned long long **)&jarg2; 
  {
    arg3 = (unsigned char *) (*jenv)->GetByteArrayElements(jenv, jarg3, 0); 
  }
  arg4 = (unsigned long long)jarg4; 
  {
    arg5 = (unsigned char *) (*jenv)->GetByteArrayElements(jenv, jarg5, 0); 
  }
  result = (int)crypto_sign(arg1,arg2,(unsigned char const *)arg3,arg4,(unsigned char const *)arg5);
  jresult = (jint)result; 
  {
    (*jenv)->ReleaseByteArrayElements(jenv, jarg1, (jbyte *) arg1, 0); 
  }
  {
    (*jenv)->ReleaseByteArrayElements(jenv, jarg3, (jbyte *) arg3, 0); 
  }
  {
    (*jenv)->ReleaseByteArrayElements(jenv, jarg5, (jbyte *) arg5, 0); 
  }
  
  
  
  return jresult;
}


SWIGEXPORT jint JNICALL Java_com_jackwink_libsodium_jni_SodiumJNI_crypto_1sign_1open(JNIEnv *jenv, jclass jcls, jbyteArray jarg1, jlong jarg2, jbyteArray jarg3, jlong jarg4, jbyteArray jarg5) {
  jint jresult = 0 ;
  unsigned char *arg1 = (unsigned char *) 0 ;
  unsigned long long *arg2 = (unsigned long long *) 0 ;
  unsigned char *arg3 = (unsigned char *) 0 ;
  unsigned long long arg4 ;
  unsigned char *arg5 = (unsigned char *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  {
    arg1 = (unsigned char *) (*jenv)->GetByteArrayElements(jenv, jarg1, 0); 
  }
  arg2 = *(unsigned long long **)&jarg2; 
  {
    arg3 = (unsigned char *) (*jenv)->GetByteArrayElements(jenv, jarg3, 0); 
  }
  arg4 = (unsigned long long)jarg4; 
  {
    arg5 = (unsigned char *) (*jenv)->GetByteArrayElements(jenv, jarg5, 0); 
  }
  result = (int)crypto_sign_open(arg1,arg2,(unsigned char const *)arg3,arg4,(unsigned char const *)arg5);
  jresult = (jint)result; 
  {
    (*jenv)->ReleaseByteArrayElements(jenv, jarg1, (jbyte *) arg1, 0); 
  }
  {
    (*jenv)->ReleaseByteArrayElements(jenv, jarg3, (jbyte *) arg3, 0); 
  }
  {
    (*jenv)->ReleaseByteArrayElements(jenv, jarg5, (jbyte *) arg5, 0); 
  }
  
  
  
  return jresult;
}


SWIGEXPORT jint JNICALL Java_com_jackwink_libsodium_jni_SodiumJNI_crypto_1sign_1detached(JNIEnv *jenv, jclass jcls, jbyteArray jarg1, jlong jarg2, jbyteArray jarg3, jlong jarg4, jbyteArray jarg5) {
  jint jresult = 0 ;
  unsigned char *arg1 = (unsigned char *) 0 ;
  unsigned long long *arg2 = (unsigned long long *) 0 ;
  unsigned char *arg3 = (unsigned char *) 0 ;
  unsigned long long arg4 ;
  unsigned char *arg5 = (unsigned char *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  {
    arg1 = (unsigned char *) (*jenv)->GetByteArrayElements(jenv, jarg1, 0); 
  }
  arg2 = *(unsigned long long **)&jarg2; 
  {
    arg3 = (unsigned char *) (*jenv)->GetByteArrayElements(jenv, jarg3, 0); 
  }
  arg4 = (unsigned long long)jarg4; 
  {
    arg5 = (unsigned char *) (*jenv)->GetByteArrayElements(jenv, jarg5, 0); 
  }
  result = (int)crypto_sign_detached(arg1,arg2,(unsigned char const *)arg3,arg4,(unsigned char const *)arg5);
  jresult = (jint)result; 
  {
    (*jenv)->ReleaseByteArrayElements(jenv, jarg1, (jbyte *) arg1, 0); 
  }
  {
    (*jenv)->ReleaseByteArrayElements(jenv, jarg3, (jbyte *) arg3, 0); 
  }
  {
    (*jenv)->ReleaseByteArrayElements(jenv, jarg5, (jbyte *) arg5, 0); 
  }
  
  
  
  return jresult;
}


SWIGEXPORT jint JNICALL Java_com_jackwink_libsodium_jni_SodiumJNI_crypto_1sign_1verify_1detached(JNIEnv *jenv, jclass jcls, jbyteArray jarg1, jbyteArray jarg2, jlong jarg3, jbyteArray jarg4) {
  jint jresult = 0 ;
  unsigned char *arg1 = (unsigned char *) 0 ;
  unsigned char *arg2 = (unsigned char *) 0 ;
  unsigned long long arg3 ;
  unsigned char *arg4 = (unsigned char *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  {
    arg1 = (unsigned char *) (*jenv)->GetByteArrayElements(jenv, jarg1, 0); 
  }
  {
    arg2 = (unsigned char *) (*jenv)->GetByteArrayElements(jenv, jarg2, 0); 
  }
  arg3 = (unsigned long long)jarg3; 
  {
    arg4 = (unsigned char *) (*jenv)->GetByteArrayElements(jenv, jarg4, 0); 
  }
  result = (int)crypto_sign_verify_detached((unsigned char const *)arg1,(unsigned char const *)arg2,arg3,(unsigned char const *)arg4);
  jresult = (jint)result; 
  {
    (*jenv)->ReleaseByteArrayElements(jenv, jarg1, (jbyte *) arg1, 0); 
  }
  {
    (*jenv)->ReleaseByteArrayElements(jenv, jarg2, (jbyte *) arg2, 0); 
  }
  {
    (*jenv)->ReleaseByteArrayElements(jenv, jarg4, (jbyte *) arg4, 0); 
  }
  
  
  
  return jresult;
}


SWIGEXPORT jint JNICALL Java_com_jackwink_libsodium_jni_SodiumJNI_crypto_1sign_1ed25519_1sk_1to_1seed(JNIEnv *jenv, jclass jcls, jbyteArray jarg1, jbyteArray jarg2) {
  jint jresult = 0 ;
  unsigned char *arg1 = (unsigned char *) 0 ;
  unsigned char *arg2 = (unsigned char *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  {
    arg1 = (unsigned char *) (*jenv)->GetByteArrayElements(jenv, jarg1, 0); 
  }
  {
    arg2 = (unsigned char *) (*jenv)->GetByteArrayElements(jenv, jarg2, 0); 
  }
  result = (int)crypto_sign_ed25519_sk_to_seed(arg1,(unsigned char const *)arg2);
  jresult = (jint)result; 
  {
    (*jenv)->ReleaseByteArrayElements(jenv, jarg1, (jbyte *) arg1, 0); 
  }
  {
    (*jenv)->ReleaseByteArrayElements(jenv, jarg2, (jbyte *) arg2, 0); 
  }
  
  
  return jresult;
}


SWIGEXPORT jint JNICALL Java_com_jackwink_libsodium_jni_SodiumJNI_crypto_1sign_1ed25519_1sk_1to_1pk(JNIEnv *jenv, jclass jcls, jbyteArray jarg1, jbyteArray jarg2) {
  jint jresult = 0 ;
  unsigned char *arg1 = (unsigned char *) 0 ;
  unsigned char *arg2 = (unsigned char *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  {
    arg1 = (unsigned char *) (*jenv)->GetByteArrayElements(jenv, jarg1, 0); 
  }
  {
    arg2 = (unsigned char *) (*jenv)->GetByteArrayElements(jenv, jarg2, 0); 
  }
  result = (int)crypto_sign_ed25519_sk_to_pk(arg1,(unsigned char const *)arg2);
  jresult = (jint)result; 
  {
    (*jenv)->ReleaseByteArrayElements(jenv, jarg1, (jbyte *) arg1, 0); 
  }
  {
    (*jenv)->ReleaseByteArrayElements(jenv, jarg2, (jbyte *) arg2, 0); 
  }
  
  
  return jresult;
}


SWIGEXPORT jint JNICALL Java_com_jackwink_libsodium_jni_SodiumJNI_crypto_1box_1seed_1keypair(JNIEnv *jenv, jclass jcls, jbyteArray jarg1, jbyteArray jarg2, jbyteArray jarg3) {
  jint jresult = 0 ;
  unsigned char *arg1 = (unsigned char *) 0 ;
  unsigned char *arg2 = (unsigned char *) 0 ;
  unsigned char *arg3 = (unsigned char *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  {
    arg1 = (unsigned char *) (*jenv)->GetByteArrayElements(jenv, jarg1, 0); 
  }
  {
    arg2 = (unsigned char *) (*jenv)->GetByteArrayElements(jenv, jarg2, 0); 
  }
  {
    arg3 = (unsigned char *) (*jenv)->GetByteArrayElements(jenv, jarg3, 0); 
  }
  result = (int)crypto_box_seed_keypair(arg1,arg2,(unsigned char const *)arg3);
  jresult = (jint)result; 
  {
    (*jenv)->ReleaseByteArrayElements(jenv, jarg1, (jbyte *) arg1, 0); 
  }
  {
    (*jenv)->ReleaseByteArrayElements(jenv, jarg2, (jbyte *) arg2, 0); 
  }
  {
    (*jenv)->ReleaseByteArrayElements(jenv, jarg3, (jbyte *) arg3, 0); 
  }
  
  
  
  return jresult;
}


SWIGEXPORT jint JNICALL Java_com_jackwink_libsodium_jni_SodiumJNI_crypto_1box_1keypair(JNIEnv *jenv, jclass jcls, jbyteArray jarg1, jbyteArray jarg2) {
  jint jresult = 0 ;
  unsigned char *arg1 = (unsigned char *) 0 ;
  unsigned char *arg2 = (unsigned char *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  {
    arg1 = (unsigned char *) (*jenv)->GetByteArrayElements(jenv, jarg1, 0); 
  }
  {
    arg2 = (unsigned char *) (*jenv)->GetByteArrayElements(jenv, jarg2, 0); 
  }
  result = (int)crypto_box_keypair(arg1,arg2);
  jresult = (jint)result; 
  {
    (*jenv)->ReleaseByteArrayElements(jenv, jarg1, (jbyte *) arg1, 0); 
  }
  {
    (*jenv)->ReleaseByteArrayElements(jenv, jarg2, (jbyte *) arg2, 0); 
  }
  
  
  return jresult;
}


SWIGEXPORT jint JNICALL Java_com_jackwink_libsodium_jni_SodiumJNI_crypto_1box_1easy(JNIEnv *jenv, jclass jcls, jbyteArray jarg1, jbyteArray jarg2, jlong jarg3, jbyteArray jarg4, jbyteArray jarg5, jbyteArray jarg6) {
  jint jresult = 0 ;
  unsigned char *arg1 = (unsigned char *) 0 ;
  unsigned char *arg2 = (unsigned char *) 0 ;
  unsigned long long arg3 ;
  unsigned char *arg4 = (unsigned char *) 0 ;
  unsigned char *arg5 = (unsigned char *) 0 ;
  unsigned char *arg6 = (unsigned char *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  {
    arg1 = (unsigned char *) (*jenv)->GetByteArrayElements(jenv, jarg1, 0); 
  }
  {
    arg2 = (unsigned char *) (*jenv)->GetByteArrayElements(jenv, jarg2, 0); 
  }
  arg3 = (unsigned long long)jarg3; 
  {
    arg4 = (unsigned char *) (*jenv)->GetByteArrayElements(jenv, jarg4, 0); 
  }
  {
    arg5 = (unsigned char *) (*jenv)->GetByteArrayElements(jenv, jarg5, 0); 
  }
  {
    arg6 = (unsigned char *) (*jenv)->GetByteArrayElements(jenv, jarg6, 0); 
  }
  result = (int)crypto_box_easy(arg1,(unsigned char const *)arg2,arg3,(unsigned char const *)arg4,(unsigned char const *)arg5,(unsigned char const *)arg6);
  jresult = (jint)result; 
  {
    (*jenv)->ReleaseByteArrayElements(jenv, jarg1, (jbyte *) arg1, 0); 
  }
  {
    (*jenv)->ReleaseByteArrayElements(jenv, jarg2, (jbyte *) arg2, 0); 
  }
  {
    (*jenv)->ReleaseByteArrayElements(jenv, jarg4, (jbyte *) arg4, 0); 
  }
  {
    (*jenv)->ReleaseByteArrayElements(jenv, jarg5, (jbyte *) arg5, 0); 
  }
  {
    (*jenv)->ReleaseByteArrayElements(jenv, jarg6, (jbyte *) arg6, 0); 
  }
  
  
  
  
  
  return jresult;
}


SWIGEXPORT jint JNICALL Java_com_jackwink_libsodium_jni_SodiumJNI_crypto_1box_1open_1easy(JNIEnv *jenv, jclass jcls, jbyteArray jarg1, jbyteArray jarg2, jlong jarg3, jbyteArray jarg4, jbyteArray jarg5, jbyteArray jarg6) {
  jint jresult = 0 ;
  unsigned char *arg1 = (unsigned char *) 0 ;
  unsigned char *arg2 = (unsigned char *) 0 ;
  unsigned long long arg3 ;
  unsigned char *arg4 = (unsigned char *) 0 ;
  unsigned char *arg5 = (unsigned char *) 0 ;
  unsigned char *arg6 = (unsigned char *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  {
    arg1 = (unsigned char *) (*jenv)->GetByteArrayElements(jenv, jarg1, 0); 
  }
  {
    arg2 = (unsigned char *) (*jenv)->GetByteArrayElements(jenv, jarg2, 0); 
  }
  arg3 = (unsigned long long)jarg3; 
  {
    arg4 = (unsigned char *) (*jenv)->GetByteArrayElements(jenv, jarg4, 0); 
  }
  {
    arg5 = (unsigned char *) (*jenv)->GetByteArrayElements(jenv, jarg5, 0); 
  }
  {
    arg6 = (unsigned char *) (*jenv)->GetByteArrayElements(jenv, jarg6, 0); 
  }
  result = (int)crypto_box_open_easy(arg1,(unsigned char const *)arg2,arg3,(unsigned char const *)arg4,(unsigned char const *)arg5,(unsigned char const *)arg6);
  jresult = (jint)result; 
  {
    (*jenv)->ReleaseByteArrayElements(jenv, jarg1, (jbyte *) arg1, 0); 
  }
  {
    (*jenv)->ReleaseByteArrayElements(jenv, jarg2, (jbyte *) arg2, 0); 
  }
  {
    (*jenv)->ReleaseByteArrayElements(jenv, jarg4, (jbyte *) arg4, 0); 
  }
  {
    (*jenv)->ReleaseByteArrayElements(jenv, jarg5, (jbyte *) arg5, 0); 
  }
  {
    (*jenv)->ReleaseByteArrayElements(jenv, jarg6, (jbyte *) arg6, 0); 
  }
  
  
  
  
  
  return jresult;
}


SWIGEXPORT jint JNICALL Java_com_jackwink_libsodium_jni_SodiumJNI_crypto_1box_1detached(JNIEnv *jenv, jclass jcls, jbyteArray jarg1, jbyteArray jarg2, jbyteArray jarg3, jlong jarg4, jbyteArray jarg5, jbyteArray jarg6, jbyteArray jarg7) {
  jint jresult = 0 ;
  unsigned char *arg1 = (unsigned char *) 0 ;
  unsigned char *arg2 = (unsigned char *) 0 ;
  unsigned char *arg3 = (unsigned char *) 0 ;
  unsigned long long arg4 ;
  unsigned char *arg5 = (unsigned char *) 0 ;
  unsigned char *arg6 = (unsigned char *) 0 ;
  unsigned char *arg7 = (unsigned char *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  {
    arg1 = (unsigned char *) (*jenv)->GetByteArrayElements(jenv, jarg1, 0); 
  }
  {
    arg2 = (unsigned char *) (*jenv)->GetByteArrayElements(jenv, jarg2, 0); 
  }
  {
    arg3 = (unsigned char *) (*jenv)->GetByteArrayElements(jenv, jarg3, 0); 
  }
  arg4 = (unsigned long long)jarg4; 
  {
    arg5 = (unsigned char *) (*jenv)->GetByteArrayElements(jenv, jarg5, 0); 
  }
  {
    arg6 = (unsigned char *) (*jenv)->GetByteArrayElements(jenv, jarg6, 0); 
  }
  {
    arg7 = (unsigned char *) (*jenv)->GetByteArrayElements(jenv, jarg7, 0); 
  }
  result = (int)crypto_box_detached(arg1,arg2,(unsigned char const *)arg3,arg4,(unsigned char const *)arg5,(unsigned char const *)arg6,(unsigned char const *)arg7);
  jresult = (jint)result; 
  {
    (*jenv)->ReleaseByteArrayElements(jenv, jarg1, (jbyte *) arg1, 0); 
  }
  {
    (*jenv)->ReleaseByteArrayElements(jenv, jarg2, (jbyte *) arg2, 0); 
  }
  {
    (*jenv)->ReleaseByteArrayElements(jenv, jarg3, (jbyte *) arg3, 0); 
  }
  {
    (*jenv)->ReleaseByteArrayElements(jenv, jarg5, (jbyte *) arg5, 0); 
  }
  {
    (*jenv)->ReleaseByteArrayElements(jenv, jarg6, (jbyte *) arg6, 0); 
  }
  {
    (*jenv)->ReleaseByteArrayElements(jenv, jarg7, (jbyte *) arg7, 0); 
  }
  
  
  
  
  
  
  return jresult;
}


SWIGEXPORT jint JNICALL Java_com_jackwink_libsodium_jni_SodiumJNI_crypto_1box_1open_1detached(JNIEnv *jenv, jclass jcls, jbyteArray jarg1, jbyteArray jarg2, jbyteArray jarg3, jlong jarg4, jbyteArray jarg5, jbyteArray jarg6, jbyteArray jarg7) {
  jint jresult = 0 ;
  unsigned char *arg1 = (unsigned char *) 0 ;
  unsigned char *arg2 = (unsigned char *) 0 ;
  unsigned char *arg3 = (unsigned char *) 0 ;
  unsigned long long arg4 ;
  unsigned char *arg5 = (unsigned char *) 0 ;
  unsigned char *arg6 = (unsigned char *) 0 ;
  unsigned char *arg7 = (unsigned char *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  {
    arg1 = (unsigned char *) (*jenv)->GetByteArrayElements(jenv, jarg1, 0); 
  }
  {
    arg2 = (unsigned char *) (*jenv)->GetByteArrayElements(jenv, jarg2, 0); 
  }
  {
    arg3 = (unsigned char *) (*jenv)->GetByteArrayElements(jenv, jarg3, 0); 
  }
  arg4 = (unsigned long long)jarg4; 
  {
    arg5 = (unsigned char *) (*jenv)->GetByteArrayElements(jenv, jarg5, 0); 
  }
  {
    arg6 = (unsigned char *) (*jenv)->GetByteArrayElements(jenv, jarg6, 0); 
  }
  {
    arg7 = (unsigned char *) (*jenv)->GetByteArrayElements(jenv, jarg7, 0); 
  }
  result = (int)crypto_box_open_detached(arg1,(unsigned char const *)arg2,(unsigned char const *)arg3,arg4,(unsigned char const *)arg5,(unsigned char const *)arg6,(unsigned char const *)arg7);
  jresult = (jint)result; 
  {
    (*jenv)->ReleaseByteArrayElements(jenv, jarg1, (jbyte *) arg1, 0); 
  }
  {
    (*jenv)->ReleaseByteArrayElements(jenv, jarg2, (jbyte *) arg2, 0); 
  }
  {
    (*jenv)->ReleaseByteArrayElements(jenv, jarg3, (jbyte *) arg3, 0); 
  }
  {
    (*jenv)->ReleaseByteArrayElements(jenv, jarg5, (jbyte *) arg5, 0); 
  }
  {
    (*jenv)->ReleaseByteArrayElements(jenv, jarg6, (jbyte *) arg6, 0); 
  }
  {
    (*jenv)->ReleaseByteArrayElements(jenv, jarg7, (jbyte *) arg7, 0); 
  }
  
  
  
  
  
  
  return jresult;
}


SWIGEXPORT jint JNICALL Java_com_jackwink_libsodium_jni_SodiumJNI_crypto_1secretbox_1easy(JNIEnv *jenv, jclass jcls, jbyteArray jarg1, jbyteArray jarg2, jlong jarg3, jbyteArray jarg4, jbyteArray jarg5) {
  jint jresult = 0 ;
  unsigned char *arg1 = (unsigned char *) 0 ;
  unsigned char *arg2 = (unsigned char *) 0 ;
  unsigned long long arg3 ;
  unsigned char *arg4 = (unsigned char *) 0 ;
  unsigned char *arg5 = (unsigned char *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  {
    arg1 = (unsigned char *) (*jenv)->GetByteArrayElements(jenv, jarg1, 0); 
  }
  {
    arg2 = (unsigned char *) (*jenv)->GetByteArrayElements(jenv, jarg2, 0); 
  }
  arg3 = (unsigned long long)jarg3; 
  {
    arg4 = (unsigned char *) (*jenv)->GetByteArrayElements(jenv, jarg4, 0); 
  }
  {
    arg5 = (unsigned char *) (*jenv)->GetByteArrayElements(jenv, jarg5, 0); 
  }
  result = (int)crypto_secretbox_easy(arg1,(unsigned char const *)arg2,arg3,(unsigned char const *)arg4,(unsigned char const *)arg5);
  jresult = (jint)result; 
  {
    (*jenv)->ReleaseByteArrayElements(jenv, jarg1, (jbyte *) arg1, 0); 
  }
  {
    (*jenv)->ReleaseByteArrayElements(jenv, jarg2, (jbyte *) arg2, 0); 
  }
  {
    (*jenv)->ReleaseByteArrayElements(jenv, jarg4, (jbyte *) arg4, 0); 
  }
  {
    (*jenv)->ReleaseByteArrayElements(jenv, jarg5, (jbyte *) arg5, 0); 
  }
  
  
  
  
  return jresult;
}


SWIGEXPORT jint JNICALL Java_com_jackwink_libsodium_jni_SodiumJNI_crypto_1secretbox_1open_1easy(JNIEnv *jenv, jclass jcls, jbyteArray jarg1, jbyteArray jarg2, jlong jarg3, jbyteArray jarg4, jbyteArray jarg5) {
  jint jresult = 0 ;
  unsigned char *arg1 = (unsigned char *) 0 ;
  unsigned char *arg2 = (unsigned char *) 0 ;
  unsigned long long arg3 ;
  unsigned char *arg4 = (unsigned char *) 0 ;
  unsigned char *arg5 = (unsigned char *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  {
    arg1 = (unsigned char *) (*jenv)->GetByteArrayElements(jenv, jarg1, 0); 
  }
  {
    arg2 = (unsigned char *) (*jenv)->GetByteArrayElements(jenv, jarg2, 0); 
  }
  arg3 = (unsigned long long)jarg3; 
  {
    arg4 = (unsigned char *) (*jenv)->GetByteArrayElements(jenv, jarg4, 0); 
  }
  {
    arg5 = (unsigned char *) (*jenv)->GetByteArrayElements(jenv, jarg5, 0); 
  }
  result = (int)crypto_secretbox_open_easy(arg1,(unsigned char const *)arg2,arg3,(unsigned char const *)arg4,(unsigned char const *)arg5);
  jresult = (jint)result; 
  {
    (*jenv)->ReleaseByteArrayElements(jenv, jarg1, (jbyte *) arg1, 0); 
  }
  {
    (*jenv)->ReleaseByteArrayElements(jenv, jarg2, (jbyte *) arg2, 0); 
  }
  {
    (*jenv)->ReleaseByteArrayElements(jenv, jarg4, (jbyte *) arg4, 0); 
  }
  {
    (*jenv)->ReleaseByteArrayElements(jenv, jarg5, (jbyte *) arg5, 0); 
  }
  
  
  
  
  return jresult;
}


SWIGEXPORT jint JNICALL Java_com_jackwink_libsodium_jni_SodiumJNI_crypto_1secretbox_1detached(JNIEnv *jenv, jclass jcls, jbyteArray jarg1, jbyteArray jarg2, jbyteArray jarg3, jlong jarg4, jbyteArray jarg5, jbyteArray jarg6) {
  jint jresult = 0 ;
  unsigned char *arg1 = (unsigned char *) 0 ;
  unsigned char *arg2 = (unsigned char *) 0 ;
  unsigned char *arg3 = (unsigned char *) 0 ;
  unsigned long long arg4 ;
  unsigned char *arg5 = (unsigned char *) 0 ;
  unsigned char *arg6 = (unsigned char *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  {
    arg1 = (unsigned char *) (*jenv)->GetByteArrayElements(jenv, jarg1, 0); 
  }
  {
    arg2 = (unsigned char *) (*jenv)->GetByteArrayElements(jenv, jarg2, 0); 
  }
  {
    arg3 = (unsigned char *) (*jenv)->GetByteArrayElements(jenv, jarg3, 0); 
  }
  arg4 = (unsigned long long)jarg4; 
  {
    arg5 = (unsigned char *) (*jenv)->GetByteArrayElements(jenv, jarg5, 0); 
  }
  {
    arg6 = (unsigned char *) (*jenv)->GetByteArrayElements(jenv, jarg6, 0); 
  }
  result = (int)crypto_secretbox_detached(arg1,arg2,(unsigned char const *)arg3,arg4,(unsigned char const *)arg5,(unsigned char const *)arg6);
  jresult = (jint)result; 
  {
    (*jenv)->ReleaseByteArrayElements(jenv, jarg1, (jbyte *) arg1, 0); 
  }
  {
    (*jenv)->ReleaseByteArrayElements(jenv, jarg2, (jbyte *) arg2, 0); 
  }
  {
    (*jenv)->ReleaseByteArrayElements(jenv, jarg3, (jbyte *) arg3, 0); 
  }
  {
    (*jenv)->ReleaseByteArrayElements(jenv, jarg5, (jbyte *) arg5, 0); 
  }
  {
    (*jenv)->ReleaseByteArrayElements(jenv, jarg6, (jbyte *) arg6, 0); 
  }
  
  
  
  
  
  return jresult;
}


SWIGEXPORT jint JNICALL Java_com_jackwink_libsodium_jni_SodiumJNI_crypto_1secretbox_1open_1detached(JNIEnv *jenv, jclass jcls, jbyteArray jarg1, jbyteArray jarg2, jbyteArray jarg3, jlong jarg4, jbyteArray jarg5, jbyteArray jarg6) {
  jint jresult = 0 ;
  unsigned char *arg1 = (unsigned char *) 0 ;
  unsigned char *arg2 = (unsigned char *) 0 ;
  unsigned char *arg3 = (unsigned char *) 0 ;
  unsigned long long arg4 ;
  unsigned char *arg5 = (unsigned char *) 0 ;
  unsigned char *arg6 = (unsigned char *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  {
    arg1 = (unsigned char *) (*jenv)->GetByteArrayElements(jenv, jarg1, 0); 
  }
  {
    arg2 = (unsigned char *) (*jenv)->GetByteArrayElements(jenv, jarg2, 0); 
  }
  {
    arg3 = (unsigned char *) (*jenv)->GetByteArrayElements(jenv, jarg3, 0); 
  }
  arg4 = (unsigned long long)jarg4; 
  {
    arg5 = (unsigned char *) (*jenv)->GetByteArrayElements(jenv, jarg5, 0); 
  }
  {
    arg6 = (unsigned char *) (*jenv)->GetByteArrayElements(jenv, jarg6, 0); 
  }
  result = (int)crypto_secretbox_open_detached(arg1,(unsigned char const *)arg2,(unsigned char const *)arg3,arg4,(unsigned char const *)arg5,(unsigned char const *)arg6);
  jresult = (jint)result; 
  {
    (*jenv)->ReleaseByteArrayElements(jenv, jarg1, (jbyte *) arg1, 0); 
  }
  {
    (*jenv)->ReleaseByteArrayElements(jenv, jarg2, (jbyte *) arg2, 0); 
  }
  {
    (*jenv)->ReleaseByteArrayElements(jenv, jarg3, (jbyte *) arg3, 0); 
  }
  {
    (*jenv)->ReleaseByteArrayElements(jenv, jarg5, (jbyte *) arg5, 0); 
  }
  {
    (*jenv)->ReleaseByteArrayElements(jenv, jarg6, (jbyte *) arg6, 0); 
  }
  
  
  
  
  
  return jresult;
}


SWIGEXPORT jint JNICALL Java_com_jackwink_libsodium_jni_SodiumJNI_crypto_1auth(JNIEnv *jenv, jclass jcls, jbyteArray jarg1, jbyteArray jarg2, jlong jarg3, jbyteArray jarg4) {
  jint jresult = 0 ;
  unsigned char *arg1 = (unsigned char *) 0 ;
  unsigned char *arg2 = (unsigned char *) 0 ;
  unsigned long long arg3 ;
  unsigned char *arg4 = (unsigned char *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  {
    arg1 = (unsigned char *) (*jenv)->GetByteArrayElements(jenv, jarg1, 0); 
  }
  {
    arg2 = (unsigned char *) (*jenv)->GetByteArrayElements(jenv, jarg2, 0); 
  }
  arg3 = (unsigned long long)jarg3; 
  {
    arg4 = (unsigned char *) (*jenv)->GetByteArrayElements(jenv, jarg4, 0); 
  }
  result = (int)crypto_auth(arg1,(unsigned char const *)arg2,arg3,(unsigned char const *)arg4);
  jresult = (jint)result; 
  {
    (*jenv)->ReleaseByteArrayElements(jenv, jarg1, (jbyte *) arg1, 0); 
  }
  {
    (*jenv)->ReleaseByteArrayElements(jenv, jarg2, (jbyte *) arg2, 0); 
  }
  {
    (*jenv)->ReleaseByteArrayElements(jenv, jarg4, (jbyte *) arg4, 0); 
  }
  
  
  
  return jresult;
}


SWIGEXPORT jint JNICALL Java_com_jackwink_libsodium_jni_SodiumJNI_crypto_1auth_1verify(JNIEnv *jenv, jclass jcls, jbyteArray jarg1, jbyteArray jarg2, jlong jarg3, jbyteArray jarg4) {
  jint jresult = 0 ;
  unsigned char *arg1 = (unsigned char *) 0 ;
  unsigned char *arg2 = (unsigned char *) 0 ;
  unsigned long long arg3 ;
  unsigned char *arg4 = (unsigned char *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  {
    arg1 = (unsigned char *) (*jenv)->GetByteArrayElements(jenv, jarg1, 0); 
  }
  {
    arg2 = (unsigned char *) (*jenv)->GetByteArrayElements(jenv, jarg2, 0); 
  }
  arg3 = (unsigned long long)jarg3; 
  {
    arg4 = (unsigned char *) (*jenv)->GetByteArrayElements(jenv, jarg4, 0); 
  }
  result = (int)crypto_auth_verify((unsigned char const *)arg1,(unsigned char const *)arg2,arg3,(unsigned char const *)arg4);
  jresult = (jint)result; 
  {
    (*jenv)->ReleaseByteArrayElements(jenv, jarg1, (jbyte *) arg1, 0); 
  }
  {
    (*jenv)->ReleaseByteArrayElements(jenv, jarg2, (jbyte *) arg2, 0); 
  }
  {
    (*jenv)->ReleaseByteArrayElements(jenv, jarg4, (jbyte *) arg4, 0); 
  }
  
  
  
  return jresult;
}


SWIGEXPORT jint JNICALL Java_com_jackwink_libsodium_jni_SodiumJNI_crypto_1aead_1chacha20poly1305_1encrypt(JNIEnv *jenv, jclass jcls, jbyteArray jarg1, jlong jarg2, jbyteArray jarg3, jlong jarg4, jbyteArray jarg5, jlong jarg6, jbyteArray jarg7, jbyteArray jarg8, jbyteArray jarg9) {
  jint jresult = 0 ;
  unsigned char *arg1 = (unsigned char *) 0 ;
  unsigned long long *arg2 = (unsigned long long *) 0 ;
  unsigned char *arg3 = (unsigned char *) 0 ;
  unsigned long long arg4 ;
  unsigned char *arg5 = (unsigned char *) 0 ;
  unsigned long long arg6 ;
  unsigned char *arg7 = (unsigned char *) 0 ;
  unsigned char *arg8 = (unsigned char *) 0 ;
  unsigned char *arg9 = (unsigned char *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  {
    arg1 = (unsigned char *) (*jenv)->GetByteArrayElements(jenv, jarg1, 0); 
  }
  arg2 = *(unsigned long long **)&jarg2; 
  {
    arg3 = (unsigned char *) (*jenv)->GetByteArrayElements(jenv, jarg3, 0); 
  }
  arg4 = (unsigned long long)jarg4; 
  {
    arg5 = (unsigned char *) (*jenv)->GetByteArrayElements(jenv, jarg5, 0); 
  }
  arg6 = (unsigned long long)jarg6; 
  {
    arg7 = (unsigned char *) (*jenv)->GetByteArrayElements(jenv, jarg7, 0); 
  }
  {
    arg8 = (unsigned char *) (*jenv)->GetByteArrayElements(jenv, jarg8, 0); 
  }
  {
    arg9 = (unsigned char *) (*jenv)->GetByteArrayElements(jenv, jarg9, 0); 
  }
  result = (int)crypto_aead_chacha20poly1305_encrypt(arg1,arg2,(unsigned char const *)arg3,arg4,(unsigned char const *)arg5,arg6,(unsigned char const *)arg7,(unsigned char const *)arg8,(unsigned char const *)arg9);
  jresult = (jint)result; 
  {
    (*jenv)->ReleaseByteArrayElements(jenv, jarg1, (jbyte *) arg1, 0); 
  }
  {
    (*jenv)->ReleaseByteArrayElements(jenv, jarg3, (jbyte *) arg3, 0); 
  }
  {
    (*jenv)->ReleaseByteArrayElements(jenv, jarg5, (jbyte *) arg5, 0); 
  }
  {
    (*jenv)->ReleaseByteArrayElements(jenv, jarg7, (jbyte *) arg7, 0); 
  }
  {
    (*jenv)->ReleaseByteArrayElements(jenv, jarg8, (jbyte *) arg8, 0); 
  }
  {
    (*jenv)->ReleaseByteArrayElements(jenv, jarg9, (jbyte *) arg9, 0); 
  }
  
  
  
  
  
  
  return jresult;
}


SWIGEXPORT jint JNICALL Java_com_jackwink_libsodium_jni_SodiumJNI_crypto_1aead_1chacha20poly1305_1decrypt(JNIEnv *jenv, jclass jcls, jbyteArray jarg1, jlong jarg2, jbyteArray jarg3, jbyteArray jarg4, jlong jarg5, jbyteArray jarg6, jlong jarg7, jbyteArray jarg8, jbyteArray jarg9) {
  jint jresult = 0 ;
  unsigned char *arg1 = (unsigned char *) 0 ;
  unsigned long long *arg2 = (unsigned long long *) 0 ;
  unsigned char *arg3 = (unsigned char *) 0 ;
  unsigned char *arg4 = (unsigned char *) 0 ;
  unsigned long long arg5 ;
  unsigned char *arg6 = (unsigned char *) 0 ;
  unsigned long long arg7 ;
  unsigned char *arg8 = (unsigned char *) 0 ;
  unsigned char *arg9 = (unsigned char *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  {
    arg1 = (unsigned char *) (*jenv)->GetByteArrayElements(jenv, jarg1, 0); 
  }
  arg2 = *(unsigned long long **)&jarg2; 
  {
    arg3 = (unsigned char *) (*jenv)->GetByteArrayElements(jenv, jarg3, 0); 
  }
  {
    arg4 = (unsigned char *) (*jenv)->GetByteArrayElements(jenv, jarg4, 0); 
  }
  arg5 = (unsigned long long)jarg5; 
  {
    arg6 = (unsigned char *) (*jenv)->GetByteArrayElements(jenv, jarg6, 0); 
  }
  arg7 = (unsigned long long)jarg7; 
  {
    arg8 = (unsigned char *) (*jenv)->GetByteArrayElements(jenv, jarg8, 0); 
  }
  {
    arg9 = (unsigned char *) (*jenv)->GetByteArrayElements(jenv, jarg9, 0); 
  }
  result = (int)crypto_aead_chacha20poly1305_decrypt(arg1,arg2,arg3,(unsigned char const *)arg4,arg5,(unsigned char const *)arg6,arg7,(unsigned char const *)arg8,(unsigned char const *)arg9);
  jresult = (jint)result; 
  {
    (*jenv)->ReleaseByteArrayElements(jenv, jarg1, (jbyte *) arg1, 0); 
  }
  {
    (*jenv)->ReleaseByteArrayElements(jenv, jarg3, (jbyte *) arg3, 0); 
  }
  {
    (*jenv)->ReleaseByteArrayElements(jenv, jarg4, (jbyte *) arg4, 0); 
  }
  {
    (*jenv)->ReleaseByteArrayElements(jenv, jarg6, (jbyte *) arg6, 0); 
  }
  {
    (*jenv)->ReleaseByteArrayElements(jenv, jarg8, (jbyte *) arg8, 0); 
  }
  {
    (*jenv)->ReleaseByteArrayElements(jenv, jarg9, (jbyte *) arg9, 0); 
  }
  
  
  
  
  
  
  return jresult;
}


#ifdef __cplusplus
}
#endif

