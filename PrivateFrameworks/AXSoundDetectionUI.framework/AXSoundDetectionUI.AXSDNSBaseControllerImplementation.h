/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AXSoundDetectionUI.framework/AXSoundDetectionUI
 */

@interface AXSoundDetectionUI.AXSDNSBaseControllerImplementation : NSObject <AXSDListenEngineDelegate, AXSoundDetectionUI.AXSDBaseControllerImplementation> {
    void debug;
    void isEnabled;
    void listener;
}

@property (nonatomic, readonly) bool isListening;
@property (nonatomic, readonly) bool isSecure;

- (void).cxx_destruct;
- (id)init;
- (bool)isListening;
- (bool)isSecure;
- (void)listenEngineDidStartWithInputFormat:(id)arg1;
- (void)listenEngineFailedToStartWithError:(id)arg1;
- (void)receivedBuffer:(id)arg1 atTime:(id)arg2;
- (void)startListening;
- (void)stopListening;

@end
