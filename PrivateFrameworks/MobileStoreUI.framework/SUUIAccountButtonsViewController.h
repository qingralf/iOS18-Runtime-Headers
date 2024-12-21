/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileStoreUI.framework/MobileStoreUI
 */

@interface SUUIAccountButtonsViewController : UIViewController <UINavigationControllerDelegate> {
    SUUIAccountButtonsView * _buttonsView;
    SUUIClientContext * _clientContext;
    <SUUIAccountButtonsDelegate> * _delegate;
    SUUILink * _ecommerceLink;
}

@property (nonatomic, retain) SUUILink *ECommerceLink;
@property (nonatomic, retain) SUUIClientContext *clientContext;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <SUUIAccountButtonsDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isGiftingHidden, nonatomic) bool giftingHidden;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (getter=isTermsAndConditionsHidden, nonatomic) bool termsAndConditionsHidden;

- (void).cxx_destruct;
- (id)ECommerceLink;
- (void)_accountStoreChangedNotification:(id)arg1;
- (id)_buttonsView;
- (void)_ecommerceLinkAction:(id)arg1;
- (void)_giftAction:(id)arg1;
- (void)_openIForgot;
- (void)_redeemButtonAction:(id)arg1;
- (void)_reloadAccountsButton;
- (void)_reloadRestrictions;
- (void)_restrictionsChangedNotification:(id)arg1;
- (void)_sendDidSignIn;
- (void)_signInButtonAction:(id)arg1;
- (void)_signOut;
- (void)_termsAndConditionsButtonAction:(id)arg1;
- (void)_usernameButtonAction:(id)arg1;
- (void)_viewAppleID;
- (id)clientContext;
- (void)dealloc;
- (id)delegate;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (bool)isGiftingHidden;
- (bool)isTermsAndConditionsHidden;
- (void)loadView;
- (unsigned long long)navigationControllerSupportedInterfaceOrientations:(id)arg1;
- (void)setClientContext:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setECommerceLink:(id)arg1;
- (void)setGiftingHidden:(bool)arg1;
- (void)setTermsAndConditionsHidden:(bool)arg1;

@end