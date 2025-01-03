/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

@interface VSWebAuthenticationAppDocumentController : VSAppDocumentController <VSMessagePortFeatureDelegate, VSMessageQueueDelegate>

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)_newViewModel;
- (void)_sendMessage:(id)arg1;
- (void)_startObservingViewModel:(id)arg1;
- (void)_stopObservingViewModel:(id)arg1;
- (bool)_updateViewModel:(id)arg1 error:(id*)arg2;
- (bool)_updateWebAuthenticationViewModel:(id)arg1 error:(id*)arg2;
- (bool)_updateWebAuthenticationViewModel:(id)arg1 withTemplate:(id)arg2 error:(id*)arg3;
- (id)_webAuthenticationViewModelWithViewModel:(id)arg1;
- (void)didAddMessagesToMessageQueue:(id)arg1;
- (id)initWithAppDocument:(id)arg1;
- (void)messagePort:(id)arg1 didReceiveMessage:(id)arg2;

@end
