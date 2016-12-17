#ifndef _CFBUNDLEPRIV_H_
#define _CFBUNDLEPRIV_H_
#include <CoreFoundation/CFBundle.h>

CF_EXTERN_C_BEGIN

/* For Code Signing */
CF_EXPORT
const CFStringRef _kCFBundleResourceSpecificationKey;

CF_EXPORT
const CFStringRef _kCFBundlePackageTypeKey;
CF_EXPORT
const CFStringRef _kCFBundleSignatureKey;
CF_EXPORT
const CFStringRef _kCFBundleIconFileKey;
CF_EXPORT
const CFStringRef _kCFBundleDocumentTypesKey;
CF_EXPORT
const CFStringRef _kCFBundleURLTypesKey;

CF_EXPORT
const CFStringRef _kCFBundleDisplayNameKey;
CF_EXPORT
const CFStringRef _kCFBundleShortVersionStringKey;
CF_EXPORT
const CFStringRef _kCFBundleGetInfoStringKey;
CF_EXPORT
const CFStringRef _kCFBundleGetInfoHTMLKey;

CF_EXPORT
const CFStringRef _kCFBundleTypeNameKey;
CF_EXPORT
const CFStringRef _kCFBundleTypeRoleKey;
CF_EXPORT
const CFStringRef _kCFBundleTypeIconFileKey;
CF_EXPORT
const CFStringRef _kCFBundleTypeOSTypesKey;
CF_EXPORT
const CFStringRef _kCFBundleTypeExtensionsKey;
CF_EXPORT
const CFStringRef _kCFBundleTypeMIMETypesKey;

CF_EXPORT
const CFStringRef _kCFBundleURLNameKey;
CF_EXPORT
const CFStringRef _kCFBundleURLIconFileKey;
CF_EXPORT
const CFStringRef _kCFBundleURLSchemesKey;

CF_EXPORT
const CFStringRef _kCFBundleOldExecutableKey;
CF_EXPORT
const CFStringRef _kCFBundleOldInfoDictionaryVersionKey;
CF_EXPORT
const CFStringRef _kCFBundleOldNameKey;
CF_EXPORT
const CFStringRef _kCFBundleOldIconFileKey;
CF_EXPORT
const CFStringRef _kCFBundleOldDocumentTypesKey;
CF_EXPORT
const CFStringRef _kCFBundleOldShortVersionStringKey;

CF_EXPORT
const CFStringRef _kCFBundleOldTypeNameKey;
CF_EXPORT
const CFStringRef _kCFBundleOldTypeRoleKey;
CF_EXPORT
const CFStringRef _kCFBundleOldTypeIconFileKey;
CF_EXPORT
const CFStringRef _kCFBundleOldTypeExtensions1Key;
CF_EXPORT
const CFStringRef _kCFBundleOldTypeExtensions2Key;
CF_EXPORT
const CFStringRef _kCFBundleOldTypeOSTypesKey;


CF_EXPORT
CFURLRef _CFBundleCopyInfoPlistURL(CFBundleRef bundle);

CF_EXPORT
CFBundleRef _CFBundleCreateWithExecutableURLIfMightBeBundle(CFAllocatorRef allocator, CFURLRef url);

CF_EXPORT
CFStringRef _CFBundleCopyMainBundleExecutableURL(Boolean* isRealBundle);

/* For Code Signing */

// This function is obsolete. Use CFBundleCreate instead.
CF_EXPORT
CFBundleRef _CFBundleCreateIfMightBeBundle(CFAllocatorRef allocator, CFURLRef url);

// This function is for code signing only. Do not use this function.
CF_EXPORT
CFBundleRef _CFBundleCreateWithExecutableURLIfMightBeBundle(CFAllocatorRef allocator, CFURLRef url);

CF_EXTERN_C_END

#endif
