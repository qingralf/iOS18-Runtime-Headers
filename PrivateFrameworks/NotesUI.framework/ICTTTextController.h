/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

@interface ICTTTextController : NSObject <ICTTTextStorageStyler> {
    double  _bodyStyleFontSizeThreshold;
    unsigned long long  _defaultTabInterval;
    bool  _disableSingleLineA;
    double  _headingStyleFontSizeThreshold;
    bool  _inPreviewMode;
    NSDictionary * _indentForHeadIndent;
    bool  _isForPrint;
    bool  _isForSiri;
    bool  _keepNSTextTableAttributes;
    bool  _showsEditorDebugTooltips;
    ICTTZoomController * _zoomController;
}

@property (nonatomic) double bodyStyleFontSizeThreshold;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) unsigned long long defaultTabInterval;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool disableAddingExtraLinesIfNeeded; /* unknown property attribute: ? */
@property (nonatomic) bool disableSingleLineA;
@property (readonly) unsigned long long hash;
@property (nonatomic) double headingStyleFontSizeThreshold;
@property (getter=isInPreviewMode, nonatomic) bool inPreviewMode;
@property (nonatomic, retain) NSDictionary *indentForHeadIndent;
@property (nonatomic) bool isForPrint;
@property (nonatomic) bool isForSiri;
@property (nonatomic) bool keepNSTextTableAttributes;
@property (nonatomic) bool showsEditorDebugTooltips;
@property (readonly) Class superclass;
@property (nonatomic, retain) ICTTZoomController *zoomController;

+ (double)attachmentParagraphSpacing;
+ (double)attachmentParagraphSpacingBefore;
+ (double)bodyParagraphSpacing;
+ (double)bodyParagraphSpacingBefore;
+ (id)preferredFontForICTTTextStyle:(unsigned int)arg1;
+ (double)superscriptScaleFactor;

- (void).cxx_destruct;
- (void)addBIToStyle:(id)arg1;
- (id)bodyAttributes;
- (id)bodyAttributesWithContentSizeCategory:(id)arg1;
- (double)bodyStyleFontSizeThreshold;
- (id)captionAttributes;
- (id)captionAttributesWithContentSizeCategory:(id)arg1;
- (id)checklistAttributes;
- (id)checklistAttributesWithContentSizeCategory:(id)arg1;
- (id)copyAttribute:(id)arg1 fromAttributes:(id)arg2 toAttributes:(id)arg3;
- (id)copyNSParagraphStylefromAttributes:(id)arg1 toAttributes:(id)arg2;
- (id)defaultListAttributes;
- (id)defaultListAttributesWithContentSizeCategory:(id)arg1;
- (id)defaultParagraphStyle;
- (unsigned long long)defaultTabInterval;
- (unsigned long long)defaultTabIntervalInAttributedString:(id)arg1;
- (id)defaultTypingAttributesForEmptyDocument;
- (bool)disableSingleLineA;
- (id)filterStyleAttributes:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)fixModelAttributesInTextStorage:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)fixedWidthAttributes;
- (id)fixedWidthAttributesWithContentSizeCategory:(id)arg1;
- (void)guessFontSizeThresholdsForTTStylesInAttributedString:(id)arg1;
- (id)headingAttributes;
- (id)headingAttributesWithContentSizeCategory:(id)arg1;
- (double)headingStyleFontSizeThreshold;
- (id)indentForHeadIndent;
- (id)indentsForIndividualParagraphHeadIndentsInAttributedString:(id)arg1;
- (id)init;
- (bool)isForPrint;
- (bool)isForSiri;
- (bool)isInPreviewMode;
- (bool)keepNSTextTableAttributes;
- (id)modelForStyleAttributes:(id)arg1 filterAttributes:(bool)arg2;
- (id)modelForStyleAttributes:(id)arg1 filterAttributes:(bool)arg2 pasteboardAttributedString:(id)arg3;
- (id)preferredAttributesForICTTTextStyle:(unsigned int)arg1;
- (void)prepareIndentInformationInAttributedString:(id)arg1;
- (id)referenceAttributesForLocation:(unsigned long long)arg1 textStorage:(id)arg2 currentParagraphStart:(unsigned long long)arg3;
- (id)removeAttribute:(id)arg1 ifInconsistentAtLocation:(unsigned long long)arg2 inTextStorage:(id)arg3 forNewTypingAttributes:(id)arg4;
- (void)resetGuessedFontSizes;
- (void)resetIndentInformation;
- (void)setBodyStyleFontSizeThreshold:(double)arg1;
- (void)setDefaultTabInterval:(unsigned long long)arg1;
- (void)setDisableSingleLineA:(bool)arg1;
- (void)setHeadingStyleFontSizeThreshold:(double)arg1;
- (void)setInPreviewMode:(bool)arg1;
- (void)setIndentForHeadIndent:(id)arg1;
- (void)setIsForPrint:(bool)arg1;
- (void)setIsForSiri:(bool)arg1;
- (void)setKeepNSTextTableAttributes:(bool)arg1;
- (void)setShowsEditorDebugTooltips:(bool)arg1;
- (void)setZoomController:(id)arg1;
- (bool)showsEditorDebugTooltips;
- (id)strippedTypingAttributesAtStartOfParagraph:(id)arg1 atTheEndOfDocument:(bool)arg2 isTyping:(bool)arg3;
- (void)styleFontInAttributedString:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 contentSizeCategory:(id)arg3;
- (void)styleFontInTextStorage:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)styleForModelAttributes:(id)arg1;
- (id)styleForModelAttributes:(id)arg1 contentSizeCategory:(id)arg2;
- (void)styleListsAndIndentsInAttributedString:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)styleText:(id)arg1 inExactRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 fixModelAttributes:(bool)arg3;
- (void)styleText:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 fixModelAttributes:(bool)arg3;
- (id)subheadingAttributes;
- (id)subheadingAttributesWithContentSizeCategory:(id)arg1;
- (id)titleAttributes;
- (id)titleAttributesWithContentSizeCategory:(id)arg1;
- (id)typingAttributesForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 forSelectionChange:(bool)arg2 currentTypingAttributes:(id)arg3 inTextStorage:(id)arg4;
- (id)typingAttributesForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 forSelectionChange:(bool)arg2 forSettingTextStyle:(bool)arg3 currentTypingAttributes:(id)arg4 inTextStorage:(id)arg5;
- (id)typingAttributesForSettingTextStyleForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 currentTypingAttributes:(id)arg2 inTextStorage:(id)arg3;
- (id)writingToolsIgnoredRangesForTextStorage:(id)arg1 inEnclosingRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 note:(id)arg3;
- (id)zoomController;

@end
