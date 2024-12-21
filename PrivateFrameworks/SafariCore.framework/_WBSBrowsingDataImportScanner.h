/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
 */

@interface _WBSBrowsingDataImportScanner : NSObject {
    DSArchiveService * _archiveService;
    NSFileManager * _fileManager;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _resultLock;
    NSMutableDictionary * _results;
    NSObject<OS_dispatch_group> * _scannerGroup;
    NSFileHandle * _temporaryUnarchiveDestinationFileHandle;
    NSURL * _temporaryUnarchiveDestinationFolder;
    NSString * _temporaryUnarchiveDestinationFolderSandboxExtension;
}

- (void).cxx_destruct;
- (id)_createSandboxExtensionForURL:(id)arg1;
- (bool)_isArchiveFileURL:(id)arg1;
- (void)_processFileForURL:(id)arg1 isInUnarchivedFolder:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)_scanImportedURL:(id)arg1 isInUnarchivedFolder:(bool)arg2;
- (id)init;
- (void)scanImportURLs:(id)arg1 sandboxExtensions:(id)arg2 completionHandler:(id /* block */)arg3;

@end