/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/LocalAuthenticationCore.framework/LocalAuthenticationCore
 */

@interface LACDTOSensorRepairStateProviderCRAdapter : NSObject <LACDTOSensorRepairStateProvider> {
    NSObject<OS_dispatch_queue> * _replyQueue;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_fetchRepairStateWithCompletion:(id /* block */)arg1;
- (void)dealloc;
- (void)fetchRepairStateWithCompletion:(id /* block */)arg1;
- (id)initWithReplyQueue:(id)arg1;

@end
