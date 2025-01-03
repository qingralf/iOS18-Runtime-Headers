/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICCryptoStrategyBase : NSObject <ICCloudSyncingObjectCryptoStrategy> {
    ICCloudSyncingObject * _object;
}

@property (nonatomic, readonly) bool canAuthenticate;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasPassphraseSet;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long intrinsicNotesVersion;
@property (nonatomic, readonly) bool isAuthenticated;
@property (nonatomic, readonly) ICCloudSyncingObject *object;
@property (nonatomic, readonly, copy) NSString *passphraseHint;
@property (nonatomic, readonly) ICEncryptionObject *primaryEncryptionObject;
@property (nonatomic, readonly) ICEncryptionMetadata *primaryMetadata;
@property (nonatomic, readonly) ICEncryptionKey *primaryWrappedKey;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)authenticateWithPassphrase:(id)arg1;
- (bool)canAuthenticate;
- (id)decryptData:(id)arg1;
- (id)decryptSidecarData:(id)arg1;
- (id)decryptedDataFromFileURL:(id)arg1;
- (id)decryptedSidecarDataFromFileURL:(id)arg1;
- (id)encryptData:(id)arg1;
- (bool)encryptFileFromURL:(id)arg1 toURL:(id)arg2;
- (id)encryptSidecarData:(id)arg1;
- (bool)encryptSidecarFileFromURL:(id)arg1 toURL:(id)arg2;
- (id)encryptedData:(id)arg1 rewrappedWithMainKey:(id)arg2;
- (bool)hasPassphraseSet;
- (bool)hasSameKeyAsObject:(id)arg1;
- (id)initWithCloudSyncingObject:(id)arg1;
- (void)initializeCryptoPropertiesFromObject:(id)arg1;
- (long long)intrinsicNotesVersion;
- (void)invalidateStrategy;
- (bool)isAuthenticated;
- (bool)isPassphraseCorrect:(id)arg1;
- (bool)isRecordAuthenticated:(id)arg1;
- (bool)loadDecryptedValuesIfNecessary;
- (bool)mainKeyDecryptsPrimaryData:(id)arg1;
- (id)mainKeyForPassphrase:(id)arg1;
- (bool)mergeEncryptedDataFromRecord:(id)arg1;
- (id)object;
- (id)passphraseHint;
- (void)performBlockIfAccountExists:(id /* block */)arg1;
- (void)performBlockIfAttachmentExists:(id /* block */)arg1;
- (void)performBlockIfMediaExists:(id /* block */)arg1;
- (void)performBlockIfNoteExists:(id /* block */)arg1;
- (void)performBlockIfObjectExists:(id /* block */)arg1;
- (void)performBlockIfPreviewImageExists:(id /* block */)arg1;
- (id)primaryEncryptionObject;
- (id)primaryMetadata;
- (id)primaryWrappedKey;
- (bool)recordHasChangedPassphrase:(id)arg1;
- (bool)rewrapDataAtURL:(id)arg1 withMainKey:(id)arg2;
- (bool)rewrapFile:(id /* block */)arg1 withMainKey:(id)arg2 generationManager:(id)arg3;
- (bool)rewrapWithMainKey:(id)arg1;
- (bool)saveEncryptedJSON;
- (bool)serialize:(id)arg1 toURL:(id)arg2;

@end
