/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UISearchController : UIViewController <NSCoding, TSPresentable, UIGestureRecognizerDelegate, UIViewControllerAnimatedTransitioning, UIViewControllerTransitioningDelegate, _UIScrollViewScrollObserver_Internal> {
    bool  __alwaysHidesNavigationBar;
    bool  __gridKeyboardVisible;
    UIView * __leftDividerView;
    UINavigationItem * __navigationItemCurrentlyDisplayingSearchController;
    long long  __previousSearchBarPosition;
    unsigned long long  __requestedInteractionModel;
    double  __resultsContentScrollViewPresentationOffset;
    UIView * __rightDividerView;
    NSArray * __scopeBarConstraints;
    UIFocusContainerGuide * __scopeBarFocusContainerGuide;
    bool  __shouldHideGridKeyboardUnfocused;
    bool  __shouldLogAppearance;
    bool  __shouldRespectPreferredContentSize;
    bool  __showResultsForEmptySearch;
    UIView * __suggestionContainerView;
    UICollectionView * __suggestionView;
    UIView * __systemInputMarginView;
    bool  __tabBarHidden;
    double  __topResultsViewEdgeInset;
    _UISearchControllerTVKeyboardContainerView * __tvKeyboardContainerView;
    <UIViewControllerAnimatedTransitioning> * _animator;
    UITapGestureRecognizer * _backButtonDismissGestureRecognizer;
    int  _barPresentationStyle;
    struct { 
        unsigned int searchBarWasTableHeaderView : 1; 
        unsigned int searchBarWasFirstResponder : 1; 
        unsigned int transitioningOut : 1; 
        unsigned int delegateWantsInsertSearchFieldTextSuggestion : 1; 
        unsigned int automaticallyShowsCancelButton : 1; 
        unsigned int scopeBarActivation : 2; 
        unsigned int automaticallyShowsSearchResultsController : 1; 
        unsigned int explicitlyShowsSearchResultsController : 1; 
        unsigned int searchFieldIsBeginningEditing : 1; 
        unsigned int hidesNavigationBarDuringPresentation : 1; 
        unsigned int shouldDeferSettingSearchSuggestions : 1; 
        unsigned int suggestionHasBeenSelected : 1; 
        unsigned int pendingClearSearchSuggestions : 1; 
        unsigned int ignoresSearchSuggestionsForStackedSearch : 1; 
        unsigned int usesSearchSuggestionsMenuForStackedSearch : 1; 
        unsigned int hasPendingSuggestionMenuRefresh : 1; 
        unsigned int hasSuppressedSuggestionMenuBeforeHorizontalSizeClassChange : 1; 
        unsigned int wasShowingSuggestionsWhenChangedToInline : 1; 
        unsigned int isDismissingOrAboutToDismiss : 1; 
        unsigned int hasDeferredActivation : 1; 
        unsigned int shouldUpdateHelperMessage : 1; 
        unsigned int clearSuggestionsOnSelection : 1; 
        unsigned int shouldFocusResultsOnNextFocusUpdate : 1; 
        unsigned int updateSearchTextOnDidSelectSuggestion : 1; 
        unsigned int shouldFocusKeyboardOnNextFocusUpdate : 1; 
    }  _controllerFlags;
    id /* block */  _deferredActivationOrDismissal;
    <UISearchControllerDelegate> * _delegate;
    _UISearchControllerDidScrollDelegate * _didScrollDelegate;
    UITapGestureRecognizer * _doneButtonGestureRecognizer;
    UIFocusGuide * _keyboardToSearchResultsFocusGuide;
    long long  _lastKnownInterfaceOrientation;
    _UINavigationControllerManagedSearchPalette * _managedPalette;
    bool  _obscuresBackgroundDuringPresentation;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _previousObservedScrollViewGradientMaskLengths;
    bool  _previousObservedScrollViewShouldPreventFocusScrollPastContentSize;
    UIView * _resultsControllerViewContainer;
    UISearchBar * _searchBar;
    UIScrollView * _searchControllerObservedScrollView;
    NSArray * _searchHints;
    UIViewController * _searchResultsController;
    UIFocusGuide * _searchResultsToHiddenKeyboardFocusGuide;
    <UISearchResultsUpdating> * _searchResultsUpdater;
    <UISearchResultsUpdatingPrivate> * _searchResultsUpdaterPrivate;
    bool  _shouldUseLegacyAnimator;
    _UISearchSuggestionController * _suggestionController;
    _UISearchSuggestionsListViewController * _suggestionsListViewController;
    UISystemInputViewController * _systemInputViewController;
    UIScrollView * _tvObservingScrollView;
    id  _windowWillAnimateToken;
}

@property (setter=_setAlwaysHidesNavigationBar:, nonatomic) bool _alwaysHidesNavigationBar;
@property (setter=_setAutomaticallyShowsCancelButton:, nonatomic) bool _automaticallyShowsCancelButton;
@property (setter=_setAutomaticallyShowsScopeBar:, nonatomic) bool _automaticallyShowsScopeBar;
@property (getter=_automaticallyShowsSearchResultsController, setter=_setAutomaticallyShowsSearchResultsController:, nonatomic) bool _automaticallyShowsSearchResultsController;
@property (nonatomic, readonly) int _barPresentationStyle;
@property (setter=_setClearSuggestionsOnSelection:, nonatomic) bool _clearSuggestionsOnSelection;
@property (nonatomic, readonly) UIViewController *_currentActiveChildViewController;
@property (setter=_dci_setAutomaticScopeBarShowsOnPresentation:, nonatomic) bool _dci_automaticScopeBarShowsOnPresentation;
@property (setter=_dci_setIgnoresSearchSuggestionsForStackedSearch:, nonatomic) bool _dci_ignoresSearchSuggestionsForStackedSearch;
@property (nonatomic, readonly) long long _dci_searchBarPlacement;
@property (setter=_dci_setSearchSuggestions:, nonatomic, copy) NSArray *_dci_searchSuggestions;
@property (setter=_dci_setSuggestionsMenuDismissalPassthroughViews:, nonatomic, copy) NSArray *_dci_suggestionsMenuDismissalPassthroughViews;
@property (readonly) bool _delegateWantsInsertSearchFieldTextSuggestion;
@property (getter=_isGridKeyboardVisible, setter=_setGridKeyboardVisible:, nonatomic) bool _gridKeyboardVisible;
@property (nonatomic, readonly) bool _hidesNavigationBarDuringPresentationRespectingInlineSearch;
@property (nonatomic, readonly) UIView *_leftDividerView;
@property (nonatomic, readonly, retain) _UINavigationControllerManagedSearchPalette *_managedPalette;
@property (setter=_setNavigationItemCurrentlyDisplayingSearchController:, nonatomic) UINavigationItem *_navigationItemCurrentlyDisplayingSearchController;
@property (nonatomic) long long _previousSearchBarPosition;
@property (setter=_setRequestedInteractionModel:, nonatomic) unsigned long long _requestedInteractionModel;
@property (nonatomic) double _resultsContentScrollViewPresentationOffset;
@property (nonatomic, retain) UIView *_resultsControllerViewContainer;
@property (nonatomic, readonly) UIView *_rightDividerView;
@property (nonatomic, retain) NSArray *_scopeBarConstraints;
@property (nonatomic, readonly) UIFocusContainerGuide *_scopeBarFocusContainerGuide;
@property (nonatomic, readonly) bool _searchFieldIsBeginningEditing;
@property (setter=_setSearchSuggestionGroups:, nonatomic, copy) NSArray *_searchSuggestionGroups;
@property (nonatomic, readonly) bool _searchbarWasTableHeaderView;
@property (getter=_shouldDisplayDefaultSuggestion, setter=_setShouldDisplayDefaultSuggestion:, nonatomic) bool _shouldDisplayDefaultSuggestion;
@property (setter=_setShouldHideGridKeyboardUnfocused:, nonatomic) bool _shouldHideGridKeyboardUnfocused;
@property (nonatomic) bool _shouldLogAppearance;
@property (setter=_setShouldRespectPreferredContentSize:, nonatomic) bool _shouldRespectPreferredContentSize;
@property (setter=_setShowResultsForEmptySearch:, nonatomic) bool _showResultsForEmptySearch;
@property (setter=_setShowSearchSuggestionPreview:, nonatomic) bool _showSearchSuggestionPreview;
@property (getter=_showsSearchResultsController, setter=_setShowsSearchResultsController:, nonatomic) bool _showsSearchResultsController;
@property (nonatomic, retain) UIView *_suggestionContainerView;
@property (setter=_setSuggestionController:, nonatomic, retain) _UISearchSuggestionController *_suggestionController;
@property (setter=_setSuggestionRowTitle:, nonatomic, copy) NSString *_suggestionRowTitle;
@property (nonatomic, readonly) UICollectionView *_suggestionView;
@property (nonatomic, readonly) _UISearchSuggestionsListViewController *_suggestionsListViewController;
@property (nonatomic, retain) UIView *_systemInputMarginView;
@property (nonatomic, readonly) UISystemInputViewController *_systemInputViewController;
@property (nonatomic) bool _tabBarHidden;
@property (nonatomic) double _topResultsViewEdgeInset;
@property (nonatomic, readonly) _UISearchControllerTVKeyboardContainerView *_tvKeyboardContainerView;
@property (nonatomic, readonly) bool _tvShouldScrollWithObservedScrollViewIfPossible;
@property (setter=_setUpdateSearchTextOnDidSelectSuggestion:, nonatomic) bool _updateSearchTextOnDidSelectSuggestion;
@property (setter=_setUsesSearchSuggestionsMenuForStackedSearch:, nonatomic) bool _usesSearchSuggestionsMenuForStackedSearch;
@property (getter=isActive, nonatomic) bool active;
@property (nonatomic) bool automaticallyShowsCancelButton;
@property (nonatomic) bool automaticallyShowsScopeBar;
@property (nonatomic) bool automaticallyShowsSearchResultsController;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <UISearchControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool dimsBackgroundDuringPresentation;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hidesNavigationBarDuringPresentation;
@property (nonatomic) bool ignoresSearchSuggestionsForSearchBarPlacementStacked;
@property (nonatomic, retain) UIFocusGuide *keyboardToSearchResultsFocusGuide;
@property (nonatomic) bool obscuresBackgroundDuringPresentation;
@property (nonatomic) long long scopeBarActivation;
@property (nonatomic, readonly) UISearchBar *searchBar;
@property (nonatomic, readonly) long long searchBarPlacement;
@property (nonatomic, retain) UIScrollView *searchControllerObservedScrollView;
@property (nonatomic, copy) NSArray *searchHints;
@property (nonatomic, readonly) UIViewController *searchResultsController;
@property (nonatomic, retain) UIFocusGuide *searchResultsToHiddenKeyboardFocusGuide;
@property (nonatomic) <UISearchResultsUpdating> *searchResultsUpdater;
@property (nonatomic) <UISearchResultsUpdatingPrivate> *searchResultsUpdaterPrivate;
@property (nonatomic, copy) NSArray *searchSuggestions;
@property (nonatomic, retain) <UISearchSuggestion> *selectedSuggestion;
@property (nonatomic) bool showsSearchResultsController;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (void)_resignSearchBarAsFirstResponder:(id)arg1;

- (void).cxx_destruct;
- (void)_adjustSearchBarSizeForOrientation:(long long)arg1;
- (void)_adjustSearchBarSizeForOrientation:(long long)arg1 oldPaletteFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)_adjustTVSearchContainerViewForContentScrollView:(id)arg1;
- (bool)_allowFormSheetStylePresentation;
- (bool)_alwaysHidesNavigationBar;
- (id)_animatorForBarPresentationStyle:(int)arg1 dismissing:(bool)arg2;
- (bool)_automaticallyShowsCancelButton;
- (bool)_automaticallyShowsScopeBar;
- (bool)_automaticallyShowsSearchResultsController;
- (int)_barPresentationStyle;
- (void)_beginWatchingPresentingController;
- (id)_carPlayLimitedUIToken;
- (id)_carPlayLimitedUIViewController;
- (bool)_clearSuggestionsOnSelection;
- (void)_commonInit;
- (void)_connectSearchBar:(id)arg1;
- (bool)_containedInNavigationPaletteAndNotHidden;
- (void)_contentScrollViewDidFinishContentOffsetAnimation;
- (id)_createAnimationCoordinator;
- (void)_createOrUpdateKeyboardToSearchResultsFocusGuide;
- (void)_createOrUpdateSearchResultsToHiddenKeyboardFocusGuide;
- (void)_createSystemInputViewControllerIfNeededForTraitEnvironment:(id)arg1;
- (id)_currentActiveChildViewController;
- (bool)_dci_automaticScopeBarShowsOnPresentation;
- (bool)_dci_ignoresSearchSuggestionsForStackedSearch;
- (long long)_dci_searchBarPlacement;
- (id)_dci_searchSuggestions;
- (void)_dci_setAutomaticScopeBarShowsOnPresentation:(bool)arg1;
- (void)_dci_setIgnoresSearchSuggestionsForStackedSearch:(bool)arg1;
- (void)_dci_setSearchSuggestions:(id)arg1;
- (void)_dci_setSuggestionsMenuDismissalPassthroughViews:(id)arg1;
- (id)_dci_suggestionsMenuDismissalPassthroughViews;
- (id)_defaultAnimationController;
- (id)_deferredSearchSuggestionGroups;
- (bool)_delegateWantsInsertSearchFieldTextSuggestion;
- (void)_didCreateSystemInputViewController;
- (void)_didDismissSearchController;
- (void)_didPresentFromViewController:(id)arg1;
- (bool)_disableAutomaticKeyboardUI;
- (void)_dismissPresentation:(bool)arg1;
- (void)_displayDefaultHelperPlaceholderMessage;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_edgeInsetsForChildViewController:(id)arg1 insetsAreAbsolute:(bool*)arg2;
- (void)_endWatchingPresentingController;
- (bool)_gestureRecognizerShouldBegin:(id)arg1;
- (void)_handleBackButtonGesture:(id)arg1;
- (bool)_hidesNavigationBarDuringPresentationRespectingInlineSearch;
- (void)_hostingNavigationBarDidLayoutInlineSearchBar;
- (void)_installBackGestureRecognizer;
- (void)_installDoneGestureRecognizer;
- (void)_ios_searchBar:(id)arg1 textDidChange:(id)arg2 programatically:(bool)arg3;
- (bool)_isGridKeyboardVisible;
- (bool)_isSearchController;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (id)_leftDividerView;
- (void)_limitedUIDidChangeAnimated:(bool)arg1;
- (id)_locatePresentingViewController;
- (id)_locatePresentingViewControllerIfInManagedPaletteOrHostedByNavigationBar;
- (id)_managedPalette;
- (void)_navigationControllerWillShowViewController:(id)arg1;
- (id)_navigationItemCurrentlyDisplayingSearchController;
- (void)_observeScrollViewDidScroll:(id)arg1;
- (void)_performAutomaticPresentationFromTextField:(bool)arg1;
- (void)_performDidBeginEditingForSearchBar:(id)arg1;
- (void)_preferredContentSizeDidChangeForChildViewController:(id)arg1;
- (id)_presentationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)_presentingViewControllerDidChange:(id)arg1;
- (void)_presentingViewControllerWillChange:(id)arg1;
- (long long)_previousSearchBarPosition;
- (void)_removeCarPlayLimitedUIObserver;
- (void)_requestPendingSuggestionMenuRefresh;
- (unsigned long long)_requestedInteractionModel;
- (bool)_requiresCustomPresentationController;
- (void)_resizeResultsControllerWithDelta:(struct CGSize { double x1; double x2; })arg1;
- (double)_resultsContentScrollViewPresentationOffset;
- (id)_resultsControllerViewContainer;
- (bool)_resultsControllerWillLayoutVisibleUnderContainerView;
- (id)_rightDividerView;
- (id)_scopeBarConstraints;
- (id)_scopeBarFocusContainerGuide;
- (void)_searchBar:(id)arg1 selectedScopeButtonIndexDidChange:(long long)arg2;
- (void)_searchBar:(id)arg1 textDidChange:(id)arg2 programatically:(bool)arg3;
- (void)_searchBarCancelButtonClicked:(id)arg1;
- (void)_searchBarDidUpdateScopeBar:(id)arg1;
- (void)_searchBarSearchButtonClicked:(id)arg1;
- (void)_searchBarSearchTextFieldRequirementDidChange:(id)arg1;
- (bool)_searchBarShouldFinalizeBecomingFirstResponder;
- (void)_searchBarSuperviewChanged;
- (void)_searchBarTextDidBeginEditing:(id)arg1;
- (void)_searchBarTextFieldDidSelectSearchSuggestion:(id)arg1;
- (void)_searchBarTokensDidChange:(id)arg1;
- (bool)_searchFieldIsBeginningEditing;
- (id)_searchPresentationController;
- (id)_searchSuggestionGroups;
- (bool)_searchbarWasTableHeaderView;
- (void)_sendDelegateInsertSearchFieldTextSuggestion:(id)arg1;
- (void)_setAlwaysHidesNavigationBar:(bool)arg1;
- (void)_setAutomaticallyShowsCancelButton:(bool)arg1;
- (void)_setAutomaticallyShowsScopeBar:(bool)arg1;
- (void)_setAutomaticallyShowsSearchResultsController:(bool)arg1;
- (void)_setCarPlayLimitedUIToken:(id)arg1;
- (void)_setCarPlayLimitedUIViewController:(id)arg1;
- (void)_setClearSuggestionsOnSelection:(bool)arg1;
- (void)_setDeferredSearchSuggestionGroups:(id)arg1;
- (void)_setGridKeyboardVisible:(bool)arg1;
- (void)_setNavigationItemCurrentlyDisplayingSearchController:(id)arg1;
- (void)_setRequestedInteractionModel:(unsigned long long)arg1;
- (void)_setSearchSuggestionGroups:(id)arg1;
- (void)_setShouldDisplayDefaultSuggestion:(bool)arg1;
- (void)_setShouldHideGridKeyboardUnfocused:(bool)arg1;
- (void)_setShouldRespectPreferredContentSize:(bool)arg1;
- (void)_setShowResultsForEmptySearch:(bool)arg1;
- (void)_setShowSearchSuggestionPreview:(bool)arg1;
- (void)_setShowsSearchResultsController:(bool)arg1;
- (void)_setSuggestionController:(id)arg1;
- (void)_setSuggestionRowTitle:(id)arg1;
- (void)_setTransitioningOutWithoutDisappearing:(bool)arg1;
- (void)_setUpdateSearchTextOnDidSelectSuggestion:(bool)arg1;
- (void)_setUsesSearchSuggestionsMenuForStackedSearch:(bool)arg1;
- (void)_setupForCurrentTraitCollection;
- (bool)_shouldDisplayDefaultSuggestion;
- (bool)_shouldHideGridKeyboardUnfocused;
- (bool)_shouldLogAppearance;
- (bool)_shouldRespectPreferredContentSize;
- (bool)_showResultsForEmptySearch;
- (bool)_showSearchSuggestionPreview;
- (bool)_showsSearchResultsController;
- (void)_sizeSearchViewToPresentingViewController:(id)arg1;
- (void)_startDeferringSettingSearchSuggestions;
- (void)_startManagingPalette:(id)arg1;
- (void)_stopDeferringAndShowDeferredSearchSuggestions;
- (void)_stopManagingPalette;
- (id)_suggestionContainerView;
- (id)_suggestionController;
- (id)_suggestionRowTitle;
- (id)_suggestionView;
- (id)_suggestionsListViewController;
- (void)_suggestionsMenuInteractionWillEndWithAnimator:(id)arg1;
- (id)_systemInputMarginView;
- (id)_systemInputViewController;
- (id)_systemInputViewControllerAfterUpdate:(bool)arg1;
- (bool)_tabBarHidden;
- (double)_topResultsViewEdgeInset;
- (bool)_transitioningOutWithoutDisappearing;
- (id)_tvKeyboardContainerView;
- (bool)_tvShouldScrollWithObservedScrollViewIfPossible;
- (id)_tvSuggestionController;
- (void)_tvUpdateScrollViewGradientMaskWithNavigationController;
- (void)_tvos_searchBar:(id)arg1 textDidChange:(id)arg2 programatically:(bool)arg3;
- (void)_uninstallBackGestureRecognizer;
- (void)_uninstallDoneGestureRecognizer;
- (void)_updateBarPresentationStyleForPresentingViewController:(id)arg1;
- (void)_updateFocusFromDoneButton:(id)arg1;
- (void)_updateHasPendingSuggestionMenuRefreshFlagForReason:(long long)arg1;
- (void)_updateKeyboardFocusGuidesForAnimator:(id)arg1;
- (void)_updateSearchBarMaskIfNecessary;
- (void)_updateSearchResultsContentScrollViewWithDelta:(struct CGSize { double x1; double x2; })arg1;
- (void)_updateSearchResultsControllerWithDelta:(struct CGSize { double x1; double x2; })arg1;
- (void)_updateSearchResultsPositionWithDelta:(struct CGSize { double x1; double x2; })arg1;
- (void)_updateSearchSuggestionsListVisibility;
- (void)_updateSearchSuggestionsListVisibilityShouldRequestNavigationControllerObservingUpdate:(bool)arg1;
- (bool)_updateSearchTextOnDidSelectSuggestion;
- (void)_updateSystemInputViewController;
- (void)_updateTableHeaderBackgroundViewInTableView:(id)arg1 amountScrolledUnder:(double)arg2;
- (void)_updateVisibilityOfSearchResultsForSearchBar:(id)arg1;
- (bool)_usesSearchSuggestionsMenuForStackedSearch;
- (id)_viewToInsertSearchBarContainerViewUnder;
- (void)_watchScrollView:(id)arg1 forScrolling:(bool)arg2;
- (void)_willDismissSearchController;
- (void)_willPresentFromViewController:(id)arg1;
- (void)_willUpdateFocusInContext:(id)arg1;
- (void)animateTransition:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (bool)automaticallyShowsCancelButton;
- (bool)automaticallyShowsScopeBar;
- (bool)automaticallyShowsSearchResultsController;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (bool)dimsBackgroundDuringPresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)focusItemContainer;
- (bool)hidesNavigationBarDuringPresentation;
- (bool)ignoresSearchSuggestionsForSearchBarPlacementStacked;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithSearchResultsController:(id)arg1;
- (bool)isActive;
- (bool)isBeingDismissed;
- (id)keyboardToSearchResultsFocusGuide;
- (void)loadView;
- (bool)obscuresBackgroundDuringPresentation;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (id)preferredFocusEnvironments;
- (long long)scopeBarActivation;
- (id)searchBar;
- (long long)searchBarPlacement;
- (id)searchControllerObservedScrollView;
- (id)searchHints;
- (id)searchPlaceholderColor;
- (id)searchResultsController;
- (id)searchResultsToHiddenKeyboardFocusGuide;
- (id)searchResultsUpdater;
- (id)searchResultsUpdaterPrivate;
- (id)searchSuggestions;
- (id)searchTextColor;
- (id)searchTextField;
- (id)selectedSuggestion;
- (void)setActive:(bool)arg1;
- (void)setAutomaticallyShowsCancelButton:(bool)arg1;
- (void)setAutomaticallyShowsScopeBar:(bool)arg1;
- (void)setAutomaticallyShowsSearchResultsController:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDimsBackgroundDuringPresentation:(bool)arg1;
- (void)setHidesNavigationBarDuringPresentation:(bool)arg1;
- (void)setIgnoresSearchSuggestionsForSearchBarPlacementStacked:(bool)arg1;
- (void)setKeyboardToSearchResultsFocusGuide:(id)arg1;
- (void)setModalPresentationStyle:(long long)arg1;
- (void)setObscuresBackgroundDuringPresentation:(bool)arg1;
- (void)setScopeBarActivation:(long long)arg1;
- (void)setSearchControllerObservedScrollView:(id)arg1;
- (void)setSearchHints:(id)arg1;
- (void)setSearchResultsToHiddenKeyboardFocusGuide:(id)arg1;
- (void)setSearchResultsUpdater:(id)arg1;
- (void)setSearchResultsUpdaterPrivate:(id)arg1;
- (void)setSearchSuggestions:(id)arg1;
- (void)setSelectedSuggestion:(id)arg1;
- (void)setShowsSearchResultsController:(bool)arg1;
- (void)set_previousSearchBarPosition:(long long)arg1;
- (void)set_resultsContentScrollViewPresentationOffset:(double)arg1;
- (void)set_resultsControllerViewContainer:(id)arg1;
- (void)set_scopeBarConstraints:(id)arg1;
- (void)set_shouldLogAppearance:(bool)arg1;
- (void)set_suggestionContainerView:(id)arg1;
- (void)set_systemInputMarginView:(id)arg1;
- (void)set_tabBarHidden:(bool)arg1;
- (void)set_topResultsViewEdgeInset:(double)arg1;
- (bool)showsSearchResultsController;
- (double)transitionDuration:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(bool)arg2;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;

// Image: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI

- (void)presenterDidAppear:(id)arg1;
- (void)presenterDidDisappear:(id)arg1;
- (void)presenterWillAppear:(id)arg1;
- (void)presenterWillDisappear:(id)arg1;

@end
