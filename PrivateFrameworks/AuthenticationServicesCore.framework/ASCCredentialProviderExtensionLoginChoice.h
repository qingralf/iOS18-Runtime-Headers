/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AuthenticationServicesCore.framework/AuthenticationServicesCore
 */

@interface ASCCredentialProviderExtensionLoginChoice : NSObject <ASCLoginChoiceProtocol> {
    NSString * _providerExtensionBundleID;
    NSString * _providerExtensionContainingAppBundleID;
    NSString * _providerName;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isSharedCredential; /* unknown property attribute: ? */
@property (nonatomic, readonly) unsigned long long loginChoiceKind;
@property (nonatomic, readonly, copy) NSString *providerExtensionBundleID;
@property (nonatomic, readonly, copy) NSString *providerExtensionContainingAppBundleID;
@property (nonatomic, readonly, copy) NSString *providerName;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProviderName:(id)arg1 providerBundleID:(id)arg2 providerExtensionContainingAppBundleID:(id)arg3;
- (bool)isEqual:(id)arg1;
- (unsigned long long)loginChoiceKind;
- (id)providerExtensionBundleID;
- (id)providerExtensionContainingAppBundleID;
- (id)providerName;

@end