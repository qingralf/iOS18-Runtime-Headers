/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FSKit.framework/FSKit
 */

@interface FSModuleExtension : _EXExtension <NSXPCListenerDelegate> {
    NSString * _bundleID;
    NSMutableArray * _connectors;
    bool  _delegateConformantFS;
    LiveFSMachPort * _fsMachPort;
    FSModuleConnector * _fskitdCurrentConnection;
    FSContainerIdentifier * _instanceID;
    bool  _isFSSubclass;
    bool  _isNormalFS;
    bool  _isSimpleFS;
    bool  _isSimpleFSSubclass;
    FSResource * _resource;
    NSObject * _strongDelegate;
    bool  _supportsBlockOps;
    bool  _supportsServerOps;
    bool  _supportsSimpleMaintenanceOps;
    NSMutableDictionary * _taskSet;
    NSMutableDictionary * _volumes;
}

@property (readonly) NSString *bundleID;
@property (readonly) NSMutableArray *connectors;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly) bool delegateConformantFS;
@property (readonly, copy) NSString *description;
@property (retain) LiveFSMachPort *fsMachPort;
@property FSModuleConnector *fskitdCurrentConnection;
@property (readonly) unsigned long long hash;
@property (retain) FSContainerIdentifier *instanceID;
@property (readonly) bool isFSSubclass;
@property (readonly) bool isNormalFS;
@property (readonly) bool isSimpleFS;
@property (readonly) bool isSimpleFSSubclass;
@property (retain) FSResource *resource;
@property (nonatomic, readonly, retain) NSXPCListener *secondaryListener;
@property (retain) NSObject *strongDelegate;
@property (readonly) Class superclass;
@property (readonly) bool supportsBlockOps;
@property (readonly) bool supportsServerOps;
@property (readonly) bool supportsSimpleMaintenanceOps;
@property (retain) NSMutableDictionary *taskSet;
@property (readonly) NSMutableDictionary *volumes;

+ (id)moduleExtensionForAppex:(id)arg1;

- (void).cxx_destruct;
- (id)bundleID;
- (id)connectors;
- (void)dealloc;
- (bool)delegateConformantFS;
- (void)didFinishLaunching;
- (id)fsMachPort;
- (id)fskitdCurrentConnection;
- (bool)fskitdIsClient:(id)arg1;
- (id)getFSMachPort;
- (id)instanceID;
- (bool)isFSSubclass;
- (bool)isNormalFS;
- (bool)isSimpleFS;
- (bool)isSimpleFSSubclass;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)resource;
- (id)secondaryListener;
- (void)sendConfigureUserClient:(id)arg1 replyHandler:(id /* block */)arg2;
- (void)sendIsVolumeUsed:(id)arg1 bundle:(id)arg2 replyHandler:(id /* block */)arg3;
- (void)sendWipeResource:(id)arg1 replyHandler:(id /* block */)arg2;
- (void)setFsMachPort:(id)arg1;
- (void)setFskitdCurrentConnection:(id)arg1;
- (void)setInstanceID:(id)arg1;
- (void)setResource:(id)arg1;
- (void)setStrongDelegate:(id)arg1;
- (void)setTaskSet:(id)arg1;
- (bool)shouldAcceptConnection:(id)arg1;
- (id)strongDelegate;
- (bool)supportsBlockOps;
- (bool)supportsServerOps;
- (bool)supportsSimpleMaintenanceOps;
- (id)taskSet;
- (id)volumes;

@end
