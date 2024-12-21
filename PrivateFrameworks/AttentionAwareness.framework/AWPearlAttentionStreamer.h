/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AttentionAwareness.framework/AttentionAwareness
 */

@interface AWPearlAttentionStreamer : NSObject <BKDevicePearlDelegate, BKFaceDetectOperationDelegate, StreamingOperation> {
    int  _activeOperationNotification;
    int  _attentionAwareFeaturesEnabledNotification;
    bool  _attentionStreamerRunning;
    id /* block */  _callbackBlock;
    int  _displayNotifyToken;
    bool  _displayOn;
    bool  _eyeReliefStarted;
    BKFaceDetectOperation * _finishingPresenceOperation;
    bool  _isAttentionAwareFeaturesEnabled;
    bool  _matchOrEnrollOperationActive;
    id /* block */  _notificationBlock;
    BKDevicePearl * _pearlDevice;
    BKFaceDetectOperation * _pendingPresenceOperation;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _smartCoverClosed;
    bool  _unitTest;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)attentionStreamerRunning;
- (id)cancelEventStream;
- (struct { bool x1; bool x2; bool x3; })getStreamerOptions;
- (id)initForUnitTest:(bool)arg1 queue:(id)arg2;
- (bool)isAttentionAwareFeaturesEnabled;
- (void)operation:(id)arg1 faceDetectStateChanged:(id)arg2;
- (void)operation:(id)arg1 finishedWithReason:(long long)arg2;
- (void)sendNotification:(unsigned long long)arg1;
- (void)setDisplayState:(bool)arg1;
- (void)setIsAttentionAwareFeaturesEnabled:(bool)arg1;
- (void)setNotificationHandler:(id /* block */)arg1;
- (void)setSmartCoverState:(bool)arg1;
- (id)streamEventWithBlock:(id /* block */)arg1 options:(struct { bool x1; bool x2; bool x3; })arg2 operationStartFailedBlock:(id /* block */)arg3;
- (id)unitTestDevice;

@end