/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
 */

@interface BWVISProcessorController : NSObject <VISProcessorDelegate> {
    bool  _buffersEnqueued;
    BWVISProcessorControllerConfiguration * _configuration;
    <BWVISProcessorDelegate> * _delegate;
    bool  _flipHorizontalOrientationEnabled;
    bool  _longPressModeEnabled;
    bool  _smartStyleReversibilityProcessingEnabled;
    <VISConfiguration> * _visConfiguration;
    <VISProcessor> * _visProcessor;
}

@property (nonatomic, retain) BWVISProcessorControllerConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <BWVISProcessorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool flipHorizontalOrientationEnabled;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool longPressModeEnabled;
@property (nonatomic) bool smartStyleReversibilityProcessingEnabled;
@property (readonly) Class superclass;

+ (void)initialize;

- (void).cxx_destruct;
- (id)configuration;
- (void)dealloc;
- (id)delegate;
- (void)didCompleteProcessingOfBuffer:(struct opaqueCMSampleBuffer { }*)arg1 withStatus:(int)arg2;
- (int)enqueueBufferForProcessing:(struct opaqueCMSampleBuffer { }*)arg1;
- (int)finishPendingProcessing;
- (bool)flipHorizontalOrientationEnabled;
- (bool)longPressModeEnabled;
- (int)prepareToProcess;
- (void)setConfiguration:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFlipHorizontalOrientationEnabled:(bool)arg1;
- (void)setLongPressModeEnabled:(bool)arg1;
- (void)setSmartStyleReversibilityProcessingEnabled:(bool)arg1;
- (bool)smartStyleReversibilityProcessingEnabled;
- (void)willStartProcessingBuffer:(struct opaqueCMSampleBuffer { }*)arg1 withStatus:(int)arg2;

@end