/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VisionCore.framework/VisionCore
 */

@interface VisionCoreE5RTExecutionContextConfiguration : NSObject <NSCopying> {
    VisionCoreNamedObjects * _boundInputObjects;
    VisionCoreNamedObjects * _boundOutputObjects;
    NSObject<OS_dispatch_queue> * _completionQueue;
    VisionCoreE5RTExecutionPrewarmedState * _prewarmedState;
    bool  _prewireInUseAllocations;
}

@property (nonatomic, copy) VisionCoreNamedObjects *boundInputObjects;
@property (nonatomic, copy) VisionCoreNamedObjects *boundOutputObjects;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *completionQueue;
@property (nonatomic, retain) VisionCoreE5RTExecutionPrewarmedState *prewarmedState;
@property (nonatomic) bool prewireInUseAllocations;

- (void).cxx_destruct;
- (id)boundInputObjects;
- (id)boundOutputObjects;
- (id)completionQueue;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)isEqual:(id)arg1;
- (id)prewarmedState;
- (bool)prewireInUseAllocations;
- (void)setBoundInputObjects:(id)arg1;
- (void)setBoundOutputObjects:(id)arg1;
- (void)setCompletionQueue:(id)arg1;
- (void)setPrewarmedState:(id)arg1;
- (void)setPrewireInUseAllocations:(bool)arg1;

@end
