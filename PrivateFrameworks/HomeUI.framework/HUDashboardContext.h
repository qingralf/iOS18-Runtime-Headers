/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUDashboardContext : NSObject {
    void accessoryGroupingStyle;
    void accessoryLikeItemObjectLevel;
    void allowsAdding;
    void allowsAnnounce;
    void allowsEditing;
    void allowsEnergyIndicator;
    void allowsHomeNavigation;
    void backgroundStyle;
    void cameraPresentationStyle;
    void filterPresentationStyle;
    void home;
    void includePredictedScenes;
    void overrideDashboardTitle;
    void room;
    void scenePresentationStyle;
    void shouldDelayItemUpdatesForViewVisibility;
    void shouldHideEmptySections;
    void shouldHideForGuests;
    void shouldHidePlaceholderService;
    void shouldIncludeRoomInAccessoryNames;
    void type;
}

@property (nonatomic) long long accessoryGroupingStyle;
@property (nonatomic) unsigned long long accessoryLikeItemObjectLevel;
@property (nonatomic, readonly) HFAccessoryTypeGroup *accessoryTypeGroup;
@property (nonatomic) bool allowsAdding;
@property (nonatomic) bool allowsAnnounce;
@property (nonatomic) bool allowsEditing;
@property (nonatomic) bool allowsEnergyIndicator;
@property (nonatomic) bool allowsHomeNavigation;
@property (nonatomic) long long backgroundStyle;
@property (nonatomic) long long cameraPresentationStyle;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic) long long filterPresentationStyle;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic) bool includePredictedScenes;
@property (nonatomic, readonly) NSString *menuEditActionTitle;
@property (nonatomic, readonly) NSString *menuEditActionTitleLocalizationKey;
@property (nonatomic, copy) NSString *overrideDashboardTitle;
@property (nonatomic, readonly) HMRoom *room;
@property (nonatomic) long long scenePresentationStyle;
@property (nonatomic) bool shouldDelayItemUpdatesForViewVisibility;
@property (nonatomic) bool shouldHideEmptySections;
@property (nonatomic) bool shouldHideForGuests;
@property (nonatomic) bool shouldHidePlaceholderService;
@property (nonatomic) bool shouldIncludeRoomInAccessoryNames;
@property (nonatomic, readonly) NSString *typeDescriptionForAnalytics;

+ (id)camerasDashboardWithTitle:(id)arg1 forHome:(id)arg2;
+ (id)categoryDashboardForAccessoryTypeGroup:(id)arg1 home:(id)arg2 room:(id)arg3;
+ (id)homeDashboardForHome:(id)arg1;
+ (id)roomDashboardForRoom:(id)arg1 home:(id)arg2;
+ (id)scenesDashboardWithTitle:(id)arg1 forHome:(id)arg2;
+ (id)speakersAndTVsDashboardWithTitle:(id)arg1 forHome:(id)arg2;

- (void).cxx_destruct;
- (long long)accessoryGroupingStyle;
- (unsigned long long)accessoryLikeItemObjectLevel;
- (bool)accessoryRepresentableHasStandardTileRepresentation:(id)arg1;
- (id)accessoryTypeGroup;
- (bool)allowsAdding;
- (bool)allowsAnnounce;
- (bool)allowsEditing;
- (bool)allowsEnergyIndicator;
- (bool)allowsHomeNavigation;
- (long long)backgroundStyle;
- (long long)cameraPresentationStyle;
- (bool)canPresentDetailsViewControllerForSectionWithIdentifier:(id)arg1;
- (bool)canShowHeaderForSectionWithIdentifier:(id)arg1;
- (bool)canShowNoHomeAccessView;
- (id)description;
- (long long)filterPresentationStyle;
- (id)home;
- (bool)includePredictedScenes;
- (id)init;
- (bool)isEqual:(id)arg1;
- (long long)maximumNumberOfItemsInSectionWithIdentifier:(id)arg1;
- (id)menuEditActionTitle;
- (id)menuEditActionTitleLocalizationKey;
- (id)overrideDashboardTitle;
- (id)room;
- (long long)scenePresentationStyle;
- (void)setAccessoryGroupingStyle:(long long)arg1;
- (void)setAccessoryLikeItemObjectLevel:(unsigned long long)arg1;
- (void)setAllowsAdding:(bool)arg1;
- (void)setAllowsAnnounce:(bool)arg1;
- (void)setAllowsEditing:(bool)arg1;
- (void)setAllowsEnergyIndicator:(bool)arg1;
- (void)setAllowsHomeNavigation:(bool)arg1;
- (void)setBackgroundStyle:(long long)arg1;
- (void)setCameraPresentationStyle:(long long)arg1;
- (void)setFilterPresentationStyle:(long long)arg1;
- (void)setIncludePredictedScenes:(bool)arg1;
- (void)setOverrideDashboardTitle:(id)arg1;
- (void)setScenePresentationStyle:(long long)arg1;
- (void)setShouldDelayItemUpdatesForViewVisibility:(bool)arg1;
- (void)setShouldHideEmptySections:(bool)arg1;
- (void)setShouldHideForGuests:(bool)arg1;
- (void)setShouldHidePlaceholderService:(bool)arg1;
- (void)setShouldIncludeRoomInAccessoryNames:(bool)arg1;
- (bool)shouldCreateModule:(Class)arg1;
- (bool)shouldDelayItemUpdatesForViewVisibility;
- (bool)shouldHideAccessoryRepresentable:(id)arg1;
- (bool)shouldHideEmptySections;
- (bool)shouldHideForGuests;
- (bool)shouldHideHomeKitObject:(id)arg1;
- (bool)shouldHideInRoomSectionForAccessoryRepresentableItem:(id)arg1;
- (bool)shouldHidePlaceholderService;
- (bool)shouldHideSectionWithIdentifier:(id)arg1;
- (bool)shouldHideStatusItemClass:(Class)arg1;
- (bool)shouldIncludeRoomInAccessoryNames;
- (id)typeDescriptionForAnalytics;

@end
