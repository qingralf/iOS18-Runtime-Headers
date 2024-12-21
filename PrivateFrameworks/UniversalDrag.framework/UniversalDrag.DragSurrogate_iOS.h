/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UniversalDrag.framework/UniversalDrag
 */

@interface UniversalDrag.DragSurrogate_iOS : NSObject <_UIDragRelaySessionDelegate> {
    void coordinator;
    void didBeginCompletion;
    void dragItems;
    void hasSeenPreviewsFromOtherSources;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  logger;
    void pasteboardController;
    void pasteboardDataSession;
    void relaySession;
    void window;
}

- (void).cxx_destruct;
- (void)dragRelaySession:(id)arg1 didEndDragWithDrop:(bool)arg2;
- (void)dragRelaySession:(id)arg1 didUpdateDragPresentation:(id)arg2;
- (void)dragRelaySessionDidBegin:(id)arg1;
- (void)dragRelaySessionDidEndDataTransfer:(id)arg1;
- (void)dragRelaySessionDidFail:(id)arg1;
- (id)init;

@end