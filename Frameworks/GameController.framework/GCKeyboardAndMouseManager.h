/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameController.framework/GameController
 */

@interface GCKeyboardAndMouseManager : NSObject

@property (readonly) GCMouse *currentMouse;

+ (id)managerWithQueue:(id)arg1;

- (bool)addDeviceWithServiceRef:(struct __IOHIDServiceClient { }*)arg1;
- (id)coalescedKeyboard;
- (id)currentMouse;
- (bool)handleHIDEvent:(struct __IOHIDEvent { }*)arg1;
- (id)init;
- (id)initWithQueue:(id)arg1;
- (id)mice;
- (void)removeDeviceWithServiceRef:(struct __IOHIDServiceClient { }*)arg1;

@end
