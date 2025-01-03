/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
 */

@interface HMIVideoFrameSampler : HMIVideoProcessingNode <HMFLogging> {
    <HMIVideoFrameSamplerDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property <HMIVideoFrameSamplerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)delegate;
- (void)handleSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)setDelegate:(id)arg1;

@end
