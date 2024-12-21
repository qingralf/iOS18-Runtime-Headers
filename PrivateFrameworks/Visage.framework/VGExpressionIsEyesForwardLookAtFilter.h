/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Visage.framework/Visage
 */

@interface VGExpressionIsEyesForwardLookAtFilter : VGExpressionFilterLegacy {
    float  _eyesForwardPitchSensitivityInRadians;
    float  _eyesForwardYawSensitivityInRadians;
}

- (float)filter:(id)arg1;
- (id)initWithEyesForwardYawSensitivity:(float)arg1 eyesForwardPitchSensitivity:(float)arg2;
- (int)rejectionReason;

@end