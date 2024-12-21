/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKAggregateAcknowledgmentChatItem : CKAssociatedMessageChatItem {
    long long  _latestAcknowledgmentType;
    IMTapback * _latestTapback;
    NSArray * _mediaObjects;
    bool  _overrideBalloonOrientationForPhotoGrid;
    bool  _parentIsOrganicLayout;
}

@property (readonly) UIColor *acknowledgmentImageColor;
@property (readonly, copy) NSString *acknowledgmentImageName;
@property (nonatomic, readonly, copy) NSArray *acknowledgments;
@property (nonatomic, readonly) BOOL balloonOrientation;
@property (readonly) Class balloonViewClass;
@property (nonatomic, readonly) long long fromMeAcknowledgmentType;
@property (nonatomic, readonly) bool includesFromMe;
@property (nonatomic, readonly) bool includesMultiple;
@property (nonatomic, readonly) long long latestAcknowledgmentType;
@property (nonatomic, readonly) bool latestIsFromMe;
@property (nonatomic, readonly) IMTapback *latestTapback;
@property (nonatomic, retain) NSArray *mediaObjects;
@property (nonatomic) bool overrideBalloonOrientationForPhotoGrid;
@property (nonatomic) bool parentIsOrganicLayout;
@property (nonatomic, readonly) IMMessageAcknowledgmentChatItem *sentTapbackChatItem;
@property (nonatomic, readonly, copy) NSString *serviceName;

- (void).cxx_destruct;
- (id)_imAggregateAcknowledgmentChatItem;
- (id)acknowledgmentImageColor;
- (id)acknowledgmentImageName;
- (id)acknowledgments;
- (id)associatedChatItemGUID;
- (BOOL)balloonOrientation;
- (Class)balloonViewClass;
- (Class)cellClass;
- (bool)containsTransferGUID:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInsets;
- (long long)fromMeAcknowledgmentType;
- (bool)includesFromMe;
- (bool)includesMultiple;
- (id)initWithIMChatItem:(id)arg1 maxWidth:(double)arg2;
- (bool)isCommSafetySensitiveNotViewable;
- (bool)isEqual:(id)arg1;
- (long long)latestAcknowledgmentType;
- (bool)latestIsFromMe;
- (id)latestTapback;
- (struct CGSize { double x1; double x2; })loadSizeThatFits:(struct CGSize { double x1; double x2; })arg1 textAlignmentInsets:(out struct UIEdgeInsets { double x1; double x2; double x3; double x4; }*)arg2;
- (id)mediaObjects;
- (bool)overrideBalloonOrientationForPhotoGrid;
- (bool)parentIsOrganicLayout;
- (id)sentTapbackChatItem;
- (id)serviceName;
- (void)setMediaObjects:(id)arg1;
- (void)setOverrideBalloonOrientationForPhotoGrid:(bool)arg1;
- (void)setParentIsOrganicLayout:(bool)arg1;
- (BOOL)transcriptOrientation;

@end