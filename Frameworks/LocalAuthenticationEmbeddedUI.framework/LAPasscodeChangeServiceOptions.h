/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/LocalAuthenticationEmbeddedUI.framework/LocalAuthenticationEmbeddedUI
 */

@interface LAPasscodeChangeServiceOptions : NSObject {
    NSString * _calloutReason;
    NSURL * _calloutURL;
    LAExtractablePassword * _currentPasscode;
    bool  _hidePasscodeRecoveryMessage;
    LAExtractablePassword * _newPasscode;
    NSString * _passcodePrompt;
    bool  _skipSuccessNotification;
    NSString * _title;
}

@property (nonatomic, retain) NSString *calloutReason;
@property (nonatomic, retain) NSURL *calloutURL;
@property (nonatomic, retain) LAExtractablePassword *currentPasscode;
@property (nonatomic) bool hidePasscodeRecoveryMessage;
@property (nonatomic, retain) LAExtractablePassword *newPasscode;
@property (nonatomic, retain) NSString *passcodePrompt;
@property (nonatomic) bool skipSuccessNotification;
@property (nonatomic, retain) NSString *title;

- (void).cxx_destruct;
- (id)calloutReason;
- (id)calloutURL;
- (id)currentPasscode;
- (id)description;
- (bool)hidePasscodeRecoveryMessage;
- (id)init;
- (id)newPasscode;
- (id)passcodePrompt;
- (void)setCalloutReason:(id)arg1;
- (void)setCalloutURL:(id)arg1;
- (void)setCurrentPasscode:(id)arg1;
- (void)setHidePasscodeRecoveryMessage:(bool)arg1;
- (void)setNewPasscode:(id)arg1;
- (void)setPasscodePrompt:(id)arg1;
- (void)setSkipSuccessNotification:(bool)arg1;
- (void)setTitle:(id)arg1;
- (bool)skipSuccessNotification;
- (id)title;

@end