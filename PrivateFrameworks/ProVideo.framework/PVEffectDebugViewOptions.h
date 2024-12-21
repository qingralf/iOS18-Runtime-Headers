/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

@interface PVEffectDebugViewOptions : NSObject {
    NSArray * _cornerPointColors;
    UIColor * _documentBoundingBoxColor;
    bool  _enabled;
    NSArray * _hitAreaPointColors;
    UIColor * _hitAreaShapeColor;
    UIColor * _midpointColor;
    UIColor * _objectAlignedBoundingBoxColor;
    UIColor * _originColor;
    UIColor * _outputROIColor;
    NSDictionary * _propertyToKeyMap;
    bool  _saveToUserDefaultsOnUpdate;
    bool  _showCornerPoints;
    bool  _showDocumentBoundingBox;
    bool  _showHitAreaPoints;
    bool  _showHitAreaShape;
    bool  _showMidpoint;
    bool  _showObjectAlignedBoundingBox;
    bool  _showOrigin;
    bool  _showOutputROI;
    bool  _showTextBoundingBoxes;
    bool  _showTextCornerPoints;
    bool  _showUserPoints;
    bool  _showUserRects;
    NSArray * _textBoundingBoxColors;
    NSArray * _textCornerPointColors;
}

@property (nonatomic, readonly) id anyPersistedPropertyChanged;
@property (nonatomic, retain) NSArray *cornerPointColors;
@property (nonatomic, retain) UIColor *documentBoundingBoxColor;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic, retain) NSArray *hitAreaPointColors;
@property (nonatomic, retain) UIColor *hitAreaShapeColor;
@property (nonatomic, retain) UIColor *midpointColor;
@property (nonatomic, retain) UIColor *objectAlignedBoundingBoxColor;
@property (nonatomic, retain) UIColor *originColor;
@property (nonatomic, retain) UIColor *outputROIColor;
@property (nonatomic, retain) NSDictionary *propertyToKeyMap;
@property (nonatomic) bool saveToUserDefaultsOnUpdate;
@property (nonatomic) bool showCornerPoints;
@property (nonatomic) bool showDocumentBoundingBox;
@property (nonatomic) bool showHitAreaPoints;
@property (nonatomic) bool showHitAreaShape;
@property (nonatomic) bool showMidpoint;
@property (nonatomic) bool showObjectAlignedBoundingBox;
@property (nonatomic) bool showOrigin;
@property (nonatomic) bool showOutputROI;
@property (nonatomic) bool showTextBoundingBoxes;
@property (nonatomic) bool showTextCornerPoints;
@property (nonatomic) bool showUserPoints;
@property (nonatomic) bool showUserRects;
@property (nonatomic, retain) NSArray *textBoundingBoxColors;
@property (nonatomic, retain) NSArray *textCornerPointColors;

+ (id)keyPathsForValuesAffectingAnyPersistedPropertyChanged;
+ (id)options;
+ (id)optionsWithDictionary:(id)arg1;
+ (id)optionsWithDictionary:(id)arg1 propertyToKeyMap:(id)arg2;
+ (id)optionsWithUserDefaults:(id)arg1 propertyToKeyMap:(id)arg2;
+ (id)persistedProperties;
+ (id)propertyToDefaultKeyMap;
+ (id)remapKeysToPropertyKeys:(id)arg1 propertyToKeyMap:(id)arg2;

- (void).cxx_destruct;
- (id)anyPersistedPropertyChanged;
- (id)cornerPointColors;
- (void)dealloc;
- (id)description;
- (id)documentBoundingBoxColor;
- (id)hitAreaPointColors;
- (id)hitAreaShapeColor;
- (id)init;
- (bool)isEnabled;
- (id)midpointColor;
- (id)objectAlignedBoundingBoxColor;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)originColor;
- (id)outputROIColor;
- (id)propertyToKeyMap;
- (bool)saveToUserDefaultsOnUpdate;
- (void)setCornerPointColors:(id)arg1;
- (void)setDocumentBoundingBoxColor:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setHitAreaPointColors:(id)arg1;
- (void)setHitAreaShapeColor:(id)arg1;
- (void)setMidpointColor:(id)arg1;
- (void)setObjectAlignedBoundingBoxColor:(id)arg1;
- (void)setOriginColor:(id)arg1;
- (void)setOutputROIColor:(id)arg1;
- (void)setPropertyToKeyMap:(id)arg1;
- (void)setSaveToUserDefaultsOnUpdate:(bool)arg1;
- (void)setShowCornerPoints:(bool)arg1;
- (void)setShowDocumentBoundingBox:(bool)arg1;
- (void)setShowHitAreaPoints:(bool)arg1;
- (void)setShowHitAreaShape:(bool)arg1;
- (void)setShowMidpoint:(bool)arg1;
- (void)setShowObjectAlignedBoundingBox:(bool)arg1;
- (void)setShowOrigin:(bool)arg1;
- (void)setShowOutputROI:(bool)arg1;
- (void)setShowTextBoundingBoxes:(bool)arg1;
- (void)setShowTextCornerPoints:(bool)arg1;
- (void)setShowUserPoints:(bool)arg1;
- (void)setShowUserRects:(bool)arg1;
- (void)setTextBoundingBoxColors:(id)arg1;
- (void)setTextCornerPointColors:(id)arg1;
- (bool)showCornerPoints;
- (bool)showDocumentBoundingBox;
- (bool)showHitAreaPoints;
- (bool)showHitAreaShape;
- (bool)showMidpoint;
- (bool)showObjectAlignedBoundingBox;
- (bool)showOrigin;
- (bool)showOutputROI;
- (bool)showTextBoundingBoxes;
- (bool)showTextCornerPoints;
- (bool)showUserPoints;
- (bool)showUserRects;
- (id)textBoundingBoxColors;
- (id)textCornerPointColors;

@end