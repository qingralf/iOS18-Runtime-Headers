/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIClickFeedbackGenerator : UIFeedbackGenerator <UIFeedbackGeneratorPressDriven, UIFeedbackGeneratorUserInteractionDriven>

+ (Class)_configurationClass;

- (id)_clickConfiguration;
- (id)initWithView:(id)arg1;
- (void)pressedDown;
- (void)pressedDownAtLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)pressedUp;
- (void)pressedUpAtLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)userInteractionCancelled;
- (void)userInteractionCancelledAtLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)userInteractionEnded;
- (void)userInteractionEndedAtLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)userInteractionStarted;
- (void)userInteractionStartedAtLocation:(struct CGPoint { double x1; double x2; })arg1;

@end
