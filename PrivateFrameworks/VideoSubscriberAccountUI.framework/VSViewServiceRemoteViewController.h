/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

@interface VSViewServiceRemoteViewController : _UIRemoteViewController <VSViewServiceHostProtocol> {
    <VSViewServiceRemoteViewControllerDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <VSViewServiceRemoteViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
+ (bool)shouldPropagateAppearanceCustomizations;

- (void).cxx_destruct;
- (void)_didCancelRequest:(id)arg1;
- (void)_didChooseAdditionalProvidersForRequest:(id)arg1;
- (void)_didChooseProviderWithIdentifier:(id)arg1 vetoHandler:(id /* block */)arg2;
- (void)_dismissViewController;
- (void)_presentViewController;
- (void)_request:(id)arg1 didFailWithError:(id)arg2;
- (void)_request:(id)arg1 didFinishWithResponse:(id)arg2;
- (void)dealloc;
- (id)delegate;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)viewServiceDidTerminateWithError:(id)arg1;

@end
