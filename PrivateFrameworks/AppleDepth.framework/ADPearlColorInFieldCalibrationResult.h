/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleDepth.framework/AppleDepth
 */

@interface ADPearlColorInFieldCalibrationResult : NSObject {
    float  _absoluteRotationPostISFX;
    float  _absoluteRotationPostISFY;
    float  _absoluteRotationPostISFZ;
    float  _absoluteRotationX;
    float  _absoluteRotationY;
    float  _absoluteRotationZ;
    float  _confidence;
    float  _deltaRotationX;
    float  _deltaRotationY;
    float  _deltaRotationZ;
    bool  _executed;
    float  _factoryRotationX;
    float  _factoryRotationY;
    float  _factoryRotationZ;
    void _motionRotation;
    void _motionTranslation;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _pearlToColorExtrinsics;
    float  _postRelative2FactoryX;
    float  _postRelative2FactoryY;
    float  _postRelative2FactoryZ;
    float  _postRelative2PrevX;
    float  _postRelative2PrevY;
    float  _postRelative2PrevZ;
    float  _preRelative2FactoryX;
    float  _preRelative2FactoryY;
    float  _preRelative2FactoryZ;
    float  _stdX;
    float  _stdY;
    float  _stdZ;
    float  _validDepthPercentage;
}

@property (nonatomic) float absoluteRotationPostISFX;
@property (nonatomic) float absoluteRotationPostISFY;
@property (nonatomic) float absoluteRotationPostISFZ;
@property (nonatomic) float absoluteRotationX;
@property (nonatomic) float absoluteRotationY;
@property (nonatomic) float absoluteRotationZ;
@property (nonatomic) float confidence;
@property (nonatomic) float deltaRotationX;
@property (nonatomic) float deltaRotationY;
@property (nonatomic) float deltaRotationZ;
@property (nonatomic) bool executed;
@property (nonatomic) float factoryRotationX;
@property (nonatomic) float factoryRotationY;
@property (nonatomic) float factoryRotationZ;
@property (nonatomic) void motionRotation;
@property (nonatomic) void motionTranslation;
@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } pearlToColorExtrinsics;
@property (nonatomic) float postRelative2FactoryX;
@property (nonatomic) float postRelative2FactoryY;
@property (nonatomic) float postRelative2FactoryZ;
@property (nonatomic) float postRelative2PrevX;
@property (nonatomic) float postRelative2PrevY;
@property (nonatomic) float postRelative2PrevZ;
@property (nonatomic) float preRelative2FactoryX;
@property (nonatomic) float preRelative2FactoryY;
@property (nonatomic) float preRelative2FactoryZ;
@property (nonatomic) float stdX;
@property (nonatomic) float stdY;
@property (nonatomic) float stdZ;
@property (nonatomic) float validDepthPercentage;

- (float)absoluteRotationPostISFX;
- (float)absoluteRotationPostISFY;
- (float)absoluteRotationPostISFZ;
- (float)absoluteRotationX;
- (float)absoluteRotationY;
- (float)absoluteRotationZ;
- (float)confidence;
- (float)deltaRotationX;
- (float)deltaRotationY;
- (float)deltaRotationZ;
- (id)dictionaryRepresentation;
- (bool)executed;
- (float)factoryRotationX;
- (float)factoryRotationY;
- (float)factoryRotationZ;
- (id)initWithDictionary:(id)arg1;
- (void)motionRotation;
- (void)motionTranslation;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })pearlToColorExtrinsics;
- (float)postRelative2FactoryX;
- (float)postRelative2FactoryY;
- (float)postRelative2FactoryZ;
- (float)postRelative2PrevX;
- (float)postRelative2PrevY;
- (float)postRelative2PrevZ;
- (float)preRelative2FactoryX;
- (float)preRelative2FactoryY;
- (float)preRelative2FactoryZ;
- (void)setAbsoluteRotationPostISFX:(float)arg1;
- (void)setAbsoluteRotationPostISFY:(float)arg1;
- (void)setAbsoluteRotationPostISFZ:(float)arg1;
- (void)setAbsoluteRotationX:(float)arg1;
- (void)setAbsoluteRotationY:(float)arg1;
- (void)setAbsoluteRotationZ:(float)arg1;
- (void)setConfidence:(float)arg1;
- (void)setDeltaRotationX:(float)arg1;
- (void)setDeltaRotationY:(float)arg1;
- (void)setDeltaRotationZ:(float)arg1;
- (void)setExecuted:(bool)arg1;
- (void)setFactoryRotationX:(float)arg1;
- (void)setFactoryRotationY:(float)arg1;
- (void)setFactoryRotationZ:(float)arg1;
- (void)setMotionRotation;
- (void)setMotionTranslation;
- (void)setPearlToColorExtrinsics:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (void)setPostRelative2FactoryX:(float)arg1;
- (void)setPostRelative2FactoryY:(float)arg1;
- (void)setPostRelative2FactoryZ:(float)arg1;
- (void)setPostRelative2PrevX:(float)arg1;
- (void)setPostRelative2PrevY:(float)arg1;
- (void)setPostRelative2PrevZ:(float)arg1;
- (void)setPreRelative2FactoryX:(float)arg1;
- (void)setPreRelative2FactoryY:(float)arg1;
- (void)setPreRelative2FactoryZ:(float)arg1;
- (void)setStdX:(float)arg1;
- (void)setStdY:(float)arg1;
- (void)setStdZ:(float)arg1;
- (void)setValidDepthPercentage:(float)arg1;
- (float)stdX;
- (float)stdY;
- (float)stdZ;
- (float)validDepthPercentage;

@end