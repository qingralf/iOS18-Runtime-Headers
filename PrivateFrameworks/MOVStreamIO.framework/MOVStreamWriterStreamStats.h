/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MOVStreamIO.framework/MOVStreamIO
 */

@interface MOVStreamWriterStreamStats : NSObject {
    unsigned long long  _attemptCount;
    unsigned long long  _fifoItemCount;
    unsigned long long  _visitCount;
    unsigned long long  _writeCount;
}

@property unsigned long long attemptCount;
@property unsigned long long fifoItemCount;
@property unsigned long long visitCount;
@property unsigned long long writeCount;

- (unsigned long long)attemptCount;
- (unsigned long long)fifoItemCount;
- (id)init;
- (void)setAttemptCount:(unsigned long long)arg1;
- (void)setFifoItemCount:(unsigned long long)arg1;
- (void)setVisitCount:(unsigned long long)arg1;
- (void)setWriteCount:(unsigned long long)arg1;
- (unsigned long long)visitCount;
- (unsigned long long)writeCount;

@end