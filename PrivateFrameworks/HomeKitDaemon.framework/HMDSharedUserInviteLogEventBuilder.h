/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemonLegacy.framework/HomeKitDaemonLegacy
 */

@interface HMDSharedUserInviteLogEventBuilder : NSObject <HMFLogging, HMFTimerDelegate> {
    id /* block */  _currentUpTicksBlock;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    HMDSharedUserInviteLogEvent * _logEvent;
    <HMMLogEventSubmitting> * _logEventSubmitter;
    HMFTimer * _submissionTimer;
    id /* block */  _submissionTimerFactory;
    HMFWiFiManager * _wifiManager;
    bool  cancelled;
    unsigned long long  eventCreatedTime;
    bool  submitted;
}

@property (readonly) id /* block */ currentUpTicksBlock;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (long long)IDSAccountRegistrationError;
- (long long)IDSAccountRegistrationStatus;
- (void)cancel;
- (id /* block */)currentUpTicksBlock;
- (id)initWithLogEvent:(id)arg1 homeManager:(id)arg2 sessionIdentifier:(id)arg3 invitationType:(unsigned long long)arg4 logEventSubmitter:(id)arg5 wifiManager:(id)arg6 currentUpTicksBlock:(id /* block */)arg7 submissionTimerFactory:(id /* block */)arg8;
- (bool)isIDSAvailable;
- (bool)isNetworkAvailable;
- (bool)isReady;
- (bool)isiCloudSignedIn;
- (void)markAddUserBegin;
- (void)markAddUserEnd;
- (void)markError:(id)arg1;
- (void)startSubmissionTimer;
- (void)submit;
- (void)submitIfReady;
- (void)timerDidFire:(id)arg1;

@end
