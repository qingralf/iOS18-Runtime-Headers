/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UITextTouchObservingInteraction : NSObject <UIGestureRecognizerDelegate, UIInteraction> {
    UILongPressGestureRecognizer * _longPressGesture;
    UIView * _view;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UILongPressGestureRecognizer *longPressGesture;
@property (readonly) Class superclass;
@property (nonatomic) UIView *view;

- (void).cxx_destruct;
- (void)_addGestureRecognizers;
- (void)_createGestureRecognizersIfNecessary;
- (void)_removeGestureRecognizers;
- (void)didMoveToView:(id)arg1;
- (id)longPressGesture;
- (void)longPressObserved:(id)arg1;
- (void)setLongPressGesture:(id)arg1;
- (void)setView:(id)arg1;
- (id)view;
- (void)willMoveToView:(id)arg1;

@end
