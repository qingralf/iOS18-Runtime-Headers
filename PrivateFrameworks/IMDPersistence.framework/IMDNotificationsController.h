/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMDPersistence.framework/IMDPersistence
 */

@interface IMDNotificationsController : NSObject {
    NSSet * _activeAccountAliases;
    IMBusinessNameManager * _businessNameManager;
    UNNotificationCategory * _incomingFilesNotificationCategory;
    UNNotificationCategory * _incomingMessageNotificationCategory;
    long long  _lastAlertedFailedMessageDate;
    long long  _lastAlertedMessageDate;
    CNContact * _meContact;
    NSSet * _meTokens;
    UNUserNotificationCenter * _notificationCenter;
}

@property (nonatomic, retain) NSSet *activeAccountAliases;
@property (nonatomic, retain) IMBusinessNameManager *businessNameManager;
@property (nonatomic, retain) UNNotificationCategory *incomingFilesNotificationCategory;
@property (nonatomic, retain) UNNotificationCategory *incomingMessageNotificationCategory;
@property long long lastAlertedFailedMessageDate;
@property long long lastAlertedMessageDate;
@property (nonatomic, retain) CNContact *meContact;
@property (nonatomic, retain) NSSet *meTokens;
@property (nonatomic, retain) UNUserNotificationCenter *notificationCenter;

+ (id)_IMDCoreSpotlightCNContactForAddress:(id)arg1;
+ (id)_addressBookNameForAddress:(id)arg1 orContact:(id)arg2;
+ (id)_addressForHandle:(id)arg1;
+ (id)_countryCodeForHandle:(id)arg1;
+ (id)_database;
+ (id)_displayNameForBusinessChatAddress:(id)arg1 businessNameManager:(id)arg2;
+ (id)_displayNameForChatRecord:(id)arg1;
+ (id)_displayNameForHandle:(id)arg1 andContact:(id)arg2 businessNameManager:(id)arg3 suggestionProvider:(id /* block */)arg4;
+ (id)_formattedDisplayStringForAddress:(id)arg1 countryCode:(id)arg2;
+ (bool)_isFacetimeHighlighted:(id)arg1;
+ (id)_lpLinkMetadataForMessage:(id)arg1 attachmentPaths:(id)arg2 originalURL:(id)arg3;
+ (id)_pluginPayloadAttachmentPathsForMessage:(id)arg1;
+ (id)_truncateNameIfNeeded:(id)arg1;
+ (id)_uncanonicalizedAddressForHandle:(id)arg1;
+ (bool)isSpamFilteringOn;
+ (bool)isUnknownSenderFilteringOn;
+ (id)logger;
+ (int)reminderAlertCount;
+ (id)sharedInstance;
+ (int)validateAlertCount:(int)arg1;

- (void).cxx_destruct;
- (id)RCSCategoryWithIdentifier:(id)arg1 actions:(id)arg2;
- (id)SMSCategoryWithIdentifier:(id)arg1 actions:(id)arg2;
- (id)_IMDContactStore;
- (bool)_UTITypeMightBeAnimated:(id)arg1;
- (void)__postNotificationRequests:(id)arg1 isMostActiveDevice:(bool)arg2;
- (void)__postNotifications;
- (id)_adaptiveImageGlyphForAttachment:(id)arg1;
- (bool)_amIMentionedInMessage:(id)arg1;
- (bool)_areAllMessagePartsRetractedForMessageDictionary:(id)arg1;
- (id)_attachmentRecordsForAssociatedMessagePartText:(id)arg1;
- (id)_attributedMessageBodyByInsertingAdaptiveImageGlyphsInMessageBody:(id)arg1 attachments:(id)arg2;
- (id)_attributedSummaryOfTapback:(id)arg1 messageDictionary:(id)arg2 senderDisplayName:(id)arg3;
- (id)_chatDictionaryForChatRecord:(id)arg1;
- (id)_chatDictionaryForMessageRecord:(id)arg1;
- (bool)_chatHasCategoryMuted:(id)arg1 isFromContact:(bool)arg2;
- (bool)_chatIsMuted:(id)arg1;
- (bool)_chatIsMutedBasedOnChatGUID:(id)arg1 chatIdentifier:(id)arg2 groupID:(id)arg3 handles:(id)arg4 lastAddressedHandleString:(id)arg5 originalGroupID:(id)arg6 style:(long long)arg7;
- (bool)_contentBodyHasLocationURL:(id)arg1;
- (id)_coreSpotlightChatParticipantsFromChatDictionary:(id)arg1 senderHandleID:(id)arg2;
- (bool)_deviceIsElgibileToBeForcedIntoFilteringUnknownSenders;
- (bool)_deviceUnderFirstUnlock;
- (id)_displayNameForHandle:(id)arg1;
- (id)_displayNameForHandle:(id)arg1 andContact:(id)arg2;
- (id)_failedMessageRecordsAfterDateInNanoseconds:(long long)arg1;
- (bool)_filteringSettingConfirmed;
- (id)_generateNotificationRequestForDeliveryError:(id)arg1 isCarouselUITriggered:(bool)arg2;
- (id)_generateNotificationRequestForMessageRecord:(id)arg1 isUrgentMessageTrigger:(bool)arg2 isCarouselUITriggered:(bool)arg3 shouldAdvanceLastAlertedMessageDate:(bool*)arg4;
- (id)_generateNotificationRequestForMessageRecord:(id)arg1 messageDictionary:(id)arg2 chatDictionary:(id)arg3 isUrgentMessageTrigger:(bool)arg4 isCarouselUITriggered:(bool)arg5 shouldAdvanceLastAlertedMessageDate:(bool*)arg6;
- (unsigned long long)_getMessagesSpokenAllowlistLevel:(bool*)arg1;
- (unsigned long long)_getSpokenMessageAllowlistLevelVersion;
- (id)_groupPhotoInternalFilePathForGroupPhotoGuid:(id)arg1;
- (id)_handleIDsForChatDictionary:(id)arg1;
- (bool)_handleIsSpokenMessageAllowlisted:(id)arg1 chat:(id)arg2 message:(id)arg3;
- (bool)_hasMigratedPreferences;
- (bool)_haveMigrated;
- (bool)_isMostActiveDevice;
- (bool)_isRaiseGestureEnabled;
- (bool)_isUnknownSenders:(id)arg1;
- (id)_lastMessageTimeForChat:(id)arg1;
- (id)_lastTwoMessagesForChat:(id)arg1;
- (long long)_legacyDateForMessageWithRowIDPreference:(long long)arg1;
- (id)_legacyDatePreference;
- (long long)_legacyRowIDPreference;
- (id)_makeNotificationCategories;
- (id)_messageDictionaryForMessageRecord:(id)arg1;
- (id)_messageDictionaryForMessageRecord:(id)arg1 copyThreadOriginator:(bool)arg2;
- (bool)_messageIsBusiness:(id)arg1;
- (bool)_messageIsFromFavorite:(id)arg1;
- (bool)_messageIsFromKnownContact:(id)arg1;
- (bool)_messageIsSOSMapURL:(id)arg1;
- (bool)_messageIsStewieEmergency:(id)arg1;
- (bool)_messageShouldBeSilentlyDeliveredForBusinessChat:(id)arg1;
- (bool)_messageShouldBeSpoken:(id)arg1 chatDictionary:(id)arg2;
- (id)_messages:(id)arg1 newerThanDate:(long long)arg2;
- (id)_messagesSortedByDate:(id)arg1;
- (void)_migrateLastedPostedPreferencesIfNeeded;
- (id)_nicknameDisplayNameForID:(id)arg1;
- (bool)_notificationIsFromAFilteredSender:(id)arg1 messageDictionary:(id)arg2;
- (id)_notificationsSafePreviewFileURLForTransferURL:(id)arg1 utiType:(id)arg2 knownSender:(bool)arg3;
- (bool)_overrideDNDForMessagesAddressingMe;
- (void)_populateAttachmentsForNotificationContent:(id)arg1 messageDictionary:(id)arg2 messageRecord:(id)arg3 knownSender:(bool)arg4;
- (void)_populateBasicNotificationIdentifyingContent:(id)arg1 chatDictionary:(id)arg2 messageDictionary:(id)arg3 isCarouselUITriggered:(bool)arg4;
- (void)_populateBodyAndTitleForSendFailedNotificationContent:(id)arg1 messageDictionary:(id)arg2;
- (void)_populateBodyAndTitleForSendReceivedAsJunkNotificationContent:(id)arg1 messageDictionary:(id)arg2;
- (void)_populateBodyForNotificationContent:(id)arg1 messageDictionary:(id)arg2;
- (void)_populateIgnoresDoNotDisturb:(id)arg1 chatDictionary:(id)arg2 messageDictionary:(id)arg3;
- (void)_populateNotificationCategoryContent:(id)arg1 messageDictionary:(id)arg2 chatDictionary:(id)arg3;
- (void)_populateNotificationContentForTranscriptSharing:(id)arg1 chatDictionary:(id)arg2 messageDictionary:(id)arg3;
- (void)_populateRealertCountForNotificationContent:(id)arg1;
- (void)_populateSoundAndDisplayActivationForNotificationContent:(id)arg1 chatDictionary:(id)arg2 messageDictionary:(id)arg3;
- (void)_populateSubtitleForNotificationContent:(id)arg1 chatDictionary:(id)arg2 messageDictionary:(id)arg3;
- (void)_populateTimeSensitiveOrCriticalForNotificationContent:(id)arg1 chatDictionary:(id)arg2 messageDictionary:(id)arg3;
- (void)_populateTitleForNotificationContent:(id)arg1 chatDictionary:(id)arg2 messageDictionary:(id)arg3;
- (void)_populateUserInfoForMessageContent:(id)arg1 messageDictionary:(id)arg2 messageIsAddressedToMe:(bool)arg3;
- (void)_populateUserInfoOnContentForWatch:(id)arg1 messageDictionary:(id)arg2 chatDictionary:(id)arg3 isCarouselUITriggered:(bool)arg4;
- (void)_postNotificationRequests:(id)arg1 isMostActiveDevice:(bool)arg2;
- (void)_postUnreadNotificationRequests:(id)arg1 failedNotificationRequests:(id)arg2;
- (void)_postUrgentNotificationRequests:(id)arg1;
- (void)_removeAllDeliveredMessageNotifications;
- (id)_requestForNonMostActiveDeviceRequest:(id)arg1;
- (id)_senderDisplayNameForTapback:(id)arg1 sendMessageIntent:(id)arg2 chatParticipants:(id)arg3;
- (void)_setContactInMessageDictionary:(id)arg1 messageDictionary:(id)arg2;
- (void)_setHasMigratedPreferenceTrue;
- (void)_setLastPostedDateFromMigration:(id)arg1;
- (void)_setMessagesSpokenAllowlistLevelInPreferences:(unsigned long long)arg1;
- (void)_setSpokenMessageAllowlistLevelVersion:(unsigned long long)arg1;
- (void)_setUpNotificationCenter;
- (void)_setupBusinessNameManager;
- (void)_setupCriticalNotifications;
- (void)_setupFirstLoad;
- (void)_setupMeContactAndTokens;
- (bool)_shouldOverrideChatSilencingBecauseImMentioned:(id)arg1;
- (bool)_shouldPostNotificationForChat:(id)arg1 messageDictionary:(id)arg2;
- (bool)_shouldPostNotificationRequest:(id)arg1 withCurrentlyPostedNotifications:(id)arg2;
- (bool)_shouldRepostNotification:(id)arg1 withAlreadyPostedNotification:(id)arg2;
- (id)_stickerTapbackTransferGUIDFromMessageDictionary:(id)arg1;
- (void)_storeLastAlertedFailedMessageDate:(long long)arg1;
- (void)_storeLastAlertedMessageDate:(long long)arg1;
- (id)_suggestedDisplayNameForAddress:(id)arg1;
- (id)_synthesizedMessagingNotificationContentWithContent:(id)arg1 chatDictionary:(id)arg2 messageDictionary:(id)arg3 isUrgentMessageTrigger:(bool)arg4;
- (id)_tapbackFromMessageDictionary:(id)arg1;
- (id)_userNotificationForParticipantChangeMessageRecord:(id)arg1;
- (id)_userNotificationsForFailedDeliveryMessageRecords:(id)arg1 isCarouselUITriggered:(bool)arg2;
- (id)_userNotificationsForMessageRecords:(id)arg1 newerThanDate:(long long)arg2 isUrgentMessageTrigger:(bool)arg3 isCarouselUITriggered:(bool)arg4;
- (id)activeAccountAliases;
- (void)advanceLastAlertedFailedMessageDate:(long long)arg1;
- (void)advanceLastAlertedMessageDate:(long long)arg1;
- (id)allTokens;
- (bool)areMyTokens:(id)arg1 inMessage:(id)arg2;
- (id)businessNameManager;
- (id)contactForHandleRecord:(id)arg1;
- (bool)copyFirstFrameOfMultiFrameImageAtFileURL:(id)arg1 toFileURL:(id)arg2;
- (id)defaultsSharedInstance;
- (bool)imagePreviewIsMultiFrameAtFileURL:(id)arg1;
- (id)incomingFilesNotificationCategory;
- (id)incomingMessageNotificationCategory;
- (id)init;
- (bool)isFromChatBotNotOTC:(id)arg1;
- (long long)lastAlertedFailedMessageDate;
- (long long)lastAlertedMessageDate;
- (id)madridBusinessCategoryWithIdentifier:(id)arg1 actions:(id)arg2;
- (id)madridCategoryWithIdentifier:(id)arg1 actions:(id)arg2;
- (id)madridGroupCategoryWithIdentifier:(id)arg1 actions:(id)arg2;
- (id)meContact;
- (id)meTokens;
- (id)noRelayCategoryWithIdentifier:(id)arg1 actions:(id)arg2;
- (id)notificationCenter;
- (void)postFirstUnlockMessage:(id)arg1 forIdentifier:(id)arg2;
- (void)postNotificationsWithContext:(id)arg1;
- (void)postSharePlayNotificationForChatGUID:(id)arg1 faceTimeConversationUUID:(id)arg2 handleIdentifier:(id)arg3 localizedApplicationName:(id)arg4;
- (void)postUrgentNotificationForMessages:(id)arg1 withContext:(id)arg2;
- (void)repostNotificationsFromFirstUnlockWithContext:(id)arg1;
- (void)retractNotificationsForReadMessages:(id)arg1;
- (unsigned long long)screenTimeNotificationOptionsForChatDictionary:(id)arg1;
- (unsigned long long)screenTimeNotificationOptionsForContext:(id)arg1;
- (void)setActiveAccountAliases:(id)arg1;
- (void)setBusinessNameManager:(id)arg1;
- (void)setIncomingFilesNotificationCategory:(id)arg1;
- (void)setIncomingMessageNotificationCategory:(id)arg1;
- (void)setLastAlertedFailedMessageDate:(long long)arg1;
- (void)setLastAlertedMessageDate:(long long)arg1;
- (void)setMeContact:(id)arg1;
- (void)setMeTokens:(id)arg1;
- (void)setNotificationCenter:(id)arg1;
- (void)updatePostedNotificationsForMessages:(id)arg1 withContext:(id)arg2;

@end
