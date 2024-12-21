/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPendingPrecursorPassCredential : PKPendingProvisioning <NSSecureCoding> {
    NSString * _passSerialNumber;
    NSString * _passTypeIdentifier;
}

@property (nonatomic, retain) NSString *passSerialNumber;
@property (nonatomic, retain) NSString *passTypeIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_copyIntoPendingProvision:(id)arg1;
- (id)credential;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initForDatabase;
- (id)initWithCoder:(id)arg1;
- (id)initWithPassTypeIdentifier:(id)arg1 passSerialNumber:(id)arg2;
- (id)initWithPrecursorCredential:(id)arg1;
- (id)passSerialNumber;
- (id)passTypeIdentifier;
- (bool)representsCredential:(id)arg1;
- (bool)representsPass:(id)arg1;
- (void)setPassSerialNumber:(id)arg1;
- (void)setPassTypeIdentifier:(id)arg1;
- (id)type;

@end