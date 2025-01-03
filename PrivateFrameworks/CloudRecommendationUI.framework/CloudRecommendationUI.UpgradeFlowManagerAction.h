/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudRecommendationUI.framework/CloudRecommendationUI
 */

@interface CloudRecommendationUI.UpgradeFlowManagerAction : NSObject <CEUpgradeFlowManagerDelegate> {
    void account;
    void activeRecommendation;
    void controller;
    void delegate;
    void presenter;
    void upgradeFlowManager;
}

- (void).cxx_destruct;
- (id)init;
- (void)upgradeFlowManager:(id)arg1 didPresentViewController:(id)arg2;
- (void)upgradeFlowManagerDidCancel:(id)arg1;
- (void)upgradeFlowManagerDidComplete:(id)arg1;
- (void)upgradeFlowManagerDidFail:(id)arg1 error:(id)arg2;

@end
