/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AudioServerDriverTransports_IOP.framework/AudioServerDriverTransports_IOP
 */

@interface ASDTIOPAudioLPMicDevice : ASDTAudioDevice <ASDTIOServiceDependency> {
    unsigned long long  _initialSampleTime;
    ASDTIOPAudioLPMicStream * _inputStream;
    struct EngineStatus { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; } * _lpMicEngineStatus;
    struct unique_ptr<ASDT::IOPAudio::LPMic::UserClient, std::default_delete<ASDT::IOPAudio::LPMic::UserClient>> { 
        struct __compressed_pair<ASDT::IOPAudio::LPMic::UserClient *, std::default_delete<ASDT::IOPAudio::LPMic::UserClient>> { 
            struct UserClient {} *__value_; 
        } __ptr_; 
    }  _lpMicUserClient;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) ASDTIOPAudioLPMicStream *inputStream;
@property (readonly) Class superclass;

+ (double)defaultSamplingRate;
+ (id)enableListeningPropertyForService:(id)arg1;
+ (id)ioServiceDependenciesForConfig:(id)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned int)availablePastDataFrames;
- (bool)getEnabledChannelMask:(unsigned int*)arg1;
- (id /* block */)getZeroTimestampBlock;
- (id)initWithConfig:(id)arg1 withDeviceManager:(id)arg2 andPlugin:(id)arg3;
- (id)inputStream;
- (unsigned int)ioBufferSizeFrames;
- (struct EngineStatus { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; }*)lpMicEngineStatus;
- (unsigned int)maximumPastDataFrames;
- (int)performPowerStatePrepare:(int)arg1;
- (int)performPowerStatePrewarm:(int)arg1;
- (bool)setEnabledChannelMask:(unsigned int)arg1;
- (void)setInputStream:(id)arg1;
- (bool)setupCustomProperties;
- (int)setupIsolatedIOForStream:(id)arg1 frameSize:(unsigned int)arg2 useCase:(unsigned long long)arg3;
- (int)teardownIsolatedIOForStream:(id)arg1 useCase:(unsigned long long)arg2;
- (unsigned int)timestampPeriod;
- (bool)updateFromStreamDescription;

@end