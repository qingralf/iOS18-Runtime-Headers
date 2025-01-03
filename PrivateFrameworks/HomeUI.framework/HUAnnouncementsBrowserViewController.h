/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUAnnouncementsBrowserViewController : UIViewController <HFAccessoryObserver, HFAudioRecorderDelegate, HFMediaObjectObserver, HUAnnouncementsGlobeViewDelegate> {
    ANAnnounce * _announce;
    UILabel * _announcementDeliveryFailureLabel;
    HUAnnouncementGlobeView * _announcementGlobeView;
    UILabel * _announcementProgressLabel;
    HFAudioRecorder * _audioRecorder;
    HUWaveformView * _audioWaveformView;
    NSLayoutConstraint * _audioWaveformViewLeadingConstraint;
    NSLayoutConstraint * _audioWaveformViewTrailingConstraint;
    UIBlurEffect * _blurEffect;
    HMHome * _currentHome;
    <HUAnnouncementsBrowserViewControllerDelegate> * _delegate;
    UILabel * _errorStatusLabel;
    UIImpactFeedbackGenerator * _feedbackGenerator;
    bool  _isTearingDown;
    UILabel * _largeTitleLabel;
    UIVisualEffectView * _largeTitleVisualEffectView;
    UIView * _lightedCircleView;
    UILongPressGestureRecognizer * _longPressGestureRecognizer;
    UIButton * _nextAnnouncementButton;
    double  _notificationDismissTimeInterval;
    double  _notificationLaunchTimeInterval;
    NSDictionary * _notificationPayload;
    NSString * _recipientTitle;
    HURecordingButton * _recordButton;
    UILabel * _recordButtonLabel;
    UIVisualEffectView * _recordButtonLabelVisualEffectView;
    NSURL * _recordedAnnouncementURL;
    double  _recordedDuration;
    NSString * _senderName;
    bool  _shouldNotSendCurrentRecording;
    UILabel * _subTitleLabel;
    UIVisualEffectView * _subTitleVisualEffectView;
    UIScrollView * _transcriptionScrollView;
    UIStackView * _transcriptionStackView;
    UILabel * _transcriptionText;
    UILabel * _transcriptionTitleLabel;
}

@property (nonatomic, retain) ANAnnounce *announce;
@property (nonatomic, retain) UILabel *announcementDeliveryFailureLabel;
@property (nonatomic, retain) HUAnnouncementGlobeView *announcementGlobeView;
@property (nonatomic, retain) UILabel *announcementProgressLabel;
@property (nonatomic, retain) HFAudioRecorder *audioRecorder;
@property (nonatomic, retain) HUWaveformView *audioWaveformView;
@property (nonatomic, retain) NSLayoutConstraint *audioWaveformViewLeadingConstraint;
@property (nonatomic, retain) NSLayoutConstraint *audioWaveformViewTrailingConstraint;
@property (nonatomic, retain) UIBlurEffect *blurEffect;
@property (nonatomic, retain) HMHome *currentHome;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <HUAnnouncementsBrowserViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UILabel *errorStatusLabel;
@property (nonatomic, retain) UIImpactFeedbackGenerator *feedbackGenerator;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isTearingDown;
@property (nonatomic, retain) UILabel *largeTitleLabel;
@property (nonatomic, retain) UIVisualEffectView *largeTitleVisualEffectView;
@property (nonatomic, retain) UIView *lightedCircleView;
@property (nonatomic, retain) UILongPressGestureRecognizer *longPressGestureRecognizer;
@property (nonatomic, retain) UIButton *nextAnnouncementButton;
@property (nonatomic) double notificationDismissTimeInterval;
@property (nonatomic) double notificationLaunchTimeInterval;
@property (nonatomic, retain) NSDictionary *notificationPayload;
@property (nonatomic, copy) NSString *recipientTitle;
@property (nonatomic, retain) HURecordingButton *recordButton;
@property (nonatomic, retain) UILabel *recordButtonLabel;
@property (nonatomic, retain) UIVisualEffectView *recordButtonLabelVisualEffectView;
@property (nonatomic, retain) NSURL *recordedAnnouncementURL;
@property (nonatomic) double recordedDuration;
@property (nonatomic, retain) NSString *senderName;
@property (nonatomic) bool shouldNotSendCurrentRecording;
@property (nonatomic, retain) UILabel *subTitleLabel;
@property (nonatomic, retain) UIVisualEffectView *subTitleVisualEffectView;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIScrollView *transcriptionScrollView;
@property (nonatomic, retain) UIStackView *transcriptionStackView;
@property (nonatomic, retain) UILabel *transcriptionText;
@property (nonatomic, retain) UILabel *transcriptionTitleLabel;

- (void).cxx_destruct;
- (void)_addCommonTranscriptionConstraints;
- (void)_addTranscriptionConstraintsForValidNotificationPayload;
- (id)_announcerNameFromNotificationPayload:(id)arg1;
- (void)_applyTranscriptionText:(id)arg1;
- (id)_backgroundColorForNextAnnouncementButton;
- (void)_beginRecordingReply:(id)arg1;
- (void)_commonInit;
- (void)_configureSubViewsForValidNotificationPayload;
- (void)_configureVisualStyleForLightedCircleView;
- (void)_deleteAudioFile;
- (void)_deleteRecording:(id)arg1;
- (void)_dismissViewOrDisplayError:(id)arg1;
- (id)_fontForAnnouncementProgressLabel;
- (void)_hideRecordingUI;
- (bool)_isHomeContext;
- (bool)_isNotificationPayloadValid;
- (bool)_isRoomContext;
- (id)_lightedCircleBackgroundColorForCurrentInterfaceStyle;
- (id)_lightedCircleShadowColorForCurrentInterfaceStyle;
- (void)_recordButtonLongPressGesture:(id)arg1;
- (void)_recordButtonTapped:(id)arg1;
- (void)_sendAnnouncement:(id)arg1;
- (void)_sendAnnouncementReply:(id)arg1;
- (void)_setupRecipientInformation;
- (void)_skipToNextAnnouncement:(id)arg1;
- (void)_stopRecordingAndSendReply:(id)arg1;
- (void)_submitAnalyticsForAnnounceNotificationUsage;
- (void)_submitAnalyticsForAnnounceRecordingCompletedSuccessfully:(bool)arg1 interruptedByUser:(bool)arg2;
- (double)_transcriptionStackViewHeight;
- (void)_updateUIBasedOnReachabilityStatus;
- (id)_waveformColor;
- (void)accessoryDidUpdateControllable:(id)arg1;
- (void)accessoryDidUpdateReachability:(id)arg1;
- (void)accessoryDidUpdateReachableTransports:(id)arg1;
- (id)announce;
- (id)announcementDeliveryFailureLabel;
- (id)announcementGlobeView;
- (id)announcementProgressLabel;
- (id)audioRecorder;
- (void)audioRecorderDidStartRecording:(id)arg1;
- (void)audioRecorderFailedToFinishRecording:(id)arg1;
- (void)audioRecorderFailedToStartRecording:(id)arg1;
- (void)audioRecorderFinishedRecording:(id)arg1 audioFile:(id)arg2;
- (id)audioWaveformView;
- (id)audioWaveformViewLeadingConstraint;
- (id)audioWaveformViewTrailingConstraint;
- (id)blurEffect;
- (id)currentHome;
- (void)dealloc;
- (id)delegate;
- (void)didSelectItemWithInfo:(id)arg1 totalNumberOfAnnouncements:(unsigned long long)arg2;
- (void)didUpdateAveragePower:(float)arg1;
- (id)errorStatusLabel;
- (id)feedbackGenerator;
- (id)initWithNotificationPayload:(id)arg1 delegate:(id)arg2;
- (bool)isTearingDown;
- (id)largeTitleLabel;
- (id)largeTitleVisualEffectView;
- (id)lightedCircleView;
- (id)longPressGestureRecognizer;
- (id)nextAnnouncementButton;
- (double)notificationDismissTimeInterval;
- (double)notificationLaunchTimeInterval;
- (id)notificationPayload;
- (id)recipientTitle;
- (id)recordButton;
- (id)recordButtonLabel;
- (id)recordButtonLabelVisualEffectView;
- (id)recordedAnnouncementURL;
- (double)recordedDuration;
- (id)senderName;
- (void)setAnnounce:(id)arg1;
- (void)setAnnouncementDeliveryFailureLabel:(id)arg1;
- (void)setAnnouncementGlobeView:(id)arg1;
- (void)setAnnouncementProgressLabel:(id)arg1;
- (void)setAudioRecorder:(id)arg1;
- (void)setAudioWaveformView:(id)arg1;
- (void)setAudioWaveformViewLeadingConstraint:(id)arg1;
- (void)setAudioWaveformViewTrailingConstraint:(id)arg1;
- (void)setBlurEffect:(id)arg1;
- (void)setCurrentHome:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setErrorStatusLabel:(id)arg1;
- (void)setFeedbackGenerator:(id)arg1;
- (void)setIsTearingDown:(bool)arg1;
- (void)setLargeTitleLabel:(id)arg1;
- (void)setLargeTitleVisualEffectView:(id)arg1;
- (void)setLightedCircleView:(id)arg1;
- (void)setLongPressGestureRecognizer:(id)arg1;
- (void)setNextAnnouncementButton:(id)arg1;
- (void)setNotificationDismissTimeInterval:(double)arg1;
- (void)setNotificationLaunchTimeInterval:(double)arg1;
- (void)setNotificationPayload:(id)arg1;
- (void)setRecipientTitle:(id)arg1;
- (void)setRecordButton:(id)arg1;
- (void)setRecordButtonLabel:(id)arg1;
- (void)setRecordButtonLabelVisualEffectView:(id)arg1;
- (void)setRecordedAnnouncementURL:(id)arg1;
- (void)setRecordedDuration:(double)arg1;
- (void)setSenderName:(id)arg1;
- (void)setShouldNotSendCurrentRecording:(bool)arg1;
- (void)setSubTitleLabel:(id)arg1;
- (void)setSubTitleVisualEffectView:(id)arg1;
- (void)setTranscriptionScrollView:(id)arg1;
- (void)setTranscriptionStackView:(id)arg1;
- (void)setTranscriptionText:(id)arg1;
- (void)setTranscriptionTitleLabel:(id)arg1;
- (bool)shouldNotSendCurrentRecording;
- (id)subTitleLabel;
- (id)subTitleVisualEffectView;
- (void)tearDownAudioActivity;
- (void)traitCollectionDidChange:(id)arg1;
- (id)transcriptionScrollView;
- (id)transcriptionStackView;
- (id)transcriptionText;
- (id)transcriptionTitleLabel;
- (void)viewDidLoad;

@end
