/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BiometricKit.framework/BiometricKit
 */

@interface BKMotionDetectStateInfo : NSObject {
    unsigned long long  _motionDetectState;
    NSArray * _motionMatrix;
}

@property (nonatomic, readonly) unsigned long long motionDetectState;
@property (nonatomic, retain) NSArray *motionMatrix;

- (void).cxx_destruct;
- (id)initWithMotionMatrix:(id)arg1 motionDetectState:(id)arg2;
- (unsigned long long)motionDetectState;
- (id)motionMatrix;
- (void)setMotionMatrix:(id)arg1;

@end
