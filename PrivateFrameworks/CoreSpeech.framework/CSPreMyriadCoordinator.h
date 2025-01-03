/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

@interface CSPreMyriadCoordinator : NSObject <CSSecondPassProgressDelegate, CSVoiceTriggerDelegate> {
    NSMutableDictionary * _accessoryVoiceTriggerMetaDataByDeviceId;
    <CSSecondPassProgressProviding> * _builtInSeconPassProgressProvider;
    CSPreMyriadVoiceTriggerMetaData * _builtInVoiceTriggerMetaData;
    <CSVoiceTriggerDelegate> * _delegate;
    id /* block */  _pendingBuiltInVoiceTriggerCompletionBlk;
    unsigned long long  _pendingBuiltInVoiceTriggerDetectedTime;
    NSDictionary * _pendingBuiltInVoiceTriggerResult;
    id /* block */  _pendingRemoraVoiceTriggerCompletionBlk;
    unsigned long long  _pendingRemoraVoiceTriggerDetectedTime;
    NSString * _pendingRemoraVoiceTriggerDeviceId;
    NSDictionary * _pendingRemoraVoiceTriggerResult;
    NSObject<OS_dispatch_queue> * _queue;
    <CSSecondPassProgressProviding> * _remoraSecondPassProgressProvider;
}

@property (nonatomic, retain) NSMutableDictionary *accessoryVoiceTriggerMetaDataByDeviceId;
@property (nonatomic) <CSSecondPassProgressProviding> *builtInSeconPassProgressProvider;
@property (nonatomic, retain) CSPreMyriadVoiceTriggerMetaData *builtInVoiceTriggerMetaData;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <CSVoiceTriggerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ pendingBuiltInVoiceTriggerCompletionBlk;
@property (nonatomic) unsigned long long pendingBuiltInVoiceTriggerDetectedTime;
@property (nonatomic, retain) NSDictionary *pendingBuiltInVoiceTriggerResult;
@property (nonatomic, copy) id /* block */ pendingRemoraVoiceTriggerCompletionBlk;
@property (nonatomic) unsigned long long pendingRemoraVoiceTriggerDetectedTime;
@property (nonatomic, retain) NSString *pendingRemoraVoiceTriggerDeviceId;
@property (nonatomic, retain) NSDictionary *pendingRemoraVoiceTriggerResult;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) <CSSecondPassProgressProviding> *remoraSecondPassProgressProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_clearPendingBuiltInVoiceTrigger;
- (void)_clearPendingRemoraVoiceTrigger;
- (void)_getHighestRemoraFirstPassGoodnessScore:(id /* block */)arg1;
- (bool)_isRemoraSecondPassRunning;
- (id)accessoryVoiceTriggerMetaDataByDeviceId;
- (id)builtInSeconPassProgressProvider;
- (id)builtInVoiceTriggerMetaData;
- (id)delegate;
- (bool)handlePendingBuiltInVoiceTriggerIfNeeded;
- (bool)handlePendingRemoraVoiceTriggerIfNeeded;
- (id)init;
- (bool)isBultInVoiceTriggerEvent:(id)arg1;
- (bool)isRemoraVoiceTriggerEvent:(id)arg1;
- (void)keywordDetectorDidDetectKeyword;
- (id /* block */)pendingBuiltInVoiceTriggerCompletionBlk;
- (unsigned long long)pendingBuiltInVoiceTriggerDetectedTime;
- (id)pendingBuiltInVoiceTriggerResult;
- (id /* block */)pendingRemoraVoiceTriggerCompletionBlk;
- (unsigned long long)pendingRemoraVoiceTriggerDetectedTime;
- (id)pendingRemoraVoiceTriggerDeviceId;
- (id)pendingRemoraVoiceTriggerResult;
- (id)queue;
- (void)raiseToSpeakDetected:(id)arg1;
- (id)remoraSecondPassProgressProvider;
- (void)secondPassDidStartForClient:(unsigned long long)arg1 deviceId:(id)arg2 withFirstPassEstimate:(double)arg3;
- (void)secondPassDidStopForClient:(unsigned long long)arg1 deviceId:(id)arg2;
- (void)setAccessoryVoiceTriggerMetaDataByDeviceId:(id)arg1;
- (void)setBuiltInSeconPassProgressProvider:(id)arg1;
- (void)setBuiltInVoiceTriggerMetaData:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPendingBuiltInVoiceTriggerCompletionBlk:(id /* block */)arg1;
- (void)setPendingBuiltInVoiceTriggerDetectedTime:(unsigned long long)arg1;
- (void)setPendingBuiltInVoiceTriggerResult:(id)arg1;
- (void)setPendingRemoraVoiceTriggerCompletionBlk:(id /* block */)arg1;
- (void)setPendingRemoraVoiceTriggerDetectedTime:(unsigned long long)arg1;
- (void)setPendingRemoraVoiceTriggerDeviceId:(id)arg1;
- (void)setPendingRemoraVoiceTriggerResult:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setRemoraSecondPassProgressProvider:(id)arg1;
- (void)voiceTriggerDidDetectKeyword:(id)arg1 deviceId:(id)arg2;
- (void)voiceTriggerDidDetectKeyword:(id)arg1 deviceId:(id)arg2 completion:(id /* block */)arg3;
- (void)voiceTriggerDidDetectNearMiss:(id)arg1 deviceId:(id)arg2;
- (void)voiceTriggerDidDetectSpeakerReject:(id)arg1;
- (void)voiceTriggerDidRejected:(id)arg1 deviceId:(id)arg2;
- (void)voiceTriggerGotSuperVector:(id)arg1;

@end
