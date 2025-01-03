/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPassHeaderView : UIView {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentInsets;
    <PKPassHeaderViewDelegate> * _delegate;
    bool  _expiredPass;
    UIImageView * _maskShadow;
    PKPass * _pass;
    <PKPassLibraryDataProvider> * _passLibraryOverride;
    UIView * _passMaskView;
    PKPassView * _passView;
    PKPeerPaymentAccount * _peerPaymentAccount;
    UIColor * _primaryTextColor;
    PKRemoteDataAccessor * _remoteDataAccessor;
    PKPassFaceViewRendererState * _rendererState;
    UIColor * _secondaryTextColor;
    bool  _showModificationDate;
    bool  _small;
    UILabel * _subtitle;
    unsigned long long  _suppressedContent;
    UILabel * _title;
    double  passImageHeight;
}

@property (nonatomic) <PKPassHeaderViewDelegate> *delegate;
@property (nonatomic) bool expiredPass;
@property (nonatomic, retain) PKPass *pass;
@property (nonatomic, retain) <PKPassLibraryDataProvider> *passLibraryOverride;
@property (nonatomic, readonly) PKPassView *passView;
@property (nonatomic, retain) PKPeerPaymentAccount *peerPaymentAccount;
@property (nonatomic, retain) UIColor *primaryTextColor;
@property (nonatomic, retain) PKPassFaceViewRendererState *rendererState;
@property (nonatomic, retain) UIColor *secondaryTextColor;
@property (nonatomic) bool showModificationDate;
@property (getter=isSmall, nonatomic) bool small;
@property (nonatomic) unsigned long long suppressedContent;

- (void).cxx_destruct;
- (void)_passLibraryDidChange:(id)arg1;
- (id)_primaryTextColor;
- (void)_resetFonts;
- (id)_secondaryTextColor;
- (void)_updateContent;
- (void)_updateTextContent;
- (void)dealloc;
- (id)delegate;
- (bool)expiredPass;
- (id)initWithPass:(id)arg1;
- (id)initWithPass:(id)arg1 rendererState:(id)arg2;
- (bool)isSmall;
- (void)layoutSubviews;
- (id)pass;
- (id)passLibraryOverride;
- (struct { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; double x3; })passSizeInfoForHeight:(double)arg1;
- (id)passView;
- (id)peerPaymentAccount;
- (id)primaryTextColor;
- (id)rendererState;
- (id)secondaryTextColor;
- (void)setDelegate:(id)arg1;
- (void)setExpiredPass:(bool)arg1;
- (void)setPass:(id)arg1;
- (void)setPassLibraryOverride:(id)arg1;
- (void)setPeerPaymentAccount:(id)arg1;
- (void)setPrimaryTextColor:(id)arg1;
- (void)setRendererState:(id)arg1;
- (void)setSecondaryTextColor:(id)arg1;
- (void)setShowModificationDate:(bool)arg1;
- (void)setSmall:(bool)arg1;
- (void)setSuppressedContent:(unsigned long long)arg1;
- (bool)showModificationDate;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (unsigned long long)suppressedContent;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateModifiedDate;
- (void)updateShadow:(double)arg1;

@end
