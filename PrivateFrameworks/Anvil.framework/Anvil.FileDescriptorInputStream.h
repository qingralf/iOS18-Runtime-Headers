/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Anvil.framework/Anvil
 */

@interface Anvil.FileDescriptorInputStream : NSInputStream {
    void _delegate;
    void eof;
    void err;
    void fileHandle;
    void status;
}

@property (nonatomic, retain) <NSStreamDelegate> *delegate;
@property (nonatomic, readonly) bool hasBytesAvailable;
@property (nonatomic, readonly) NSError *streamError;
@property (nonatomic, readonly) unsigned long long streamStatus;

- (void).cxx_destruct;
- (void)close;
- (id)delegate;
- (bool)getBuffer:(char **)arg1 length:(long long*)arg2;
- (bool)hasBytesAvailable;
- (id)initWithData:(id)arg1;
- (id)initWithURL:(id)arg1;
- (void)open;
- (long long)read:(char *)arg1 maxLength:(long long)arg2;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (void)setDelegate:(id)arg1;
- (id)streamError;
- (unsigned long long)streamStatus;

@end