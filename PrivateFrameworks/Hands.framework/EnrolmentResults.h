/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Hands.framework/Hands
 */

@interface EnrolmentResults : NSObject {
    FullHandEnrolmentData * _handEnrolmentData;
    float  _handRadiusEstimated;
    long long  _status;
}

@property (readonly) FullHandEnrolmentData *handEnrolmentData;
@property (readonly) float handRadiusEstimated;
@property (readonly) long long status;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)handEnrolmentData;
- (float)handRadiusEstimated;
- (id)init;
- (id)initWithEnrolmentData:(id)arg1 status:(long long)arg2;
- (id)initWithEnrolmentHandRadiusEstimated:(float)arg1 status:(long long)arg2;
- (id)initWithEnrolmentResults:(id)arg1;
- (long long)status;
- (void)updateWithEnrolmentResults:(id)arg1;

@end
