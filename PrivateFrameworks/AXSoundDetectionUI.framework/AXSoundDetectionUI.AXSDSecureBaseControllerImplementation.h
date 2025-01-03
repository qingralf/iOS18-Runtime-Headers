/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AXSoundDetectionUI.framework/AXSoundDetectionUI
 */

@interface AXSoundDetectionUI.AXSDSecureBaseControllerImplementation : NSObject <AXSoundDetectionUI.AXSDBaseControllerImplementation> {
    void currentDetectors;
    void currentTasks;
    void isEnabled;
}

@property (nonatomic, readonly) bool isListening;
@property (nonatomic, readonly) bool isSecure;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (bool)isListening;
- (bool)isSecure;
- (void)startListening;
- (void)stopListening;

@end
