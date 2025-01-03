/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
 */

@interface BCSBatchQuery : BCSQuery <BCSBusinessBatchQuery> {
    NSArray * _itemIdentifiers;
    NSArray * _shardIdentifiers;
}

@property (nonatomic, readonly) bool cacheOnly;
@property (nonatomic, readonly) NSString *clientBundleId;
@property (nonatomic, readonly) <BCSBusinessConfig> *config;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <BCSItemIdentifying> *itemIdentifier;
@property (nonatomic, retain) NSArray *itemIdentifiers;
@property (nonatomic, retain) NSArray *shardIdentifiers;
@property (nonatomic, readonly) long long shardType;
@property (nonatomic, readonly) bool skipRegistrationCheck;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithItemIdentifiers:(id)arg1 config:(id)arg2 clientBundleId:(id)arg3 shardType:(long long)arg4 skipRegistrationCheck:(bool)arg5;
- (id)itemIdentifiers;
- (void)setItemIdentifiers:(id)arg1;
- (void)setShardIdentifiers:(id)arg1;
- (id)shardIdentifiers;

@end
