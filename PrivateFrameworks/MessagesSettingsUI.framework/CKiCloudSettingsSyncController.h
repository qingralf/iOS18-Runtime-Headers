/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MessagesSettingsUI.framework/MessagesSettingsUI
 */

@interface CKiCloudSettingsSyncController : NSObject <IMCloudKitEventHandler> {
    unsigned long long  _messagesToUploadCount;
    id /* block */  _syncStatusHandler;
    NSString * _syncSummary;
    bool  _syncing;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long messagesToUploadCount;
@property (nonatomic, readonly) bool micAccountsMatch;
@property (getter=isMiCEnabled, nonatomic, readonly) bool micEnabled;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ syncStatusHandler;
@property (nonatomic, retain) NSString *syncSummary;
@property (getter=isSyncing, nonatomic) bool syncing;

- (void).cxx_destruct;
- (void)_prepareForInitialSyncState;
- (id)_syncSummaryForSyncState:(id)arg1;
- (void)_wrapperInit;
- (void)cancelCurrentSync;
- (void)cloudKitEventNotificationManager:(id)arg1 syncStateDidChange:(id)arg2;
- (id)initWithSyncStatusHandler:(id /* block */)arg1;
- (bool)isMiCEnabled;
- (bool)isSyncing;
- (unsigned long long)messagesToUploadCount;
- (bool)micAccountsMatch;
- (void)setMessagesToUploadCount:(unsigned long long)arg1;
- (void)setSyncStatusHandler:(id /* block */)arg1;
- (void)setSyncSummary:(id)arg1;
- (void)setSyncing:(bool)arg1;
- (void)startSync;
- (id /* block */)syncStatusHandler;
- (id)syncSummary;

@end
