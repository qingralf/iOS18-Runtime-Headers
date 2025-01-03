/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SPOwner.framework/SPOwner
 */

@interface SPPeripheralConnectionMaterial : NSObject <NSCopying, NSSecureCoding> {
    NSData * _btAddressData;
    NSData * _btAddressWithTypeData;
    NSData * _irkData;
}

@property (nonatomic, copy) NSData *btAddressData;
@property (nonatomic, copy) NSData *btAddressWithTypeData;
@property (nonatomic, copy) NSData *irkData;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)btAddressData;
- (id)btAddressWithTypeData;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)irkData;
- (void)setBtAddressData:(id)arg1;
- (void)setBtAddressWithTypeData:(id)arg1;
- (void)setIrkData:(id)arg1;

@end
