/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

@interface SBRootFolderControllerConfiguration : SBFolderControllerConfiguration {
    bool  _dockExternal;
    unsigned long long  _folderPageManagementAllowedOrientations;
    bool  _forSnapshot;
    unsigned long long  _ignoresOverscrollOnFirstPageOrientations;
    unsigned long long  _ignoresOverscrollOnLastPageOrientations;
    NSArray * _leadingCustomViewControllers;
    UIViewController * _pullDownSearchViewController;
    UIView<SBHLegibility> * _scrollAccessoryAuxiliaryView;
    UIView * _scrollAccessoryBackgroundView;
    UIViewController<SBHSearchPresentable> * _searchPresentableViewController;
    <SBHSearchPresenting> * _searchPresenter;
    unsigned long long  _showsAddWidgetButtonWhileEditingAllowedOrientations;
    bool  _showsDoneButtonWhileEditing;
    bool  _showsIconSizeToggleButtonWhileEditing;
    bool  _showsIconTintButtonWhileEditing;
    NSArray * _trailingCustomViewControllers;
}

@property (getter=isDockExternal, nonatomic) bool dockExternal;
@property (nonatomic) unsigned long long folderPageManagementAllowedOrientations;
@property (getter=isForSnapshot, nonatomic) bool forSnapshot;
@property (nonatomic) unsigned long long ignoresOverscrollOnFirstPageOrientations;
@property (nonatomic) unsigned long long ignoresOverscrollOnLastPageOrientations;
@property (nonatomic, retain) UIViewController<SBHRootFolderCustomViewPresenting> *leadingCustomViewController;
@property (nonatomic, copy) NSArray *leadingCustomViewControllers;
@property (nonatomic, retain) UIViewController *pullDownSearchViewController;
@property (nonatomic, retain) UIView<SBHLegibility> *scrollAccessoryAuxiliaryView;
@property (nonatomic, retain) UIView *scrollAccessoryBackgroundView;
@property (nonatomic, retain) UIViewController<SBHSearchPresentable> *searchPresentableViewController;
@property (nonatomic, retain) <SBHSearchPresenting> *searchPresenter;
@property (nonatomic) unsigned long long showsAddWidgetButtonWhileEditingAllowedOrientations;
@property (nonatomic) bool showsDoneButtonWhileEditing;
@property (nonatomic) bool showsIconSizeToggleButtonWhileEditing;
@property (nonatomic) bool showsIconTintButtonWhileEditing;
@property (nonatomic, retain) UIViewController<SBHLegibility> *todayViewController;
@property (nonatomic, retain) UIViewController<SBHRootFolderCustomViewPresenting> *trailingCustomViewController;
@property (nonatomic, copy) NSArray *trailingCustomViewControllers;

- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (unsigned long long)folderPageManagementAllowedOrientations;
- (unsigned long long)ignoresOverscrollOnFirstPageOrientations;
- (unsigned long long)ignoresOverscrollOnLastPageOrientations;
- (id)initWithConfiguration:(id)arg1;
- (bool)isDockExternal;
- (bool)isForSnapshot;
- (id)leadingCustomViewController;
- (id)leadingCustomViewControllers;
- (id)pullDownSearchViewController;
- (id)scrollAccessoryAuxiliaryView;
- (id)scrollAccessoryBackgroundView;
- (id)searchPresentableViewController;
- (id)searchPresenter;
- (void)setDockExternal:(bool)arg1;
- (void)setFolderPageManagementAllowedOrientations:(unsigned long long)arg1;
- (void)setForSnapshot:(bool)arg1;
- (void)setIgnoresOverscrollOnFirstPageOrientations:(unsigned long long)arg1;
- (void)setIgnoresOverscrollOnLastPageOrientations:(unsigned long long)arg1;
- (void)setLeadingCustomViewController:(id)arg1;
- (void)setLeadingCustomViewControllers:(id)arg1;
- (void)setPullDownSearchViewController:(id)arg1;
- (void)setScrollAccessoryAuxiliaryView:(id)arg1;
- (void)setScrollAccessoryBackgroundView:(id)arg1;
- (void)setSearchPresentableViewController:(id)arg1;
- (void)setSearchPresenter:(id)arg1;
- (void)setShowsAddWidgetButtonWhileEditingAllowedOrientations:(unsigned long long)arg1;
- (void)setShowsDoneButtonWhileEditing:(bool)arg1;
- (void)setShowsIconSizeToggleButtonWhileEditing:(bool)arg1;
- (void)setShowsIconTintButtonWhileEditing:(bool)arg1;
- (void)setTodayViewController:(id)arg1;
- (void)setTrailingCustomViewController:(id)arg1;
- (void)setTrailingCustomViewControllers:(id)arg1;
- (unsigned long long)showsAddWidgetButtonWhileEditingAllowedOrientations;
- (bool)showsDoneButtonWhileEditing;
- (bool)showsIconSizeToggleButtonWhileEditing;
- (bool)showsIconTintButtonWhileEditing;
- (id)todayViewController;
- (id)trailingCustomViewController;
- (id)trailingCustomViewControllers;

@end
