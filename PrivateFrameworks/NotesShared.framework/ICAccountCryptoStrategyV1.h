/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICAccountCryptoStrategyV1 : ICCloudSyncingObjectCryptoStrategyV1 <ICAccountCryptoStrategy>

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

- (bool)mergeEncryptedDataFromRecord:(id)arg1;
- (void)removePassphrase;
- (bool)setPassphrase:(id)arg1 hint:(id)arg2;

@end
