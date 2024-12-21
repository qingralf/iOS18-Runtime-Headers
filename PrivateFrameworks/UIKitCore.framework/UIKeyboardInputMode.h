/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIKeyboardInputMode : UITextInputMode <NSCopying> {
    UIImage * _cachedIcon;
    unsigned long long  _cachedIconKey;
    NSString * _cachedSizeCategory;
    NSString * _defaultDictationLanguage;
    bool  _extensionInputModeHasDictation;
    NSString * _languageWithRegion;
    NSArray * _multilingualLanguages;
    NSString * _primaryLanguage;
    NSString * _variant;
    NSString * hardwareLayout;
    NSString * identifier;
    bool  isDisplayed;
    NSString * normalizedIdentifier;
    NSString * softwareLayout;
}

@property (nonatomic, readonly) NSString *automaticHardwareLayout;
@property (nonatomic, retain) UIImage *cachedIcon;
@property (nonatomic) unsigned long long cachedIconKey;
@property (nonatomic, retain) NSString *cachedSizeCategory;
@property (nonatomic, readonly) NSBundle *containingBundle;
@property (nonatomic, readonly) NSString *containingBundleDisplayName;
@property (nonatomic, retain) NSString *defaultDictationLanguage;
@property (nonatomic, readonly) bool defaultLayoutIsASCIICapable;
@property (nonatomic, readonly) NSString *dictationDisplayName;
@property (nonatomic, retain) NSString *dictationLanguage;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) NSString *extendedDisplayName;
@property (nonatomic, readonly) NSExtension *extension;
@property (nonatomic) bool extensionInputModeHasDictation;
@property (nonatomic, retain) NSString *hardwareLayout;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, readonly) NSString *identifierWithLayouts;
@property (nonatomic, readonly) bool isDefaultRightToLeft;
@property (nonatomic) bool isDisplayed;
@property (nonatomic, readonly) bool isEmojiInputMode;
@property (nonatomic, readonly) bool isExtensionInputMode;
@property (nonatomic, readonly) bool isHandwritingInputMode;
@property (nonatomic, readonly) bool isSpecializedInputMode;
@property (nonatomic, readonly) bool isStalledExtensionInputMode;
@property (nonatomic, retain) NSString *languageWithRegion;
@property (nonatomic, readonly) NSLocale *locale;
@property (nonatomic, readonly) NSString *monolingualDisplayName;
@property (getter=isMultilingual, nonatomic, readonly) bool multilingual;
@property (nonatomic, readonly) unsigned long long multilingualIndex;
@property (nonatomic, retain) NSArray *multilingualLanguages;
@property (getter=isMultilingualOnly, nonatomic, readonly) bool multilingualOnly;
@property (nonatomic, readonly) NSArray *multilingualSet;
@property (getter=isMultiscript, nonatomic, readonly) bool multiscript;
@property (nonatomic, readonly) unsigned long long multiscriptIndex;
@property (nonatomic, readonly) NSArray *multiscriptSet;
@property (nonatomic, retain) NSString *normalizedIdentifier;
@property (nonatomic, readonly) NSArray *normalizedIdentifierLevels;
@property (nonatomic, retain) NSString *primaryLanguage;
@property (nonatomic, readonly) NSString *safe__extendedDisplayName;
@property (nonatomic, readonly) bool showSWLayoutWithHWKeyboard;
@property (nonatomic, readonly) bool showsTransliterationCandidates;
@property (nonatomic, retain) NSString *softwareLayout;
@property (nonatomic, readonly) bool supportsEmojiSearch;
@property (nonatomic, retain) NSString *variant;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (id)_displayNameForMultilingualSet:(id)arg1 forDisplayInLists:(bool)arg2 usingDeviceLanguage:(bool)arg3 context:(long long)arg4;
+ (id)autofillSignupInputMode;
+ (id)canonicalLanguageIdentifierFromIdentifier:(id)arg1;
+ (id)dictationInputMode;
+ (id)hardwareLayoutFromIdentifier:(id)arg1;
+ (id)intlInputMode;
+ (id)keyboardInputModeWithIdentifier:(id)arg1;
+ (id)multilingualSetsFromInputModeIdentifiers:(id)arg1;
+ (id)softwareLayoutFromIdentifier:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_fallbackIconLabel;
- (void)_getIconLabel:(out id*)arg1 secondaryIconLabel:(out id*)arg2;
- (void)_getIconLabel:(out id*)arg1 secondaryIconLabel:(out id*)arg2 artwork:(out id*)arg3;
- (void)_getIconLabel:(out id*)arg1 secondaryIconLabel:(out id*)arg2 artwork:(out id*)arg3 inputModes:(id)arg4;
- (id)_iconLabelComponentsForMultilingualSet;
- (id)_iconLabelForMultilingualSet;
- (id)_iconLabelWithinMultiscriptSet;
- (id)_indicatorIconWithConfiguration:(id)arg1;
- (id)automaticHardwareLayout;
- (id)cachedIcon;
- (unsigned long long)cachedIconKey;
- (id)cachedSizeCategory;
- (id)containingBundle;
- (id)containingBundleDisplayName;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)cursorAccessoryIcon;
- (void)dealloc;
- (id)defaultDictationLanguage;
- (bool)defaultLayoutIsASCIICapable;
- (id)dictationDisplayName;
- (id)dictationLanguage;
- (id)displayName;
- (void)drawStringInRect:(id)arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 useSmallFont:(bool)arg3 useCondensedFont:(bool)arg4 scale:(double)arg5;
- (void)encodeWithCoder:(id)arg1;
- (id)extendedDisplayName;
- (id)extension;
- (bool)extensionInputModeHasDictation;
- (id)hardwareLayout;
- (id)identifier;
- (id)identifierWithLayouts;
- (id)imageForInputModeLabel:(id)arg1 secondaryIconLabel:(id)arg2 artwork:(id)arg3 withConfiguration:(id)arg4;
- (bool)includeBarHeight;
- (id)indicatorIcon;
- (id)indicatorTextIcon;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (bool)isAllowedForTraits:(id)arg1;
- (bool)isDefaultRightToLeft;
- (bool)isDesiredForTraits:(id)arg1;
- (bool)isDesiredForTraits:(id)arg1 withExtended:(bool)arg2;
- (bool)isDisplayed;
- (bool)isEmojiInputMode;
- (bool)isEqual:(id)arg1;
- (bool)isExtensionInputMode;
- (bool)isHandwritingInputMode;
- (bool)isMultilingual;
- (bool)isMultilingualOnly;
- (bool)isMultiscript;
- (bool)isSpecializedInputMode;
- (bool)isStalledExtensionInputMode;
- (double)languageIndicatorScale;
- (id)languageWithRegion;
- (id)largeCursorAccessoryIcon;
- (id)locale;
- (id)monolingualDisplayName;
- (unsigned long long)multilingualIndex;
- (id)multilingualInputModeIdentifiers;
- (id)multilingualLanguages;
- (id)multilingualSet;
- (id)multilingualSetFromInputModeIdentifiers:(id)arg1;
- (unsigned long long)multiscriptIndex;
- (id)multiscriptInputModeIdentifiers;
- (id)multiscriptSet;
- (id)normalizedIdentifier;
- (id)normalizedIdentifierLevels;
- (void)preferencesControllerChanged:(id)arg1;
- (id)primaryLanguage;
- (void)setCachedIcon:(id)arg1;
- (void)setCachedIconKey:(unsigned long long)arg1;
- (void)setCachedSizeCategory:(id)arg1;
- (void)setDefaultDictationLanguage:(id)arg1;
- (void)setDictationLanguage:(id)arg1;
- (void)setExtensionInputModeHasDictation:(bool)arg1;
- (void)setHardwareLayout:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIsDisplayed:(bool)arg1;
- (void)setLanguageWithRegion:(id)arg1;
- (void)setLastUsedDictationLanguage;
- (void)setMultilingualLanguages:(id)arg1;
- (void)setNormalizedIdentifier:(id)arg1;
- (void)setPrimaryLanguage:(id)arg1;
- (void)setSoftwareLayout:(id)arg1;
- (void)setVariant:(id)arg1;
- (bool)showSWLayoutWithHWKeyboard;
- (bool)showsTransliterationCandidates;
- (id)softwareLayout;
- (bool)supportsEmojiSearch;
- (id)variant;

// Image: /System/Library/PrivateFrameworks/KeyboardSettings.framework/KeyboardSettings

- (id)safe__extendedDisplayName;
- (id)safe__extendedDisplayName;

// Image: /System/Library/PrivateFrameworks/TextInputUI.framework/TextInputUI

- (id)safe__extendedDisplayName;

@end