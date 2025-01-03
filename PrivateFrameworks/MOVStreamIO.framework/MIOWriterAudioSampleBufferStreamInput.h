/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MOVStreamIO.framework/MOVStreamIO
 */

@interface MIOWriterAudioSampleBufferStreamInput : MIOWriterSampleBufferStreamInput {
    NSDictionary * _config;
}

@property (nonatomic) int mediaTimeScale;

- (void).cxx_destruct;
- (bool)appendAudioBuffer:(struct opaqueCMSampleBuffer { }*)arg1 error:(id*)arg2;
- (bool)applyWriterTimeScaleToSampleInput;
- (id)init;
- (id)initWithStreamId:(id)arg1 audioFormat:(id)arg2 additionalSettings:(id)arg3;
- (id)sampleInputOutputSettings;

@end
