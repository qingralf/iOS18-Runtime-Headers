/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Symbols.framework/Symbols
 */

@interface NSSymbolWiggleEffect : NSSymbolEffect {
    double  _angle;
    long long  _layerBehavior;
    long long  _style;
}

@property (nonatomic) double _angle;
@property (nonatomic) long long _layerBehavior;
@property (nonatomic) long long _style;

+ (double)_normalizeAngle:(double)arg1;
+ (id)effect;
+ (id)wiggleBackwardEffect;
+ (id)wiggleClockwiseEffect;
+ (id)wiggleCounterClockwiseEffect;
+ (id)wiggleCustomAngleEffect:(double)arg1;
+ (id)wiggleDownEffect;
+ (id)wiggleForwardEffect;
+ (id)wiggleLeftEffect;
+ (id)wiggleRightEffect;
+ (id)wiggleUpEffect;

- (double)_angle;
- (long long)_layerBehavior;
- (id)_rbOptionsMutable;
- (long long)_style;
- (id)_withStyle:(long long)arg1 angle:(double)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)effectWithByLayer;
- (id)effectWithWholeSymbol;
- (void)set_angle:(double)arg1;
- (void)set_layerBehavior:(long long)arg1;
- (void)set_style:(long long)arg1;

@end