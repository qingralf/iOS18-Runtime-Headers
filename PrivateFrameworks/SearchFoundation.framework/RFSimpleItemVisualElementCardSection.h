/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface RFSimpleItemVisualElementCardSection : SFCardSection <NSCopying, NSSecureCoding, RFSimpleItemVisualElementCardSection> {
    int  _attribution_style;
    RFTextProperty * _footnote;
    struct { 
        unsigned int horizontal_alignment : 1; 
        unsigned int attribution_style : 1; 
    }  _has;
    int  _horizontal_alignment;
    RFVisualProperty * _image;
    RFTextProperty * _text_1;
    RFTextProperty * _text_2;
}

@property (nonatomic, retain) SFAppEntityAnnotation *appEntityAnnotation;
@property (nonatomic) int attribution_style;
@property (nonatomic, retain) SFColor *backgroundColor;
@property (nonatomic) bool canBeHidden;
@property (nonatomic, retain) NSString *cardSectionDetail;
@property (nonatomic, copy) NSString *cardSectionId;
@property (nonatomic, retain) SFCommand *command;
@property (nonatomic, retain) NSString *commandDetail;
@property (nonatomic, copy) NSArray *commands;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) NSArray *embeddedCards;
@property (nonatomic, copy) NSString *emphasisSubjectId;
@property (nonatomic, retain) RFTextProperty *footnote;
@property (nonatomic) bool forceEnable3DTouch;
@property (nonatomic) bool hasBottomPadding;
@property (nonatomic) bool hasTopPadding;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hideDivider;
@property (nonatomic) int horizontal_alignment;
@property (nonatomic, retain) RFVisualProperty *image;
@property (nonatomic) int increasedContrastMode;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSArray *leadingSwipeButtonItems;
@property (nonatomic, retain) SFCard *nextCard;
@property (nonatomic, copy) NSArray *parameterKeyPaths;
@property (nonatomic, copy) NSArray *previewButtonItems;
@property (nonatomic, retain) NSString *previewButtonItemsTitle;
@property (nonatomic, retain) SFCommand *previewCommand;
@property (nonatomic, copy) NSArray *punchoutOptions;
@property (nonatomic, copy) NSString *punchoutPickerDismissText;
@property (nonatomic, copy) NSString *punchoutPickerTitle;
@property (nonatomic, copy) NSArray *referencedCommands;
@property (nonatomic) int requiredLevelOfDetail;
@property (nonatomic, copy) NSString *resultIdentifier;
@property (nonatomic, retain) SFCommand *secondaryCommand;
@property (nonatomic) int separatorStyle;
@property (nonatomic) bool shouldHideInAmbientMode;
@property (nonatomic) bool shouldShowInSmartDialog;
@property (readonly) Class superclass;
@property (nonatomic, retain) RFTextProperty *text_1;
@property (nonatomic, retain) RFTextProperty *text_2;
@property (nonatomic, copy) NSArray *trailingSwipeButtonItems;
@property (nonatomic, copy) NSString *type;
@property (nonatomic, retain) SFUserReportRequest *userReportRequest;

// Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (int)attribution_style;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)footnote;
- (bool)hasAttribution_style;
- (bool)hasHorizontal_alignment;
- (unsigned long long)hash;
- (int)horizontal_alignment;
- (id)image;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (void)setAttribution_style:(int)arg1;
- (void)setFootnote:(id)arg1;
- (void)setHorizontal_alignment:(int)arg1;
- (void)setImage:(id)arg1;
- (void)setText_1:(id)arg1;
- (void)setText_2:(id)arg1;
- (id)text_1;
- (id)text_2;

// Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI

- (void)customizeSection:(id)arg1 isLeading:(bool)arg2;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })searchUIGridSectionModel_customSectionInsets;
- (double)searchUIGridSectionModel_interItemSpacing;
- (bool)searchUIGridSectionModel_useEstimatedHeight;
- (double)searchUIHorizontallyScrollingSectionModel_interItemSpacing;
- (double)searchUIHorizontallyScrollingSectionModel_widthDimensionMultiplier;

@end
