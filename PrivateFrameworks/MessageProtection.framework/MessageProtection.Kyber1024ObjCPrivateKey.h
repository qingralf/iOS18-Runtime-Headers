/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MessageProtection.framework/MessageProtection
 */

@interface MessageProtection.Kyber1024ObjCPrivateKey : NSObject {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  privKey;
}

@property (nonatomic, readonly) NSData *protobufData;
@property (nonatomic, readonly) _TtC17MessageProtection22Kyber1024ObjCPublicKey *publicKey;

- (void).cxx_destruct;
- (id)init;
- (id)initWithApKeyBytes:(id)arg1 error:(id*)arg2;
- (id)initWithProtoBufData:(id)arg1 error:(id*)arg2;
- (id)initWithSepKeyBytes:(id)arg1 error:(id*)arg2;
- (id)protobufData;
- (id)publicKey;

@end
