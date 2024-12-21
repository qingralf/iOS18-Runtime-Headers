/* Generated by RuntimeBrowser.
 */

@protocol PKAutoRefineViewDelegate <NSObject>

@required

- (void)autoRefineTask:(void *)arg1 synthesizeRefinedDrawingForStrokes:(void *)arg2 transcription:(void *)arg3 drawingUUID:(void *)arg4 completionBlock:(void *)arg5; // needs 5 arg types, found 9: PKAutoRefineTask *, NSArray *, NSString *, NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)clearRefinableStrokes;
- (void)enumerateRefinableStrokesWithOptions:(void *)arg1 usingBlock:(void *)arg2; // needs 2 arg types, found 9: unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSUUID *, unsigned long long, bool*, void*
- (bool)hasRefinableStrokes;
- (bool)isRefinableStroke:(PKStroke *)arg1;

@end