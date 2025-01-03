/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMMotionActivityFiltering : NSObject {
    double  _trueRunInBout;
    double  _trueWalkInBout;
}

@property double trueRunInBout;
@property double trueWalkInBout;

+ (bool)isActivity:(id)arg1 sustainedForAttribute:(long long)arg2;
+ (bool)isTimeFromActivity:(id)arg1 toActivity:(id)arg2 withinLimitForAttribute:(long long)arg3;

- (void)evaluateNextActivity:(id)arg1 attribute:(long long)arg2 result:(id)arg3;
- (id)init;
- (void)setTrueRunInBout:(double)arg1;
- (void)setTrueWalkInBout:(double)arg1;
- (double)trueRunInBout;
- (double)trueWalkInBout;

@end
