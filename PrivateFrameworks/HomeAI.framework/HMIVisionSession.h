/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
 */

@interface HMIVisionSession : HMFObject <HMFLogging, HMFTimerDelegate> {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    VNSession * _session;
    HMFOSTransaction * _transaction;
    HMFTimer * _watchdogTimer;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (retain) HMFOSTransaction *transaction;
@property (readonly) VNSession *vnSession;
@property (readonly) HMFTimer *watchdogTimer;

+ (id)logCategory;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)setTransaction:(id)arg1;
- (void)timerDidFire:(id)arg1;
- (id)transaction;
- (id)vnSession;
- (id)watchdogTimer;

@end
