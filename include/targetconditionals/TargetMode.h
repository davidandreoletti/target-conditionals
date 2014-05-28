//
//  TargetMode.h
//
//  Created by Andreoletti David on 7/24/12.
//  Copyright 2012 IO Stark. All rights reserved.
//

#ifndef INCLUDE_TARGETCONDITIONALS_TARGETMODE_H_
#define INCLUDE_TARGETCONDITIONALS_TARGETMODE_H_

/* Find if it is a debug target or release target */
#if defined(DEBUG)
/**
 * Debug mode
 */
#   define TC_TARGETMODE_MODE_DEBUG 1
#else
/**
 * Release mode
 */
#   define TC_TARGETMODE_MODE_RELEASE 1
#endif

#endif // INCLUDE_TARGETCONDITIONALS_TARGETMODE_H_

