/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

@interface SBSHomeScreenConfigurationServiceProxy : NSObject <SBSHomeScreenConfigurationClientToServerInterface, SBSHomeScreenConfigurationSession> {
    BSServiceConnection * _connection;
    id /* block */  _invalidationHandler;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)applyConfiguration:(id)arg1 completion:(id /* block */)arg2;
- (void)beginConfigurationSessionWithCompletion:(id /* block */)arg1;
- (void)endConfigurationSessionWithCompletion:(id /* block */)arg1;

@end
