/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HearingModeSettingsUI.framework/HearingModeSettingsUI
 */

@interface HMFitTestController : UIViewController {
    AVSystemController * _avSystemController;
    bool  _budsInEar;
    UIImage * _buttonImage;
    bool  _callActive;
    id /* block */  _completionHandler;
    bool  _darkMode;
    OBLinkTrayButton * _debugCopyResultsButton;
    NSDate * _endFitTestTimestamp;
    UIView * _fitTestContentView;
    OBWelcomeController * _fitTestController;
    float  _initialVolume;
    UIView * _leftBudLabel;
    UIImageView * _leftBudLabelImageView;
    UILabel * _leftBudResultLabel;
    UIImageView * _leftImView;
    OBTrayButton * _playButton;
    AVAudioPlayer * _player;
    UILabel * _resultDetailLabel;
    UIView * _rightBudLabel;
    UIImageView * _rightBudLabelImageView;
    UILabel * _rightBudResultLabel;
    UIImageView * _rightImView;
    UIActivityIndicatorView * _spinner;
    UIStackView * _stackViewImages;
    NSDate * _startFitTestTimestamp;
    bool  _testActive;
    NSLayoutConstraint * _topSpacerConstraint;
    bool  _volumeModified;
    BluetoothDevice * currentDevice;
}

- (void).cxx_destruct;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)callCompletionHandler;
- (void)cleanupAudio;
- (void)copyToClipboard;
- (void)dealloc;
- (void)deviceDisconnectedHandler:(id)arg1;
- (void)dismissFitTest;
- (void)fitTestStopped;
- (float)getConfidenceThreshold;
- (float)getSealThreshold;
- (void)handleAudioSessionInterruption:(id)arg1;
- (void)handleCallIsActiveDidChangeNotification:(id)arg1;
- (void)handleMediaServerConnectionDied:(id)arg1;
- (void)inEarStatusChanged:(id)arg1;
- (id)initWithDevice:(id)arg1;
- (bool)isCallActive;
- (bool)isDebugModeEnabled;
- (bool)isPreferredLanguageEnglish;
- (bool)isSmallScreenDevice;
- (bool)isiPad;
- (void)loadView;
- (void)powerChangedHandler:(id)arg1;
- (void)removeDoneButton;
- (void)resetVolume;
- (void)sealValueChanged:(id)arg1;
- (void)setCancelAction;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setupConstraints;
- (void)setupFitTestContentView;
- (void)startFitTest;
- (void)updateFitTestActiveState;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
