/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

@interface SiriUISnippetExtensionCardSectionViewController : CRKCardSectionViewController <INUIRemoteViewControllerDelegate> {
    INUIRemoteViewController * _remoteViewController;
    id  _touchDeliveryPolicyAssertion;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) SiriUICardSectionView *view;

+ (id)cardSectionClasses;

- (void).cxx_destruct;
- (void)_attemptToConnectToRemoteViewControllerWithInteraction:(id)arg1 forParameters:(id)arg2;
- (void)_cancelTouchesIfNecessary;
- (void)_loadCardSectionView;
- (void)_resumeTouchesIfNecessary;
- (bool)_shouldAttemptToConnectToRemoteViewController;
- (void)dealloc;
- (struct CGSize { double x1; double x2; })maximumSizeForRemoteViewController:(id)arg1;
- (struct CGSize { double x1; double x2; })minimumSizeForRemoteViewController:(id)arg1;
- (void)remoteViewControllerServiceDidTerminate:(id)arg1;

@end
