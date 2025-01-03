/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TIADocument : UIDocument <TSADocumentRootDelegate, TSKDocumentRootProvider, TSPObjectContextDelegate> {
    TSPObjectContext * _context;
    TSPObjectContext * _contextForRevert;
    TIADocumentInfo * _documentInfo;
    bool  _documentNeedsDownloadOnRevert;
    bool  _documentRevertWasAbandoned;
    TSADocumentRoot * _documentRootForDocumentDidLoad;
    id  _documentStateChangedObserver;
    SFUCryptoKey * _encryptionKey;
    int  _hasPersistenceErrors;
    NSObject<OS_dispatch_queue> * _ioOperationQueue;
    NSObject<OS_dispatch_queue> * _ioQueue;
    bool  _isClosingWithoutSaving;
    bool  _isReadOnly;
    bool  _isShowingConflictResolutionSheet;
    <TIADocumentPassphraseDelegate> * _passphraseDelegate;
    bool  _passwordEntryWasAbandoned;
    NSString * _sourcePathForNondestructiveImport;
    TSADocumentRoot * _suspendedDocumentRoot;
    NSURL * _templateURL;
}

@property (nonatomic, readonly) bool areNewExternalReferencesToDataAllowed; /* unknown property attribute: ? */
@property (nonatomic, retain) TSPObjectContext *context;
@property (nonatomic, retain) TSPObjectContext *contextForRevert;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic, readonly) NSString *defaultDraftName; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *documentCachePath; /* unknown property attribute: ? */
@property (nonatomic, retain) TIADocumentInfo *documentInfo;
@property (readonly) bool documentNeedsDownloadOnRevert;
@property (nonatomic, copy) NSString *documentPasswordHint;
@property (readonly) bool documentRevertWasAbandoned;
@property (nonatomic, readonly, retain) TSADocumentRoot *documentRoot;
@property (nonatomic, retain) SFUCryptoKey *encryptionKey;
@property (nonatomic, readonly) <NSFilePresenter> *filePresenter; /* unknown property attribute: ? */
@property (readonly) bool hasPersistenceErrors;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool ignoreDocumentSupport; /* unknown property attribute: ? */
@property (nonatomic, readonly) bool isClosed;
@property bool isClosingWithoutSaving;
@property (nonatomic, readonly) bool isDocumentSupportTemporary; /* unknown property attribute: ? */
@property (nonatomic, readonly) bool isPasswordProtected;
@property bool isReadOnly;
@property (readonly) bool isShowingConflictResolutionSheet;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic) <TIADocumentPassphraseDelegate> *passphraseDelegate;
@property (readonly) bool passwordEntryWasAbandoned;
@property (readonly) bool shouldHideForSnapshots;
@property (nonatomic, retain) NSString *sourcePathForNondestructiveImport;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSURL *templateURL;

- (bool)_shouldPreventFileProtectionUpgradeToLevel:(id)arg1;
- (id)additionalDocumentPropertiesForWrite;
- (void)closeWithCompletionHandler:(id /* block */)arg1;
- (id)contentsForType:(id)arg1 error:(id*)arg2;
- (id)context;
- (void)context:(id)arg1 didDownloadDocumentResources:(id)arg2 failedOrCancelledDocumentResources:(id)arg3 error:(id)arg4;
- (id)contextForRevert;
- (void)coordinatedReadUsingAccessor:(id /* block */)arg1;
- (void)dealloc;
- (void)decryptedDocumentWithKey:(id)arg1;
- (id)documentCachePath;
- (void)documentDidLoad;
- (id)documentInfo;
- (bool)documentNeedsDownloadOnRevert;
- (id)documentPasswordHint;
- (bool)documentRevertWasAbandoned;
- (id)documentRoot;
- (id)documentUUID;
- (id)encryptionKey;
- (id)filePresenter;
- (bool)hasPersistenceErrors;
- (bool)hasUnsavedChanges;
- (id)initWithTemporaryFileURL:(id)arg1;
- (bool)isClosed;
- (bool)isClosingWithoutSaving;
- (bool)isPasswordProtected;
- (bool)isReadOnly;
- (bool)isShowingConflictResolutionSheet;
- (id)name;
- (id)newExporterForType:(id)arg1 options:(id)arg2 preferredType:(id*)arg3;
- (void)p_performSynchronousBlockOnMainThread:(id /* block */)arg1;
- (id)packageDataForWrite;
- (id)passphraseDelegate;
- (bool)passwordEntryWasAbandoned;
- (void)passwordStateDidChange;
- (id)persistenceWarningsForData:(id)arg1 isReadable:(bool)arg2 isExternal:(bool)arg3;
- (void)setContext:(id)arg1;
- (void)setContextForRevert:(id)arg1;
- (void)setDocumentFileProtectionTo:(id)arg1;
- (void)setDocumentInfo:(id)arg1;
- (void)setDocumentPasswordHint:(id)arg1;
- (void)setEncryptionKey:(id)arg1;
- (void)setEncryptionKeyWithPassphrase:(id)arg1;
- (void)setFileProtectionTo:(id)arg1 atPath:(id)arg2;
- (void)setIsClosingWithoutSaving:(bool)arg1;
- (void)setIsReadOnly:(bool)arg1;
- (void)setPassphraseDelegate:(id)arg1;
- (void)setSourcePathForNondestructiveImport:(id)arg1;
- (void)setTemplateURL:(id)arg1;
- (bool)shouldAbandonDocumentRevert;
- (bool)shouldHideForSnapshots;
- (id)sourcePathForNondestructiveImport;
- (id)templateURL;
- (bool)validatePassphrase:(id)arg1;

@end
