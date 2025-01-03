/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ANSTKit.framework/ANSTKit
 */

@interface _ANSTISPInferenceConfigurationV1 : ANSTISPInferenceConfiguration {
    long long  _frameRate;
    bool  _objectTrackingEnabled;
    long long  _resolution;
    bool  _segmentationEnabled;
}

+ (unsigned long long)_version;
+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (long long)frameRate;
- (id)initForVersion:(unsigned long long)arg1 withError:(id*)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isObjectTrackingEnabled;
- (bool)isSegmentationEnabled;
- (long long)resolution;
- (void)setFrameRate:(long long)arg1;
- (void)setObjectTrackingEnabled:(bool)arg1;
- (void)setResolution:(long long)arg1;
- (void)setSegmentationEnabled:(bool)arg1;

@end
