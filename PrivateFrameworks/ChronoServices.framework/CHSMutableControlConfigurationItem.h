/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChronoServices.framework/ChronoServices
 */

@interface CHSMutableControlConfigurationItem : CHSControlConfigurationItem

@property (nonatomic) bool canAppearInSecureEnvironment;
@property (nonatomic) unsigned long long pushPolicy;
@property (nonatomic) unsigned long long supportedColorSchemes;
@property (nonatomic) bool supportsLowLuminance;

- (bool)canAppearInSecureEnvironment;
- (id)init;
- (id)initWithUniqueIdentifier:(id)arg1 controlIdentity:(id)arg2;
- (id)initWithUniqueIdentifier:(id)arg1 controlIdentity:(id)arg2 location:(long long)arg3;
- (unsigned long long)pushPolicy;
- (void)setCanAppearInSecureEnvironment:(bool)arg1;
- (void)setPushPolicy:(unsigned long long)arg1;
- (void)setSupportedColorSchemes:(unsigned long long)arg1;
- (void)setSupportsLowLuminance:(bool)arg1;
- (unsigned long long)supportedColorSchemes;
- (bool)supportsLowLuminance;

@end
