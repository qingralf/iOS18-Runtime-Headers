/* Generated by RuntimeBrowser.
 */

@protocol EMMessageListItem <EMCollectionItem, EMObject, EFPubliclyDescribable>

@required

- (bool)allowAuthenticationWarning;
- (NSURL *)brandIndicatorLocation;
- (long long)businessID;
- (NSString *)businessLogoID;
- (EMCategory *)category;
- (NSArray *)ccList;
- (EMMessageListItemChange *)changeFrom:(id <EMMessageListItem>)arg1;
- (long long)conversationID;
- (long long)conversationNotificationLevel;
- (unsigned long long)count;
- (NSDate *)date;
- (bool)deleteMovesToTrash;
- (NSDate *)displayDate;
- (EFFuture *)displayMessage;
- (<EMCollectionItemID> *)displayMessageItemID;
- (EMObjectID *)displayMessageObjectID;
- (NSIndexSet *)flagColors;
- (ECMessageFlags *)flags;
- (EMFollowUp *)followUp;
- (EMGeneratedSummary *)generatedSummary;
- (NSArray *)groupedSenderMessageListItems;
- (bool)hasAttachments;
- (bool)hasUnflagged;
- (bool)isAuthenticated;
- (bool)isBlocked;
- (bool)isCCMe;
- (bool)isEditable;
- (bool)isGroupedSender;
- (bool)isToMe;
- (bool)isVIP;
- (NSArray *)mailboxObjectIDs;
- (NSArray *)mailboxes;
- (NSArray *)mailboxesIfAvailable;
- (EMReadLater *)readLater;
- (NSDate *)sendLaterDate;
- (NSArray *)senderList;
- (bool)shouldArchiveByDefault;
- (ECSubject *)subject;
- (NSString *)summary;
- (bool)supportsArchiving;
- (NSArray *)toList;
- (long long)unsubscribeType;

@end