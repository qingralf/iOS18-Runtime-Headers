/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
 */

@interface BWMetadataTimeMachine : NSObject {
    id /* block */  _addHandler;
    int  _capacity;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _earliestAllowedPTS;
    NSMutableArray * _metadata;
    NSObject<OS_dispatch_queue> * _metadataHandlingQueue;
    NSString * _name;
    int  _numberOfConsecutiveFlushes;
    NSMutableArray * _requests;
}

@property struct { long long x1; int x2; unsigned int x3; long long x4; } earliestAllowedPTS;
@property (nonatomic, readonly) NSString *name;

+ (void)initialize;

- (void)addDroppedFrameForPortType:(id)arg1 pts:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (void)addMetadata:(id)arg1;
- (void)dealloc;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })earliestAllowedPTS;
- (id)initWithName:(id)arg1 capacity:(int)arg2 metadataHandlingPriority:(unsigned int)arg3 addHandler:(id /* block */)arg4;
- (id)metadata;
- (id)metadataForPTSRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1 timeout:(float)arg2;
- (id)name;
- (void)reset;
- (void)setEarliestAllowedPTS:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (bool)waitUntilCapacity:(int)arg1 timeout:(float)arg2;

@end