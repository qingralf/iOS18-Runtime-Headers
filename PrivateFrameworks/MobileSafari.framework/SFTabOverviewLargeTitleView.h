/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileSafari.framework/MobileSafari
 */

@interface SFTabOverviewLargeTitleView : MobileSafari.BlurrableView <UITextFieldDelegate> {
    void cancelEditingButton;
    void collaborationButtonWrapper;
    void configuration;
    void placeholderButton;
    void shareButton;
    void titleTextField;
    void titleTextFieldToTrailingButtonConstraint;
    void trailingButtonConstraints;
    void trailingButtons;
}

- (void).cxx_destruct;
- (bool)_textFieldShouldScrollToVisibleWhenBecomingFirstResponder:(id)arg1;
- (void)cancelEditingButtonReceivedTap;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)shareButtonReceivedTap;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (bool)textFieldShouldBeginEditing:(id)arg1;
- (bool)textFieldShouldEndEditing:(id)arg1;
- (bool)textFieldShouldReturn:(id)arg1;

@end
