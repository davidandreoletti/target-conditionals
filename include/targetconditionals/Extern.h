//
//  Extern.h
//
//  Created by Andreoletti David on 3/31/12.
//  Copyright 2012 IO Stark. All rights reserved.
//

#ifndef INCLUDE_TARGETCONDITIONALS_EXTERN_H
#define INCLUDE_TARGETCONDITIONALS_EXTERN_H

/* 
 * Prevents name mangling (i.e name decoration) 
 * when compiling as C++ translation unit
 */
#ifdef __cplusplus
    #define TC_EXTERN_EXTERN_C    extern "C"
#else
    #define TC_EXTERN_EXTERN_C
#endif

#endif // INCLUDE_TARGETCONDITIONALS_EXTERN_H

