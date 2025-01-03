/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
 */

@interface MSVStreamWriter : NSObject <NSStreamDelegate> {
    unsigned long long  _bytesWritten;
    id /* block */  _canWriteDataBlock;
    bool  _closeOnStop;
    bool  _compressed;
    id /* block */  _didEncounterErrorBlock;
    id /* block */  _didFinishWritingBlock;
    NSInputStream * _inputStream;
    unsigned long long  _maximumBufferSize;
    NSOutputStream * _outputStream;
    NSMutableArray * _pendingWriteDataList;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _stopped;
    double  _timestamp;
    struct z_stream_s { char *x1; unsigned int x2; unsigned long long x3; char *x4; unsigned int x5; unsigned long long x6; char *x7; struct internal_state {} *x8; int (*x9)(); int (*x10)(); void *x11; int x12; unsigned long long x13; unsigned long long x14; } * _zstreamp;
}

@property (nonatomic) unsigned long long bytesWritten;
@property (nonatomic, copy) id /* block */ canWriteDataBlock;
@property (getter=isCompressed, nonatomic) bool compressed;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ didEncounterErrorBlock;
@property (nonatomic, copy) id /* block */ didFinishWritingBlock;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSInputStream *inputStream;
@property (nonatomic) unsigned long long maximumBufferSize;
@property (nonatomic, retain) NSOutputStream *outputStream;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;
@property (nonatomic) double timestamp;

- (void).cxx_destruct;
- (void)_onQueue_stop;
- (bool)_processInput:(id)arg1 generatingDecompressedData:(id*)arg2;
- (void)_writeAvailablePendingData;
- (unsigned long long)bytesWritten;
- (id /* block */)canWriteDataBlock;
- (id /* block */)didEncounterErrorBlock;
- (id /* block */)didFinishWritingBlock;
- (id)init;
- (id)initWithOutputStream:(id)arg1 queue:(id)arg2;
- (id)initWithQueue:(id)arg1;
- (id)inputStream;
- (bool)isCompressed;
- (unsigned long long)maximumBufferSize;
- (id)outputStream;
- (id)queue;
- (void)setBytesWritten:(unsigned long long)arg1;
- (void)setCanWriteDataBlock:(id /* block */)arg1;
- (void)setCompressed:(bool)arg1;
- (void)setDidEncounterErrorBlock:(id /* block */)arg1;
- (void)setDidFinishWritingBlock:(id /* block */)arg1;
- (void)setInputStream:(id)arg1;
- (void)setMaximumBufferSize:(unsigned long long)arg1;
- (void)setOutputStream:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setTimestamp:(double)arg1;
- (void)start;
- (void)stop;
- (void)stopWithCompletion:(id /* block */)arg1;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (double)timestamp;
- (bool)writeAllData:(id)arg1 error:(id*)arg2;
- (void)writeAllData:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)writeData:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)writeStreamError:(struct { long long x1; int x2; })arg1;

@end
