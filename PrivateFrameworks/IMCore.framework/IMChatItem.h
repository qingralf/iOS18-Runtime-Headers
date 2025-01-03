/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@interface IMChatItem : NSObject <NSCopying> {
    NSString * _commSafetyTransferGUID;
    long long  _fileTransferReloadStatus;
    IMItem * _item;
}

@property (nonatomic, readonly, retain) NSString *balloonBundleID;
@property (nonatomic, readonly) bool canDelete;
@property (nonatomic, readonly) bool canEditMessageText;
@property (nonatomic, readonly) bool canReply;
@property (nonatomic, readonly) bool canRetract;
@property (nonatomic, readonly) NSString *commSafetyTransferGUID;
@property (nonatomic, readonly) long long fileTransferReloadStatus;
@property (getter=isHighlighted, nonatomic, readonly) bool highlighted;
@property (nonatomic, retain) IMItem *item;
@property (nonatomic, readonly) NSString *itemGUID;
@property (nonatomic, readonly) bool supportsCommunicationSafety;
@property (nonatomic, readonly) long long syndicationBehavior;
@property (nonatomic, readonly) long long syndicationType;
@property (nonatomic, readonly, copy) NSString *threadIdentifier;
@property (nonatomic, readonly) bool wasDetonated;

- (void).cxx_destruct;
- (id)_initWithItem:(id)arg1;
- (id)_item;
- (id)_parentItem;
- (void)_setTimeAdded:(id)arg1;
- (id)_timeAdded;
- (id)_timeStale;
- (id)balloonBundleID;
- (bool)canDelete;
- (bool)canEditMessageText;
- (bool)canReply;
- (bool)canRetract;
- (id)commSafetyTransferGUID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (long long)fileTransferReloadStatus;
- (bool)isEditedMessageHistory;
- (bool)isHighlighted;
- (bool)isReplyContextPreview;
- (id)item;
- (id)itemGUID;
- (bool)itemIsReply;
- (bool)itemIsReplyContextPreview;
- (bool)itemIsReplyCount;
- (bool)itemIsThreadOriginator;
- (bool)itemIsThreadOriginatorWithThreadIdentifier:(id*)arg1;
- (void)setItem:(id)arg1;
- (void)setNeedsReloadForTransferStatusChangeWithType:(long long)arg1;
- (bool)supportsCommunicationSafety;
- (long long)syndicationBehavior;
- (long long)syndicationType;
- (id)threadGroupIdentifier;
- (id)threadIdentifier;
- (bool)wasDetonated;

@end
