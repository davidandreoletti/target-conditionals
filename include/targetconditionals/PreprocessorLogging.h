//
//  PreprocessorLogging.h
//
//  Created by Andreoletti David on 7/24/12.
//  Copyright 2012 IO Stark. All rights reserved.
//

#ifndef INCLUDE_PREPROCESSORLOGGING_H_
#define INCLUDE_PREPROCESSORLOGGING_H_

// Generating compiler warnings regardless of compilers used
/**
 * ???
 */
#define TC_PREPROCESSORLOGGING_QUOTE_INPLACE(x) \
    # x
/**
 * ???
 */
#define TC_PREPROCESSORLOGGING_QUOTE(x) \
    TC_PREPROCESSORLOGGING_QUOTE_INPLACE(x)
/**
 * Log a message
 */
#define TC_MESSAGEFORMATTER_GENERIC( loggingLevel, msg ) \
     __FILE__ ":" TC_PREPROCESSORLOGGING_QUOTE( __LINE__ ) " : "loggingLevel" :" msg "\n" 
/**
 * Log verbose message
 */
#define TC_PREPROCESSORLOGGING_VERBOSE( msg ) \
    TC_MESSAGEFORMATTER_GENERIC ("VERBOSE", msg)
/**
 * Log informational message
 */
#define TC_PREPROCESSORLOGGING_INFO( msg ) \
    TC_MESSAGEFORMATTER_GENERIC ("INFO", msg)
/**
 * Log warning message
 */
#define TC_PREPROCESSORLOGGING_WARN( msg ) \
    TC_MESSAGEFORMATTER_GENERIC ("WARNING", msg)

#endif // INCLUDE_PREPROCESSORLOGGING_H_

