/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ShazamKit.framework/ShazamKit
 */

@interface _TtCC9ShazamKit14SHAsyncLibrary22SHAsyncLibraryDelegate : NSObject <SHMediaLibrarySyncDelegate> {
    void inflightItems;
    void lock;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  updatesContinuation;
}

- (void).cxx_destruct;
- (void)_library:(id)arg1 didChangeWithSnapshot:(id)arg2;
- (void)_library:(id)arg1 didProduceError:(id)arg2 failedItemIdentifiers:(id)arg3;
- (void)_libraryDidCompleteSync:(id)arg1;
- (void)_libraryWillBeginSync:(id)arg1;
- (id)init;

@end
