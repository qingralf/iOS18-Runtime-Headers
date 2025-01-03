/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
 */

@interface WBSWebProcessPlugIn : NSObject <WKWebProcessPlugIn> {
    NSMapTable * _browserContextControllersToWebProcessPlugInPageControllers;
    WKWebProcessPlugInController * _plugInController;
}

@property (nonatomic, readonly) unsigned long long abGroupIdentifier;
@property (getter=isABTestingEnabled, nonatomic, readonly) bool abTestingEnabled;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic, readonly) WBSSearchProvider *defaultSearchProvider;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) WKWebProcessPlugInController *plugInController;
@property (nonatomic, readonly) NSArray *searchEnginesForRedirectToSafeSearch;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned long long)abGroupIdentifier;
- (id)defaultSearchProvider;
- (void)didCreatePageController:(id)arg1 forBrowserContextController:(id)arg2;
- (bool)isABTestingEnabled;
- (id)pageControllerWithBrowserContextController:(id)arg1;
- (id)plugInController;
- (id)searchEnginesForRedirectToSafeSearch;
- (void)webProcessPlugIn:(id)arg1 didCreateBrowserContextController:(id)arg2;
- (void)webProcessPlugIn:(id)arg1 initializeWithObject:(id)arg2;
- (void)webProcessPlugIn:(id)arg1 willDestroyBrowserContextController:(id)arg2;
- (void)willDestroyPageController:(id)arg1 forBrowserContextController:(id)arg2;

@end
