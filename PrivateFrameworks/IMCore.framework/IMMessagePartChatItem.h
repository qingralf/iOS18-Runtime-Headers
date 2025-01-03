/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@interface IMMessagePartChatItem : IMMessageChatItem <IMVisibleAssociatedMessageHost> {
    bool  _allowlistedRichLinkSender;
    bool  _chatInScrutinyMode;
    NSAttributedString * _fallbackCorruptText;
    long long  _index;
    bool  _isBusiness;
    IMMessagePartHighlightChatItem * _messageHighlightChatItem;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _messagePartRange;
    bool  _pendingSatelliteSend;
    unsigned long long  _replyCount;
    bool  _stewie;
    long long  _stewieConversationID;
    NSArray * _suggestedActionsList;
    bool  _supportsSuggestedActionsMenu;
    long long  _syndicationBehavior;
    long long  _syndicationStatus;
    long long  _syndicationType;
    NSAttributedString * _text;
    NSArray * _visibleAssociatedMessageChatItems;
}

@property (getter=isAllowlistedRichLinkSender, nonatomic) bool allowlistedRichLinkSender;
@property (nonatomic) bool chatInScrutinyMode;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSAttributedString *fallbackCorruptText;
@property (nonatomic, readonly) bool hasSubject;
@property (readonly) unsigned long long hash;
@property (setter=_setIndex:, nonatomic) long long index;
@property (nonatomic) bool isBusiness;
@property (nonatomic, readonly) bool isCorrupt;
@property (nonatomic, readonly) bool isEditedMessagePart;
@property (nonatomic, readonly) bool isFailedEditMessagePart;
@property (nonatomic, readonly) bool isFailedRetractMessagePart;
@property (nonatomic, readonly) bool isRetractedMessagePart;
@property (nonatomic, readonly, copy) IMMessagePartHighlightChatItem *messageHighlightChatItem;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } messagePartRange;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } originalMessagePartRange;
@property (getter=isPendingSatelliteSend, nonatomic) bool pendingSatelliteSend;
@property (nonatomic) unsigned long long replyCount;
@property (nonatomic, readonly) bool requiresCriticalMessagingAPIAttribution;
@property (nonatomic, readonly) bool requiresFaceTimeAttribution;
@property (nonatomic, readonly) bool requiresSiriAttribution;
@property (nonatomic, readonly) unsigned long long scheduleState;
@property (nonatomic, readonly) unsigned long long scheduleType;
@property (getter=isStewie, nonatomic) bool stewie;
@property (nonatomic) long long stewieConversationID;
@property (nonatomic, readonly) NSArray *suggestedActionsList;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsSuggestedActionsMenu;
@property (nonatomic, readonly) long long syndicationBehavior;
@property (nonatomic, readonly) long long syndicationStatus;
@property (nonatomic, readonly) long long syndicationType;
@property (nonatomic, readonly, copy) NSAttributedString *text;
@property (nonatomic, readonly, copy) NSString *threadIdentifier;
@property (nonatomic, readonly, copy) NSString *threadIdentifierForTapback;
@property (nonatomic, readonly) IMMessageItem *threadOriginator;
@property (setter=_setVisibleAssociatedMessageChatItems:, nonatomic, retain) NSArray *visibleAssociatedMessageChatItems;

+ (id)_additionalSupportedRichLinkSchemesForAllowlistedSender:(id)arg1;
+ (long long)_attachmentStackAggregationThreshold;
+ (id)_defaultRichLinkAllowListExceptions;
+ (id)_defaultRichLinkAllowlist;
+ (id)_guidForMessage:(id)arg1 url:(id)arg2;
+ (bool)_isAllowlistedRichLinkSender:(id)arg1 isBusiness:(bool)arg2;
+ (bool)_isAllowlistedURL:(id)arg1;
+ (bool)_isPathExceptionToAllowlistedURL:(id)arg1;
+ (id)_messageItemWithPartsDeleted:(id)arg1 fromMessageItem:(id)arg2 indexesOfItemsDeleted:(id*)arg3 indexToRangeMapping:(id*)arg4;
+ (id)_newAudioMessagePartsForMessageItem:(id)arg1 text:(id)arg2 chatContext:(id)arg3 retractedPartIndexes:(id)arg4 singlePart:(id)arg5;
+ (id)_newDetonatedMessagePartsForMessageItem:(id)arg1 chatContext:(id)arg2 photosPluginPayload:(id)arg3;
+ (id)_newMessagePartArrayForMessageItem:(id)arg1;
+ (id)_newMessagePartsForMessageItem:(id)arg1;
+ (id)_newMessagePartsForMessageItem:(id)arg1 chatContext:(id)arg2;
+ (id)_newMessagePartsForMessageItem:(id)arg1 chatContext:(id)arg2 photosPluginPayload:(id)arg3;
+ (id)_processChatItemsForRichActions:(id)arg1;
+ (id)_retractedMessagePartsForMessage:(id)arg1 parts:(id)arg2 retractedPartIndexes:(id)arg3;
+ (id)_richLinkRangesForMessageText:(id)arg1 sender:(id)arg2 isAllowlistedRichLinkSender:(bool)arg3;
+ (bool)_shouldAggregateForTransferType:(id)arg1;
+ (id)_singleChatItemForDeviceActionMessage:(id)arg1 context:(id)arg2 pluginPayload:(id)arg3;
+ (bool)_supportsRichLinkURL:(id)arg1 forSender:(id)arg2 isAllowlistedRichLinkSender:(bool)arg3;
+ (id)aggregatePartsForParts:(id)arg1 forMessage:(id)arg2 context:(id)arg3 text:(id)arg4;
+ (id)chatItemGUIDForMessageGUID:(id)arg1 partIndex:(long long)arg2;
+ (bool)isChatBotContentOnly:(id)arg1;
+ (bool)isSiriEnabled;
+ (id)messageBodyStringForAttachmentGUIDs:(id)arg1;
+ (id)messageBodyStringForCMMMessage:(id)arg1;
+ (id)richCardsChatItemsForMessageItem:(id)arg1 text:(id)arg2;
+ (id)standaloneChipListChatItemForMessageItem:(id)arg1 text:(id)arg2;
+ (id)suggestedActionsMessagePartChatItemForMessageItem:(id)arg1 attributes:(id)arg2;
+ (id)suggestedRepliesMessagePartChatItemForMessageItem:(id)arg1 attributes:(id)arg2;

- (void).cxx_destruct;
- (bool)_canDeleteForCurrentScheduleState;
- (id)_initWithItem:(id)arg1 index:(long long)arg2 messagePartRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (id)_initWithItem:(id)arg1 index:(long long)arg2 messagePartRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 syndicationBehavior:(long long)arg4;
- (id)_initWithItem:(id)arg1 text:(id)arg2 index:(long long)arg3 messagePartRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4 visibleAssociatedMessageChatItems:(id)arg5;
- (void)_setIndex:(long long)arg1;
- (void)_setVisibleAssociatedMessageChatItems:(id)arg1;
- (id)_visibleAssociatedChatItemsByFlatteningAggregateChatItems;
- (bool)canDelete;
- (bool)canRetract;
- (bool)chatInScrutinyMode;
- (unsigned char)contentType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)extractAndSetChipListFrom:(id)arg1;
- (id)fallbackCorruptText;
- (bool)hasSubject;
- (long long)index;
- (bool)isAllowlistedRichLinkSender;
- (bool)isBusiness;
- (bool)isCorrupt;
- (bool)isEditedMessagePart;
- (bool)isFailedEditMessagePart;
- (bool)isFailedRetractMessagePart;
- (bool)isHighlighted;
- (bool)isPendingSatelliteSend;
- (bool)isRetractedMessagePart;
- (bool)isStewie;
- (id)messageHighlightChatItem;
- (long long)messagePartAttributeName;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })messagePartRange;
- (id)messageSummaryInfo;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })originalMessagePartRange;
- (id)replyContextPreviewChatItemForReply:(id)arg1 chatContext:(id)arg2;
- (unsigned long long)replyCount;
- (bool)requiresCriticalMessagingAPIAttribution;
- (bool)requiresFaceTimeAttribution;
- (bool)requiresSiriAttribution;
- (unsigned long long)scheduleState;
- (unsigned long long)scheduleType;
- (void)setAllowlistedRichLinkSender:(bool)arg1;
- (void)setChatInScrutinyMode:(bool)arg1;
- (void)setChipListFromText:(id)arg1;
- (void)setIsBusiness:(bool)arg1;
- (void)setIsStewie:(bool)arg1;
- (void)setMessagePartRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setPendingSatelliteSend:(bool)arg1;
- (void)setReplyCount:(unsigned long long)arg1;
- (void)setStewie:(bool)arg1;
- (void)setStewieConversationID:(long long)arg1;
- (void)setSuggestedActionsList:(id)arg1;
- (long long)stewieConversationID;
- (id)suggestedActionsList;
- (bool)supportsSuggestedActionsMenu;
- (long long)syndicationBehavior;
- (long long)syndicationStatus;
- (long long)syndicationType;
- (id)text;
- (id)threadIdentifier;
- (id)threadIdentifierForTapback;
- (id)threadOriginator;
- (id)transcriptText;
- (id)visibleAssociatedMessageChatItems;

@end
