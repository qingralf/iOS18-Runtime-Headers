/* Generated by RuntimeBrowser.
 */

@protocol SFCardSection <NSSecureCoding, NSObject>

@required

- (void)addCardsFromButtonsTo:(NSMutableArray *)arg1;
- (void)addCardsFromEmbeddedSectionsTo:(NSMutableArray *)arg1;
- (SFAppEntityAnnotation *)appEntityAnnotation;
- (SFColor *)backgroundColor;
- (bool)canBeHidden;
- (NSString *)cardSectionDetail;
- (NSString *)cardSectionId;
- (SFCommand *)command;
- (NSString *)commandDetail;
- (NSArray *)commands;
- (NSArray *)embeddedCards;
- (NSString *)emphasisSubjectId;
- (bool)forceEnable3DTouch;
- (bool)hasBottomPadding;
- (bool)hasTopPadding;
- (bool)hideDivider;
- (int)increasedContrastMode;
- (NSArray *)leadingSwipeButtonItems;
- (SFCard *)nextCard;
- (NSArray *)parameterKeyPaths;
- (NSArray *)previewButtonItems;
- (NSString *)previewButtonItemsTitle;
- (SFCommand *)previewCommand;
- (NSArray *)punchoutOptions;
- (NSString *)punchoutPickerDismissText;
- (NSString *)punchoutPickerTitle;
- (NSArray *)referencedCommands;
- (int)requiredLevelOfDetail;
- (NSString *)resultIdentifier;
- (SFCommand *)secondaryCommand;
- (int)separatorStyle;
- (void)setAppEntityAnnotation:(SFAppEntityAnnotation *)arg1;
- (void)setBackgroundColor:(SFColor *)arg1;
- (void)setCanBeHidden:(bool)arg1;
- (void)setCardSectionDetail:(NSString *)arg1;
- (void)setCardSectionId:(NSString *)arg1;
- (void)setCommand:(SFCommand *)arg1;
- (void)setCommandDetail:(NSString *)arg1;
- (void)setCommands:(NSArray *)arg1;
- (void)setEmphasisSubjectId:(NSString *)arg1;
- (void)setForceEnable3DTouch:(bool)arg1;
- (void)setHasBottomPadding:(bool)arg1;
- (void)setHasTopPadding:(bool)arg1;
- (void)setHideDivider:(bool)arg1;
- (void)setIncreasedContrastMode:(int)arg1;
- (void)setLeadingSwipeButtonItems:(NSArray *)arg1;
- (void)setNextCard:(SFCard *)arg1;
- (void)setParameterKeyPaths:(NSArray *)arg1;
- (void)setPreviewButtonItems:(NSArray *)arg1;
- (void)setPreviewButtonItemsTitle:(NSString *)arg1;
- (void)setPreviewCommand:(SFCommand *)arg1;
- (void)setPunchoutOptions:(NSArray *)arg1;
- (void)setPunchoutPickerDismissText:(NSString *)arg1;
- (void)setPunchoutPickerTitle:(NSString *)arg1;
- (void)setReferencedCommands:(NSArray *)arg1;
- (void)setRequiredLevelOfDetail:(int)arg1;
- (void)setResultIdentifier:(NSString *)arg1;
- (void)setSecondaryCommand:(SFCommand *)arg1;
- (void)setSeparatorStyle:(int)arg1;
- (void)setShouldHideInAmbientMode:(bool)arg1;
- (void)setShouldShowInSmartDialog:(bool)arg1;
- (void)setTrailingSwipeButtonItems:(NSArray *)arg1;
- (void)setType:(NSString *)arg1;
- (void)setUserReportRequest:(SFUserReportRequest *)arg1;
- (bool)shouldHideInAmbientMode;
- (bool)shouldShowInSmartDialog;
- (NSArray *)trailingSwipeButtonItems;
- (NSString *)type;
- (SFUserReportRequest *)userReportRequest;

@end