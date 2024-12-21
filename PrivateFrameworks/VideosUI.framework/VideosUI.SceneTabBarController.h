/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VideosUI.SceneTabBarController : NSObject <VUITVAppRootViewController, VUITabBarProtocol> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _tabBarInfo;
    void hasSetTabbarIndex;
    void previousSelectedIndex;
    void viewMetricsRecorder;
}

@property (nonatomic, readonly) UINavigationController *currentNavigationController;
@property (nonatomic, readonly) UIViewController *currentViewController;
@property (nonatomic) unsigned long long selectedIndex;
@property (nonatomic) bool tabBarHidden;
@property (nonatomic, readonly) NSArray *tabBarItems;

- (void).cxx_destruct;
- (id)currentNavigationController;
- (id)currentViewController;
- (void)didEnterBackground:(id)arg1;
- (id)init;
- (bool)isTabBarHidden;
- (unsigned long long)selectedIndex;
- (void)setSelectedIndex:(unsigned long long)arg1;
- (void)setSelectedIndexForTabBarItemIdentifier:(id)arg1;
- (void)setSelectedIndexForTabBarItemIdentifier:(id)arg1 clearStack:(bool)arg2;
- (void)setTabBarHidden:(bool)arg1;
- (id)tabBarItems;
- (void)updateWithTabBarItems:(id)arg1 setSelectedIdentifierFromDefaults:(bool)arg2 appContext:(id)arg3;
- (void)willTerminate:(id)arg1;

@end