/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FPFS.framework/FPFS
 */

@interface libfssync.FPFSSQLBackupEngine : NSObject {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  backupManifestURL;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  destinationDirectoryURL;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  outputUserURL;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  userURL;
}

- (void).cxx_destruct;
- (void)backUpWithCompletionHandler:(id /* block */)arg1;
- (id)init;
- (id)initWithUserURL:(id)arg1 outputUserURL:(id)arg2;

@end