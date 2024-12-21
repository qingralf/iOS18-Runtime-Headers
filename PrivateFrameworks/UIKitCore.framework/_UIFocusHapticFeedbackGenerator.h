/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIFocusHapticFeedbackGenerator : NSObject {
    CARSession * _carSession;
    unsigned long long  _currentSenderID;
    CARInputDeviceTouchpad * _currentTouchpad;
}

@property (nonatomic, retain) CARSession *carSession;
@property (nonatomic) unsigned long long currentSenderID;
@property (nonatomic, retain) CARInputDeviceTouchpad *currentTouchpad;

- (void).cxx_destruct;
- (id)carSession;
- (unsigned long long)currentSenderID;
- (id)currentTouchpad;
- (id)initWithScreen:(id)arg1;
- (void)performHapticFeedbackForFocusUpdateInContext:(id)arg1;
- (void)setCarSession:(id)arg1;
- (void)setCurrentSenderID:(unsigned long long)arg1;
- (void)setCurrentTouchpad:(id)arg1;

@end