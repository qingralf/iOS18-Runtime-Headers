/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/NearbyInteraction.framework/NearbyInteraction
 */

@interface NIAcwgConfiguration : NIConfiguration {
    long long  _configurationTypeInternal;
    NSDictionary * _debugOptions;
    unsigned short  _lockBtConnHandle;
    NSString * _lockIdentifier;
}

@property (readonly) long long configurationType;
@property (copy) NSDictionary *debugOptions;
@property unsigned short lockBtConnHandle;
@property (copy) NSString *lockIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)configurationType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugOptions;
- (id)description;
- (id)descriptionInternal;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithConfiguration:(id)arg1;
- (id)initWithLockIdentifier:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned short)lockBtConnHandle;
- (id)lockIdentifier;
- (void)setDebugOptions:(id)arg1;
- (void)setLockBtConnHandle:(unsigned short)arg1;
- (void)setLockIdentifier:(id)arg1;

@end
