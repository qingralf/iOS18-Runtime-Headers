/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

@interface GKDashboardExtensionHostContext : GKExtensionHostContext <GKGameCenterDashboardHostProtocol>

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void)getMethodsImplementedByChallengeEventHandlerDelegate:(id /* block */)arg1;
- (void)requestDashboardLogoImageWithHandler:(id /* block */)arg1;
- (void)requestImagesForLeaderboardSetsWithHandler:(id /* block */)arg1;
- (void)requestImagesForLeaderboardsInSet:(id)arg1 handler:(id /* block */)arg2;

@end