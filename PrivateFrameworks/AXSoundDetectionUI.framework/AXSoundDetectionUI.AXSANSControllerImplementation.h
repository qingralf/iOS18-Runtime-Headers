/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AXSoundDetectionUI.framework/AXSoundDetectionUI
 */

@interface AXSoundDetectionUI.AXSANSControllerImplementation : AXSoundDetectionUI.AXSDNSBaseControllerImplementation <AXSDVoiceTriggerModelManagerDelegate, AXSoundDetectionUI.AXSDSoundActionsController> {
    void delegate;
    void modelManager;
    void processingQueue;
}

@property (nonatomic, retain) <_TtP18AXSoundDetectionUI34AXSDSoundActionsControllerDelegate_> *delegate;
@property (nonatomic, readonly) bool isListening;

- (void).cxx_destruct;
- (id)delegate;
- (id)init;
- (bool)isListening;
- (void)listenEngineDidStartWithInputFormat:(id)arg1;
- (void)listenEngineFailedToStartWithError:(id)arg1;
- (void)listeningStoppedWithError:(id)arg1;
- (void)receivedBuffer:(id)arg1 atTime:(id)arg2;
- (void)receivedError:(id)arg1 fromDetector:(id)arg2;
- (void)receivedObservation:(id)arg1 forDetector:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)startListening;
- (void)startListeningOnQueue:(id)arg1;
- (void)stopListening;

@end