/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
 */

@interface AVPlayerItemMetadataOutput : AVPlayerItemOutput {
    AVPlayerItemMetadataOutputInternal * _metadataOutputInternal;
}

@property (nonatomic) double advanceIntervalForDelegateInvocation;
@property (nonatomic, readonly) <AVPlayerItemMetadataOutputPushDelegate> *delegate;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *delegateQueue;
@property (getter=_figMetadataOutputsDictionaryOptions, nonatomic, readonly) NSDictionary *figMetadataOutputsDictionaryOptions;

+ (void)initialize;

- (bool)_attachToPlayerItem:(id)arg1;
- (void)_collectUncollectables;
- (void)_detachFromPlayerItem;
- (id)_figMetadataOutputsDictionaryOptions;
- (void)_pushTimedMetadataGroups:(id)arg1 fromPlayerItemTrack:(id)arg2;
- (void)_signalFlush;
- (double)advanceIntervalForDelegateInvocation;
- (void)dealloc;
- (id)delegate;
- (id)delegateQueue;
- (id)init;
- (id)initWithIdentifiers:(id)arg1;
- (bool)isDefunct;
- (void)setAdvanceIntervalForDelegateInvocation:(double)arg1;
- (void)setDelegate:(id)arg1 queue:(id)arg2;

@end
