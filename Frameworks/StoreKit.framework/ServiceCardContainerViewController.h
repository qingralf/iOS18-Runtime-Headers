/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

@interface ServiceCardContainerViewController : UIViewController <_UIRemoteViewControllerContaining> {
    UIViewController * _childViewController;
    bool  _didDisappear;
    _UIRemoteViewController * _remoteViewController;
}

@property (nonatomic, readonly) _UIRemoteViewController *_containedRemoteViewController;
@property (nonatomic, retain) UIViewController *childViewController;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _UIRemoteViewController *remoteViewController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_containedRemoteViewController;
- (id)childViewController;
- (void)dealloc;
- (bool)didDisappear;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (id)remoteViewController;
- (void)setChildViewController:(id)arg1;
- (void)setRemoteViewController:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;

@end
