/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCTextJitterBuffer : NSObject {
    struct tagVCTextJitterBufferConfiguration { 
        unsigned int sampleRate; 
        <VCTextFrameReceiver> *delegate; 
    }  _configuration;
    id  _delegate;
    bool  _firstFrameReceived;
    NSObject<OS_dispatch_source> * _heartbeat;
    struct JitterQueue_t { } * _jitterQueue;
    unsigned int  _lastSequenceNumber;
    struct JitterPreloadQueue_t { } * _preloadQueue;
    bool  _resetRequested;
}

- (struct tagAudioFrame { int x1; int x2; bool x3; unsigned short x4; unsigned int x5; unsigned char x6[1125]; int x7; int x8; unsigned char x9[16]; unsigned char x10; int x11; int x12; double x13; int x14; int x15; int (*x16)(); void *x17; struct tagDecoderSettings {} *x18; bool x19; unsigned int x20; unsigned char x21; unsigned short x22; struct tagAudioFrame {} *x23; struct tagAudioFrame {} *x24; unsigned int x25; unsigned int x26; unsigned int x27; bool x28; bool x29; bool x30; }*)allocTextFrame;
- (struct tagAudioPacket { int x1; int x2; int x3; bool x4; unsigned short x5; unsigned int x6; unsigned int x7; int x8; int x9; double x10; int x11; unsigned char x12[1472]; int x13; unsigned char x14[256]; unsigned char x15; struct tagAudioFrame {} *x16[4]; int x17; double x18; int x19; struct tagDecoderSettings {} *x20; bool x21; unsigned int x22; unsigned char x23; unsigned short x24; }*)allocTextPacket;
- (void)dealloc;
- (id)delegate;
- (void)enqueuePacket:(struct tagAudioPacket { int x1; int x2; int x3; bool x4; unsigned short x5; unsigned int x6; unsigned int x7; int x8; int x9; double x10; int x11; unsigned char x12[1472]; int x13; unsigned char x14[256]; unsigned char x15; struct tagAudioFrame {} *x16[4]; int x17; double x18; int x19; struct tagDecoderSettings {} *x20; bool x21; unsigned int x22; unsigned char x23; unsigned short x24; }*)arg1;
- (void)heartbeat;
- (id)initWithConfiguration:(struct tagVCTextJitterBufferConfiguration { unsigned int x1; id x2; }*)arg1;
- (void)jitterQueuePushPacket:(struct tagAudioPacket { int x1; int x2; int x3; bool x4; unsigned short x5; unsigned int x6; unsigned int x7; int x8; int x9; double x10; int x11; unsigned char x12[1472]; int x13; unsigned char x14[256]; unsigned char x15; struct tagAudioFrame {} *x16[4]; int x17; double x18; int x19; struct tagDecoderSettings {} *x20; bool x21; unsigned int x22; unsigned char x23; unsigned short x24; }*)arg1;
- (void)releaseTextFrame:(struct tagAudioFrame { int x1; int x2; bool x3; unsigned short x4; unsigned int x5; unsigned char x6[1125]; int x7; int x8; unsigned char x9[16]; unsigned char x10; int x11; int x12; double x13; int x14; int x15; int (*x16)(); void *x17; struct tagDecoderSettings {} *x18; bool x19; unsigned int x20; unsigned char x21; unsigned short x22; struct tagAudioFrame {} *x23; struct tagAudioFrame {} *x24; unsigned int x25; unsigned int x26; unsigned int x27; bool x28; bool x29; bool x30; }*)arg1;
- (void)releaseTextPacket:(struct tagAudioPacket { int x1; int x2; int x3; bool x4; unsigned short x5; unsigned int x6; unsigned int x7; int x8; int x9; double x10; int x11; unsigned char x12[1472]; int x13; unsigned char x14[256]; unsigned char x15; struct tagAudioFrame {} *x16[4]; int x17; double x18; int x19; struct tagDecoderSettings {} *x20; bool x21; unsigned int x22; unsigned char x23; unsigned short x24; }*)arg1;
- (void)setDelegate:(id)arg1;
- (bool)start;
- (bool)startHeartbeat;
- (void)stop;
- (void)stopHeartbeat;

@end