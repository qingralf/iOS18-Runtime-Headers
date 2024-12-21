/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FRC.framework/FRC
 */

@interface FRCOpticalFlowEstimator : NSObject {
    Backwarp * _backwarp;
    bool  _firstPair;
    unsigned long long  _height;
    unsigned long long  _inputHeight;
    long long  _inputRotation;
    unsigned long long  _inputWidth;
    struct __CVBuffer { } * _intermediateFlow;
    NSObject<OS_os_log> * _logger;
    bool  _matchFlowDimensions;
    OpticalFlow * _opticalFlow;
    unsigned int  _outputPixelFormat;
    FRCImageProcessor * _processor;
    bool  _resourcePreAllocated;
    bool  _streamingMode;
    long long  _usage;
    unsigned long long  _width;
}

@property (nonatomic, readonly) unsigned long long flowHeight;
@property (nonatomic, readonly) unsigned long long flowWidth;

- (void).cxx_destruct;
- (struct __CVBuffer { }*)allocateFlowBufferFullSize:(bool)arg1;
- (void)allocateResources;
- (void)dealloc;
- (long long)flowAdaptationFrom:(struct __CVBuffer { }*)arg1 to:(struct __CVBuffer { }*)arg2 inputForwardFlow:(struct __CVBuffer { }*)arg3 inputBackwardFlow:(struct __CVBuffer { }*)arg4 outputForwardFlow:(struct __CVBuffer { }*)arg5 outputBackwardFlow:(struct __CVBuffer { }*)arg6;
- (unsigned long long)flowHeight;
- (unsigned long long)flowWidth;
- (id)initWithUsage:(long long)arg1;
- (id)initWithWidth:(long long)arg1 height:(long long)arg2 configuration:(id)arg3;
- (struct __CVBuffer { }*)matchFlow:(struct __CVBuffer { }*)arg1;
- (void)matchFlow:(struct __CVBuffer { }*)arg1 toFullSizeFlow:(struct __CVBuffer { }*)arg2;
- (struct __CVBuffer { }*)opticalFlowFrom:(struct __CVBuffer { }*)arg1 to:(struct __CVBuffer { }*)arg2;
- (long long)opticalFlowFrom:(struct __CVBuffer { }*)arg1 to:(struct __CVBuffer { }*)arg2 flow:(struct __CVBuffer { }*)arg3;
- (id)opticalFlowsFrom:(struct __CVBuffer { }*)arg1 to:(struct __CVBuffer { }*)arg2;
- (long long)opticalFlowsFrom:(struct __CVBuffer { }*)arg1 to:(struct __CVBuffer { }*)arg2 forwardFlow:(struct __CVBuffer { }*)arg3 backwardFlow:(struct __CVBuffer { }*)arg4;
- (void)releaseResources;
- (bool)skipFirstFramePreProcessing;

@end