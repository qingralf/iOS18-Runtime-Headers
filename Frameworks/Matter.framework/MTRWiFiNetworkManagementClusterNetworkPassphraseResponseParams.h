/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Matter.framework/Matter
 */

@interface MTRWiFiNetworkManagementClusterNetworkPassphraseResponseParams : NSObject <NSCopying> {
    NSData * _passphrase;
}

@property (nonatomic, copy) NSData *passphrase;

- (void).cxx_destruct;
- (struct ChipError { unsigned int x1; char *x2; unsigned int x3; })_setFieldsFromDecodableStruct:(const void*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)initWithResponseValue:(id)arg1 error:(id*)arg2;
- (id)passphrase;
- (void)setPassphrase:(id)arg1;

@end
