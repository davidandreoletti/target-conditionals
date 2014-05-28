//
//  Architecture.h
//
//  Created by Andreoletti David on 7/24/12.
//  Copyright 2012 IO Stark. All rights reserved.
//

#ifndef INCLUDE_ARCHITECTURES_H_
#define INCLUDE_ARCHITECTURES_H_

/* Find the architecture bits */
#if defined(__x86_64__)
    /**
     * 64 bits
     */
#   define TC_ARCHITECTURES_ARCHITECTURE_BITS_64 1
#else
    /**
     * 32 bits
     */
#   define TC_ARCHITECTURES_ARCHITECTURE_BITS_32 1
#endif

#endif // INCLUDE_ARCHITECTURES_H_

