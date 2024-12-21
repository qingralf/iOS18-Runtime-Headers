/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iCloudQuotaUI.framework/iCloudQuotaUI
 */

@interface ICQUILegacyPurchaseFlowController : NSObject <ICQUICloudStorageOffersManagerDelegate, UIAdaptivePresentationControllerDelegate> {
    id /* block */  _flowCompletion;
    UINavigationController * _navController;
    ICQUICloudStorageOffersManager * _offerManager;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)beginFlowWithPresenter:(id)arg1 action:(id)arg2 completion:(id /* block */)arg3;
- (void)manager:(id)arg1 didCompleteWithError:(id)arg2;
- (void)manager:(id)arg1 loadDidFailWithError:(id)arg2;
- (void)managerDidCancel:(id)arg1;
- (void)presentationControllerDidDismiss:(id)arg1;

@end