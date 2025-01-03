/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXContentSyndicationAttributionInfo : NSObject {
    PHAsset * _asset;
    NSString * _axDescriptionForSyndicationContactImage;
    NSString * _axDescriptionForSyndicationLoadingIndicator;
    NSString * _axDescriptionForSyndicationReplyButton;
    <PXContentSyndicationAttributionInfoChangeDelegate> * _changeDelegate;
    CNContact * _contact;
    bool  _hasSyndicationAttributionInfo;
    SLHighlight * _highlight;
    PXContentSyndicationPhotoKitSocialLayerHighlightProvider * _highlightProvider;
    NSString * _receivingGroupDisplayName;
    NSAttributedString * _savedFromTitle;
    NSString * _senderAppName;
    UIImage * _senderThumbnailImage;
    NSString * _syndicationAttributionIdentifier;
    bool  _syndicationAttributionInfoIsLoading;
    NSString * _syndicationSenderDisplayName;
    NSAttributedString * _syndicationSharedWithInMessagesAttributedTitle;
}

@property (nonatomic, retain) PHAsset *asset;
@property (nonatomic, copy) NSString *axDescriptionForSyndicationContactImage;
@property (nonatomic, readonly, copy) NSString *axDescriptionForSyndicationLoadingIndicator;
@property (nonatomic, copy) NSString *axDescriptionForSyndicationReplyButton;
@property (nonatomic) <PXContentSyndicationAttributionInfoChangeDelegate> *changeDelegate;
@property (nonatomic, retain) CNContact *contact;
@property (nonatomic) bool hasSyndicationAttributionInfo;
@property (nonatomic, retain) SLHighlight *highlight;
@property (nonatomic, retain) PXContentSyndicationPhotoKitSocialLayerHighlightProvider *highlightProvider;
@property (nonatomic, copy) NSString *receivingGroupDisplayName;
@property (nonatomic, copy) NSAttributedString *savedFromTitle;
@property (nonatomic, copy) NSString *senderAppName;
@property (nonatomic, retain) UIImage *senderThumbnailImage;
@property (nonatomic, retain) NSString *syndicationAttributionIdentifier;
@property (nonatomic) bool syndicationAttributionInfoIsLoading;
@property (nonatomic, copy) NSString *syndicationSenderDisplayName;
@property (nonatomic, copy) NSAttributedString *syndicationSharedWithInMessagesAttributedTitle;

+ (id)_applyAttributesToTitle:(id)arg1;
+ (id)_displayNameFont;
+ (id)_nameStringForContact:(id)arg1;
+ (id)_primaryFont;
+ (id)_sharedContactFetchSerialQueue;
+ (id)appIconFetchQueue;

- (void).cxx_destruct;
- (void)_contactChangeDidOccur:(id)arg1;
- (void)_fetchContactWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)_handleAttributionChanges;
- (void)_handleContactFetchCompletion:(id)arg1 error:(id)arg2 oldSyndicationSenderDisplayName:(id)arg3 oldSyndicationSharedWithTitle:(id)arg4 oldImageData:(id)arg5;
- (void)_invalidateAttributedStrings;
- (id)_sfaAttributes;
- (void)_updateAppNameColorForAttributedString:(id)arg1 defaultFontValue:(id)arg2;
- (id)asset;
- (id)axDescriptionForSyndicationContactImage;
- (id)axDescriptionForSyndicationLoadingIndicator;
- (id)axDescriptionForSyndicationReplyButton;
- (id)changeDelegate;
- (id)contact;
- (void)contentSizeCategoryDidChangeNotification:(id)arg1;
- (void)createSyndicatedAppIconWithSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 completion:(id /* block */)arg3;
- (void)fetchAppIconThumbnailImageWithCompletion:(id /* block */)arg1;
- (bool)hasSyndicationAttributionInfo;
- (id)highlight;
- (id)highlightProvider;
- (id)initWithAsset:(id)arg1;
- (id)receivingGroupDisplayName;
- (id)savedFromTitle;
- (id)senderAppName;
- (id)senderThumbnailImage;
- (void)setAsset:(id)arg1;
- (void)setAxDescriptionForSyndicationContactImage:(id)arg1;
- (void)setAxDescriptionForSyndicationReplyButton:(id)arg1;
- (void)setChangeDelegate:(id)arg1;
- (void)setContact:(id)arg1;
- (void)setHasSyndicationAttributionInfo:(bool)arg1;
- (void)setHighlight:(id)arg1;
- (void)setHighlightProvider:(id)arg1;
- (void)setReceivingGroupDisplayName:(id)arg1;
- (void)setSavedFromTitle:(id)arg1;
- (void)setSenderAppName:(id)arg1;
- (void)setSenderThumbnailImage:(id)arg1;
- (void)setSyndicationAttributionIdentifier:(id)arg1;
- (void)setSyndicationAttributionInfoIsLoading:(bool)arg1;
- (void)setSyndicationSenderDisplayName:(id)arg1;
- (void)setSyndicationSharedWithInMessagesAttributedTitle:(id)arg1;
- (id)syndicationAttributionIdentifier;
- (bool)syndicationAttributionInfoIsLoading;
- (id)syndicationSenderDisplayName;
- (id)syndicationSharedWithInMessagesAttributedTitle;

@end
