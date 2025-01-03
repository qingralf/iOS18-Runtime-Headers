/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudRecommendationUI.framework/CloudRecommendationUI
 */

@interface CEUpgradeFlowManager : NSObject <ICQUpgradeFlowManagerDelegate> {
    <CEUpgradeFlowManagerDelegate> * _delegate;
    ICQOffer * _offer;
    ICQUpgradeFlowManager * _upgradeFlowManager;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <CEUpgradeFlowManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) ICQOffer *offer;
@property (readonly) Class superclass;
@property (nonatomic, retain) ICQUpgradeFlowManager *upgradeFlowManager;

- (void).cxx_destruct;
- (void)beginAppleOneUpgradeFlowWithPresenter:(id)arg1 url:(id)arg2;
- (void)beginLiftUIUpgradeFlowWithPresenter:(id)arg1 url:(id)arg2;
- (void)beginRemoteUIUpgradeFlowWithPresenter:(id)arg1 url:(id)arg2;
- (id)delegate;
- (id)init;
- (id)offer;
- (void)setDelegate:(id)arg1;
- (void)setOffer:(id)arg1;
- (void)setUpgradeFlowManager:(id)arg1;
- (id)upgradeFlowManager;
- (void)upgradeFlowManager:(id)arg1 didPresentViewController:(id)arg2;
- (void)upgradeFlowManagerDidCancel:(id)arg1;
- (void)upgradeFlowManagerDidComplete:(id)arg1;
- (void)upgradeFlowManagerDidFail:(id)arg1 error:(id)arg2;

@end
