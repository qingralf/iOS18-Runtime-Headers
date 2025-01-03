/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface SFSafariViewControllerConfiguration : NSObject <NSCopying, NSSecureCoding> {
    SFSafariViewControllerActivityButton * _activityButton;
    bool  _barCollapsingEnabled;
    bool  _entersReaderIfAvailable;
    bool  _ephemeral;
    UIEventAttribution * _eventAttribution;
    bool  _isBeingUsedForCellularServiceBootstrap;
    bool  _jitEnabled;
    bool  _performingAccountSecurityUpgrade;
    NSString * _personaUniqueIdentifier;
    long long  _redirectNotificationBehavior;
    unsigned long long  _storageModeForAuthenticationSession;
}

@property (getter=_isEphemeral, setter=_setEphemeral:, nonatomic) bool _ephemeral;
@property (nonatomic) bool _isBeingUsedForCellularServiceBootstrap;
@property (getter=_isJITEnabled, setter=_setJITEnabled:, nonatomic) bool _jitEnabled;
@property (getter=_isPerformingAccountSecurityUpgrade, setter=_setPerformingAccountSecurityUpgrade:, nonatomic) bool _performingAccountSecurityUpgrade;
@property (setter=_setPersonaUniqueIdentifier:, nonatomic, copy) NSString *_personaUniqueIdentifier;
@property (nonatomic) long long _redirectNotificationBehavior;
@property (nonatomic) unsigned long long _storageModeForAuthenticationSession;
@property (nonatomic, copy) SFSafariViewControllerActivityButton *activityButton;
@property (nonatomic) bool barCollapsingEnabled;
@property (nonatomic) bool entersReaderIfAvailable;
@property (nonatomic, copy) UIEventAttribution *eventAttribution;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_isBeingUsedForCellularServiceBootstrap;
- (bool)_isEphemeral;
- (bool)_isJITEnabled;
- (bool)_isPerformingAccountSecurityUpgrade;
- (id)_personaUniqueIdentifier;
- (long long)_redirectNotificationBehavior;
- (void)_setEphemeral:(bool)arg1;
- (void)_setJITEnabled:(bool)arg1;
- (void)_setPerformingAccountSecurityUpgrade:(bool)arg1;
- (void)_setPersonaUniqueIdentifier:(id)arg1;
- (unsigned long long)_storageModeForAuthenticationSession;
- (id)activityButton;
- (bool)barCollapsingEnabled;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (bool)entersReaderIfAvailable;
- (id)eventAttribution;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)setActivityButton:(id)arg1;
- (void)setBarCollapsingEnabled:(bool)arg1;
- (void)setEntersReaderIfAvailable:(bool)arg1;
- (void)setEventAttribution:(id)arg1;
- (void)set_isBeingUsedForCellularServiceBootstrap:(bool)arg1;
- (void)set_redirectNotificationBehavior:(long long)arg1;
- (void)set_storageModeForAuthenticationSession:(unsigned long long)arg1;

@end
