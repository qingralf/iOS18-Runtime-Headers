/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PlatformSSOCore.framework/PlatformSSOCore
 */

@interface PlatformSSOCore.POPrebootDataKey : NSObject {
    void encryptedKeyData;
    void keyData;
}

@property (nonatomic, copy) NSString *encryptedKeyData;
@property (nonatomic, copy) NSData *keyData;

+ (id)createKeyAndReturnError:(id*)arg1;
+ (id)decryptWithData:(id)arg1 key:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; }*)arg2 error:(id*)arg3;
+ (id)encryptWithData:(id)arg1 key:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; }*)arg2 error:(id*)arg3;
+ (id)prebootEncryptionAlgorithm;
+ (id)verifiedKeyWithPrebootData:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)encryptedKeyData;
- (id)init;
- (id)keyData;
- (void)setEncryptedKeyData:(id)arg1;
- (void)setKeyData:(id)arg1;

@end