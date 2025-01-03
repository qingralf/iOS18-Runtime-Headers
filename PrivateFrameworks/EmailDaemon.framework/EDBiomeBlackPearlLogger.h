/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

@interface EDBiomeBlackPearlLogger : NSObject <EFLoggable> {
    BMSQLDatabase * _database;
    NSObject<OS_dispatch_queue> * _queue;
    BMSource * _source;
    BMStream * _stream;
}

@property (nonatomic, retain) BMSQLDatabase *database;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) BMSource *source;
@property (nonatomic, retain) BMStream *stream;
@property (readonly) Class superclass;

+ (id)log;

- (void).cxx_destruct;
- (int)_biomeCategoryValueFrom:(long long)arg1;
- (int)_biomeDomainValueFrom:(long long)arg1;
- (int)_biomeFedStatsCategoryValueFrom:(unsigned long long)arg1;
- (int)_biomeMailboxValueFrom:(long long)arg1;
- (int)_biomeRecategorizationScopeValueFrom:(long long)arg1;
- (id)_constructBiomeMessageGrainQuery:(id)arg1 andEndTS:(id)arg2 andBPEnabledAccounts:(id)arg3;
- (id)_domainStringFrom:(long long)arg1;
- (void)_donateToBiomeWithEvent:(id)arg1;
- (id)database;
- (void)deleteEventsForMessages:(id)arg1;
- (id)initWithStreamType:(unsigned long long)arg1;
- (void)logReadEventForMessageID:(id)arg1 messageDictionary:(id)arg2;
- (void)logRecategorizationEventForMessageID:(id)arg1 messageDictionary:(id)arg2;
- (void)logRecategorizationFedStatsForMessage:(id)arg1;
- (void)logReceiveEventForMessageID:(id)arg1 messageDictionary:(id)arg2;
- (id)queryAllEventsForMessageID:(id)arg1 andEventType:(id)arg2;
- (id)queryMessageGrainEvents:(id)arg1 endingAt:(id)arg2 andBPEnabledAccounts:(id)arg3;
- (id)queue;
- (void)setDatabase:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setSource:(id)arg1;
- (void)setStream:(id)arg1;
- (id)source;
- (id)stream;

@end
