/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/LocalAuthenticationPrivateUI.framework/LocalAuthenticationPrivateUI
 */

@interface LAUISecureFaceIDView : UIView {
    long long  _desiredState;
    CADisplayLink * _displayLink;
    long long  _nextStateOnPathToDesiredState;
    CASecureFlipBookLayer * _secureFlipBookLayer;
    long long  _state;
    NSDate * _timeAppeared;
    long long  _type;
}

@property (nonatomic, readonly) NSNumber *remainingMinDisplayTimeInterval;
@property (nonatomic, readonly) CASecureFlipBookLayer *secureFlipBookLayer;
@property (nonatomic) long long state;

+ (id)_transitionDictForFullFlow;
+ (id)_transitionDictForProtectedAppsFlow;

- (void).cxx_destruct;
- (id)_caStateNameForState:(long long)arg1;
- (bool)_canTransitionViewToState:(long long)arg1;
- (id)_descriptionOfState:(long long)arg1;
- (void)_disableDisplayLink;
- (void)_enableDisplayLink;
- (id)_flipbookFromLAUISecureFaceIDViewType:(long long)arg1;
- (long long)_nextStateForUnwantedTransitionFrom:(long long)arg1 to:(long long)arg2;
- (long long)_nextStateOnShortestPathFrom:(long long)arg1 to:(long long)arg2;
- (void)_setupView;
- (id)_shortNameForState:(long long)arg1;
- (void)_tick;
- (void)_tickWithInterval:(double)arg1 frequency:(int)arg2;
- (id)_transitionDict;
- (bool)_transitionViewToState:(long long)arg1;
- (void)dealloc;
- (id)description;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (id)init;
- (id)initWithType:(long long)arg1;
- (void)layoutSubviews;
- (id)remainingMinDisplayTimeInterval;
- (id)secureFlipBookLayer;
- (void)setState:(long long)arg1;
- (long long)state;

@end