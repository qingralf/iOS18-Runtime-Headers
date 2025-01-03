/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
 */

@interface OSLogEventStore : NSObject {
    NSURL * _archiveURL;
    id /* block */  _progressHandler;
    NSArray * _relativeFilePaths;
    id /* block */  _upgradeHandler;
}

@property (nonatomic, retain) NSURL *_archiveURL;
@property (nonatomic, copy) id /* block */ _progressHandler;
@property (nonatomic, retain) NSArray *_relativeFilePaths;
@property (nonatomic, copy) id /* block */ _upgradeHandler;

+ (id)localStore;
+ (id)localStoreWithRelativePaths:(id)arg1;
+ (id)storeWithArchiveURL:(id)arg1;
+ (id)storeWithArchiveURL:(id)arg1 relativePaths:(id)arg2;
+ (id)storeWithFileURL:(id)arg1;

- (void).cxx_destruct;
- (id)_archiveURL;
- (id /* block */)_progressHandler;
- (id)_relativeFilePaths;
- (id /* block */)_upgradeHandler;
- (void)addFilesToSource:(id)arg1 forCollection:(id)arg2 withProgress:(id)arg3;
- (id)initWithArchiveURL:(id)arg1;
- (id)initWithArchiveURL:(id)arg1 relativePaths:(id)arg2;
- (void)prepareWithCompletionHandler:(id /* block */)arg1;
- (void)setProgressHandler:(id /* block */)arg1;
- (void)setUpgradeConfirmationHandler:(id /* block */)arg1;
- (void)set_archiveURL:(id)arg1;
- (void)set_progressHandler:(id /* block */)arg1;
- (void)set_relativeFilePaths:(id)arg1;
- (void)set_upgradeHandler:(id /* block */)arg1;

@end
