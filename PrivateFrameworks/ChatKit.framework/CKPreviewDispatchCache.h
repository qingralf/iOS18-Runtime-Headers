/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKPreviewDispatchCache : NSObject <IMPreviewDispatchCacheProtocol, IMSystemMonitorListener> {
    CKDispatchCache * _dispatchCache;
    CKMultiDict * _pendingBlocks;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CKDispatchCache *dispatchCache;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CKMultiDict *pendingBlocks;
@property (readonly) Class superclass;

+ (long long)_defaultPreviewPriority;
+ (void)_invalidateStickerPreviewCache;
+ (id)detailsPreviewCache;
+ (id)genmojiPreviewCache;
+ (id)mapThumbnailQueue;
+ (id)previewPrewarmQueue;
+ (id)snapshotCache;
+ (id)stickerPreviewCache;
+ (id)transcriptPreviewCache;

- (void).cxx_destruct;
- (void)beginGeneratingForKey:(id)arg1;
- (id)cachedPreviewForKey:(id)arg1;
- (void)clearQueueAndCachedPreviews;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (id)dispatchCache;
- (void)endGeneratingForKey:(id)arg1;
- (void)enqueueGenerationBlock:(id /* block */)arg1 completion:(id /* block */)arg2 withPriority:(long long)arg3 forKey:(id)arg4;
- (void)enqueueSaveBlock:(id /* block */)arg1 forMediaObject:(id)arg2 withPriority:(long long)arg3;
- (void)enqueueSaveBlock:(id /* block */)arg1 withPriority:(long long)arg2;
- (void)flush;
- (id)init;
- (id)initWithCacheLimit:(unsigned long long)arg1 dispatchPriority:(long long)arg2 isConcurrent:(bool)arg3;
- (bool)isGeneratingPreviewForKey:(id)arg1;
- (id)mediaObjectManager;
- (id)notificationCenter;
- (id)pendingBlocks;
- (void)resume;
- (void)setCachedPreview:(id)arg1 key:(id)arg2;
- (void)setDispatchCache:(id)arg1;
- (void)setPendingBlocks:(id)arg1;
- (bool)shouldReplaceCachedPreview:(id)arg1 withPreview:(id)arg2;
- (void)suspend;
- (void)systemApplicationDidSuspend;
- (void)transferFinished:(id)arg1;
- (void)transferRemoved:(id)arg1;

@end