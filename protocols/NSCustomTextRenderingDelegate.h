/* Generated by RuntimeBrowser.
 */

@protocol NSCustomTextRenderingDelegate <NSObject>

@required

- (void)setNeedsFrameUpdateForSurface:(id <NSCustomTextSurface>)arg1;

@optional

- (void)_invalidateInteractionGeometry;
- (void)_setNeedsFrameUpdateForCustomRendering;
- (void)_setNeedsLayoutForInteraction;
- (void)_willDrawContentOfSurface:(void *)arg1 withBlock:(void *)arg2; // needs 2 arg types, found 6: <NSCustomTextSurface> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
