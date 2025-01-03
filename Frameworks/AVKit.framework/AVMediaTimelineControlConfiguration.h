/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

@interface AVMediaTimelineControlConfiguration : NSObject <NSCopying> {
    UIVisualEffect * _currentValueVisualEffect;
    double  _extendedDynamicRangeGain;
    AVMediaTimelineControlLabelsConfiguration * _labelsConfiguration;
    UIVisualEffect * _maxValueVisualEffect;
}

@property (nonatomic, retain) UIVisualEffect *currentValueVisualEffect;
@property (nonatomic) double extendedDynamicRangeGain;
@property (nonatomic, retain) AVMediaTimelineControlLabelsConfiguration *labelsConfiguration;
@property (nonatomic, retain) UIVisualEffect *maxValueVisualEffect;

+ (id)defaultConfiguration;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentValueVisualEffect;
- (double)extendedDynamicRangeGain;
- (id)labelsConfiguration;
- (id)maxValueVisualEffect;
- (void)setCurrentValueVisualEffect:(id)arg1;
- (void)setExtendedDynamicRangeGain:(double)arg1;
- (void)setLabelsConfiguration:(id)arg1;
- (void)setMaxValueVisualEffect:(id)arg1;

@end
