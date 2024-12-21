/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKInvisibleInkTextEffectView : CKInvisibleInkEffectView <CAAnimationDelegate> {
    CKTextBalloonView * _balloonView;
    bool  _blendingEnabled;
    CAEmitterLayer * _dustDrawEmitterLayer;
    CALayer * _dustEmitterContainerLayer;
    NSArray * _dustEmitterLayers;
    CAEmitterLayer * _textDrawEmitterLayer;
    UITextView * _textView;
}

@property (nonatomic) CKTextBalloonView *balloonView;
@property (nonatomic) bool blendingEnabled;
@property (readonly) UIColor *currentDustColor;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CAEmitterLayer *dustDrawEmitterLayer;
@property (nonatomic, retain) CALayer *dustEmitterContainerLayer;
@property (nonatomic, retain) NSArray *dustEmitterLayers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) CAEmitterLayer *textDrawEmitterLayer;
@property (nonatomic, retain) UITextView *textView;

- (void).cxx_destruct;
- (void)_configureInvisibleInkEmitterUsingTextKit1;
- (void)_configureInvisibleInkEmitterUsingTextKit2;
- (id)_newEmitterForCharacterRects:(id)arg1 lineBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)animationDidStop:(id)arg1 finished:(bool)arg2;
- (void)attachToBalloonView:(id)arg1;
- (id)balloonView;
- (bool)blendingEnabled;
- (id)createDrawEmitter;
- (void)cullSubviewsWithVisibleBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)currentDustColor;
- (void)detachFromBalloonView;
- (void)didMoveToWindow;
- (id)dustDrawEmitterLayer;
- (id)dustEmitterContainerLayer;
- (id)dustEmitterLayers;
- (void)endDrawEmitterEffects;
- (void)endDustEmitterLayerFingerEffects:(id)arg1;
- (void)endEmittersForTouchesCancelled:(id)arg1;
- (void)endEmittersForTouchesEnded:(id)arg1;
- (void)endTouches;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)makeDustEmitter;
- (void)moveEmittersForTouchesBegan:(id)arg1;
- (void)moveEmittersForTouchesMoved:(id)arg1;
- (void)moveEmittersWithTouches:(id)arg1;
- (void)reset;
- (void)setBalloonView:(id)arg1;
- (void)setBlendingEnabled:(bool)arg1;
- (void)setDustDrawEmitterLayer:(id)arg1;
- (void)setDustEmitterContainerLayer:(id)arg1;
- (void)setDustEmitterLayers:(id)arg1;
- (void)setPaused:(bool)arg1;
- (void)setSuspended:(bool)arg1;
- (void)setTextDrawEmitterLayer:(id)arg1;
- (void)setTextView:(id)arg1;
- (id)textDrawEmitterLayer;
- (id)textView;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)updateDustCellColor;

@end