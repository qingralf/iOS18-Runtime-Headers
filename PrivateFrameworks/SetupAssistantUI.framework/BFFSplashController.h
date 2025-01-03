/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
 */

@interface BFFSplashController : UIViewController <UIScrollViewDelegate> {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _additionalInsets;
    UIColor * _bleedColor;
    UIView * _bleedView;
    UIView * _buttonTray;
    NSMutableArray * _buttons;
    UIView * _contentView;
    long long  _contentViewPosition;
    NSString * _detailText;
    bool  _disableIconTint;
    UIVisualEffectView * _effectView;
    bool  _fullWidthContent;
    BFFPaneHeaderView * _headerView;
    UIScrollView * _scrollView;
    bool  _scrollingDisabled;
    UIColor * _tint;
    bool  _usesTwoButtonLayout;
}

@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } additionalInsets;
@property (nonatomic, retain) UIColor *bleedColor;
@property (nonatomic, readonly) UIView *buttonTray;
@property (nonatomic, retain) UIView *contentView;
@property (nonatomic) long long contentViewPosition;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *detailText;
@property (nonatomic) bool disableIconTint;
@property (nonatomic, retain) UIVisualEffectView *effectView;
@property (nonatomic) bool fullWidthContent;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) BFFPaneHeaderView *headerView;
@property (nonatomic, retain) UIImage *icon;
@property (getter=isScrollingDisabled, nonatomic) bool scrollingDisabled;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIColor *tint;
@property (nonatomic) bool usesTwoButtonLayout;

- (void).cxx_destruct;
- (void)_buttonPressed:(id)arg1;
- (id)_createButtonWithTitle:(id)arg1 style:(long long)arg2;
- (void)_updateButtonFonts;
- (void)_updateTrayVisibility;
- (void)addButtonWithTitle:(id)arg1 style:(long long)arg2 action:(id /* block */)arg3;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })additionalInsets;
- (id)bleedColor;
- (id)buttonAtIndex:(unsigned long long)arg1;
- (id)buttonTray;
- (id)contentScrollView;
- (id)contentView;
- (long long)contentViewPosition;
- (id)detailText;
- (bool)disableIconTint;
- (id)effectView;
- (bool)fullWidthContent;
- (id)headerView;
- (id)icon;
- (id)init;
- (bool)isScrollingDisabled;
- (void)loadView;
- (void)removeAllButtons;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setAdditionalInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setBleedColor:(id)arg1;
- (void)setButtonsEnabled:(bool)arg1;
- (void)setContentView:(id)arg1;
- (void)setContentViewPosition:(long long)arg1;
- (void)setDetailText:(id)arg1;
- (void)setDisableIconTint:(bool)arg1;
- (void)setEffectView:(id)arg1;
- (void)setFullWidthContent:(bool)arg1;
- (void)setIcon:(id)arg1;
- (void)setLinkText:(id)arg1 action:(id /* block */)arg2;
- (void)setScrollingDisabled:(bool)arg1;
- (void)setTint:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitle:(id)arg1 forButtonAtIndex:(unsigned long long)arg2 action:(id /* block */)arg3;
- (void)setUsesTwoButtonLayout:(bool)arg1;
- (id)tint;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateBleedColor;
- (void)updateBleedViewLayout;
- (bool)usesTwoButtonLayout;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
