/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICAttachmentSystemPaperModel : ICAttachmentPaperBundleModel

@property (nonatomic) bool hasDeepLink;
@property (nonatomic, readonly) UIImage *imageForActivityItem;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } paperContentBoundsHint;

// Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared

+ (id)contentInfoTextWithAttachmentCount:(unsigned long long)arg1;

- (id)account;
- (void)addMergeableDataToCloudKitRecord:(id)arg1 approach:(long long)arg2 mergeableFieldState:(id)arg3;
- (id)additionalIndexableTextContentInNote;
- (id)attributesForSharingHTMLWithTagName:(id*)arg1 textContent:(id*)arg2;
- (bool)canConvertToHTMLForSharing;
- (id)correctedHardlinkURLFileExtensionForExtension:(id)arg1;
- (void)fixupMetadataAndMinimumSupportedNotesVersion;
- (bool)hasDeepLink;
- (bool)isIncludedInGenericAttachmentCount;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })paperContentBoundsHint;
- (bool)preferLocalPreviewImages;
- (bool)previewsSupportMultipleAppearances;
- (id)searchableTextContentInNote;
- (void)setHasDeepLink:(bool)arg1;
- (void)setPaperContentBoundsHint:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)shouldShowInContentInfoText;
- (bool)shouldSyncPreviewImageToCloud:(id)arg1;
- (void)updateAfterLoadWithInlineAttachmentIdentifierMap:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NotesEditor.framework/NotesEditor

+ (id)systemPaperTextFindingQueue;

- (void)textFindingResultsMatchingString:(id)arg1 textView:(id)arg2 ignoreCase:(bool)arg3 wholeWords:(bool)arg4 startsWith:(bool)arg5 usePattern:(bool)arg6 completion:(id /* block */)arg7;

// Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI

+ (id)generateEmptyImage;
+ (id)generateImageForAttachment:(id)arg1 fullResolution:(bool)arg2 appearanceInfo:(id)arg3;
+ (bool)generatePreviewsForAttachment:(id)arg1 paperIdentifier:(id)arg2;
+ (id)previewImageForAttachment:(id)arg1 fullImage:(struct CGImage { }*)arg2 scale:(double)arg3 appearanceInfo:(id)arg4;

- (id)activityItem;
- (id)activityItems;
- (void)attachmentModelDealloc;
- (void)drawPreviewInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)generatePreviewsDuringCloudActivity;
- (bool)generatePreviewsInOperation:(id)arg1;
- (id)imageForActivityItem;
- (bool)needToGeneratePreviews;

@end
