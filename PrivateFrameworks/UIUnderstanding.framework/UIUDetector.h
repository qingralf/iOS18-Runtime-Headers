/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIUnderstanding.framework/UIUnderstanding
 */

@interface UIUDetector : NSObject {
    UIUDetectorCompat * _underlyingObject;
}

@property (readonly) UIUDetectorCompat *underlyingObject;

+ (long long)convertPlatform:(long long)arg1;
+ (float)defaultIOUThreshold;

- (void).cxx_destruct;
- (id)getDetectionsInScreen:(struct CGImage { }*)arg1 addOCR:(bool)arg2 addIcons:(bool)arg3 addClickability:(bool)arg4 addFocusElements:(bool)arg5 nmsThreshold:(float)arg6 useAccurateOCR:(bool)arg7 error:(id*)arg8;
- (id)initForPlatform:(long long)arg1;
- (id)initForPlatform:(long long)arg1 elementConfidence:(id)arg2 clickabilityConfidence:(id)arg3 elementConfig:(id)arg4 clickabilityConfig:(id)arg5;
- (id)underlyingObject;

@end
