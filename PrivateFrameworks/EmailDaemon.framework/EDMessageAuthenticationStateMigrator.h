/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

@interface EDMessageAuthenticationStateMigrator : NSObject <EFLoggable> {
    EDMessageAuthenticator * _authenticator;
    EDCategoryPersistence * _categoryPersistence;
    EDMessagePersistence * _messagePersistence;
}

@property (nonatomic, readonly) EDMessageAuthenticator *authenticator;
@property (nonatomic, readonly) EDCategoryPersistence *categoryPersistence;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) EDMessagePersistence *messagePersistence;
@property (readonly) Class superclass;

+ (id)log;
+ (id)migrationQueue;
+ (id)queryForInboxMessagesToAuthenticate;
+ (id)queryForNonInboxMessagesToAuthenticate;

- (void).cxx_destruct;
- (void)_authenticateMessageBatch:(id)arg1 cancelationToken:(id)arg2;
- (void)_iteratePersistedMessagesDroppingLockForMatchingQuery:(id)arg1 limit:(long long)arg2 batchSize:(long long)arg3 cancelationToken:(id)arg4 requireProtectedData:(bool)arg5 handler:(id /* block */)arg6 completion:(id /* block */)arg7;
- (id)authenticator;
- (id)categoryPersistence;
- (id)initWithCategoryPersistence:(id)arg1 authenticator:(id)arg2 messagePersistence:(id)arg3;
- (id)messagePersistence;
- (void)migrateMessageAuthenticationStateForQuery:(id)arg1 cancelationToken:(id)arg2 completion:(id /* block */)arg3;

@end