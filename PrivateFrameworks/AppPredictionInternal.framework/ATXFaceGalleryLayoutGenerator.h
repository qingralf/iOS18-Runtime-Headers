/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface ATXFaceGalleryLayoutGenerator : NSObject {
    NSArray * _allHeroDescriptors;
    NSArray * _allNonHeroDescriptors;
    NSArray * _candidateFeaturedDescriptors;
    <ATXFaceGalleryLayoutGeneratorComplicationDescriptorProviding> * _complicationDescriptorProvider;
    ATXComplicationSuggestionParameters * _complicationParameters;
    <ATXFaceGalleryLayoutGeneratorComplicationProviding> * _complicationProvider;
    bool  _dayZero;
    NSLocale * _locale;
    NSDictionary * _nonHeroDescriptorsByExtensionBundleId;
    <ATXFaceSuggestionParameters> * _parameters;
}

@property (nonatomic, readonly, copy) NSArray *candidateFeaturedDescriptors;
@property (nonatomic, readonly, copy) NSArray *rankedFeaturedDescriptors;

+ (id)_descriptorsByDeduplicatingExtensionsInDescriptors:(id)arg1;

- (void).cxx_destruct;
- (id)_candidateFeaturedDescriptors;
- (bool)_complicationExistsOnSystem:(id)arg1;
- (bool)_descriptorIsEligibleForComplications:(id)arg1;
- (id)_generateSectionWithWidgetDescriptorsAdditionalData:(id)arg1 aggregatedAppLaunchData:(id)arg2 bundleIdToCompanionBundleId:(id)arg3 assetDescriptors:(id)arg4 otherParameters:(id)arg5 semanticType:(long long)arg6;
- (id)_generatedFeaturedPhotosSectionGivenFeaturedSection:(id)arg1 widgetDescriptorsAdditionalData:(id)arg2 aggregatedAppLaunchData:(id)arg3 bundleIdToCompanionBundleId:(id)arg4;
- (id)_generatedFeaturedSectionWithWidgetDescriptorsAdditionalData:(id)arg1 aggregatedAppLaunchData:(id)arg2 bundleIdToCompanionBundleId:(id)arg3;
- (id)_generatedFocusSection;
- (id)_generatedHeroSectionWithWidgetDescriptorsAdditionalData:(id)arg1 aggregatedAppLaunchData:(id)arg2 bundleIdToCompanionBundleId:(id)arg3 heroSectionOrder:(id)arg4;
- (id)_generatedPhotoShuffleSectionWithWidgetDescriptorsAdditionalData:(id)arg1 aggregatedAppLaunchData:(id)arg2 bundleIdToCompanionBundleId:(id)arg3;
- (id)_inlineComplicationForDescriptor:(id)arg1;
- (bool)_isFocusUser;
- (id)_itemFromDescriptor:(id)arg1 shouldShowDisplayName:(bool)arg2 shouldShowComplications:(bool)arg3 systemSuggestedComplicationSet:(id)arg4 systemSuggestedLandscapeComplicationSet:(id)arg5;
- (id)_itemsFromDescriptors:(id)arg1 widgetDescriptorsAdditionalData:(id)arg2 aggregatedAppLaunchData:(id)arg3 bundleIdToCompanionBundleId:(id)arg4 shouldShowDisplayName:(bool)arg5 shouldShowComplications:(bool)arg6 limit:(id)arg7;
- (id)_landscapeSetsFromLandscapeSetsDict:(id)arg1;
- (id)_localizedSubtitleTextWithSemanticType:(long long)arg1;
- (id)_localizedTitleForWeatherAndAstronomySection;
- (id)_localizedTitleTextWithSemanticType:(long long)arg1;
- (id)_localizedTitleforOSVersionSection;
- (id)_modularComplicationsForDescriptor:(id)arg1 systemSuggestionComplications:(id)arg2;
- (id)_modularLandscapeComplicationsForDescriptor:(id)arg1 systemSuggestionComplications:(id)arg2;
- (void)_processDescriptors:(id)arg1;
- (id)_shuffledSuggestableComplicationSetsWithWidgetDescriptorsAdditionalData:(id)arg1 aggregatedAppLaunchData:(id)arg2 bundleIdToCompanionBundleId:(id)arg3;
- (id)candidateFeaturedDescriptors;
- (id)descriptorsToRemoveFromSectionWithSemanticType:(long long)arg1 parameters:(id)arg2;
- (id)generatedConfigurationWithWidgetDescriptorsAdditionalData:(id)arg1 aggregatedAppLaunchData:(id)arg2 bundleIdToCompanionBundleId:(id)arg3;
- (id)initWithDescriptors:(id)arg1 complicationProvider:(id)arg2 complicationDescriptorProvider:(id)arg3 parameters:(id)arg4 dayZero:(bool)arg5 locale:(id)arg6;
- (bool)isDescriptor:(id)arg1 availableInAssetParameter:(id)arg2;
- (bool)isDescriptorFromGalleryItem:(id)arg1 availableInAssetParameter:(id)arg2;
- (id)rankedFeaturedDescriptors;
- (bool)shouldAddDescriptorFromExtension:(id)arg1 descriptorIdentifierInAsset:(id)arg2 withSemanticType:(long long)arg3 assetParametersToFilterOut:(id)arg4;
- (bool)shouldRemoveDescriptorFromFeatured:(id)arg1 withDescriptorsToRemove:(id)arg2;

@end