/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUIDocumentUIConfiguration : NSObject {
    bool  _animated;
    bool  _isComingFromExtras;
    bool  _isComingFromRoot;
    bool  _isInteractivePopGestureAllowed;
    NSString * _loadingViewText;
    bool  _navigationBarAdjustedToSizeClass;
    bool  _navigationBarHidden;
    NSString * _navigationTitle;
    bool  _prefersLargeTitle;
    bool  _shouldWrapModalInNavigationController;
    long long  _type;
    NSString * _viewControllerDocumentIdentifier;
    NSString * _viewControllerIdentifier;
}

@property (getter=isAnimated, nonatomic) bool animated;
@property (getter=isComingFromExtras, nonatomic) bool isComingFromExtras;
@property (getter=isComingFromRoot, nonatomic) bool isComingFromRoot;
@property (getter=isInteractivePopGestureAllowed, nonatomic) bool isInteractivePopGestureAllowed;
@property (nonatomic, copy) NSString *loadingViewText;
@property (getter=isNavigationBarAdjustedToSizeClass, nonatomic) bool navigationBarAdjustedToSizeClass;
@property (getter=isNavigationBarHidden, nonatomic) bool navigationBarHidden;
@property (nonatomic, copy) NSString *navigationTitle;
@property (getter=prefersLargeTitle, nonatomic) bool prefersLargeTitle;
@property (nonatomic) bool shouldWrapModalInNavigationController;
@property (nonatomic) long long type;
@property (nonatomic, copy) NSString *viewControllerDocumentIdentifier;
@property (nonatomic, copy) NSString *viewControllerIdentifier;

+ (id)_detentsFromDictionary:(id)arg1 inConfig:(id)arg2;
+ (struct CGSize { double x1; double x2; })_preferredSizeFromConfig:(id)arg1;
+ (long long)_presentationTypeFromString:(id)arg1;
+ (id)uiConfigurationWithDict:(id)arg1;

- (void).cxx_destruct;
- (id)init;
- (bool)isAnimated;
- (bool)isComingFromExtras;
- (bool)isComingFromRoot;
- (bool)isEqual:(id)arg1;
- (bool)isInteractivePopGestureAllowed;
- (bool)isNavigationBarAdjustedToSizeClass;
- (bool)isNavigationBarHidden;
- (id)loadingViewText;
- (id)navigationTitle;
- (bool)prefersLargeTitle;
- (void)setAnimated:(bool)arg1;
- (void)setIsComingFromExtras:(bool)arg1;
- (void)setIsComingFromRoot:(bool)arg1;
- (void)setIsInteractivePopGestureAllowed:(bool)arg1;
- (void)setLoadingViewText:(id)arg1;
- (void)setNavigationBarAdjustedToSizeClass:(bool)arg1;
- (void)setNavigationBarHidden:(bool)arg1;
- (void)setNavigationTitle:(id)arg1;
- (void)setPrefersLargeTitle:(bool)arg1;
- (void)setShouldWrapModalInNavigationController:(bool)arg1;
- (void)setType:(long long)arg1;
- (void)setViewControllerDocumentIdentifier:(id)arg1;
- (void)setViewControllerIdentifier:(id)arg1;
- (bool)shouldWrapModalInNavigationController;
- (long long)type;
- (id)viewControllerDocumentIdentifier;
- (id)viewControllerIdentifier;

@end