/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SwiftUI.framework/SwiftUI
 */

@interface SwiftUI.SwiftUISearchController : UISearchController <UIPopoverPresentationControllerDelegate, UISearchControllerDelegate, _UISearchControllerDelegatePrivate, _UISearchResultsUpdating_dci> {
    void $__lazy_storage_$__searchBar;
    void allowsSecureDrawing;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  configuration;
    void coordinator;
    void customAccessoryContent;
    void customAccessoryHost;
    void customAccessoryRecoveryGesture;
    void pendingIsActive;
    void pendingIsActiveAnimated;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  searchItem;
    void suggestions;
    void targetController;
}

@property (nonatomic, readonly) UISearchBar *searchBar;

+ (bool)_isFromSwiftUI;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2;
- (void)handleCustomAccessoryRecoveryGesture;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithSearchResultsController:(id)arg1;
- (void)presentationControllerWillDismiss:(id)arg1;
- (id)searchBar;
- (void)searchController:(id)arg1 willChangeToSearchBarPlacement:(long long)arg2;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (void)updateSearchResultsForSearchController:(id)arg1 selectingSearchSuggestion:(id)arg2;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewIsAppearing:(bool)arg1;
- (void)willDismissSearchController:(id)arg1;
- (void)willPresentSearchController:(id)arg1;

@end
