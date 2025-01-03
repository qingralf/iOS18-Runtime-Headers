/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AXSoundDetectionUI.framework/AXSoundDetectionUI
 */

@interface AXSoundDetectionUI.AXSDKShotNSControllerImplementation : AXSoundDetectionUI.AXSDNSBaseControllerImplementation <AXSDKShotModelManagerDelegate, AXSoundDetectionUI.AXSDKShotControllerImplementation> {
    void modelManager;
}

@property (nonatomic, readonly) NSSet *currentDetectionTypes;
@property (nonatomic, readonly) bool isListening;

- (void).cxx_destruct;
- (void)addWithCustomDetector:(id)arg1;
- (id)currentDetectionTypes;
- (void)dealloc;
- (id)init;
- (bool)isListening;
- (void)listenEngineDidStartWithInputFormat:(id)arg1;
- (void)listenEngineFailedToStartWithError:(id)arg1;
- (void)receivedBuffer:(id)arg1 atTime:(id)arg2;
- (void)receivedCompletion:(id)arg1;
- (void)receivedError:(id)arg1 fromDetector:(id)arg2;
- (void)receivedObservation:(id)arg1 forDetector:(id)arg2;
- (void)removeAllListenTypes;
- (void)removeWithCustomDetector:(id)arg1;
- (void)startListening;
- (void)stopListening;

@end
