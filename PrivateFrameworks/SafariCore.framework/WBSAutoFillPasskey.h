/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
 */

@interface WBSAutoFillPasskey : NSObject <NSSecureCoding> {
    NSString * _customTitle;
    WBSPublicKeyCredentialIdentifier * _identifier;
    NSUUID * _operationUUID;
    NSString * _relyingPartyIdentifier;
    bool  _requestUsedNonEmptyAllowList;
    bool  _shouldRequireUserVerification;
    NSString * _username;
}

@property (nonatomic, readonly) NSString *customTitle;
@property (nonatomic, readonly, copy) WBSPublicKeyCredentialIdentifier *identifier;
@property (nonatomic, readonly, copy) NSUUID *operationUUID;
@property (nonatomic, readonly) NSString *relyingPartyIdentifier;
@property (nonatomic, readonly) bool requestUsedNonEmptyAllowList;
@property (nonatomic, readonly) bool shouldRequireUserVerification;
@property (nonatomic, readonly) NSString *username;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)customTitle;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithUsername:(id)arg1 customTitle:(id)arg2 relyingPartyIdentifier:(id)arg3 identifier:(id)arg4 operationUUID:(id)arg5 shouldRequireUserVerification:(bool)arg6 requestUsedNonEmptyAllowList:(bool)arg7;
- (id)operationUUID;
- (id)relyingPartyIdentifier;
- (bool)requestUsedNonEmptyAllowList;
- (bool)shouldRequireUserVerification;
- (id)username;

@end
