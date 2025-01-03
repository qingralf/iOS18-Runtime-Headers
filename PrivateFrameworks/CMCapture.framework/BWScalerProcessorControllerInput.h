/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
 */

@interface BWScalerProcessorControllerInput : BWStillImageProcessorControllerInput {
    bool  _applyZoom;
    unsigned long long  _bufferType;
    struct opaqueCMSampleBuffer { } * _frame;
}

@property (nonatomic) bool applyZoom;
@property (nonatomic, readonly) unsigned long long bufferType;
@property (nonatomic, readonly) struct opaqueCMSampleBuffer { }*frame;

- (void)addFrame:(struct opaqueCMSampleBuffer { }*)arg1 bufferType:(unsigned long long)arg2;
- (bool)applyZoom;
- (unsigned long long)bufferType;
- (void)dealloc;
- (struct opaqueCMSampleBuffer { }*)frame;
- (id)initWithSettings:(id)arg1 portType:(id)arg2;
- (void)setApplyZoom:(bool)arg1;

@end
