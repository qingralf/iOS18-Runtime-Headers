/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AudioServerDriver.framework/AudioServerDriver
 */

@interface ASDManagedRingBuffer : ASDRingBuffer <ASDManagedRingBuffer> {
    NSObject<OS_dispatch_queue> * _queue;
    bool  _readerRunning;
    bool  _writerRunning;
}

@property (getter=isAllocated, nonatomic, readonly) bool allocated;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic) long long frameCapacity;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) id /* block */ readBlock;
@property (nonatomic, copy) ASDStreamFormat *readFormat;
@property (nonatomic, readonly) id /* block */ readWithZerosBlock;
@property (nonatomic) bool readerRunning;
@property (readonly) Class superclass;
@property (nonatomic, readonly) id /* block */ writeBlock;
@property (nonatomic, copy) ASDStreamFormat *writeFormat;
@property (nonatomic) bool writerRunning;

- (void).cxx_destruct;
- (id)initWithFrameCapacity:(long long)arg1 writeFormat:(id)arg2 readFormat:(id)arg3;
- (bool)readerRunning;
- (void)setReaderRunning:(bool)arg1;
- (void)setWriterRunning:(bool)arg1;
- (void)startReader;
- (void)startWriter;
- (void)stopReader;
- (void)stopWriter;
- (bool)writerRunning;

@end
