/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

@interface SBLeafIcon : SBIcon <NSCopying> {
    <SBLeafIconDataSource> * _activeDataSource;
    NSString * _applicationBundleID;
    unsigned long long  _coalescedDataSourceUpdates;
    <SBLeafIconDataSource> * _dataSourceAtUninstallation;
    NSMutableOrderedSet * _dataSources;
    NSString * _leafIdentifier;
    <SBLeafIconDataSource> * _manuallySetDataSource;
}

@property (nonatomic, retain) <SBLeafIconDataSource> *activeDataSource;
@property (nonatomic, readonly, copy) NSString *applicationBundleID;
@property (getter=_bestDataSource, nonatomic, readonly) <SBLeafIconDataSource> *bestDataSource;
@property (getter=_fallbackBestDataSource, nonatomic, readonly) <SBLeafIconDataSource> *fallbackBestDataSource;
@property (nonatomic, readonly) <SBLeafIconDataSource> *firstIconDataSource;
@property (nonatomic, readonly) unsigned long long iconDataSourceCount;
@property (nonatomic, readonly, copy) NSArray *iconDataSources;
@property (nonatomic, readonly) unsigned long long indexOfActiveDataSource;
@property (nonatomic, readonly) <SBLeafIconDataSource> *lastIconDataSource;
@property (nonatomic, readonly) bool leafIdentifierAndApplicationBundleIDMatches;
@property (nonatomic, readonly, copy) NSString *sbh_iconLibraryItemIdentifier;

+ (id)formattedBadgeNumberOrString:(id)arg1;
+ (id)iconImageForDataSource:(id)arg1 ofIcon:(id)arg2 info:(struct SBIconImageInfo { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; })arg3;
+ (id)iconLayerForDataSource:(id)arg1 ofIcon:(id)arg2 info:(struct SBIconImageInfo { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; })arg3 traitCollection:(id)arg4 options:(unsigned long long)arg5;

- (void).cxx_destruct;
- (id)_bestDataSource;
- (id)_fallbackBestDataSource;
- (void)_noteActiveDataSourceDidChangeAndReloadIcon:(bool)arg1;
- (void)_noteActiveDataSourceDidChangeNotification:(id)arg1;
- (void)_noteActiveDataSourceDidGenerateImageNotification:(id)arg1;
- (void)_noteDataSourceDidInvalidateNotification:(id)arg1;
- (void)_setPropertiesFromIcon:(id)arg1;
- (void)_updateActiveDataSource;
- (id)accessoryTextForLocation:(id)arg1;
- (long long)accessoryTypeForLocation:(id)arg1;
- (id)activeDataSource;
- (void)addIconDataSource:(id)arg1;
- (void)addIconDataSources:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)applicationBundleID;
- (id)badgeNumberOrString;
- (bool)canGenerateIconsInBackground;
- (bool)canMakeIconLayerQuicklyWithInfo:(struct SBIconImageInfo { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; })arg1 traitCollection:(id)arg2 options:(unsigned long long)arg3;
- (bool)canTightenLabel;
- (bool)canTruncateLabel;
- (void)completeUninstall;
- (id)copyWithLeafIdentifier:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)didAddIconDataSource:(id)arg1;
- (void)didChangeActiveDataSource:(id)arg1;
- (void)didRemoveIconDataSource:(id)arg1;
- (void)didReplaceIconDataSource:(id)arg1 withIconDataSource:(id)arg2;
- (id)displayNameForLocation:(id)arg1;
- (id)displayNameForObscuredDisabledLaunchForLocation:(id)arg1;
- (void)enumerateObserversUsingBlock:(id /* block */)arg1;
- (id)firstIconDataSource;
- (id)firstIconDataSourceOfClass:(Class)arg1;
- (id)firstIconDataSourcePassingTest:(id /* block */)arg1;
- (id)firstIconDataSourceWithUniqueIdentifier:(id)arg1;
- (id)folderFallbackTitle;
- (id)folderTitleOptions;
- (id)generateIconImageWithInfo:(struct SBIconImageInfo { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; })arg1;
- (id)genericIconImageWithInfo:(struct SBIconImageInfo { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; })arg1;
- (bool)hasIconDataSource:(id)arg1;
- (bool)hasObserver:(id)arg1;
- (id)iTunesCategoriesOrderedByRelevancy;
- (unsigned long long)iconDataSourceCount;
- (id)iconDataSources;
- (id)iconDataSourcesOfClass:(Class)arg1;
- (unsigned long long)indexOfActiveDataSource;
- (id)init;
- (id)initWithLeafIdentifier:(id)arg1 applicationBundleID:(id)arg2;
- (id)initWithUniqueLeafIdentifier;
- (void)insertIconDataSource:(id)arg1 beforeIconDataSource:(id)arg2;
- (void)insertIconDataSources:(id)arg1 atIndexes:(id)arg2;
- (bool)isLaunchDisabledForObscuredReason;
- (bool)isLaunchEnabled;
- (bool)isLeafIcon;
- (bool)isProgressPaused;
- (bool)isTimedOut;
- (bool)isUninstallSupported;
- (long long)labelAccessoryType;
- (id)lastIconDataSource;
- (id)leafIdentifier;
- (bool)leafIdentifierAndApplicationBundleIDMatches;
- (id)makeIconImageWithInfo:(struct SBIconImageInfo { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; })arg1 traitCollection:(id)arg2 options:(unsigned long long)arg3;
- (id)makeIconLayerWithInfo:(struct SBIconImageInfo { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; })arg1 traitCollection:(id)arg2 options:(unsigned long long)arg3;
- (id)nodeIdentifier;
- (void)notifyObserversOfAddedIconDataSource:(id)arg1;
- (void)notifyObserversOfRemovedIconDataSource:(id)arg1;
- (void)performCoalescedDataSourceUpdate:(id /* block */)arg1;
- (bool)performLaunchFromLocation:(id)arg1 context:(id)arg2;
- (void)prepareToMakeLayerWithInfo:(struct SBIconImageInfo { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; })arg1 traitCollection:(id)arg2 options:(unsigned long long)arg3;
- (double)progressPercent;
- (long long)progressState;
- (void)removeAllIconDataSources;
- (void)removeIconDataSource:(id)arg1;
- (void)removeIconDataSourcesOfClass:(Class)arg1;
- (void)removeIconDataSourcesPassingTest:(id /* block */)arg1;
- (void)removeObserver:(id)arg1;
- (void)replaceIconDataSource:(id)arg1 withIconDataSource:(id)arg2;
- (id)sbh_iconLibraryItemIdentifier;
- (void)selectNextActiveDataSource;
- (void)setActiveDataSource:(id)arg1;
- (void)setUninstalled;
- (id)statusDescriptionForLocation:(id)arg1;
- (id)supportedGridSizeClasses;
- (bool)supportsRasterization;
- (id)tags;
- (id)unmaskedIconImageWithInfo:(struct SBIconImageInfo { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; })arg1;

@end
