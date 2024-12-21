/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKMessagePartChatItem : CKBalloonChatItem {
    BOOL  _cachedColor;
    CKMessagePartHighlightChatItem * _messageHighlightChatItem;
    NSArray * _suggestedActionsList;
    NSArray * _visibleAssociatedMessageChatItems;
}

@property (nonatomic, readonly) BOOL balloonStyle;
@property (nonatomic) BOOL cachedColor;
@property (nonatomic, readonly) BOOL color;
@property (nonatomic, readonly) NSItemProvider *dragItemProvider;
@property (nonatomic, readonly) bool hasMessageAcknowledgment;
@property (nonatomic, readonly) bool hasStickers;
@property (nonatomic, readonly) bool hasVisibleAssociatedMessageItems;
@property (nonatomic, readonly) long long index;
@property (nonatomic, readonly) bool isBlackholed;
@property (nonatomic, readonly) bool isCorrupt;
@property (nonatomic, readonly) bool isReply;
@property (nonatomic, readonly) bool isReplyContextPreview;
@property (nonatomic, readonly) IMMessage *message;
@property (nonatomic, readonly, copy) NSArray *messageAcknowledgments;
@property (nonatomic, readonly) CKMessagePartHighlightChatItem *messageHighlightChatItem;
@property (nonatomic, readonly) IMMessageItem *messageItem;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } messagePartRange;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } originalMessagePartRange;
@property (nonatomic, readonly) NSArray *pasteboardItemProviders;
@property (nonatomic, readonly) unsigned long long scheduleState;
@property (nonatomic, readonly) unsigned long long scheduleType;
@property (nonatomic, readonly) NSString *serviceName;
@property (nonatomic, readonly) long long stewieConversationID;
@property (nonatomic, readonly) struct CKColor_t { double x1; double x2; double x3; double x4; } strokeColor;
@property (nonatomic, readonly) NSArray *suggestedActionsList;
@property (nonatomic, readonly) CKAggregateAcknowledgmentChatItem *tapbacksChatItem;
@property (nonatomic, readonly) NSString *threadIdentifier;
@property (nonatomic, readonly) IMMessageItem *threadOriginator;
@property (nonatomic, readonly) NSArray *visibleAssociatedMessageChatItems;

- (void).cxx_destruct;
- (bool)_isSURFRelatedMessage;
- (void)_setVisibleAssociatedMessageChatItems:(id)arg1;
- (id)aggregateAcknowledgmentChatItem;
- (BOOL)balloonStyle;
- (BOOL)cachedColor;
- (bool)canAttachStickers;
- (bool)canCopy;
- (bool)canForward;
- (bool)canInlineReply;
- (bool)canSendAsTextMessage;
- (bool)canSendAsTextMessageOverSatellite;
- (bool)canSendTapbacks;
- (BOOL)color;
- (id)compositionWithContext:(id)arg1;
- (void)configureBalloonView:(id)arg1;
- (id)description;
- (id)dragItemProvider;
- (bool)failed;
- (id)fileURLForAttachment;
- (bool)hasMessageAcknowledgment;
- (bool)hasStickers;
- (bool)hasVisibleAssociatedMessageItems;
- (long long)index;
- (id)init;
- (id)initWithIMChatItem:(id)arg1 maxWidth:(double)arg2;
- (bool)isBlackholed;
- (bool)isCorrupt;
- (bool)isFromMe;
- (bool)isReply;
- (bool)isReplyContextPreview;
- (id)message;
- (id)messageAcknowledgments;
- (id)messageHighlightChatItem;
- (id)messageItem;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })messagePartRange;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })originalMessagePartRange;
- (id)pasteboardItemProviders;
- (id)rtfDocumentItemsWithFormatString:(id)arg1 selectedTextRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (unsigned long long)scheduleState;
- (unsigned long long)scheduleType;
- (long long)selectedType;
- (id)sender;
- (id)serviceName;
- (void)setCachedColor:(BOOL)arg1;
- (long long)stewieConversationID;
- (bool)stickersSnapToPoint;
- (struct CKColor_t { double x1; double x2; double x3; double x4; })strokeColor;
- (id)suggestedActionsList;
- (id)tapbackActionButtonImageName;
- (id)tapbacksChatItem;
- (id)threadIdentifier;
- (id)threadOriginator;
- (id)time;
- (double)timeIntervalSinceMessageSent;
- (id)visibleAssociatedMessageChatItems;
- (id)votingCounts;

@end