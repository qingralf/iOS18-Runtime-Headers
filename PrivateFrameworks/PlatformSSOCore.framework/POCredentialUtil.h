/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PlatformSSOCore.framework/PlatformSSOCore
 */

@interface POCredentialUtil : NSObject

+ (id)decryptPendingSSOTokens:(id)arg1 UsingPrivateKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; }*)arg2 sharedData:(id)arg3;
+ (bool)encryptPendingSSOTokens:(id)arg1 usingPublicKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; }*)arg2 sharedData:(id)arg3 encryptedTokens:(id*)arg4;
+ (id)maskName:(id)arg1;
+ (id)passwordDataFromContext:(id)arg1 error:(id*)arg2;
+ (id)passwordStringFromData:(id)arg1;

@end