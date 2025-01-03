/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUI.SearchUIBasicAnimationSettings : NSObject <SearchUI.SearchUIAnimationSettings> {
    void delay;
    void duration;
}

@property (nonatomic, readonly) CABasicAnimation *coreAnimation;
@property (nonatomic) double delay;
@property (nonatomic) double duration;
@property (nonatomic, readonly) UIViewPropertyAnimator *propertyAnimator;

- (id)coreAnimation;
- (double)delay;
- (double)duration;
- (id)init;
- (id)propertyAnimator;
- (void)setDelay:(double)arg1;
- (void)setDuration:(double)arg1;

@end
