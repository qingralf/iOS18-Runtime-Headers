/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TVRemoteUI.framework/TVRemoteUI
 */

@interface TVRemoteUI.FindingViewController : UIViewController <NIInternalSessionDelegate, NISessionDelegate> {
    void $__lazy_storage_$_findingView;
    void analyticsSessionData;
    void closeButton;
    void currentProximityMeasurement;
    void discoveryToken;
    void dismissedHandler;
    void distanceLabel;
    void firstMeasurement;
    void hapticsController;
    void instructionsLabel;
    void instructionsLabelsStackView;
    void instructionsTopLabel;
    void isFirstAppear;
    void maxRestartDelayMilliseconds;
    void minRestartDelayMilliseconds;
    void nameLabel;
    void niSession;
    void prevState;
    void pulseTimer;
    void remoteInfo;
    void requiresAdditionalConnectionTime;
    void restartBackOffIncrementMilliseconds;
    void searchingDelayWorkItem;
    void sessionRestartDelayMilliseconds;
    void sessionRestartDelayResetTimer;
    void sessionRestartDelayResetTimerDurationSeconds;
    void sleepPreventer;
    void state;
    void style;
    void titleLabel;
    void trendTimer;
    void trendTimerDuration;
}

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (void)closeActionWithSender:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)session:(id)arg1 didFailWithError:(id)arg2;
- (void)session:(id)arg1 didInvalidateWithError:(id)arg2;
- (void)session:(id)arg1 didUpdateNearbyObjects:(id)arg2;
- (void)session:(id)arg1 object:(id)arg2 didUpdateRegion:(id)arg3 previousRegion:(id)arg4;
- (void)sessionDidStartRunning:(id)arg1;
- (void)sessionSuspensionEnded:(id)arg1;
- (void)sessionWasSuspended:(id)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewIsAppearing:(bool)arg1;

@end
