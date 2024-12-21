/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
 */

@interface KTStaticKeyPeer : NSObject <NSSecureCoding> {
    NSString * _lastUsedAddressOfMe;
    NSSet * _otherNames;
    NSString * _peer;
}

@property (retain) NSString *lastUsedAddressOfMe;
@property (retain) NSSet *otherNamesForPeer;
@property (retain) NSString *peer;

+ (id)stripIMPrefix:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPeer:(id)arg1;
- (id)lastUsedAddressOfMe;
- (id)otherNamesForPeer;
- (id)peer;
- (void)setLastUsedAddressOfMe:(id)arg1;
- (void)setOtherNamesForPeer:(id)arg1;
- (void)setPeer:(id)arg1;

@end