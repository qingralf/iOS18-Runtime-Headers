/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUSKUIStorePageViewController : SUViewController <SKStoreProductViewControllerDelegatePrivate, SUUIIPhoneProductPageDelegate> {
    UIViewController * _activeChildViewController;
    SUUIIPhoneProductPageViewController * _iphoneProductPageViewController;
    SKStoreProductViewController * _remoteProductViewController;
    SUUIStorePageViewController * _storePageViewController;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)_loadClientContextWithCompletionBlock:(id /* block */)arg1;
- (void)_setActiveChildViewController:(id)arg1;
- (void)_showIPhoneProductPageWithPage:(id)arg1 clientContext:(id)arg2;
- (void)_showProductPageWithPageDictionary:(id)arg1;
- (void)_showRemoteViewControllerWithPageDictionary:(id)arg1;
- (void)_showStorePageWithPageDictionary:(id)arg1;
- (void)dealloc;
- (void)dismissAnimated:(bool)arg1;
- (bool)iPhoneProductPage:(id)arg1 shouldOpenItem:(id)arg2;
- (bool)iPhoneProductPage:(id)arg1 shouldOpenURL:(id)arg2;
- (id)initWithSection:(id)arg1;
- (void)loadView;
- (void)productViewController:(id)arg1 didFinishWithResult:(long long)arg2;
- (void)productViewController:(id)arg1 presentProductWithRequest:(id)arg2 animated:(bool)arg3;
- (void)reloadWithStorePage:(id)arg1 forURL:(id)arg2;

@end