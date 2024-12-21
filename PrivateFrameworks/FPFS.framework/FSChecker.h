/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FPFS.framework/FPFS
 */

@interface FSChecker : NSObject {
    bool  _itemIsInsideAPackage;
    bool  _itemIsInsideAPinnedFolder;
    bool  _itemIsInsideAnIgnoredFolder;
}

@property bool itemIsInsideAPackage;
@property bool itemIsInsideAPinnedFolder;
@property bool itemIsInsideAnIgnoredFolder;

- (void)enumerateItemsOnDiskAtURL:(id)arg1 detachedRoots:(id)arg2 usingFPFS:(bool)arg3 ioContext:(const struct { id /* block */ x1; unsigned int x2; bool x3; }*)arg4 delegate:(id)arg5;
- (bool)isDataProtectedFileAtPath:(id)arg1 handle:(struct fpfs_item_handle { unsigned long long x1; unsigned long long x2; unsigned int x3; unsigned int x4; char *x5; int x6; unsigned int x7; }*)arg2;
- (bool)itemIsInsideAPackage;
- (bool)itemIsInsideAPinnedFolder;
- (bool)itemIsInsideAnIgnoredFolder;
- (void)setItemIsInsideAPackage:(bool)arg1;
- (void)setItemIsInsideAPinnedFolder:(bool)arg1;
- (void)setItemIsInsideAnIgnoredFolder:(bool)arg1;

@end