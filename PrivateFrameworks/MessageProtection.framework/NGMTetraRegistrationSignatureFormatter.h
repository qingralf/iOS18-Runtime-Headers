/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MessageProtection.framework/MessageProtection
 */

@interface NGMTetraRegistrationSignatureFormatter : NSObject <SignatureFormatter> {
    NSData * _ecdhPublicKey;
    _TtC17MessageProtection22Kyber1024ObjCPublicKey * _kyberPublicKey;
    unsigned int  _tetraVersion;
    double  _timestamp;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSData *ecdhPublicKey;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) _TtC17MessageProtection22Kyber1024ObjCPublicKey *kyberPublicKey;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned int tetraVersion;
@property (nonatomic, readonly) double timestamp;

- (void).cxx_destruct;
- (id)ecdhPublicKey;
- (id)initWithKyberPublicKey:(id)arg1 ecdhPublicKey:(id)arg2 timestamp:(double)arg3 tetraVersion:(unsigned int)arg4;
- (id)initWithTetraRegistration:(id)arg1;
- (bool)isStillValidToDecrypt;
- (bool)isStillValidToEncrypt;
- (id)kyberPublicKey;
- (id)signedData;
- (unsigned int)tetraVersion;
- (double)timestamp;

@end