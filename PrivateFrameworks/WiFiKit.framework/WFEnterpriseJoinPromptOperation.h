/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
 */

@interface WFEnterpriseJoinPromptOperation : WFUserPromptOperation <WFCredentialsProvider> {
    struct __SecIdentity { } * TLSIdentity;
    NSString * password;
    NSString * username;
}

@property (nonatomic, readonly) struct __SecIdentity { }*TLSIdentity;
@property (nonatomic, readonly, copy) NSString *password;
@property (nonatomic, readonly, copy) NSString *username;
@property (nonatomic, readonly) bool wantsModalPresentation; /* unknown property attribute: ? */

+ (id)enterpriseJoinPromptOperationWithDeviceCapability:(long long)arg1;

- (void).cxx_destruct;
- (struct __SecIdentity { }*)TLSIdentity;
- (id)password;
- (id)username;

@end