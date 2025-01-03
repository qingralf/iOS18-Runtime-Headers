/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CTCarrierSpace.framework/CTCarrierSpace
 */

@interface CTCarrierSpaceClientDelegateProxy : NSObject <CTCarrierSpaceClientDelegateProxyInterface> {
    <CTCarrierSpaceClientDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <CTCarrierSpaceClientDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)appsDidChange;
- (void)capabilitiesDidChange:(id)arg1;
- (void)dataPlanMetricsDidChange;
- (id)delegate;
- (void)plansDidChange;
- (void)purchasedPlan:(id)arg1 didChangeStatus:(long long)arg2 context:(id)arg3;
- (void)remoteObjectRespondsToSelector:(SEL)arg1 handler:(id /* block */)arg2;
- (void)setDelegate:(id)arg1;
- (void)usageDidChange;
- (void)userConsentFlowInfoDidChange;

@end
