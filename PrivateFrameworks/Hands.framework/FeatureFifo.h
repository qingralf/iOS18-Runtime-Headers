/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Hands.framework/Hands
 */

@interface FeatureFifo : NSObject {
    NSMutableArray * _bufArray;
    unsigned int  _bufSize;
    unsigned int  _currentDepth;
    int  _currentIndex;
    unsigned int  _endIndex;
    unsigned int  _fifoDepth;
}

- (void).cxx_destruct;
- (int)currentDepth;
- (unsigned int)currentIndex;
- (void*)getNextBuffer;
- (id)initWithFifoDepth:(unsigned int)arg1 withBufSize:(unsigned int)arg2;
- (int)maxDepth;
- (unsigned int)nextIndex:(unsigned int)arg1;
- (unsigned char)pushBuffer:(const void*)arg1;
- (void)resetAllBuffers;
- (void)resetAllBuffers:(void*)arg1;
- (void)resetHead;
- (void)resetHeadToIndex:(unsigned int)arg1 andDepth:(int)arg2;

@end
