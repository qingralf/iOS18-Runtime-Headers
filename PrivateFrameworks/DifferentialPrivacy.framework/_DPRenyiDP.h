/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
 */

@interface _DPRenyiDP : NSObject {
    double  _alpha;
    double  _tau;
}

@property (nonatomic, readonly) double alpha;
@property (nonatomic, readonly) double tau;

+ (id)defaultAlphas;
+ (bool)isValidAlpha:(double)arg1 error:(id*)arg2;

- (double)alpha;
- (id)approximateDPForDelta:(double)arg1 error:(id*)arg2;
- (id)initWithAlpha:(double)arg1 tau:(double)arg2 error:(id*)arg3;
- (double)tau;

@end