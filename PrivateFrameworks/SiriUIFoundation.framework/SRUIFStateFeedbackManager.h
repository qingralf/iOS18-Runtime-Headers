/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriUIFoundation.framework/SiriUIFoundation
 */

@interface SRUIFStateFeedbackManager : NSObject <SOMediaNowPlayingListening> {
    AFWatchdogTimer * _delayToneTimer;
    <SRUIFStateFeedbackManagerDelegate> * _delegate;
    SOMediaNowPlayingObserver * _nowPlayingObserver;
    NSObject<OS_dispatch_queue> * _nowPlayingObserverQueue;
    long long  _nowPlayingState;
    <SRUIFStateFeedbackProviding> * _provider;
    NSString * _responseMode;
    bool  _stateFeedbackNeeded;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cancelFeedback;
- (void)_cancelFeedbackWithCompletion:(id /* block */)arg1;
- (void)_playDelayFeedback;
- (void)_playSuccessFeedback;
- (void)_scheduleDelayToneFor:(double)arg1;
- (void)audioPlaybackRequestDidStartForRequest:(id)arg1;
- (void)cancelFeedbackWithCompletion:(id /* block */)arg1;
- (void)didTransitionFromState:(long long)arg1 toState:(long long)arg2;
- (void)didTransitionFromState:(long long)arg1 toState:(long long)arg2 event:(long long)arg3 machAbsoluteTransitionTime:(double)arg4;
- (void)didUpdateEstimatedEndOfUserInput:(unsigned long long)arg1;
- (void)didUpdateSpeechEndEstimate:(unsigned long long)arg1;
- (id)initWithStateFeedbackProvider:(id)arg1 delegate:(id)arg2;
- (void)nowPlayingObserver:(id)arg1 playbackStateDidChangeFrom:(long long)arg2 to:(long long)arg3 lastPlayingDate:(id)arg4;
- (void)playAudioPlaybackRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)siriSessionDidEnd;
- (void)updateResponseMode:(id)arg1;

@end
