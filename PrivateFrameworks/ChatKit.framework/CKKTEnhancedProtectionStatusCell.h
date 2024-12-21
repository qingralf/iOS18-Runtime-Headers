/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKKTEnhancedProtectionStatusCell : CKDetailsCell <CKDetailsCell> {
    <CKKTEnhancedProtectionStatusCellDelegate> * _delegate;
    long long  _enhancedProtectionStatusCellState;
    unsigned long long  _handlesInChatCount;
    NSMutableArray * _horizontalLayoutConstraints;
    UIButton * _ktStatusButton;
    UILabel * _ktTitleLabel;
    UILabel * _macHeaderLabel;
    bool  _shouldShowMacHeader;
    NSString * _titleString;
    unsigned long long  _verifiedHandlesCount;
    NSMutableArray * _verticalLayoutConstraints;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <CKKTEnhancedProtectionStatusCellDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long enhancedProtectionStatusCellState;
@property (nonatomic) unsigned long long handlesInChatCount;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableArray *horizontalLayoutConstraints;
@property (nonatomic, retain) UIButton *ktStatusButton;
@property (nonatomic, retain) UILabel *ktTitleLabel;
@property (nonatomic, retain) UILabel *macHeaderLabel;
@property (nonatomic, readonly) bool shouldShowMacHeader;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *titleString;
@property (nonatomic) unsigned long long verifiedHandlesCount;
@property (nonatomic, retain) NSMutableArray *verticalLayoutConstraints;

+ (id)reuseIdentifier;
+ (bool)shouldHighlight;

- (void).cxx_destruct;
- (void)activateConstraints;
- (id)clearWarningAction;
- (id)delegate;
- (long long)enhancedProtectionStatusCellState;
- (unsigned long long)handlesInChatCount;
- (id)horizontalLayoutConstraints;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 state:(long long)arg3 delegate:(id)arg4 handlesInChat:(id)arg5 verifiedHandles:(id)arg6 titleString:(id)arg7 shouldShowMacHeader:(bool)arg8;
- (id)ktStatusButton;
- (id)ktStatusMenu;
- (id)ktTitleLabel;
- (void)layoutSubviews;
- (id)learnMoreAction;
- (id)macHeaderLabel;
- (id)menuForKTStatusError;
- (id)menuForKTStatusTurnedOff;
- (id)menuForKTStatusUnavailable;
- (void)reconfigureStatusButton;
- (id)reportToAppleAction;
- (void)setDelegate:(id)arg1;
- (void)setEnhancedProtectionStatusCellState:(long long)arg1;
- (void)setHandlesInChatCount:(unsigned long long)arg1;
- (void)setHorizontalLayoutConstraints:(id)arg1;
- (void)setKtStatusButton:(id)arg1;
- (void)setKtTitleLabel:(id)arg1;
- (void)setMacHeaderLabel:(id)arg1;
- (void)setTitleString:(id)arg1;
- (void)setVerifiedHandlesCount:(unsigned long long)arg1;
- (void)setVerticalLayoutConstraints:(id)arg1;
- (void)setupConstraintsForLayouts;
- (void)setupMacHeaderLabel;
- (void)setupSeparators;
- (void)setupStatusButton;
- (void)setupTitleLabel;
- (void)setupVibrancyEffectView;
- (void)setupView;
- (bool)shouldShowMacHeader;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)statusButtonConfiguration;
- (id)titleString;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateTitleAndStatusButtonConfiguration;
- (unsigned long long)verifiedHandlesCount;
- (id)verifyConversationAction;
- (id)verticalLayoutConstraints;

@end