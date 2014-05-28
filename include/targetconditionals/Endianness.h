//
//  Endianness.h
//
//  Created by Andreoletti David on 7/24/12.
//  Copyright 2012 IO Stark. All rights reserved.
//

#ifndef INCLUDE_ENDIANNESS_H_
#define INCLUDE_ENDIANNESS_H_

/* Find endianness BIG_ENDIAN config flag, set TC_ENDIANNESS_ENDIAN correctly */
#if defined(???)
    /**
     * Big Endian
     */
#    define TC_ENDIANNESS_ENDIAN_BIG 1
#else
    /**
     * Little Endian
     */
#    define TC_ENDIANNESS_ENDIAN_LITTLE 1
#endif

#endif // INCLUDE_ENDIANNESS_H_

