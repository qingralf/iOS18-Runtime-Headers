/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKSharingLocalChannelDescriptor : PKSharingChannelDescriptor {
    NSString * _baseTransportIdentifier;
    unsigned long long  _subtype;
}

@property (nonatomic, readonly) unsigned long long subtype;
@property (nonatomic, readonly) NSString *transportIdentifier;

+ (id)createDestinationWithIdentifier:(id)arg1;
+ (id)createSourceWithIdentifier:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithBaseTransportIdentifier:(id)arg1 subtype:(unsigned long long)arg2;
- (id)contraChannelTransportIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)subtype;
- (id)transportIdentifier;

@end
