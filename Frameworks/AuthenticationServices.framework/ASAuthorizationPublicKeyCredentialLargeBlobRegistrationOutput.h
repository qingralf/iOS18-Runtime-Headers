/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AuthenticationServices.framework/AuthenticationServices
 */

@interface ASAuthorizationPublicKeyCredentialLargeBlobRegistrationOutput : NSObject <NSCopying, NSSecureCoding> {
    bool  _isSupported;
}

@property (nonatomic, readonly) bool isSupported;

+ (id)_outputWithIsSupported:(bool)arg1;
+ (bool)supportsSecureCoding;

- (id)_initWithIsSupported:(bool)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isSupported;

@end
