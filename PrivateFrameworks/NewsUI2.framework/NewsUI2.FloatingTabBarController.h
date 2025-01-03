/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
 */

@interface NewsUI2.FloatingTabBarController : UITabBarController <UISearchBarDelegate, UITabBarControllerDelegate, _UITabBarControllerSidebarDelegate, _UITabElementGroupDelegate> {
    void $__lazy_storage_$_intrinsicTabBar;
    void _isSidebarEditing;
    void _isSidebarVisible;
    void commandContainer;
    void layoutCoordinator;
    void navigationControllers;
    void overlayToolbar;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  presentationContextCache;
    void previousSelectedElementIdentifier;
    void restoreStateCache;
    void searchContentView;
    void searchElementIdentifier;
    void sidebarDelegate;
    void sidebarImpressionManager;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  stagedModalContextCache;
}

@property (nonatomic, readonly) NSArray *keyCommands;

- (void).cxx_destruct;
- (void)_tabBarController:(id)arg1 sidebar:(id)arg2 configureItem:(id)arg3;
- (id)_tabBarController:(id)arg1 sidebar:(id)arg2 contextMenuConfigurationForTab:(id)arg3;
- (void)_tabBarController:(id)arg1 sidebar:(id)arg2 didEndDisplayingTab:(id)arg3;
- (id)_tabBarController:(id)arg1 sidebar:(id)arg2 trailingSwipeActionsConfigurationForTab:(id)arg3;
- (void)_tabBarController:(id)arg1 sidebar:(id)arg2 updateItem:(id)arg3;
- (void)_tabBarController:(id)arg1 sidebar:(id)arg2 willBeginDisplayingTab:(id)arg3;
- (void)_tabBarController:(id)arg1 sidebarVisibilityDidChange:(id)arg2;
- (void)_tabElementGroup:(id)arg1 didCustomizeDisplayOrder:(id)arg2;
- (void)_tabElementGroup:(id)arg1 didSelectElement:(id)arg2;
- (void)_tabbarController:(id)arg1 sidebar:(id)arg2 editingStateDidChange:(bool)arg3;
- (void)didReceiveMemoryWarning;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithTabs:(id)arg1;
- (void)keyCommandOpenNewWindow;
- (void)keyCommandToggleSidebar;
- (id)keyCommands;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)showViewController:(id)arg1 sender:(id)arg2;
- (void)tabBarController:(id)arg1 didSelectViewController:(id)arg2;
- (bool)tabBarController:(id)arg1 shouldSelectTab:(id)arg2;
- (bool)tabBarController:(id)arg1 shouldSelectViewController:(id)arg2;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end
