//
//  Platforms.h
//
//  Inspired from Ogre's OgrePlatform.h. Thanks Ogre!
//
//  Created by Andreoletti David on 7/24/12.
//  Copyright 2012 IO Stark. All rights reserved.
//

#ifndef INCLUDE_PLATFORMS_H_
#define INCLUDE_PLATFORMS_H_

/* Finds the current platform */
#if defined(__APPLE__) && defined(__APPLE_CC__)
#   if defined(__ENVIRONMENT_IPHONE_OS_VERSION_MIN_REQUIRED__)
        /**
         * iOS Device
         */
#       define TC_PLATFORMS_PLATFORM_APPLE_IOS 1
#       define TC_PLATFORMS_PLATFORM_APPLE_IOS_DEVICE 1
#   elif defined(__IPHONE_OS_VERSION_MIN_REQUIRED)
        /**
         * iOS Simulator
         */
#       define TC_PLATFORMS_PLATFORM_APPLE_IOS 1
#       define TC_PLATFORMS_PLATFORM_APPLE_IOS_SIMULATOR 1
#   else
        /**
         *  Mac OS X
         */
#       define TC_PLATFORMS_PLATFORM_APPLE_OSX 1
#   endif
#elif defined(__ANDROID__)
    /**
     * Android
     */
#	define TC_PLATFORMS_PLATFORM_GOOGLE_ANDROID 1
#else
    /**
     * Unknown
     */
#   define TC_PLATFORMS_PLATFORM_UNKNOWN 1
#endif

#endif // INCLUDE_PLATFORMS_H_

