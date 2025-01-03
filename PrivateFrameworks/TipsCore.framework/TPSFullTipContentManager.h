/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TipsCore.framework/TipsCore
 */

@interface TPSFullTipContentManager : NSObject {
    NSObject<OS_dispatch_queue> * _clientQueue;
    TPSServiceConnection * _serviceProxy;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *clientQueue;
@property (nonatomic, retain) TPSServiceConnection *serviceProxy;

- (void).cxx_destruct;
- (id /* block */)_objectCompletionOnClientQueue:(id /* block */)arg1;
- (void)_performWithProxyHandler:(id /* block */)arg1 errorHandler:(id /* block */)arg2;
- (id)clientQueue;
- (void)contentForVariant:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)contentWithCompletionHandler:(id /* block */)arg1;
- (void)fetchAssetsWithAssetsConfiguration:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)init;
- (void)invalidate;
- (void)markTipViewed:(id)arg1;
- (void)removeNotificationForIdentifier:(id)arg1;
- (id)serviceProxy;
- (void)setClientQueue:(id)arg1;
- (void)setServiceProxy:(id)arg1;
- (void)tipsAppActive;
- (void)userGuideMapWithCompletionHandler:(id /* block */)arg1;

@end
