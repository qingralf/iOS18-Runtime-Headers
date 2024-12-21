/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/IdentityLookup.framework/IdentityLookup
 */

@interface LLCallDirectoryManager : NSObject {
    NSXPCConnection * _defaultConnection;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, retain) NSXPCConnection *defaultConnection;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)callDirectoryManagerDefaultHostInterface;
- (void)dealloc;
- (id)defaultConnection;
- (id)defaultConnectionRemoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (void)getEnabledForExtensionWithIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)init;
- (void)openSettingsWithCompletionHandler:(id /* block */)arg1;
- (id)queue;
- (void)refreshExtensionContextForLiveLookupExtensionWithIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)refreshPIRParametersForLiveLookupExtensionWithIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)resetExtensionWithIdentier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setDefaultConnection:(id)arg1;
- (void)setEnabled:(bool)arg1 forExtensionWithIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setQueue:(id)arg1;

@end