/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Hands.framework/Hands
 */

@interface FullHandEnrolmentData : NSObject {
    float  _handRadiusEstimated;
    SingleHandEnrolmentData * _leftHandEnrolmentData;
    SingleHandEnrolmentData * _rightHandEnrolmentData;
}

@property (readonly) float handRadiusEstimated;
@property (readonly) SingleHandEnrolmentData *leftHandEnrolmentData;
@property (readonly) SingleHandEnrolmentData *rightHandEnrolmentData;

- (void).cxx_destruct;
- (float)handRadiusEstimated;
- (id)init;
- (id)initWithJSONData:(id)arg1;
- (id)initWithLeftHandEnrolmentData:(id)arg1 rightHandEnrolmentData:(id)arg2 handRadiusEstimated:(float)arg3;
- (id)leftHandEnrolmentData;
- (id)rightHandEnrolmentData;
- (id)toJSONDataWithPrettyFormat:(bool)arg1;
- (id)toString;

@end