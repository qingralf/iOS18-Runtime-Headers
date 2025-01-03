/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCTextTransmitter : NSObject <VCTextSender> {
    struct _VCTextTransmitterConfiguration { 
        struct tagHANDLE {} *rtpHandle; 
        unsigned int sampleRate; 
        bool isRedEnabled; 
        unsigned int numRedundantPayloads; 
        float txIntervalMin; 
    }  _config;
    int  _currentPayloadType;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    unsigned int  _emptyFramesToBeSent;
    NSObject<OS_dispatch_source> * _heartbeat;
    double  _idleDuration;
    bool  _isIdle;
    VCAudioRedBuilder * _redBuilder;
    int  _redPayloadType;
    double  _startTime;
    NSMutableArray * _textFramesSendQueue;
    NSLock * _textFramesSendQueueLock;
    double  _txIntervalMin;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)dealloc;
- (unsigned int)getCharTimestampForSystemTime:(double)arg1;
- (void)heartbeat;
- (id)initWithConfiguration:(struct _VCTextTransmitterConfiguration { struct tagHANDLE {} *x1; unsigned int x2; bool x3; unsigned int x4; float x5; }*)arg1;
- (void)sendCharacter:(unsigned short)arg1;
- (void)sendText:(id)arg1;
- (void)sendTextFrameWithRedundancy:(id)arg1 marker:(int)arg2;
- (bool)start;
- (bool)startHeartbeat;
- (void)stop;
- (void)stopHeartbeat;
- (void)updatePayloadHistory:(id)arg1 timestamp:(unsigned int)arg2 payloadType:(int*)arg3 payload:(char **)arg4 payloadLength:(int*)arg5;

@end
