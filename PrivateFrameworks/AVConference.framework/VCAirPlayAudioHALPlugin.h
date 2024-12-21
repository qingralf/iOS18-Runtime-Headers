/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCAirPlayAudioHALPlugin : NSObject <VCAudioHALPluginCaptureSource> {
    struct FigHALAudioConduitDeviceClientIODelegateConfiguration { 
        struct AudioStreamBasicDescription { 
            double mSampleRate; 
            unsigned int mFormatID; 
            unsigned int mFormatFlags; 
            unsigned int mBytesPerPacket; 
            unsigned int mFramesPerPacket; 
            unsigned int mBytesPerFrame; 
            unsigned int mChannelsPerFrame; 
            unsigned int mBitsPerChannel; 
            unsigned int mReserved; 
        } audioFormat; 
        unsigned int preferredFramesPerCallbackCount; 
        int (*callback)(); 
        void *context; 
    }  _conduitConfig;
    struct __CFDictionary { } * _conduitCreateOptions;
    struct OpaqueFigHALAudioConduitDevice { } * _conduitDevice;
    VCAudioHALPluginMockAudioInject * _mockAudioInject;
    struct tagVCAudioHALPluginConfiguration { 
        struct tagVCAudioFrameFormat { 
            struct AudioStreamBasicDescription { 
                double mSampleRate; 
                unsigned int mFormatID; 
                unsigned int mFormatFlags; 
                unsigned int mBytesPerPacket; 
                unsigned int mFramesPerPacket; 
                unsigned int mBytesPerFrame; 
                unsigned int mChannelsPerFrame; 
                unsigned int mBitsPerChannel; 
                unsigned int mReserved; 
            } format; 
            unsigned int samplesPerFrame; 
        } sinkFormat; 
        void *sinkContext; 
        int (*sinkProc)(); 
        VCAudioHALPluginRemoteDeviceInfo *remoteDeviceInfo; 
    }  _pluginConfig;
    bool  _resumed;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _stateLock;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (struct tagVCAudioHALPluginConfiguration { struct tagVCAudioFrameFormat { struct AudioStreamBasicDescription { double x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; unsigned int x_1_2_4; unsigned int x_1_2_5; unsigned int x_1_2_6; unsigned int x_1_2_7; unsigned int x_1_2_8; unsigned int x_1_2_9; } x_1_1_1; unsigned int x_1_1_2; } x1; void *x2; int (*x3)(); id x4; })convertASBDToInterleavedFormat:(struct tagVCAudioHALPluginConfiguration { struct tagVCAudioFrameFormat { struct AudioStreamBasicDescription { double x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; unsigned int x_1_2_4; unsigned int x_1_2_5; unsigned int x_1_2_6; unsigned int x_1_2_7; unsigned int x_1_2_8; unsigned int x_1_2_9; } x_1_1_1; unsigned int x_1_1_2; } x1; void *x2; int (*x3)(); id x4; }*)arg1;
+ (struct __CFDictionary { }*)createConduitCreationOptionsWithDeviceInfo:(id)arg1 inOptions:(struct __CFDictionary { }*)arg2;
+ (struct AudioServerPlugInDriverInterface {}**)createInterface;
+ (void)registerAudioServerPluginDriver:(struct AudioServerPlugInDriverInterface {}**)arg1 onQueue:(id)arg2;
+ (id)sharedAirPlayAudioHALPluginNullDevice;
+ (struct AudioServerPlugInDriverInterface {}**)sharedAudioServerPluginDriver;

- (void)dealloc;
- (id)initWithConfig:(struct tagVCAudioHALPluginConfiguration { struct tagVCAudioFrameFormat { struct AudioStreamBasicDescription { double x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; unsigned int x_1_2_4; unsigned int x_1_2_5; unsigned int x_1_2_6; unsigned int x_1_2_7; unsigned int x_1_2_8; unsigned int x_1_2_9; } x_1_1_1; unsigned int x_1_1_2; } x1; void *x2; int (*x3)(); id x4; }*)arg1;
- (id)initWithConfig:(struct tagVCAudioHALPluginConfiguration { struct tagVCAudioFrameFormat { struct AudioStreamBasicDescription { double x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; unsigned int x_1_2_4; unsigned int x_1_2_5; unsigned int x_1_2_6; unsigned int x_1_2_7; unsigned int x_1_2_8; unsigned int x_1_2_9; } x_1_1_1; unsigned int x_1_1_2; } x1; void *x2; int (*x3)(); id x4; }*)arg1 loadBinary:(bool)arg2 conduitCreateOptions:(struct __CFDictionary { }*)arg3;
- (void)invalidate;
- (bool)start;
- (bool)stop;
- (void)suspendAndReleaseConduitDeviceLocked;

@end