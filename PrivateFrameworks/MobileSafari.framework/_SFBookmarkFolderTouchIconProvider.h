/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileSafari.framework/MobileSafari
 */

@interface _SFBookmarkFolderTouchIconProvider : WBSBookmarkFolderTouchIconProvider {
    NSObject<OS_dispatch_queue> * _bookmarkCollectionAccessQueue;
    WebBookmarkCollection * _collection;
}

- (void).cxx_destruct;
- (void)_folderContentsDidChange:(id)arg1;
- (id)backgroundColor;
- (bool)canHandleRequest:(id)arg1;
- (id)defaultFolderIconForRequest:(id)arg1;
- (id)folderUUIDForRequest:(id)arg1;
- (id)init;
- (id)subrequestsForRequest:(id)arg1 maximumNumberOfSubrequests:(unsigned long long)arg2;

@end