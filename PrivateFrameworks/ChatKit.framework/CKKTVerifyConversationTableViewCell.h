/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKKTVerifyConversationTableViewCell : CKDetailsCell {
    unsigned long long  _ktStatus;
    UILabel * _macHeaderLabel;
    long long  _numberOfRowsInSection;
    bool  _shouldShowMacHeader;
    UILabel * _verifyConversationLabel;
}

@property (nonatomic) unsigned long long ktStatus;
@property (nonatomic, retain) UILabel *macHeaderLabel;
@property (nonatomic) long long numberOfRowsInSection;
@property (nonatomic) bool shouldShowMacHeader;
@property (nonatomic, retain) UILabel *verifyConversationLabel;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (void)addConstraints;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 numberOfRowsInSection:(long long)arg3 shouldShowMacHeader:(bool)arg4 ktStatus:(unsigned long long)arg5;
- (unsigned long long)ktStatus;
- (id)macHeaderLabel;
- (long long)numberOfRowsInSection;
- (void)setEnabled:(bool)arg1;
- (void)setKtStatus:(unsigned long long)arg1;
- (void)setMacHeaderLabel:(id)arg1;
- (void)setNumberOfRowsInSection:(long long)arg1;
- (void)setShouldShowMacHeader:(bool)arg1;
- (void)setVerifyConversationLabel:(id)arg1;
- (void)setupMacHeaderLabel;
- (void)setupSeparators;
- (void)setupTitleLabel;
- (void)setupView;
- (bool)shouldShowMacHeader;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)updateForNewKTState;
- (id)verifyConversationLabel;
- (id)verifyTitleString;

@end
