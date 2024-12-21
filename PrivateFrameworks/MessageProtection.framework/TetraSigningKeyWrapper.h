/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MessageProtection.framework/MessageProtection
 */

@interface TetraSigningKeyWrapper : NSObject {
    SigningKey * _signingKey;
}

@property (retain) SigningKey *signingKey;

+ (id)generateKeyForTesting;

- (void).cxx_destruct;
- (id)initWithSigningKey:(id)arg1;
- (id)publicKey;
- (void)setSigningKey:(id)arg1;
- (id)signDataWithFormatter:(id)arg1 error:(id*)arg2;
- (id)signDataWithMessageFormatter:(id)arg1 error:(id*)arg2;
- (id)signDataWithRegistrationFormatter:(id)arg1 error:(id*)arg2;
- (id)signingKey;

@end