//
//  Compilers.h
//
//  Created by Andreoletti David on 7/24/12.
//  Copyright 2012 IO Stark. All rights reserved.
//

#ifndef INCLUDE_COMPILERS_H_
#define INCLUDE_COMPILERS_H_
    
/* Finds the compiler type and version */
#if defined( __clang__ )
     /**
     * Clang compiler
     */
#   define TC_COMPILERS_COMPILER_NAME_CLANG 1
     /**
     * Compiler version
     */
#   define TC_COMPILERS_COMPILER_VERSION (((__clang_major__)*100) + \
(__clang_minor__*10) + \
__clang_patchlevel__)
#elif defined( __GNUC__ )
     /**
     * GNU C compiler
     */
#   define TC_COMPILERS_COMPILER_NAME_GNUC 1
    /**
     * Compiler version
     */
#   define TC_COMPILERS_COMPILER_VERSION (((__GNUC__)*100) + \
(__GNUC_MINOR__*10) + \
__GNUC_PATCHLEVEL__)
#else
     /**
     * Unknown compiler
     */
#   define TC_COMPILERS_COMPILER_NAME_UNKNOWN 1
#endif

#endif // INCLUDE_COMPILERS_H_

