/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
 */

@interface UIActivityCollaborationModeRestriction : NSObject <NSCopying, NSSecureCoding> {
    NSString * _alertDismissButtonTitle;
    NSString * _alertMessage;
    NSURL * _alertRecoverySuggestionButtonLaunchURL;
    NSString * _alertRecoverySuggestionButtonTitle;
    NSString * _alertTitle;
    bool  _allowContinueToMode;
    long long  _disabledMode;
}

@property (nonatomic, readonly, copy) NSString *alertDismissButtonTitle;
@property (nonatomic, readonly, copy) NSString *alertMessage;
@property (nonatomic, readonly, copy) NSURL *alertRecoverySuggestionButtonLaunchURL;
@property (nonatomic, readonly, copy) NSString *alertRecoverySuggestionButtonTitle;
@property (nonatomic, readonly, copy) NSString *alertTitle;
@property (nonatomic, readonly) bool allowContinueToMode;
@property (nonatomic, readonly) long long disabledMode;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithDisabledMode:(long long)arg1 alertTitle:(id)arg2 alertMessage:(id)arg3 alertDismissButtonTitle:(id)arg4 alertRecoverySuggestionButtonTitle:(id)arg5 alertRecoverySuggestionButtonLaunchURL:(id)arg6 allowContinueToMode:(bool)arg7;
- (id)alertDismissButtonTitle;
- (id)alertMessage;
- (id)alertRecoverySuggestionButtonLaunchURL;
- (id)alertRecoverySuggestionButtonTitle;
- (id)alertTitle;
- (bool)allowContinueToMode;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionForMode:(long long)arg1;
- (long long)disabledMode;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDisabledMode:(long long)arg1;
- (id)initWithDisabledMode:(long long)arg1 alertTitle:(id)arg2 alertMessage:(id)arg3;
- (id)initWithDisabledMode:(long long)arg1 alertTitle:(id)arg2 alertMessage:(id)arg3 alertDismissButtonTitle:(id)arg4;
- (id)initWithDisabledMode:(long long)arg1 alertTitle:(id)arg2 alertMessage:(id)arg3 alertDismissButtonTitle:(id)arg4 alertContinueToModeButtonTitle:(id)arg5;
- (id)initWithDisabledMode:(long long)arg1 alertTitle:(id)arg2 alertMessage:(id)arg3 alertDismissButtonTitle:(id)arg4 alertRecoverySuggestionButtonTitle:(id)arg5 alertRecoverySuggestionButtonLaunchURL:(id)arg6;

@end
