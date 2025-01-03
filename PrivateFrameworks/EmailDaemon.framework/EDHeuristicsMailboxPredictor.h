/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

@interface EDHeuristicsMailboxPredictor : NSObject <EDMailboxPredictor> {
    NSCache * _mailboxIDCache;
    EDMailboxPersistence * _mailboxPersistence;
    EDMessagePersistence * _messagePersistence;
    NSDictionary * _parameters;
    <EMUserProfileProvider> * _userProfileProvider;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSCache *mailboxIDCache;
@property (nonatomic, retain) EDMailboxPersistence *mailboxPersistence;
@property (nonatomic, retain) EDMessagePersistence *messagePersistence;
@property (nonatomic, retain) NSDictionary *parameters;
@property (readonly) Class superclass;
@property (nonatomic, retain) <EMUserProfileProvider> *userProfileProvider;

- (void).cxx_destruct;
- (id)_adjustPredicateForRecent:(id)arg1;
- (id)_allowedRecipientsForMessage:(id)arg1;
- (id)_conversationIDCountsForMessage:(id)arg1;
- (id)_countsForField:(id)arg1 message:(id)arg2;
- (id)_countsForPredicate:(id)arg1;
- (bool)_isAllowedRecipient:(id)arg1;
- (bool)_limitToRecents;
- (id)_listIDCountsForMessage:(id)arg1;
- (id)_mergeDefaultParameters:(id)arg1 withParameters:(id)arg2;
- (bool)_modeParameterIs:(id)arg1;
- (id)_normalizedTermFrequencyTopHitFromDictionary:(id)arg1 withThreshold:(double)arg2;
- (id)_objectWithMeasure:(double)arg1 timesHigherThanFollowUpInMeasures:(id)arg2;
- (id)_orderedModePredictionForMessage:(id)arg1;
- (id)_predictionsForMessage:(id)arg1 limit:(unsigned long long)arg2;
- (id)_recipientCountsForMessage:(id)arg1;
- (id)_removeSpecialMailboxesInCounts:(id)arg1 message:(id)arg2;
- (id)_senderCountsForMessage:(id)arg1;
- (id)_summedWeightedPredictionsForMessage:(id)arg1 limit:(unsigned long long)arg2;
- (id)_topHitFromMailboxDictionary:(id)arg1;
- (id)_topHitFromMailboxDictionary:(id)arg1 message:(id)arg2;
- (id)_userCreatedMailboxIDs;
- (id)_weightedModePredictionsForMessage:(id)arg1;
- (id)initWithUserProfileProvider:(id)arg1 messagePersistence:(id)arg2 mailboxPersistence:(id)arg3;
- (id)initWithUserProfileProvider:(id)arg1 messagePersistence:(id)arg2 mailboxPersistence:(id)arg3 parameters:(id)arg4;
- (id)mailboxIDCache;
- (id)mailboxPersistence;
- (id)messagePersistence;
- (id)parameters;
- (id)predictMailboxIDsForMessages:(id)arg1 limit:(unsigned long long)arg2;
- (void)setMailboxIDCache:(id)arg1;
- (void)setMailboxPersistence:(id)arg1;
- (void)setMessagePersistence:(id)arg1;
- (void)setParameters:(id)arg1;
- (void)setUserProfileProvider:(id)arg1;
- (id)userProfileProvider;

@end
