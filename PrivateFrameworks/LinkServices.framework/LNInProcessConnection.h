/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/LinkServices.framework/LinkServices
 */

@interface LNInProcessConnection : LNConnection {
    <LNConnectionHostInterface> * _connectionInterface;
}

- (void).cxx_destruct;
- (void)acquireAssertionsForConnectionOperation:(id)arg1;
- (void)connectWithOptions:(id)arg1;
- (id)connectionInterface;
- (id)initWithEffectiveBundleIdentifier:(id)arg1 appBundleIdentifier:(id)arg2 processInstanceIdentifier:(id)arg3 appIntentsEnabledOnly:(bool)arg4 userIdentity:(id)arg5 error:(id*)arg6;
- (bool)refreshWithOptions:(id)arg1;

@end
