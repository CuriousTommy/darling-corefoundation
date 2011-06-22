#include "CoreFoundation/CFString.h"
#include "Testing.h"
#include "../CFTesting.h"

int main (void)
{
  CFStringRef str1;
  CFStringRef str2;
  CFStringRef string;
  CFStringRef arrayValues[2];
  CFArrayRef array;
  UniChar ubuffer[] = { 'O', 'K', '!', 0 };
  
  str1 = CFStringCreateWithBytes (NULL, "OK", 2, kCFStringEncodingASCII, false);
  CFShowStr(str1);
  
  str2 = CFStringCreateWithBytes (NULL, (const UInt8*)ubuffer, 2 * sizeof(UniChar), kCFStringEncodingUTF16LE, false);
  CFShowStr(str2);
  
  PASS_CFEQ(str1, str2, "Unicode and C-string are equal.");
  
  arrayValues[0] = str1;
  arrayValues[1] = str2;
  array = CFArrayCreate (NULL, (const void **)arrayValues, 2,
    &kCFTypeArrayCallBacks);
  string = CFStringCreateByCombiningStrings (NULL, array,
    __CFStringMakeConstantString("! "));
  
  PASS_CFEQ(string, __CFStringMakeConstantString("OK! OK"),
    "Strings were combined successfully.");
  
  CFRelease(str1);
  CFRelease(str2);
  CFRelease(string);
  CFRelease(array);
  
  return 0;
}