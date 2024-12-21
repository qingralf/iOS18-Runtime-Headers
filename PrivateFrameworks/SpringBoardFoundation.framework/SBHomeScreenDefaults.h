/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBHomeScreenDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic) bool automaticallyAddsNewApplications;
@property (nonatomic) bool didMigrateHomeScreenDefaultsTintToPosterBoard;
@property (nonatomic) bool enableHomeScreenWallpaperDimming;
@property (nonatomic) bool enableModalWidgetDiscoverabilityForTesting;
@property (nonatomic, copy) NSArray *focusModesRequiringIntroduction;
@property (nonatomic, copy) NSData *iconTintColorData;
@property (nonatomic, copy) NSString *iconUserInterfaceStyle;
@property (nonatomic) double iconUserInterfaceStyleLuminance;
@property (nonatomic) double iconUserInterfaceStyleSaturation;
@property (nonatomic) double iconUserInterfaceStyleVariation;
@property (nonatomic, copy) NSString *leftOfHomeAppBundleIdentifier;
@property (nonatomic, copy) NSString *overriddenScreenType;
@property (nonatomic) bool pagesHaveEverBeenHidden;
@property (nonatomic) bool shouldAddDefaultWidgetsToHomeScreen;
@property (nonatomic) bool shouldFudgeShortcutsToCauseMaximumPain;
@property (nonatomic) bool shouldHideReportWidgetStackRotationQuickAction;
@property (nonatomic) bool shouldIgnoreMinimumRequiredSDKVersionForWidgets;
@property (nonatomic) bool shouldPrepareDefaultTodayList;
@property (nonatomic) bool shouldPrepareStackForDefaultTodayList;
@property (nonatomic) bool shouldShowLibraryEducationView;
@property (nonatomic) bool shouldShowWidgetIntroductionPopover;
@property (nonatomic) bool shouldUpgradeEnableWidgetSuggestions;
@property (nonatomic) bool shouldUseLargeDefaultSizedIcons;
@property (nonatomic) bool shouldUseLargeIcons;
@property (nonatomic) bool showsBadgesInAppLibrary;
@property (nonatomic) bool showsHomeScreenSearchAffordance;
@property (getter=isSidebarPinned, nonatomic) bool sidebarPinned;
@property (nonatomic) bool userDidUndoSuggestedWidget;
@property (nonatomic) bool userHasDeletedSuggestedWidget;

// Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation

- (void)_bindAndRegisterDefaults;
- (bool)automaticallyAddsNewApplicationsExists;
- (id)iconTintColor;
- (id)observeIconTintColorOnQueue:(id)arg1 withBlock:(id /* block */)arg2;
- (void)setIconTintColor:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome

- (id)sbh_homeScreenConfiguration;
- (void)sbh_setHomeScreenConfiguration:(id)arg1;

@end