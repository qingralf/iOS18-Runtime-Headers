/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCCellularAudioTapIO : NSObject {
    unsigned long long  _audioAssertionCounter;
    VCAudioIO * _audioIO;
    bool  _enableAsyncTapStart;
    VCAudioPowerSpectrumSource * _powerSpectrumSource;
    struct tagVCCellularAudioTapIORealtimeContext { 
        long long streamToken; 
        unsigned int tapType; 
        struct _VCAudioPowerSpectrumSourceRealtimeContext {} *powerSpectrumSourceRealtimeContext; 
        VCMediaRecorder *mediaRecorder; 
        float averageAudioPower; 
    }  _realtimeContext;
}

@property (nonatomic) unsigned long long audioAssertionCounter;
@property (nonatomic, retain) VCAudioIO *audioIO;
@property (nonatomic) bool enableAsyncTapStart;
@property (nonatomic, retain) VCMediaRecorder *mediaRecorder;
@property (nonatomic, readonly) VCAudioPowerSpectrumSource *powerSpectrumSource;
@property (nonatomic, readonly) struct tagVCCellularAudioTapIORealtimeContext { long long x1; unsigned int x2; struct _VCAudioPowerSpectrumSourceRealtimeContext {} *x3; id x4; float x5; }*realtimeContext;
@property (nonatomic, readonly) long long streamToken;

- (unsigned long long)audioAssertionCounter;
- (id)audioIO;
- (void)dealloc;
- (bool)enableAsyncTapStart;
- (id)initWithStreamToken:(long long)arg1 powerSpectrumSource:(id)arg2 tapType:(unsigned int)arg3;
- (id)mediaRecorder;
- (id)powerSpectrumSource;
- (struct tagVCCellularAudioTapIORealtimeContext { long long x1; unsigned int x2; struct _VCAudioPowerSpectrumSourceRealtimeContext {} *x3; id x4; float x5; }*)realtimeContext;
- (void)setAudioAssertionCounter:(unsigned long long)arg1;
- (void)setAudioIO:(id)arg1;
- (void)setEnableAsyncTapStart:(bool)arg1;
- (void)setMediaRecorder:(id)arg1;
- (long long)streamToken;

@end