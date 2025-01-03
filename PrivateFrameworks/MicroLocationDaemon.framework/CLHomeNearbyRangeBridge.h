/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MicroLocationDaemon.framework/MicroLocationDaemon
 */

@interface CLHomeNearbyRangeBridge : NSObject <NIInternalSessionDelegate> {
    struct CLMicroLocationUwbBridgeWrapper { int (**x1)(); id x2; id x3; struct IUwbClientDelegate {} *x4; } * _cppWrapper;
    ULTimer * _customRangeRateTimer;
    NSObject<OS_dispatch_queue> * _rangingCallbackQueue;
    long long  _reactivationDelayInSeconds;
    bool  _reactivationInProgress;
    NISession * _session;
}

@property (nonatomic, retain) ULTimer *customRangeRateTimer;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *rangingCallbackQueue;
@property (nonatomic) long long reactivationDelayInSeconds;
@property (nonatomic) bool reactivationInProgress;
@property (nonatomic, retain) NISession *session;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)createRangeSession;
- (id)customRangeRateTimer;
- (void)dealloc;
- (id)initWithDelegate:(struct CLMicroLocationUwbBridgeWrapper { int (**x1)(); id x2; id x3; struct IUwbClientDelegate {} *x4; }*)arg1 withQueue:(id)arg2;
- (void)invalidateRangingSession;
- (id)rangingCallbackQueue;
- (void)reactivate;
- (long long)reactivationDelayInSeconds;
- (bool)reactivationInProgress;
- (void)resetRangingRate;
- (id)session;
- (void)session:(id)arg1 didDiscoverNearbyObject:(id)arg2;
- (void)session:(id)arg1 didFailWithError:(id)arg2;
- (void)session:(id)arg1 didInvalidateWithError:(id)arg2;
- (void)session:(id)arg1 didRemoveNearbyObjects:(id)arg2 withReason:(long long)arg3;
- (void)session:(id)arg1 didUpdateNearbyObjects:(id)arg2;
- (void)sessionDidStartRunning:(id)arg1;
- (void)sessionSuspensionEnded:(id)arg1;
- (void)sessionWasSuspended:(id)arg1;
- (void)setCustomRangeRateTimer:(id)arg1;
- (void)setRangingCallbackQueue:(id)arg1;
- (bool)setRangingRateWithConfiguration:(long long)arg1;
- (void)setReactivationDelayInSeconds:(long long)arg1;
- (void)setReactivationInProgress:(bool)arg1;
- (void)setSession:(id)arg1;
- (void)startRanging;
- (void)stopRanging;

@end
