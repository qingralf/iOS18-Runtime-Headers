/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

@interface FPArchiveOperation : FPActionOperation {
    id /* block */  _archiveCompletionBlock;
    unsigned long long  _archiveFormat;
    FPItem * _destinationFolder;
    NSArray * _items;
    NSOperationQueue * _operationQueue;
    FPItemID * _placeholderID;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, copy) id /* block */ archiveCompletionBlock;
@property (nonatomic) unsigned long long archiveFormat;

+ (id)extensionForArchiveFormat:(unsigned long long)arg1 utType:(id*)arg2;

- (void).cxx_destruct;
- (void)_archiveURLForDSEnumeratedDestination:(id)arg1 service:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_archiveURLForFPEnumeratedDestination:(id)arg1 targetArchiveName:(id)arg2 service:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)_archiveURLs:(id)arg1 targetArchiveName:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)_checkNeedOfTemporaryDirectory;
- (void)_coordinateArchivedItemsWithCompletionHandler:(id /* block */)arg1;
- (void)_copyArchivedItemsWithCompletionHandler:(id /* block */)arg1;
- (unsigned long long)_fpToDSArchiveFormat:(unsigned long long)arg1;
- (void)_materializeDestinationFolder:(id /* block */)arg1;
- (void)_prepareItemsWithCompletionHandler:(id /* block */)arg1;
- (void)actionMain;
- (id /* block */)archiveCompletionBlock;
- (unsigned long long)archiveFormat;
- (void)didUnarchiveItemAtURL:(id)arg1;
- (id)findUniqueArchivedName:(id)arg1 parent:(id)arg2;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id)initWithItems:(id)arg1 destinationFolder:(id)arg2;
- (void)presendNotifications;
- (void)setArchiveCompletionBlock:(id /* block */)arg1;
- (void)setArchiveFormat:(unsigned long long)arg1;

@end