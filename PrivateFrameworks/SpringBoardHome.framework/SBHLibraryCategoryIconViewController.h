/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

@interface SBHLibraryCategoryIconViewController : UIViewController <SBFolderObserver, SBHLegibility, SBHLibraryCategoryObserver, SBIconViewCustomImageViewControlling, SBIconViewQuerying> {
    MTMaterialView * _backgroundBlurView;
    SBHLibraryCategoryPodBackgroundView * _backgroundView;
    SBHLibraryCategory * _category;
    unsigned long long  _contentVisibility;
    bool  _editing;
    SBFolder * _folder;
    SBFolderIconImageCache * _folderIconImageCache;
    SBHIconImageCache * _iconImageCache;
    struct SBIconImageInfo { 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
        double scale; 
        double continuousCornerRadius; 
    }  _iconImageInfo;
    SBIconListView * _iconListView;
    <SBIconViewProviding> * _iconViewProvider;
    <SBIconListLayoutProvider> * _listLayoutProvider;
    NSString * _location;
    bool  _locked;
    UIView * _lockedView;
    bool  _needsBackgroundBlur;
    SBHIconImageAppearance * _overrideIconImageAppearance;
    <BSInvalidatable> * _preventFolderUpdateAssertion;
    bool  _showsSquareCorners;
}

@property (nonatomic, readonly) CALayer *alternateContentsLayer; /* unknown property attribute: ? */
@property (nonatomic, readonly, copy) NSArray *applicationShortcutItems; /* unknown property attribute: ? */
@property (nonatomic) struct SBIconApproximateLayoutPosition { unsigned long long x1; unsigned long long x2; } approximateLayoutPosition; /* unknown property attribute: ? */
@property (nonatomic) bool automaticallyUpdatesVisiblySettled; /* unknown property attribute: ? */
@property (nonatomic, readonly) UIView *backgroundView;
@property (nonatomic, copy) id /* block */ backgroundViewConfigurator; /* unknown property attribute: ? */
@property (nonatomic, copy) id /* block */ backgroundViewProvider; /* unknown property attribute: ? */
@property (nonatomic) double brightness; /* unknown property attribute: ? */
@property (nonatomic, readonly) SBHLibraryCategory *category;
@property (nonatomic) unsigned long long contentVisibility; /* unknown property attribute: ? */
@property (nonatomic, readonly) double continuousCornerRadius;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (getter=isDropping, nonatomic) bool dropping; /* unknown property attribute: ? */
@property (getter=isEditing, nonatomic) bool editing; /* unknown property attribute: ? */
@property (nonatomic, readonly) SBFolder *folder;
@property (nonatomic, retain) SBFolderIconImageCache *folderIconImageCache;
@property (nonatomic) bool forcesEdgeAntialiasing; /* unknown property attribute: ? */
@property (readonly) unsigned long long hash;
@property (nonatomic) <SBIconViewCustomImageViewHosting> *host; /* unknown property attribute: ? */
@property (nonatomic, readonly) SBIcon *icon; /* unknown property attribute: ? */
@property (nonatomic, retain) SBHIconImageCache *iconImageCache;
@property (nonatomic) struct SBIconImageInfo { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; } iconImageInfo;
@property (nonatomic, readonly) SBIconListView *iconListView;
@property (nonatomic) <SBIconViewProviding> *iconViewProvider;
@property (nonatomic) unsigned long long imageViewAlignment; /* unknown property attribute: ? */
@property (getter=isJittering, nonatomic) bool jittering; /* unknown property attribute: ? */
@property (nonatomic, retain) _UILegibilitySettings *legibilitySettings; /* unknown property attribute: ? */
@property (nonatomic, retain) <SBIconListLayoutProvider> *listLayoutProvider;
@property (nonatomic, readonly) NSString *location;
@property (getter=isLocked, nonatomic) bool locked;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } minimumPreferredEdgeInsetsForContextMenu; /* unknown property attribute: ? */
@property (nonatomic) bool needsBackgroundBlur;
@property (getter=isOverlapping, nonatomic) bool overlapping; /* unknown property attribute: ? */
@property (nonatomic, copy) SBHIconImageAppearance *overrideIconImageAppearance; /* unknown property attribute: ? */
@property (nonatomic, copy) SBHIconImageStyleConfiguration *overrideIconImageStyleConfiguration; /* unknown property attribute: ? */
@property (nonatomic) unsigned long long pauseReasons; /* unknown property attribute: ? */
@property (nonatomic) unsigned long long presentationMode; /* unknown property attribute: ? */
@property (getter=isShowingContextMenu, nonatomic) bool showingContextMenu; /* unknown property attribute: ? */
@property (nonatomic) bool showsSnapshotWhenDeactivated; /* unknown property attribute: ? */
@property (nonatomic) bool showsSquareCorners;
@property (nonatomic, readonly) UIView *snapshotView; /* unknown property attribute: ? */
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } snapshotViewCenter; /* unknown property attribute: ? */
@property (nonatomic, readonly) double snapshotViewScaleFactor; /* unknown property attribute: ? */
@property (nonatomic, readonly) UIBezierPath *snapshotViewVisiblePath; /* unknown property attribute: ? */
@property (nonatomic, readonly) UIView *springLoadingEffectTargetView; /* unknown property attribute: ? */
@property (readonly) Class superclass;
@property (getter=isUserInteractionEnabled, nonatomic) bool userInteractionEnabled; /* unknown property attribute: ? */
@property (nonatomic) unsigned long long userVisibilityStatus; /* unknown property attribute: ? */
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } visibleBounds;
@property (nonatomic, readonly) <SBLeafIconDataSource> *visiblyActiveDataSource; /* unknown property attribute: ? */
@property (nonatomic, readonly) bool wantsCaptureOnlyBackgroundView; /* unknown property attribute: ? */
@property (nonatomic) bool wantsEditingDisplayStyle; /* unknown property attribute: ? */
@property (nonatomic, readonly) bool wantsLabelHidden; /* unknown property attribute: ? */

- (void).cxx_destruct;
- (bool)_canBeLocked;
- (id)_createLockedView;
- (void)_handleTapOnLockedView:(id)arg1;
- (void)_setLockedIfPossible:(bool)arg1 animated:(bool)arg2;
- (void)_updateBackgroundBlurIfNeeded;
- (void)_updateLockedViewForLocked:(bool)arg1 animated:(bool)arg2;
- (id)backgroundView;
- (id)category;
- (void)categoryDidUpdate:(id)arg1;
- (void)categoryWillUpdate:(id)arg1;
- (unsigned long long)contentVisibility;
- (double)continuousCornerRadius;
- (void)enumerateDisplayedIconViewsForIcon:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)enumerateDisplayedIconViewsUsingBlock:(id /* block */)arg1;
- (id)firstIconViewForIcon:(id)arg1;
- (id)firstIconViewForIcon:(id)arg1 excludingLocations:(id)arg2;
- (id)firstIconViewForIcon:(id)arg1 inLocations:(id)arg2;
- (id)folder;
- (void)folder:(id)arg1 didAddList:(id)arg2;
- (void)folder:(id)arg1 didRemoveLists:(id)arg2 atIndexes:(id)arg3;
- (id)folderIconImageCache;
- (id)iconImageCache;
- (struct SBIconImageInfo { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; })iconImageInfo;
- (id)iconListView;
- (id)iconViewForIcon:(id)arg1 location:(id)arg2;
- (id)iconViewProvider;
- (bool)isDisplayingIcon:(id)arg1;
- (bool)isDisplayingIcon:(id)arg1 inLocation:(id)arg2;
- (bool)isDisplayingIcon:(id)arg1 inLocations:(id)arg2;
- (bool)isDisplayingIconView:(id)arg1;
- (bool)isDisplayingIconView:(id)arg1 inLocation:(id)arg2;
- (bool)isEditing;
- (bool)isLocked;
- (bool)isPresentingIconLocation:(id)arg1;
- (id)legibilitySettings;
- (id)listLayoutProvider;
- (id)location;
- (bool)needsBackgroundBlur;
- (id)overrideIconImageAppearance;
- (id)presentedIconLocations;
- (void)setContentVisibility:(unsigned long long)arg1;
- (void)setEditing:(bool)arg1;
- (void)setEditing:(bool)arg1 animated:(bool)arg2;
- (void)setFolderIconImageCache:(id)arg1;
- (void)setIconImageCache:(id)arg1;
- (void)setIconImageInfo:(struct SBIconImageInfo { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; })arg1;
- (void)setIconViewProvider:(id)arg1;
- (void)setLegibilitySettings:(id)arg1;
- (void)setListLayoutProvider:(id)arg1;
- (void)setLocked:(bool)arg1;
- (void)setNeedsBackgroundBlur:(bool)arg1;
- (void)setOverrideIconImageAppearance:(id)arg1;
- (void)setShowsSquareCorners:(bool)arg1;
- (bool)showsSquareCorners;
- (id)sourceView;
- (void)updateCategory:(id)arg1 location:(id)arg2;
- (void)updateFolder:(id)arg1 location:(id)arg2;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleBounds;

@end
