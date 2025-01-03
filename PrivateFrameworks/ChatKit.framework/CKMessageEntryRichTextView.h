/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKMessageEntryRichTextView : CKMessageEntryTextView <ChatKit.CKInlineMediaTextAttachmentDelegate, ChatKit.CKLinkPreviewTextAttachmentDelegate, NSTextStorageDelegate, UIGestureRecognizerDelegate> {
    BOOL  _balloonColor;
    NSMutableDictionary * _composeImages;
    bool  _disableAttachments;
    bool  _disableKeyboardStickers;
    NSMutableDictionary * _embeddedRichLinkConfigurations;
    NSMutableDictionary * _mediaObjects;
    NSMutableDictionary * _pluginDisplayContainers;
}

@property (nonatomic) BOOL balloonColor;
@property (nonatomic, retain) NSMutableDictionary *composeImages;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <CKMessageEntryRichTextViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool disableAttachments;
@property (nonatomic) bool disableKeyboardStickers;
@property (nonatomic, retain) NSMutableDictionary *embeddedRichLinkConfigurations;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableDictionary *mediaObjects;
@property (nonatomic, retain) NSMutableDictionary *pluginDisplayContainers;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_adaptiveImageGlyphWasGeneratedNotification:(id)arg1;
- (void)_ck_beginPasteOperationAndPasteAsRichText:(bool)arg1;
- (id)_compositionFromSelection;
- (id)_messagesReplacementTextForWritingToolText:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_rangeFromUITextRange:(id)arg1;
- (bool)_reconfigureWithLayoutManager:(id)arg1 triggeredByLayoutManagerAccess:(bool)arg2 triggeringSelector:(SEL)arg3;
- (void)_showCustomInputView;
- (void)_updateTextContentForRichLinkInteractionType:(long long)arg1 onTextAttachment:(id)arg2;
- (id)adaptiveImageGlyphForTransferGUID:(id)arg1;
- (id)attributedTextForCompositionText:(id)arg1;
- (BOOL)balloonColor;
- (id)cachedMediaObjectForTransferGUID:(id)arg1;
- (id)cachedPluginDisplayContainerForGUID:(id)arg1;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (bool)canPerformDictationAction:(id)arg1;
- (bool)canResignFirstResponder;
- (id)composeImageForTransferGUID:(id)arg1 traitCollection:(id)arg2;
- (id)composeImages;
- (id)compositionText;
- (void)copy:(id)arg1;
- (void)correctedTypedText:(id)arg1 rangeOfReplacement:(id)arg2;
- (void)cut:(id)arg1;
- (void)dealloc;
- (bool)disableAttachments;
- (bool)disableKeyboardStickers;
- (id)embeddedRichLinkConfigurations;
- (id)existingMediaObjectMatchingAdaptiveImageGlyph:(id)arg1;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)handlePastedString:(id)arg1 toRange:(id)arg2;
- (void)handleTapOrLongPress:(id)arg1;
- (bool)handleTapOrLongPressOnMediaObjectForTransferGUID:(id)arg1 characterIndex:(long long)arg2 location:(struct CGPoint { double x1; double x2; })arg3 touchedCharacterFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 usingTextLayoutManager:(bool)arg2 shouldDisableAttachments:(bool)arg3 shouldDisableKeyboardStickers:(bool)arg4;
- (void)inlineMediaViewTextAttachmentDidRequestGenerativeInteraction:(id)arg1;
- (void)insertAdaptiveImageGlyph:(id)arg1 replacementRange:(id)arg2;
- (void)insertAdaptiveImageGlyph:(id)arg1 withMediaObject:(id)arg2;
- (bool)isSingleLineDocument;
- (void)linkPreviewTextAttachment:(id)arg1 didAddPluginEntryViewControllerToViewHierarchy:(id)arg2;
- (void)linkPreviewTextAttachment:(id)arg1 didSelectInteractionType:(long long)arg2;
- (void)linkPreviewTextAttachment:(id)arg1 willAddPluginEntryViewControllerToViewHierarchy:(id)arg2;
- (void)linkPreviewTextAttachmentDidDismissCustomizationPicker:(id)arg1;
- (void)linkPreviewTextAttachmentDidPresentCustomizationPicker:(id)arg1;
- (void)linkPreviewTextAttachmentDidUpdateTextAttachmentSize:(id)arg1;
- (void)linkPreviewTextAttachmentWillDismissCustomizationPicker:(id)arg1;
- (void)linkPreviewTextAttachmentWillPresentCustomizationPicker:(id)arg1;
- (double)maxWidthForLinkPreviewTextAttachment:(id)arg1;
- (id)mediaObjectForAdaptiveImageGlyph:(id)arg1;
- (id)mediaObjects;
- (void)paste:(id)arg1;
- (void)pasteAndMatchStyle:(id)arg1;
- (id)pasteConfiguration;
- (id)pasteboard;
- (id)pluginDisplayContainers;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)previewDidChange:(id)arg1;
- (void)replaceTextInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withLinks:(id)arg2;
- (void)setAttributedText:(id)arg1;
- (void)setBalloonColor:(BOOL)arg1;
- (void)setComposeImages:(id)arg1;
- (void)setCompositionText:(id)arg1;
- (void)setDisableAttachments:(bool)arg1;
- (void)setDisableKeyboardStickers:(bool)arg1;
- (void)setEmbeddedRichLinkConfigurations:(id)arg1;
- (void)setMediaObjects:(id)arg1;
- (void)setPluginDisplayContainers:(id)arg1;
- (bool)shouldPreserveAdaptiveImageGlyphsInCompositionText;
- (bool)supportsAdaptiveImageGlyph;
- (bool)supportsCustomizationForLinkPreviewTextAttachment:(id)arg1;
- (id)targetForAction:(SEL)arg1 withSender:(id)arg2;
- (void)textStorage:(id)arg1 willProcessEditing:(unsigned long long)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 changeInLength:(long long)arg4;
- (void)updateContentsOfFileTransferPreviews;
- (void)validateCommand:(id)arg1;
- (void)writingToolsCoordinator:(id)arg1 replaceRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 inContext:(id)arg3 proposedText:(id)arg4 reason:(long long)arg5 animationParameters:(id)arg6 completion:(id /* block */)arg7;

@end
