/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCAudioRedBuilder : NSObject {
    struct tagVCAudioRedBuilderHistory { 
        struct tagVCAudioRedPayload { 
            int payloadType; 
            char *buffer; 
            int bufferLength; 
            unsigned int timestamp; 
            unsigned int primaryPacketTimestamp; 
            bool isRedAudio; 
            unsigned char redCount; 
            unsigned char sequenceOffset; 
            unsigned char priority; 
        } latestPayload; 
        struct tagVCAudioRedPayload { 
            int payloadType; 
            char *buffer; 
            int bufferLength; 
            unsigned int timestamp; 
            unsigned int primaryPacketTimestamp; 
            bool isRedAudio; 
            unsigned char redCount; 
            unsigned char sequenceOffset; 
            unsigned char priority; 
        } payloadHistory[9]; 
        unsigned int payloadHistoryCount; 
        char *payloadBufferHistory; 
        int payloadBufferHistoryIndex; 
    }  _history;
    unsigned char  _historyCount;
    bool  _includeSequenceOffset;
    unsigned int  _maxDelay;
    unsigned int  _maxREDPayloadSize;
    unsigned int  _numPayloads;
    unsigned char  _redPayloadBufferToSend;
    BOOL  _redPayloadDebugMessage;
    BOOL  _redPayloadHistoryDebugMessage;
    struct tagVCAudioRedPayload { 
        int payloadType; 
        char *buffer; 
        int bufferLength; 
        unsigned int timestamp; 
        unsigned int primaryPacketTimestamp; 
        bool isRedAudio; 
        unsigned char redCount; 
        unsigned char sequenceOffset; 
        unsigned char priority; 
    }  _redPayloadToSend;
    int  _redPayloadType;
    unsigned int  _sampleRate;
    unsigned int  _samplesPerFrame;
    NSPointerArray * _selectedRedPayloads;
}

@property (nonatomic) unsigned int maxDelay;
@property (nonatomic) unsigned int maxREDPayloadSize;
@property (nonatomic) unsigned int numPayloads;
@property (nonatomic, readonly) int redPayloadType;

+ (unsigned int)redOverheadForNumPayloads:(unsigned int)arg1;

- (struct tagVCAudioRedPayload { int x1; char *x2; int x3; unsigned int x4; unsigned int x5; bool x6; unsigned char x7; unsigned char x8; unsigned char x9; }*)buildRedPayloadWithPrimaryPayload:(struct tagVCAudioRedPayload { int x1; char *x2; int x3; unsigned int x4; unsigned int x5; bool x6; unsigned char x7; unsigned char x8; unsigned char x9; }*)arg1 redPayloads:(id)arg2;
- (void)dealloc;
- (id)initWithRedPayloadType:(int)arg1 sampleRate:(unsigned int)arg2 samplesPerFrame:(unsigned int)arg3 numPayloads:(unsigned int)arg4 maxDelay:(unsigned int)arg5 includeSequenceOffset:(bool)arg6;
- (bool)isPayloadTimestampWithinThreshold:(struct tagVCAudioRedPayload { int x1; char *x2; int x3; unsigned int x4; unsigned int x5; bool x6; unsigned char x7; unsigned char x8; unsigned char x9; }*)arg1 forTimestamp:(unsigned int)arg2;
- (unsigned int)maxDelay;
- (unsigned int)maxREDPayloadSize;
- (struct tagVCAudioRedPayload { int x1; char *x2; int x3; unsigned int x4; unsigned int x5; bool x6; unsigned char x7; unsigned char x8; unsigned char x9; }*)nearestRedPayloadForTimestamp:(unsigned int)arg1 payloadHistory:(struct tagVCAudioRedPayload { int x1; char *x2; int x3; unsigned int x4; unsigned int x5; bool x6; unsigned char x7; unsigned char x8; unsigned char x9; }*)arg2 payloadHistoryCount:(unsigned int)arg3;
- (unsigned int)numPayloads;
- (char *)payloadHistoryDescriptionForInfoIndex:(unsigned char)arg1;
- (char *)redPayloadDescription:(struct tagVCAudioRedPayload { int x1; char *x2; int x3; unsigned int x4; unsigned int x5; bool x6; unsigned char x7; unsigned char x8; unsigned char x9; }*)arg1;
- (struct tagVCAudioRedPayload { int x1; char *x2; int x3; unsigned int x4; unsigned int x5; bool x6; unsigned char x7; unsigned char x8; unsigned char x9; }*)redPayloadForPrimaryPayload:(struct tagVCAudioRedPayload { int x1; char *x2; int x3; unsigned int x4; unsigned int x5; bool x6; unsigned char x7; unsigned char x8; unsigned char x9; }*)arg1;
- (int)redPayloadType;
- (bool)redundantPayloads:(id)arg1 containsPointer:(void*)arg2;
- (char *)redundantPayloadsDescription:(id)arg1;
- (char *)resetOutputPayload:(struct tagVCAudioRedPayload { int x1; char *x2; int x3; unsigned int x4; unsigned int x5; bool x6; unsigned char x7; unsigned char x8; unsigned char x9; }*)arg1;
- (void)resetShortREDHistoryAndPrimaryPayloadHistory:(bool)arg1;
- (id)selectRedPayloadsForPrimaryPayload:(struct tagVCAudioRedPayload { int x1; char *x2; int x3; unsigned int x4; unsigned int x5; bool x6; unsigned char x7; unsigned char x8; unsigned char x9; }*)arg1;
- (void)setMaxDelay:(unsigned int)arg1;
- (void)setMaxREDPayloadSize:(unsigned int)arg1;
- (void)setNumPayloads:(unsigned int)arg1;

@end