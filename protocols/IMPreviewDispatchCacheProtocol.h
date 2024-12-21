/* Generated by RuntimeBrowser.
 */

@protocol IMPreviewDispatchCacheProtocol <NSObject>

@required

+ (<IMPreviewDispatchCacheProtocol> *)stickerPreviewCache;

- (id)cachedPreviewForKey:(NSString *)arg1;
- (void)enqueueGenerationBlock:(void *)arg1 completion:(void *)arg2 withPriority:(void *)arg3 forKey:(void *)arg4; // needs 4 arg types, found 13: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, id, id /* block */, NSString *, void*, id /* block */, void*, void, id /* block */, void*, long long, NSString *
- (void)enqueueSaveBlock:(void *)arg1 withPriority:(void *)arg2; // needs 2 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*, long long
- (bool)isGeneratingPreviewForKey:(NSString *)arg1;
- (void)resume;
- (void)setCachedPreview:(id)arg1 key:(NSString *)arg2;

@end