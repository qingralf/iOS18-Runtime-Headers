/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

@interface MBFileManagerDelegate : NSObject <NSFileManagerDelegate> {
    id /* block */  _shouldCopyItemAtPathToPath;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ shouldCopyItemAtPathToPath;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)fileManager:(id)arg1 shouldCopyItemAtPath:(id)arg2 toPath:(id)arg3;
- (void)setShouldCopyItemAtPathToPath:(id /* block */)arg1;
- (id /* block */)shouldCopyItemAtPathToPath;

@end
