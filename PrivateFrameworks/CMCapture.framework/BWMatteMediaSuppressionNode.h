/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
 */

@interface BWMatteMediaSuppressionNode : BWNode {
    unsigned int  _behavior;
    bool  _smartStyleReversibilityEnabled;
}

+ (void)initialize;

- (void)didSelectFormat:(id)arg1 forInput:(id)arg2;
- (id)initWithBehavior:(unsigned int)arg1;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;
- (void)setSmartStyleReversibilityEnabled:(bool)arg1;
- (bool)smartStyleReversibilityEnabled;

@end