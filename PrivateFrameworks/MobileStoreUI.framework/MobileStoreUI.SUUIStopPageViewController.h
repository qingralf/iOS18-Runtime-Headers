/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileStoreUI.framework/MobileStoreUI
 */

@interface MobileStoreUI.SUUIStopPageViewController : UIViewController {
    void clientContext;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  deeplinkUrl;
    void lockupView;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  pageArtwork;
    void pageSubtitle;
    void pageTitle;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  purchasesUrl;
    void replacementAppAdamId;
    void showWishlistButton;
    void wishlistButtonTitle;
}

@property (nonatomic, readonly) unsigned long long supportedInterfaceOrientations;

+ (bool)isStopPageBagValueOverrideEnabledForTabIdentifier:(id)arg1;
+ (bool)isStopPageEnabledForTabIdentifier:(id)arg1;

- (void).cxx_destruct;
- (id)initForTabIdentifier:(id)arg1 replacementAppAdamId:(id)arg2 title:(id)arg3 subtitle:(id)arg4 artworkDictionary:(id)arg5 deeplinkUrl:(id)arg6 purchasesUrl:(id)arg7 wishlistButtonTitle:(id)arg8 showWishlistButton:(bool)arg9 clientContext:(id)arg10;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
