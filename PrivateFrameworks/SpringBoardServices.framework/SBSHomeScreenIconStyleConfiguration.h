/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

@interface SBSHomeScreenIconStyleConfiguration : NSObject <BSDescriptionProviding, BSXPCSecureCoding, NSCopying, NSSecureCoding> {
    long long  _configurationType;
    BSColor * _tintColor;
}

@property (nonatomic, readonly) long long configurationType;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SBHIconImageStyleConfiguration *sbh_iconImageStyleConfiguration;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) BSColor *tintColor;

// Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices

+ (id)automaticStyleConfiguration;
+ (id)darkStyleConfiguration;
+ (id)defaultStyleConfiguration;
+ (id)lightStyleConfiguration;
+ (bool)supportsBSXPCSecureCoding;
+ (bool)supportsSecureCoding;
+ (id)tintedStyleConfigurationWithTintColor:(id)arg1;

- (void).cxx_destruct;
- (Class)classForCoder;
- (long long)configurationType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithConfigurationType:(long long)arg1;
- (id)initWithConfigurationType:(long long)arg1 tintColor:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)tintColor;

// Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome

- (id)sbh_iconImageStyleConfiguration;

@end
