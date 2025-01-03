/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChronoServices.framework/ChronoServices
 */

@interface CHSControlDescriptor : CHSBaseDescriptor <CHSConfigurableDescriptor, CHSWidgetIdentifiable, NSMutableCopying, NSSecureCoding, SBHAddWidgetSheetGalleryItem> {
    CHSControlActionMetadata * _actionMetadata;
    unsigned long long  _controlType;
    unsigned long long  _controlVersion;
    CHSIntentReference * _defaultIntentReference;
    bool  _disablesControlStateCaching;
    bool  _hiddenControl;
    NSString * _intentType;
    NSString * _kind;
    unsigned long long  _preferredControlSize;
    bool  _showsContextualMenu;
    bool  _supportsPush;
    long long  _visibility;
}

@property (nonatomic, readonly, copy) UIColor *accentColor;
@property (nonatomic, readonly, copy) NSString *actionIntentType;
@property (nonatomic, readonly) CHSControlActionMetadata *actionMetadata;
@property (nonatomic, readonly, copy) UIColor *backgroundColor;
@property (nonatomic, readonly) unsigned long long controlType;
@property (nonatomic, readonly) unsigned long long controlVersion;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic, readonly, copy) CHSIntentReference *defaultIntentReference;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool disablesControlStateCaching;
@property (nonatomic, readonly) CHSExtensionIdentity *extensionIdentity;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool hiddenControl;
@property (nonatomic, readonly, copy) NSString *intentType;
@property (nonatomic, readonly) NSString *kind;
@property (nonatomic, readonly, copy) UIColor *mostInterestingColor;
@property (nonatomic, readonly) unsigned long long preferredControlSize;
@property (nonatomic, readonly, copy) NSString *sbh_appName;
@property (nonatomic, readonly) bool sbh_canBeAddedToStack;
@property (nonatomic, readonly, copy) NSString *sbh_galleryItemIdentifier;
@property (nonatomic, readonly) unsigned long long sbh_supportedSizeClasses;
@property (nonatomic, readonly) bool sbh_supportsRemovableBackground;
@property (nonatomic, readonly) bool sbh_supportsRemovableBackgroundOrAccessoryFamilies;
@property (nonatomic, readonly, copy) NSString *sbh_widgetDescription;
@property (nonatomic, readonly, copy) NSString *sbh_widgetName;
@property (nonatomic, readonly) bool showsContextualMenu;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsPush;
@property (nonatomic, readonly) long long visibility;

// Image: /System/Library/PrivateFrameworks/ChronoServices.framework/ChronoServices

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_intentDescription;
- (id)actionIntentType;
- (id)actionMetadata;
- (unsigned long long)controlType;
- (unsigned long long)controlVersion;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyWithoutIntents;
- (id)defaultIntentReference;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (bool)disablesControlStateCaching;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasIntents;
- (unsigned long long)hash;
- (bool)hiddenControl;
- (id)initFromDescriptor:(id)arg1 includeIntents:(bool)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithExtensionIdentity:(id)arg1 kind:(id)arg2 controlType:(unsigned long long)arg3 intentType:(id)arg4;
- (id)intentType;
- (bool)isEqual:(id)arg1;
- (bool)isInternal;
- (id)kind;
- (bool)matches:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)preferredControlSize;
- (bool)showsContextualMenu;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (bool)supportsPush;
- (long long)visibility;

// Image: /System/Library/PrivateFrameworks/PosterKit.framework/PosterKit

- (unsigned long long)pr_configurationType;

// Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome

- (unsigned long long)_widgetLocationStyleForAddWidgetSheetLocation:(unsigned long long)arg1;
- (id)accentColor;
- (id)backgroundColor;
- (id)mostInterestingColor;
- (id)sbh_appName;
- (bool)sbh_canBeAddedToStack;
- (unsigned long long)sbh_configurationType;
- (unsigned long long)sbh_disfavoredSizeClassesForAddWidgetSheetLocation:(unsigned long long)arg1;
- (unsigned long long)sbh_favoredSizeClassesForAddWidgetSheetLocation:(unsigned long long)arg1;
- (id)sbh_galleryItemIdentifier;
- (bool)sbh_isLinkedOnOrAfter:(unsigned long long)arg1;
- (unsigned long long)sbh_supportedSizeClasses;
- (bool)sbh_supportsRemovableBackground;
- (bool)sbh_supportsRemovableBackgroundOrAccessoryFamilies;
- (id)sbh_widgetDescription;
- (id)sbh_widgetName;

@end
