/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/NearbyInteraction.framework/NearbyInteraction
 */

@interface NIRangingAuthConfiguration : NIConfiguration {
    bool  _isResponder;
    NSData * _macAddress;
    NIDiscoveryToken * _peerToken;
    NSData * _secureKey;
}

@property (nonatomic, readonly) bool isResponder;
@property (nonatomic, readonly, copy) NSData *macAddress;
@property (nonatomic, readonly, copy) NIDiscoveryToken *peerToken;
@property (nonatomic, readonly, copy) NSData *secureKey;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionInternal;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initAsResponder:(bool)arg1 macAddress:(id)arg2 key:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isResponder;
- (id)macAddress;
- (id)peerToken;
- (id)secureKey;

@end
