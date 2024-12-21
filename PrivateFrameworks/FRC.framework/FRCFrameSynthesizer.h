/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FRC.framework/FRC
 */

@interface FRCFrameSynthesizer : NSObject {
    bool  _featureCreated;
    unsigned long long  _flowHeight;
    unsigned long long  _flowWidth;
    unsigned long long  _height;
    bool  _inputFlowScaling;
    long long  _inputRotation;
    NSObject<OS_os_log> * _logger;
    FRCImageProcessor * _processor;
    bool  _resourcePreAllocated;
    struct __CVBuffer { } * _scaledBackwardFlow;
    bool  _scaledFlowBufferAllocated;
    struct __CVBuffer { } * _scaledForwardFlow;
    Synthesis * _synthesis;
    long long  _usage;
    unsigned long long  _width;
}

@property (nonatomic, readonly) unsigned long long flowHeight;
@property (nonatomic, readonly) unsigned long long flowWidth;

- (void).cxx_destruct;
- (void)allocateResources;
- (void)allocateScaledFlow;
- (bool)checkForwardFlow:(struct __CVBuffer { }*)arg1 backwardFlow:(struct __CVBuffer { }*)arg2;
- (bool)configureSynthesisWithMode:(long long)arg1;
- (void)dealloc;
- (id)errorWithErrorCode:(long long)arg1;
- (unsigned long long)flowHeight;
- (unsigned long long)flowWidth;
- (id)initWithUsage:(long long)arg1;
- (id)initWithUsage:(long long)arg1 qualityMode:(long long)arg2;
- (id)initWithUsage:(long long)arg1 qualityMode:(long long)arg2 useLegacyNormalization:(bool)arg3;
- (void)releaseResources;
- (void)releaseScaledFlow;
- (void)setFirstFrame:(struct __CVBuffer { }*)arg1 secondFrame:(struct __CVBuffer { }*)arg2 forwardFlow:(struct __CVBuffer { }*)arg3 backwardFlow:(struct __CVBuffer { }*)arg4;
- (void)synthesizeFrameForTimeScale:(float)arg1 destination:(struct __CVBuffer { }*)arg2;
- (void)synthesizeFrameFromFirstFrame:(struct __CVBuffer { }*)arg1 secondFrame:(struct __CVBuffer { }*)arg2 forwardFlow:(struct __CVBuffer { }*)arg3 backwardFlow:(struct __CVBuffer { }*)arg4 timeScale:(float)arg5 destination:(struct __CVBuffer { }*)arg6;
- (id)synthesizeFramesFromFirstFrame:(struct __CVBuffer { }*)arg1 secondFrame:(struct __CVBuffer { }*)arg2 forwardFlow:(struct __CVBuffer { }*)arg3 backwardFlow:(struct __CVBuffer { }*)arg4 numberOfFrames:(unsigned long long)arg5 withError:(id*)arg6;
- (id)synthesizeFramesFromFirstFrame:(struct __CVBuffer { }*)arg1 secondFrame:(struct __CVBuffer { }*)arg2 forwardFlow:(struct __CVBuffer { }*)arg3 backwardFlow:(struct __CVBuffer { }*)arg4 timeScales:(id)arg5 withError:(id*)arg6;
- (void)updateFlowSize;

@end