/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppProtection.framework/AppProtection
 */

@interface AppProtection.APExtensionInfoClient : NSObject <APXPCExtensionInfoService> {
    void connection;
    void delegate;
}

- (void).cxx_destruct;
- (void)authenticateForExtensionWithUUID:(id)arg1 reasonDescription:(id)arg2 completion:(id /* block */)arg3;
- (void)extensionRequiresAuthentication:(id)arg1 completion:(id /* block */)arg2;
- (void)getExtensionIsLockedForUUID:(id)arg1 completion:(id /* block */)arg2;
- (id)init;

@end