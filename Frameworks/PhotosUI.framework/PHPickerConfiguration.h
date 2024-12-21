/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PHPickerConfiguration : NSObject <NSCopying, NSSecureCoding> {
    _PHPickerCollectionConfiguration * __albumsConfiguration;
    bool  __allowsDownscaling;
    bool  __allowsEncodingPolicyModification;
    bool  __alwaysShowLoadingPlaceholder;
    _PHPickerAspectRatio * __aspectRatio;
    NSString * __containerIdentifier;
    unsigned long long  __desiredCollectionSuggestions;
    unsigned long long  __disabledPrivateCapabilities;
    unsigned long long  __excludedCollections;
    NSArray * __followupPeopleConfigurations;
    bool  __limitedLibraryHeaderDismissedBefore;
    bool  __onboardingHeaderDismissedBefore;
    bool  __onboardingOverlayDismissedBefore;
    bool  __onlyReturnsIdentifiers;
    _PHPickerCollectionConfiguration * __peopleConfiguration;
    NSString * __purposedLimitedLibraryApplicationIdentifier;
    long long  __sourceType;
    _PHPickerSuggestionGroup * __suggestionGroup;
    bool  __usesMemoriesLayout;
    bool  __usesOpenPanelLayout;
    unsigned long long  _disabledCapabilities;
    unsigned long long  _edgesWithoutContentMargins;
    PHPickerFilter * _filter;
    long long  _minimumSelectionLimit;
    long long  _mode;
    PHPhotoLibrary * _photoLibrary;
    long long  _preferredAssetRepresentationMode;
    NSArray * _preselectedAssetIdentifiers;
    long long  _selection;
    long long  _selectionLimit;
}

@property (setter=_setAlbumsConfiguration:, nonatomic, copy) _PHPickerCollectionConfiguration *_albumsConfiguration;
@property (setter=_setAllowsContinuousSelection:, nonatomic) bool _allowsContinuousSelection;
@property (setter=_setAllowsDownscaling:, nonatomic) bool _allowsDownscaling;
@property (setter=_setAllowsEncodingPolicyModification:, nonatomic) bool _allowsEncodingPolicyModification;
@property (setter=_setAlwaysShowLoadingPlaceholder:, nonatomic) bool _alwaysShowLoadingPlaceholder;
@property (nonatomic, copy) _PHPickerAspectRatio *_aspectRatio;
@property (nonatomic, copy) NSString *_containerIdentifier;
@property (setter=_setDesiredCollectionSuggestions:, nonatomic) unsigned long long _desiredCollectionSuggestions;
@property (setter=_setDisabledFeatures:, nonatomic) unsigned long long _disabledFeatures;
@property (setter=_setDisabledPrivateCapabilities:, nonatomic) unsigned long long _disabledPrivateCapabilities;
@property (setter=_setEdgesWithoutContentMargins:, nonatomic) unsigned long long _edgesWithoutContentMargins;
@property (setter=_setExcludedCollections:, nonatomic) unsigned long long _excludedCollections;
@property (setter=_setFollowupPeopleConfigurations:, nonatomic, copy) NSArray *_followupPeopleConfigurations;
@property (nonatomic) bool _limitedLibraryHeaderDismissedBefore;
@property (nonatomic) bool _onboardingHeaderDismissedBefore;
@property (nonatomic) bool _onboardingOverlayDismissedBefore;
@property (nonatomic, readonly) bool _onlyReturnsIdentifiers;
@property (setter=_setPeopleConfiguration:, nonatomic, copy) _PHPickerCollectionConfiguration *_peopleConfiguration;
@property (setter=_setPurposedLimitedLibraryApplicationIdentifier:, nonatomic, copy) NSString *_purposedLimitedLibraryApplicationIdentifier;
@property (setter=_setSourceType:, nonatomic) long long _sourceType;
@property (nonatomic, copy) _PHPickerSuggestionGroup *_suggestionGroup;
@property (setter=_setUsesMemoriesLayout:, nonatomic) bool _usesMemoriesLayout;
@property (nonatomic, readonly) bool _usesOpenPanelLayout;
@property (nonatomic) unsigned long long disabledCapabilities;
@property (nonatomic) unsigned long long edgesWithoutContentMargins;
@property (nonatomic, copy) PHPickerFilter *filter;
@property (nonatomic) long long minimumSelectionLimit;
@property (nonatomic) long long mode;
@property (nonatomic, readonly) PHPhotoLibrary *photoLibrary;
@property (nonatomic) long long preferredAssetRepresentationMode;
@property (nonatomic, copy) NSArray *preselectedAssetIdentifiers;
@property (nonatomic) long long selection;
@property (nonatomic) long long selectionLimit;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_albumsConfiguration;
- (bool)_allowsContinuousSelection;
- (bool)_allowsDownscaling;
- (bool)_allowsEncodingPolicyModification;
- (bool)_alwaysShowLoadingPlaceholder;
- (id)_aspectRatio;
- (id)_containerIdentifier;
- (unsigned long long)_desiredCollectionSuggestions;
- (unsigned long long)_disabledFeatures;
- (unsigned long long)_disabledPrivateCapabilities;
- (unsigned long long)_edgesWithoutContentMargins;
- (unsigned long long)_excludedCollections;
- (id)_followupPeopleConfigurations;
- (id)_initWithPhotoLibrary:(id)arg1 onlyReturnsIdentifiers:(bool)arg2;
- (bool)_limitedLibraryHeaderDismissedBefore;
- (bool)_onboardingHeaderDismissedBefore;
- (bool)_onboardingOverlayDismissedBefore;
- (bool)_onlyReturnsIdentifiers;
- (id)_peopleConfiguration;
- (id)_purposedLimitedLibraryApplicationIdentifier;
- (void)_setAlbumsConfiguration:(id)arg1;
- (void)_setAllowsContinuousSelection:(bool)arg1;
- (void)_setAllowsDownscaling:(bool)arg1;
- (void)_setAllowsEncodingPolicyModification:(bool)arg1;
- (void)_setAlwaysShowLoadingPlaceholder:(bool)arg1;
- (void)_setDesiredCollectionSuggestions:(unsigned long long)arg1;
- (void)_setDisabledFeatures:(unsigned long long)arg1;
- (void)_setDisabledPrivateCapabilities:(unsigned long long)arg1;
- (void)_setEdgesWithoutContentMargins:(unsigned long long)arg1;
- (void)_setExcludedCollections:(unsigned long long)arg1;
- (void)_setFollowupPeopleConfigurations:(id)arg1;
- (void)_setPeopleConfiguration:(id)arg1;
- (void)_setPurposedLimitedLibraryApplicationIdentifier:(id)arg1;
- (void)_setSourceType:(long long)arg1;
- (void)_setUsesMemoriesLayout:(bool)arg1;
- (long long)_sourceType;
- (id)_suggestionGroup;
- (bool)_usesMemoriesLayout;
- (bool)_usesOpenPanelLayout;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)disabledCapabilities;
- (unsigned long long)edgesWithoutContentMargins;
- (void)encodeWithCoder:(id)arg1;
- (id)filter;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithPhotoLibrary:(id)arg1;
- (id)initWithPhotoLibraryAndOnlyForOpenPanel:(id)arg1;
- (id)initWithPhotoLibraryAndOnlyReturnsIdentifiers:(id)arg1;
- (bool)isEqual:(id)arg1;
- (long long)minimumSelectionLimit;
- (long long)mode;
- (id)photoLibrary;
- (long long)preferredAssetRepresentationMode;
- (id)preselectedAssetIdentifiers;
- (long long)selection;
- (long long)selectionLimit;
- (void)setDisabledCapabilities:(unsigned long long)arg1;
- (void)setEdgesWithoutContentMargins:(unsigned long long)arg1;
- (void)setFilter:(id)arg1;
- (void)setMinimumSelectionLimit:(long long)arg1;
- (void)setMode:(long long)arg1;
- (void)setPreferredAssetRepresentationMode:(long long)arg1;
- (void)setPreselectedAssetIdentifiers:(id)arg1;
- (void)setSelection:(long long)arg1;
- (void)setSelectionLimit:(long long)arg1;
- (void)set_aspectRatio:(id)arg1;
- (void)set_containerIdentifier:(id)arg1;
- (void)set_limitedLibraryHeaderDismissedBefore:(bool)arg1;
- (void)set_onboardingHeaderDismissedBefore:(bool)arg1;
- (void)set_onboardingOverlayDismissedBefore:(bool)arg1;
- (void)set_suggestionGroup:(id)arg1;

@end