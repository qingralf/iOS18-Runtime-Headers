/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/LocalAuthenticationCore.framework/LocalAuthenticationCore
 */

@interface LACSharedModeDataSourceTaskDecoratorRuntime : NSObject {
    double  _effectiveMaxValue;
    double  _effectiveMinValue;
    double  _maxValue;
    double  _minValue;
}

@property (nonatomic, readonly) double maxValue;
@property (nonatomic, readonly) double minValue;

- (id)description;
- (void)halveMaxValue;
- (id)init;
- (id)initWithMinValue:(double)arg1 maxValue:(double)arg2;
- (bool)isEqual:(id)arg1;
- (double)maxValue;
- (double)minValue;
- (void)resetMaxValue;

@end