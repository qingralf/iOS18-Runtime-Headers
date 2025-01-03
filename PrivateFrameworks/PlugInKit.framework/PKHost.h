/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PlugInKit.framework/PlugInKit
 */

@interface PKHost : NSObject {
    NSMutableDictionary * _activeOneShots;
    NSMutableDictionary * _activePlugIns;
    PKDaemonClient * _daemon;
    NSMapTable * _discoveryMap;
    <PKExternalProviders> * _external;
    NSDictionary * _hostInfoPlist;
    NSObject<OS_dispatch_queue> * _hostQueue;
}

@property (retain) NSMutableDictionary *activeOneShots;
@property (retain) NSMutableDictionary *activePlugIns;
@property (retain) PKDaemonClient *daemon;
@property (retain) NSMapTable *discoveryMap;
@property (readonly) <PKExternalProviders> *external;
@property (readonly) NSDictionary *hostInfoPlist;
@property (retain) NSObject<OS_dispatch_queue> *hostQueue;

+ (id)defaultHost;

- (void).cxx_destruct;
- (void)_findPlugInByUUID:(id)arg1 synchronously:(bool)arg2 reply:(id /* block */)arg3;
- (void)accessPlugIns:(id)arg1 synchronously:(bool)arg2 flags:(unsigned long long)arg3 extensions:(id /* block */)arg4;
- (id)activatePlugIn:(id)arg1;
- (id)activeOneShots;
- (id)activePlugInForIdentifier:(id)arg1;
- (id)activePlugIns;
- (void)cancelPlugInDiscovery:(id)arg1;
- (id)continuouslyDiscoverPlugInsForAttributes:(id)arg1 flags:(unsigned long long)arg2 found:(id /* block */)arg3;
- (id)daemon;
- (void)deactivatePlugIn:(id)arg1;
- (void)discoverPlugInsForAttributes:(id)arg1 flags:(unsigned long long)arg2 found:(id /* block */)arg3;
- (id)discoveryMap;
- (id)external;
- (void)findPlugInByPathURL:(id)arg1 reply:(id /* block */)arg2;
- (void)findPlugInByUUID:(id)arg1 reply:(id /* block */)arg2;
- (id)findPlugInByUUID:(id)arg1 withError:(id*)arg2;
- (id)hostInfoPlist;
- (id)hostQueue;
- (id)init;
- (id)initWithDaemon:(id)arg1 externalProviders:(id)arg2;
- (void)readyPlugIns:(id)arg1 synchronously:(bool)arg2 environment:(id)arg3 languages:(id)arg4 persona:(id)arg5 sandbox:(id)arg6 ready:(id /* block */)arg7;
- (id)rewriteDiscoveryAttributes:(id)arg1 flags:(unsigned long long)arg2;
- (void)setActiveOneShots:(id)arg1;
- (void)setActivePlugIns:(id)arg1;
- (void)setDaemon:(id)arg1;
- (void)setDiscoveryMap:(id)arg1;
- (void)setElection:(long long)arg1 forPlugIn:(id)arg2;
- (void)setExtensionState:(id)arg1 forPlugIn:(id)arg2;
- (void)setHostQueue:(id)arg1;

@end
