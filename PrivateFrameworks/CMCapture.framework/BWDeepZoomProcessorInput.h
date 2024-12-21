/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
 */

@interface BWDeepZoomProcessorInput : BWStillImageProcessorControllerInput {
    unsigned long long  _bufferType;
    <BWDeepZoomProcessorInputDelegate> * _delegate;
    bool  _enqueued;
    struct opaqueCMSampleBuffer { } * _sampleBuffer;
    bool  _sampleBufferSet;
}

@property (nonatomic, readonly) unsigned long long bufferType;
@property (nonatomic, retain) <BWDeepZoomProcessorInputDelegate> *delegate;
@property (getter=isEnqueued, nonatomic) bool enqueued;
@property (nonatomic, readonly) struct opaqueCMSampleBuffer { }*sampleBuffer;
@property (nonatomic) bool sampleBufferSet;

- (void)addSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 bufferType:(unsigned long long)arg2;
- (unsigned long long)bufferType;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (bool)isEnqueued;
- (struct opaqueCMSampleBuffer { }*)sampleBuffer;
- (bool)sampleBufferSet;
- (void)setDelegate:(id)arg1;
- (void)setEnqueued:(bool)arg1;
- (void)setSampleBufferSet:(bool)arg1;

@end