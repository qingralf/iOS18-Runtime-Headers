/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileStoreUI.framework/MobileStoreUI
 */

@interface SUUINetworkErrorViewController : UIViewController <SUUIProductPageChildViewController> {
    SUUIClientContext * _clientContext;
    <SUUINetworkErrorDelegate> * _delegate;
    NSError * _error;
}

@property (nonatomic, retain) SUUIClientContext *clientContext;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) id delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSError *error;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SUUIProductPageHeaderViewController *headerViewController;
@property (nonatomic, readonly) UIScrollView *scrollView;
@property (readonly) Class superclass;

+ (bool)canDisplayError:(id)arg1;

- (void).cxx_destruct;
- (void)_networkTypeChanged:(id)arg1;
- (id)clientContext;
- (void)dealloc;
- (id)delegate;
- (id)error;
- (id)headerViewController;
- (id)init;
- (id)initWithError:(id)arg1;
- (void)loadView;
- (id)scrollView;
- (void)setClientContext:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHeaderViewController:(id)arg1;

@end
