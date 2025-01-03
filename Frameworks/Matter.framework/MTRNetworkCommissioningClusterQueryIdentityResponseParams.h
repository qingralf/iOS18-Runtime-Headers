/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Matter.framework/Matter
 */

@interface MTRNetworkCommissioningClusterQueryIdentityResponseParams : NSObject <NSCopying> {
    NSData * _identity;
    NSData * _possessionSignature;
}

@property (nonatomic, copy) NSData *identity;
@property (nonatomic, copy) NSData *possessionSignature;

- (void).cxx_destruct;
- (struct ChipError { unsigned int x1; char *x2; unsigned int x3; })_setFieldsFromDecodableStruct:(const void*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)identity;
- (id)init;
- (id)initWithResponseValue:(id)arg1 error:(id*)arg2;
- (id)possessionSignature;
- (void)setIdentity:(id)arg1;
- (void)setPossessionSignature:(id)arg1;

@end
