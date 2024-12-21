/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FPFS.framework/FPFS
 */

@interface libfssync.FPCKDetachedRoot : NSObject {
    void inode;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  logicalLocation;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  physicalLocation;
    void shouldRefreshBookmark;
}

@property (nonatomic, readonly) unsigned long long inode;
@property (nonatomic, readonly) NSURL *logicalLocation;
@property (nonatomic, readonly) NSURL *physicalLocation;
@property (nonatomic, readonly) bool shouldRefreshBookmark;

- (void).cxx_destruct;
- (id)init;
- (id)initWithPhysicalLocation:(id)arg1 rootURL:(id)arg2 error:(id*)arg3;
- (unsigned long long)inode;
- (id)logicalLocation;
- (id)physicalLocation;
- (bool)shouldRefreshBookmark;

@end