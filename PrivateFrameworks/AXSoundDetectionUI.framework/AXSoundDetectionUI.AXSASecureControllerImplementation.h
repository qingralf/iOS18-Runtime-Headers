/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AXSoundDetectionUI.framework/AXSoundDetectionUI
 */

@interface AXSoundDetectionUI.AXSASecureControllerImplementation : NSObject <AXSoundDetectionUI.AXSDSoundActionsController> {
    void currentTask;
    void delegate;
}

@property (nonatomic, retain) <_TtP18AXSoundDetectionUI34AXSDSoundActionsControllerDelegate_> *delegate;
@property (nonatomic, readonly) bool isListening;
@property (nonatomic, readonly) bool isSecure;

- (void).cxx_destruct;
- (id)delegate;
- (id)init;
- (bool)isListening;
- (bool)isSecure;
- (void)setDelegate:(id)arg1;
- (void)startListening;
- (void)startListeningOnQueue:(id)arg1;
- (void)stopListening;

@end