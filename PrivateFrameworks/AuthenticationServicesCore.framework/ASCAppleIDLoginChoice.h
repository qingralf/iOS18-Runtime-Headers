/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AuthenticationServicesCore.framework/AuthenticationServicesCore
 */

@interface ASCAppleIDLoginChoice : NSObject <ASCLoginChoiceProtocol> {
    AKAuthorizationLoginChoice * _underlyingAppleIDLoginChoice;
    NSString * _user;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isSharedCredential; /* unknown property attribute: ? */
@property (nonatomic, readonly) unsigned long long loginChoiceKind;
@property (readonly) Class superclass;
@property (nonatomic, readonly) AKAuthorizationLoginChoice *underlyingAppleIDLoginChoice;
@property (nonatomic, readonly, copy) NSString *user;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAppleIDLoginChoice:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUser:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)loginChoiceKind;
- (id)underlyingAppleIDLoginChoice;
- (id)user;

@end
