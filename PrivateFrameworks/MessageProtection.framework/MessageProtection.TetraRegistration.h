/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MessageProtection.framework/MessageProtection
 */

@interface MessageProtection.TetraRegistration : NSObject {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  ecdhPublicKey;
    void kyberPublicKey;
    void signature;
    void signingPublicKey;
    void tetraVersion;
    void timestamp;
}

@property (nonatomic, readonly) _TtC17MessageProtection22Kyber1024ObjCPublicKey *kyberPublicKey;
@property (nonatomic, readonly) NSData *registrationData;
@property (nonatomic, readonly) NSData *serializedECDHPublicKey;
@property (nonatomic, readonly) NSData *signature;
@property (nonatomic, readonly) TetraPublicSigningKeyWrapper *signingPublicKey;
@property (nonatomic, readonly) unsigned int tetraVersion;
@property (nonatomic, readonly) double timestamp;

- (void).cxx_destruct;
- (id)init;
- (id)initWithKyberPublicKey:(id)arg1 ecdhPublicKey:(id)arg2 timestamp:(double)arg3 version:(unsigned int)arg4 signedBy:(id)arg5;
- (id)initWithTetraRegistrationData:(id)arg1 ecdhPublicKey:(id)arg2 version:(unsigned int)arg3 timestamp:(double)arg4 signedBy:(id)arg5 isEncrypting:(bool)arg6 error:(id*)arg7;
- (id)kyberPublicKey;
- (id)registrationData;
- (id)serializedECDHPublicKey;
- (id)signature;
- (id)signingPublicKey;
- (unsigned int)tetraVersion;
- (double)timestamp;

@end
