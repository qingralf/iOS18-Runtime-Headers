/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface RFTableHeaderCardSection : SFCardSection <NSCopying, NSSecureCoding, RFTableHeaderCardSection> {
    NSArray * _cells;
    NSArray * _columns;
    NSArray * _compact_cells;
    struct { 
        unsigned int should_repeat_header_in_flow_layout : 1; 
        unsigned int vertical_alignment : 1; 
    }  _has;
    int  _should_repeat_header_in_flow_layout;
    int  _vertical_alignment;
}

@property (nonatomic, retain) SFAppEntityAnnotation *appEntityAnnotation;
@property (nonatomic, retain) SFColor *backgroundColor;
@property (nonatomic) bool canBeHidden;
@property (nonatomic, retain) NSString *cardSectionDetail;
@property (nonatomic, copy) NSString *cardSectionId;
@property (nonatomic, copy) NSArray *cells;
@property (nonatomic, copy) NSArray *columns;
@property (nonatomic, retain) SFCommand *command;
@property (nonatomic, retain) NSString *commandDetail;
@property (nonatomic, copy) NSArray *commands;
@property (nonatomic, copy) NSArray *compact_cells;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) NSArray *embeddedCards;
@property (nonatomic, copy) NSString *emphasisSubjectId;
@property (nonatomic) bool forceEnable3DTouch;
@property (nonatomic) bool hasBottomPadding;
@property (nonatomic) bool hasTopPadding;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hideDivider;
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
@property (nonatomic) int should_repeat_header_in_flow_layout;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *trailingSwipeButtonItems;
@property (nonatomic, copy) NSString *type;
@property (nonatomic, retain) SFUserReportRequest *userReportRequest;
@property (nonatomic) int vertical_alignment;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)cells;
- (id)columns;
- (id)compact_cells;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasShould_repeat_header_in_flow_layout;
- (bool)hasVertical_alignment;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (void)setCells:(id)arg1;
- (void)setColumns:(id)arg1;
- (void)setCompact_cells:(id)arg1;
- (void)setShould_repeat_header_in_flow_layout:(int)arg1;
- (void)setVertical_alignment:(int)arg1;
- (int)should_repeat_header_in_flow_layout;
- (int)vertical_alignment;

@end
