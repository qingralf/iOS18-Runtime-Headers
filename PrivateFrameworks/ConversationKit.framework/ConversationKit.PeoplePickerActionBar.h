/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ConversationKit.framework/ConversationKit
 */

@interface ConversationKit.PeoplePickerActionBar : UIView {
    void $__lazy_storage_$_audioButton;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  $__lazy_storage_$_audioButtonConfiguration;
    void $__lazy_storage_$_audioCallDisambiguationMenu;
    void $__lazy_storage_$_audioVideoCallMenu;
    void $__lazy_storage_$_audioVideoDropdownButton;
    void $__lazy_storage_$_audioVideoDropdownViewModel;
    void $__lazy_storage_$_backgroundGradientLayer;
    void $__lazy_storage_$_backgroundView;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  $__lazy_storage_$_callUsingIPhoneDescriptiveMenuItem;
    void $__lazy_storage_$_cancelButton;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  $__lazy_storage_$_cancelButtonConfiguration;
    void $__lazy_storage_$_faceTimeAddPersonButton;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  $__lazy_storage_$_faceTimeAudioDropdownMenuItem;
    void $__lazy_storage_$_inviteWithMessagesButton;
    void $__lazy_storage_$_inviteWithMessagesButtonStackView;
    void $__lazy_storage_$_messageAndFaceTimeStackView;
    void $__lazy_storage_$_messagesButton;
    void $__lazy_storage_$_sharePlayAddPersonButton;
    void $__lazy_storage_$_videoButton;
    void allButtons;
    void audioButtonLeadingConstraint;
    void buttonsStyle;
    void delegate;
    void generatingLinksEnabled;
    void handleToDisplay;
    void serviceAvailability;
}

- (void).cxx_destruct;
- (void)addPersonButtonTapped:(id)arg1;
- (void)audioButtonTapped:(id)arg1;
- (void)cancelButtonTapped:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)inviteWithMessagesButtonTapped:(id)arg1;
- (void)layoutSubviews;
- (void)messagesButtonTapped:(id)arg1;
- (void)rttEnablementDidChange;
- (void)traitCollectionDidChange:(id)arg1;
- (void)videoButtonTapped;

@end