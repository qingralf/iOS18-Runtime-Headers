/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@interface IMBalloonPluginDataSource : NSObject {
    NSURL * _URLToOpenOnTapAction;
    NSString * __imMessageGUID;
    bool  _allowedByScreenTime;
    NSArray * _attachmentGUIDs;
    NSString * _bundleID;
    IMChat * _chat;
    NSArray * _consumedPayloads;
    DDScannerResult * _dataDetectedResult;
    NSString * _guidOfLastMessageInSession;
    bool  _hasInvalidatedSize;
    bool  _initialMessageIsFromMe;
    bool  _isLast;
    bool  _isShowingLatestMessageAsBreadcrumb;
    NSString * _messageGUID;
    long long  _messageIDOfLastMessageInSession;
    bool  _parentChatHasAllUnknownRecipients;
    bool  _payloadInShelf;
    NSArray * _pendingAttachmentData;
    <IMBalloonPluginDataSourceDelegate> * _pluginDataSourceDelegate;
    IMPluginPayload * _pluginPayload;
    NSString * _sessionGUID;
    bool  _showingLatestMessageAsBreadcrumb;
    IMPluginDataSourceStagingContext * _stagingContext;
    NSMutableSet * _temporaryAttachmentURLs;
    NSURL * _url;
    id /* block */  _willOpenHandler;
}

@property (nonatomic, readonly) NSURL *URLToOpenOnTapAction;
@property (nonatomic, retain) NSString *_imMessageGUID;
@property (nonatomic, readonly) NSArray *allPayloads;
@property (nonatomic) bool allowedByScreenTime;
@property (nonatomic, retain) NSArray *attachmentGUIDs;
@property (nonatomic, readonly, retain) NSString *bundleID;
@property (nonatomic, retain) IMChat *chat;
@property (nonatomic, retain) NSArray *consumedPayloads;
@property (nonatomic, retain) DDScannerResult *dataDetectedResult;
@property (nonatomic, readonly, retain) NSString *guidOfLastMessageInSession;
@property (nonatomic) bool hasInvalidatedSize;
@property (nonatomic, readonly) IMMessage *imMessage;
@property (nonatomic) bool initialMessageIsFromMe;
@property (nonatomic, readonly) bool isFromMe;
@property (setter=setLast:, nonatomic) bool isLast;
@property (nonatomic, readonly) bool isPlayed;
@property (setter=setShowingLatestMessageAsBreadcrumb:, nonatomic) bool isShowingLatestMessageAsBreadcrumb;
@property (nonatomic, retain) NSString *messageGUID;
@property (nonatomic, readonly) long long messageIDOfLastMessageInSession;
@property (nonatomic, readonly, retain) NSData *messagePayloadDataForSending;
@property (nonatomic) bool parentChatHasAllUnknownRecipients;
@property (nonatomic, retain) NSData *payload;
@property (nonatomic) bool payloadInShelf;
@property (nonatomic, retain) NSArray *pendingAttachmentData;
@property (nonatomic) <IMBalloonPluginDataSourceDelegate> *pluginDataSourceDelegate;
@property (nonatomic, retain) IMPluginPayload *pluginPayload;
@property (nonatomic, readonly) LPLinkMetadata *richLinkMetadata;
@property (nonatomic, retain) NSString *sessionGUID;
@property (getter=isShowingLatestMessageAsBreadcrumb, nonatomic, readonly) bool showingLatestMessageAsBreadcrumb;
@property (nonatomic, retain) IMPluginDataSourceStagingContext *stagingContext;
@property (nonatomic, readonly, retain) NSAttributedString *statusAttributedString;
@property (nonatomic, readonly, retain) NSString *statusString;
@property (nonatomic, readonly) bool supportsDynamicSize;
@property (nonatomic, retain) NSMutableSet *temporaryAttachmentURLs;
@property (nonatomic, retain) NSURL *url;
@property (nonatomic, readonly) bool wantsInteractiveContentView;
@property (nonatomic, readonly) bool wantsReplyFromContentView;
@property (nonatomic, readonly) bool wantsStatusItem;
@property (nonatomic, copy) id /* block */ willOpenHandler;

// Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore

+ (id)URLForDugongShareURL:(id)arg1 handle:(id)arg2 metadata:(id)arg3;
+ (id)URLForDugongShareURL:(id)arg1 handle:(id)arg2 payload:(id)arg3;
+ (id)individualPreviewSummaryForPluginPayload:(id)arg1;
+ (bool)isPayloadServiceManatee:(id)arg1;
+ (id)lastAddressedHandleIDFromChat:(id)arg1;
+ (id)previewSummary;
+ (id)previewSummaryForPluginBundle:(id)arg1;
+ (id)previewSummaryForPluginPayload:(id)arg1 withBundleID:(id)arg2 previewAttachmentURL:(id*)arg3 previewAttachmentUTI:(id*)arg4;
+ (id)replaceHandleWithContactNameInString:(id)arg1 forAccount:(id)arg2 additionalHandles:(id)arg3;
+ (bool)supportsIndividualPreviewSummaries;
+ (bool)supportsURL:(id)arg1;
+ (id)unlocalizedPreviewSummaryForPluginBundle:(id)arg1 pluginDisplayName:(id)arg2;

- (void).cxx_destruct;
- (id)URLToOpenOnTapAction;
- (void)_dataSourceDidChange;
- (id)_imMessageGUID;
- (id)_overrideURLForOpeningURL:(id)arg1;
- (void)_reloadLatestUnconsumedBreadcrumb;
- (void)_removeTemporaryAttachmentURLs;
- (id)_replaceHandleWithContactNameInString:(id)arg1;
- (bool)_senderIsSameBetweenPayload:(id)arg1 andOtherPayload:(id)arg2;
- (id)_summaryText;
- (void)_updatePayload:(id)arg1 messageID:(long long)arg2 messageGUID:(id)arg3;
- (void)_updateTemporaryAttachmentURLsForPluginPayload;
- (unsigned long long)_updateWithPluginPayload:(id)arg1 messageID:(long long)arg2 messageGUID:(id)arg3;
- (id)allPayloads;
- (bool)allowedByScreenTime;
- (id)attachmentGUIDs;
- (void)beginShowingLastConsumedBreadcrumbForOutgoingPayload:(id)arg1;
- (id)bundleID;
- (id)chat;
- (void)checkForAllowedByScreenTime;
- (void)chooseOptions;
- (id)consumedPayloads;
- (id)dataDetectedResult;
- (void)datasourceWasMovedToNewGuid:(id)arg1;
- (id)description;
- (void)didTapStatusItem;
- (void)endShowingLastConsumedBreadcrumb;
- (id)guidOfLastMessageInSession;
- (bool)hasInvalidatedSize;
- (id)imMessage;
- (id)individualPreviewAttachmentFileAndUTI:(id*)arg1;
- (id)individualPreviewSummary;
- (id)initWithMessageGUID:(id)arg1 payload:(id)arg2 dataDetectedResult:(id)arg3 url:(id)arg4;
- (id)initWithPluginPayload:(id)arg1;
- (bool)initialMessageIsFromMe;
- (bool)isDeferredSend;
- (bool)isFromMe;
- (bool)isLast;
- (bool)isPlayed;
- (bool)isShowingLatestMessageAsBreadcrumb;
- (bool)isShowingLatestMessageAsBreadcrumb;
- (void)markAsPlayed;
- (id)messageGUID;
- (long long)messageIDOfLastMessageInSession;
- (id)messagePayloadDataForSending;
- (void)needsResize;
- (id)overrideURLForOpeningURL:(id)arg1;
- (bool)parentChatHasAllUnknownRecipients;
- (id)payload;
- (void)payloadDidChange;
- (bool)payloadInShelf;
- (void)payloadWillEnterShelf;
- (void)payloadWillSendFromShelf;
- (id)pendingAttachmentData;
- (unsigned long long)playbackType;
- (void)playbackWithCompletionBlock:(id /* block */)arg1;
- (id)pluginDataSourceDelegate;
- (id)pluginPayload;
- (void)pluginPayloadDidChange:(unsigned long long)arg1;
- (void)pluginPayloadShouldSendCollaboration;
- (void)pluginPayloadShouldSendCopy;
- (id)richLinkMetadata;
- (void)sendPayload:(id)arg1;
- (void)sendPayload:(id)arg1 attachments:(id)arg2;
- (id)sessionGUID;
- (void)setAllowedByScreenTime:(bool)arg1;
- (void)setAttachmentGUIDs:(id)arg1;
- (void)setChat:(id)arg1;
- (void)setConsumedPayloads:(id)arg1;
- (void)setDataDetectedResult:(id)arg1;
- (void)setHasInvalidatedSize:(bool)arg1;
- (void)setInitialMessageIsFromMe:(bool)arg1;
- (void)setLast:(bool)arg1;
- (void)setMessageGUID:(id)arg1;
- (void)setParentChatHasAllUnknownRecipients:(bool)arg1;
- (void)setPayload:(id)arg1;
- (void)setPayload:(id)arg1 attachments:(id)arg2;
- (void)setPayloadInShelf:(bool)arg1;
- (void)setPendingAttachmentData:(id)arg1;
- (void)setPluginDataSourceDelegate:(id)arg1;
- (void)setPluginPayload:(id)arg1;
- (void)setSessionGUID:(id)arg1;
- (void)setShowingLatestMessageAsBreadcrumb:(bool)arg1;
- (void)setStagingContext:(id)arg1;
- (void)setTemporaryAttachmentURLs:(id)arg1;
- (void)setUrl:(id)arg1;
- (void)setWillOpenHandler:(id /* block */)arg1;
- (void)set_imMessageGUID:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)stagingContext;
- (id)statusAttributedString;
- (id)statusString;
- (void)statusStringNeedsUpdate;
- (void)stopPlayback;
- (bool)supportsDynamicSize;
- (id)temporaryAttachmentURLs;
- (void)thumbnailURLWithSize:(struct CGSize { double x1; double x2; })arg1 completion:(id /* block */)arg2;
- (void)updatePayload:(id)arg1;
- (void)updatePayload:(id)arg1 attachments:(id)arg2;
- (void)updatePayloadForShelfAnimation:(id)arg1;
- (id)url;
- (bool)wantsReplyFromContentView;
- (bool)wantsStatusItem;
- (id /* block */)willOpenHandler;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

- (bool)wantsInteractiveContentView;

@end
