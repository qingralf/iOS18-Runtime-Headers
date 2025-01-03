/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleIDSetupUI.framework/AppleIDSetupUI
 */

@interface AISSetupViewController : UIViewController {
    AISSetupContext * _context;
    UIAction * _dontSuggestUserAction;
    id /* block */  _reportHandler;
    bool  _shouldAutoDismiss;
    UIAction * _skipAction;
    __AISSetupViewController * _viewController;
}

@property (nonatomic, retain) AISSetupContext *context;
@property (nonatomic, copy) UIAction *dontSuggestUserAction;
@property (nonatomic, copy) id /* block */ reportHandler;
@property (nonatomic) bool shouldAutoDismiss;
@property (nonatomic, copy) UIAction *skipAction;
@property (nonatomic, retain) __AISSetupViewController *viewController;

- (void).cxx_destruct;
- (void)_updateAutoDismissal;
- (id)context;
- (void)didMoveToParentViewController:(id)arg1;
- (id)dontSuggestUserAction;
- (id)initWithContext:(id)arg1;
- (id /* block */)reportHandler;
- (void)setContext:(id)arg1;
- (void)setDontSuggestUserAction:(id)arg1;
- (void)setReportHandler:(id /* block */)arg1;
- (void)setShouldAutoDismiss:(bool)arg1;
- (void)setSkipAction:(id)arg1;
- (void)setViewController:(id)arg1;
- (bool)shouldAutoDismiss;
- (id)skipAction;
- (id)viewController;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;

@end
