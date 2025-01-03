/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIStatusBarQuietModeItemView : UIStatusBarIndicatorItemView <CAAnimationDelegate> {
    bool  _hideForAction;
    bool  _inactive;
    bool  _registeredForNotifications;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)_triggerAction:(id)arg1;
- (double)_visibleAlpha;
- (id)accessibilityHUDRepresentation;
- (void)animationDidStop:(id)arg1 finished:(bool)arg2;
- (void)dealloc;
- (void)setVisible:(bool)arg1;
- (void)setVisible:(bool)arg1 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 duration:(double)arg3;
- (bool)updateForNewData:(id)arg1 actions:(int)arg2;

@end
