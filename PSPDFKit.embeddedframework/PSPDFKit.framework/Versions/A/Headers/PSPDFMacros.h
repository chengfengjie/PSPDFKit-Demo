//
//  PSPDFMacros.h
//  PSPDFKit
//
//  Copyright (c) 2014 PSPDFKit GmbH. All rights reserved.
//
//  THIS SOURCE CODE AND ANY ACCOMPANYING DOCUMENTATION ARE PROTECTED BY INTERNATIONAL COPYRIGHT LAW
//  AND MAY NOT BE RESOLD OR REDISTRIBUTED. USAGE IS BOUND TO THE PSPDFKIT LICENSE AGREEMENT.
//  UNAUTHORIZED REPRODUCTION OR DISTRIBUTION IS SUBJECT TO CIVIL AND CRIMINAL PENALTIES.
//  This notice may not be removed from this file.
//

// Workaround for Apple's bug. __IPHONE_OS_VERSION_MIN_REQUIRED is set to 20000
// when the debugger tries to convert ObjC module headers to Swift.
#if __IPHONE_OS_VERSION_MIN_REQUIRED != 20000 && __IPHONE_OS_VERSION_MIN_REQUIRED < __IPHONE_7_0
#error PSPDFKit supports iOS 7.0 upwards.
#endif

// Xcode 6 is required for PSPDFKit 4.
#if !defined(__clang__) || __clang_major__ < 6  || !defined(__IPHONE_8_0)
#warning PSPDFKit 4 has been designed for Xcode 6 with SDK 8. Other combinations are not supported.
#endif

#define __PSPDFKIT_IOS__
#define __PSPDFKIT_3_0_0 3000
#define __PSPDFKIT_3_1_0 3100
#define __PSPDFKIT_3_2_0 3200 // 3.2.x is the last version supporting iOS 5.
#define __PSPDFKIT_3_3_0 3300
#define __PSPDFKIT_3_4_0 3400
#define __PSPDFKIT_3_5_0 3500
#define __PSPDFKIT_3_6_0 3600
#define __PSPDFKIT_3_7_0 3700 // 3.7.x is the last version supporting iOS 6.
#define __PSPDFKIT_4_0_0 4000
#define __PSPDFKIT_4_1_0 4100

#define PSPDF_DEPRECATED(version, msg) __attribute__((deprecated("Deprecated in PSPDFKit " #version ". " msg)))


// Wraps C function to prevent the C++ compiler to mangle C function names.
// http://stackoverflow.com/questions/1041866/in-c-source-what-is-the-effect-of-extern-c
#ifdef __cplusplus
# define PSPDFKIT_EXTERN_C_BEGIN extern "C" {
# define PSPDFKIT_EXTERN_C_END   }
#else
# define PSPDFKIT_EXTERN_C_BEGIN
# define PSPDFKIT_EXTERN_C_END
#endif