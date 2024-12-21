/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CarPlaySetup.framework/CarPlaySetup
 */

@interface CARSetupAssetProgressViewController : UIViewController {
    id /* block */  _cancelHandler;
    <NSProgressReporting> * _progressReporter;
    CARSetupAppIconProgressView * _progressView;
    UILabel * _subtitleLabel;
    UILabel * _titleLabel;
    UIButton * _useLaterButton;
    NSTimer * _useLaterTimer;
}

@property (nonatomic, readonly, copy) id /* block */ cancelHandler;
@property (nonatomic, readonly) <NSProgressReporting> *progressReporter;
@property (nonatomic, readonly) CARSetupAppIconProgressView *progressView;
@property (nonatomic, readonly) UILabel *subtitleLabel;
@property (nonatomic, readonly) UILabel *titleLabel;
@property (nonatomic, readonly) UIButton *useLaterButton;
@property (nonatomic, retain) NSTimer *useLaterTimer;

- (void).cxx_destruct;
- (void)_cancel;
- (void)_invalidateUseLaterTimer;
- (void)_showUseLater;
- (void)_startUseLaterTimer;
- (void)_useLater;
- (id /* block */)cancelHandler;
- (void)dealloc;
- (id)initWithProgressReporter:(id)arg1 cancelHandler:(id /* block */)arg2;
- (id)progressReporter;
- (id)progressView;
- (void)setUseLaterTimer:(id)arg1;
- (id)subtitleLabel;
- (id)titleLabel;
- (id)useLaterButton;
- (id)useLaterTimer;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;

@end