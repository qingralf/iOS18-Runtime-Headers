/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

@interface EDMessageListItemPredicates : NSObject

+ (id)_objectIDsFromRightExpression:(id)arg1;
+ (id)_predicateForAnyMailboxWithPredicate:(id)arg1;
+ (id)expandedPredicateForCategoryTypePredicate:(id)arg1;
+ (id)expandedPredicateForFollowUpIsActivePredicate:(id)arg1;
+ (id)expandedPredicateForReadLaterIsActivePredicate:(id)arg1;
+ (id)predicateForCategorizationVersionLessThanVersion:(long long)arg1;
+ (id)predicateForMailboxTypePredicate:(id)arg1 mailboxPersistence:(id)arg2;
+ (id)predicateForMailboxURLPredicate:(id)arg1 mailboxPersistence:(id)arg2;
+ (id)predicateForMessageIDHeaderHashPredicate:(id)arg1;
+ (id)predicateForMessagesFromVIPs:(id)arg1;
+ (id)predicateForMessagesWithListIDHash:(id)arg1;
+ (id)predicateForMessagesWithObjectIDsPredicate:(id)arg1 objectIDConverter:(id)arg2;
+ (id)predicateForMessagesWithPersistentIDs:(id)arg1;
+ (id)predicateForMessagesWithRecipientExpression:(id)arg1 operatorType:(unsigned long long)arg2;
+ (id)predicateForNilModelVersion;
+ (id)predicateForUnauthenticatedMessages;

@end
