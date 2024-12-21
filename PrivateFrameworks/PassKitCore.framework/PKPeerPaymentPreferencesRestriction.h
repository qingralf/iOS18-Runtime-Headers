/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPeerPaymentPreferencesRestriction : NSObject <NSCopying, NSSecureCoding> {
    NSString * _altDSID;
    unsigned long long  _receiveRestrictionType;
    unsigned long long  _sendRestrictionType;
}

@property (nonatomic, copy) NSString *altDSID;
@property (nonatomic) unsigned long long receiveRestrictionType;
@property (nonatomic) unsigned long long sendRestrictionType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)altDSID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToPreferencesRestriction:(id)arg1;
- (unsigned long long)receiveRestrictionType;
- (unsigned long long)sendRestrictionType;
- (void)setAltDSID:(id)arg1;
- (void)setReceiveRestrictionType:(unsigned long long)arg1;
- (void)setSendRestrictionType:(unsigned long long)arg1;

@end