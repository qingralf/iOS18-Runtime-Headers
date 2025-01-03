/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKTranscriptManagementNameField : UIView <UITextFieldDelegate> {
    _UIBackdropView * _backdropView;
    UIView * _bottomSeparator;
    <CKTranscriptManagementNameFieldDelegate> * _delegate;
    bool  _enabled;
    UILabel * _fieldLabel;
    bool  _isOverlay;
    UITextField * _textField;
    UIView * _topSeparator;
}

@property (nonatomic, retain) _UIBackdropView *backdropView;
@property (nonatomic, retain) UIView *bottomSeparator;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <CKTranscriptManagementNameFieldDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic, retain) UILabel *fieldLabel;
@property (nonatomic, copy) NSString *groupName;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isOverlay;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITextField *textField;
@property (nonatomic, retain) UIView *topSeparator;

+ (double)preferredHeight;

- (void).cxx_destruct;
- (id)backdropView;
- (id)bottomSeparator;
- (void)commitGroupName;
- (void)dealloc;
- (id)delegate;
- (id)fieldLabel;
- (id)groupName;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isEnabled;
- (bool)isOverlay;
- (void)layoutMarginsDidChange;
- (void)layoutSubviews;
- (void)setBackdropView:(id)arg1;
- (void)setBottomSeparator:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setFieldLabel:(id)arg1;
- (void)setGroupName:(id)arg1;
- (void)setIsOverlay:(bool)arg1;
- (void)setTextField:(id)arg1;
- (void)setTopSeparator:(id)arg1;
- (id)textField;
- (void)textFieldDidEndEditing:(id)arg1;
- (bool)textFieldShouldReturn:(id)arg1;
- (id)topSeparator;

@end
