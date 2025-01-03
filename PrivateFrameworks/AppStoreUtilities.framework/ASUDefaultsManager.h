/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppStoreUtilities.framework/AppStoreUtilities
 */

@interface ASUDefaultsManager : NSObject

+ (bool)_boolForKey:(struct __CFString { }*)arg1 applicationId:(struct __CFString { }*)arg2 ifMissing:(bool)arg3;
+ (id)_copyNumberForKey:(struct __CFString { }*)arg1 applicationId:(struct __CFString { }*)arg2;
+ (double)_doubleForKey:(struct __CFString { }*)arg1 applicationId:(struct __CFString { }*)arg2 ifMissing:(double)arg3;
+ (bool)_isRunningInAppleVirtualMachine;
+ (void)_setBool:(bool)arg1 forKey:(struct __CFString { }*)arg2 applicationId:(struct __CFString { }*)arg3;
+ (void)_setDouble:(double)arg1 forKey:(struct __CFString { }*)arg2 applicationId:(struct __CFString { }*)arg3;
+ (void)_setNullableValue:(void*)arg1 forKey:(struct __CFString { }*)arg2;
+ (id)copyDefaultsKeyForEncryptionKeyWithIdentifier:(id)arg1;

@end
