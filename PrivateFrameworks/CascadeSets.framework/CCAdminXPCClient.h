/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CascadeSets.framework/CascadeSets
 */

@interface CCAdminXPCClient : CCXPCClient <CCAdminServiceClient> {
    BMXPCActivity * _activity;
}

+ (void)removeSetsRootDirectory:(id /* block */)arg1;
+ (void)triggerMaintenanceActivity:(id)arg1 completion:(id /* block */)arg2;
+ (id /* block */)wrappedCompletion:(id /* block */)arg1 retainingClient:(id)arg2;

- (void).cxx_destruct;
- (id)initWithClientId:(id)arg1 activity:(id)arg2;
- (oneway void)shouldDeferCurrentActivity:(id /* block */)arg1;

@end