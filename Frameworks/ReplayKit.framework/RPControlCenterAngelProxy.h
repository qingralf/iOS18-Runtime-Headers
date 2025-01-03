/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
 */

@interface RPControlCenterAngelProxy : NSObject <RPAngelClientProtocol, RPAngelServerProtocol> {
    BSServiceConnection<BSServiceConnectionClient> * _connection;
    <RPControlCenterAngelProxyDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic, retain) <RPControlCenterAngelProxyDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (oneway void)cancelRecordingCountdown;
- (id)connectionManagerQueue;
- (oneway void)countdownInterruptWithStatus:(id)arg1;
- (id)delegate;
- (id)getBSServiceInterface;
- (oneway void)hideAndStopRecordingBanner;
- (id)init;
- (oneway void)setCountdownState:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setupConnection;
- (oneway bool)showReactionsTipForApplication:(id)arg1 bundleID:(id)arg2;
- (oneway void)showRecordingBanner;
- (oneway void)startRecordingCountdown;
- (oneway void)stopCurrentSession;
- (oneway void)stopRecordingCalled;

@end
