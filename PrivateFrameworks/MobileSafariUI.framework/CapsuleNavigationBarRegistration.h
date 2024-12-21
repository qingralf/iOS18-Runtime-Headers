/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileSafariUI.framework/MobileSafariUI
 */

@interface CapsuleNavigationBarRegistration : NSObject <_SFBarRegistrationToken> {
    SFCapsuleNavigationBar * _bar;
    NSMutableDictionary * _buttonsByBarItem;
    bool  _disabledBarItems;
    SFNavigationBarToggleButton * _formatMenuButton;
    bool  _hiddenBarItems;
    NSArray * _leadingBarItems;
    _SFBarManager * _manager;
    NSMutableDictionary * _menuByBarItem;
    unsigned long long  _pageFormatItemState;
    NSString * _previousWebpageIdentifier;
    SFMoreMenuButton * _progressView;
    NSArray * _trailingBarItems;
}

@property (readonly) SFCapsuleNavigationBar *bar;
@property (nonatomic, retain) _SWCollaborationButtonView *collaborationButton; /* unknown property attribute: ? */
@property (nonatomic) long long contentMode; /* unknown property attribute: ? */
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIButton *microphoneButton; /* unknown property attribute: ? */
@property (nonatomic) unsigned long long pageFormatItemState; /* unknown property attribute: ? */
@property (nonatomic) long long state; /* unknown property attribute: ? */
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_actionForBarItem:(long long)arg1;
- (bool)_isBarItemHidden:(long long)arg1;
- (id)_longPressActionForBarItem:(long long)arg1;
- (id)_progressView;
- (id)_touchDownActionForBarItem:(long long)arg1;
- (void)_updateDownloadState;
- (void)_updateFormatMenuButton;
- (void)_voiceSearchAvailabilityDidChange:(id)arg1;
- (id)bar;
- (bool)containsBarItem:(long long)arg1;
- (void)dealloc;
- (id)description;
- (id)initWithBar:(id)arg1 barManager:(id)arg2;
- (id)microphoneButton;
- (unsigned long long)pageFormatItemState;
- (id)popoverSourceInfoForItem:(long long)arg1;
- (void)setBarItem:(long long)arg1 enabled:(bool)arg2;
- (void)setBarItem:(long long)arg1 hidden:(bool)arg2;
- (void)setBarItem:(long long)arg1 menu:(id)arg2;
- (void)setBarItem:(long long)arg1 selected:(bool)arg2;
- (void)setPageFormatItemState:(unsigned long long)arg1;
- (void)setProgress:(double)arg1 forBarItem:(long long)arg2;
- (void)updateBarAnimated:(bool)arg1;
- (id)viewForBarItem:(long long)arg1;

@end