/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PlugInKit.framework/PlugInKit
 */

@interface PKHostPlugIn : PKPlugInCore <NSXPCConnectionDelegate, PKPlugInPrivate> {
    NSObject<OS_dispatch_queue> * __replyQueue;
    NSObject<OS_dispatch_queue> * __startQueue;
    NSObject<OS_dispatch_queue> * __syncQueue;
    NSDate * _beganUsingAt;
    NSUserDefaults * _defaults;
    NSDictionary * _discoveryExtensions;
    NSBundle * _embeddedBundle;
    id  _embeddedPrincipal;
    NSDictionary * _environment;
    PKHost * _host;
    NSUUID * _multipleInstanceUUID;
    id /* block */  _notificationBlock;
    id  _plugInPrincipal;
    NSXPCConnection * _pluginConnection;
    NSArray * _preferredLanguages;
    id  _queuedHostPrincipal;
    Protocol * _queuedHostProtocol;
    NSMutableSet * _requests;
    NSArray * _sandboxExtensions;
    NSString * _sandboxProfile;
    <PKCorePlugInProtocol> * _service;
    NSString * _serviceExtension;
    NSDictionary * _sourceForm;
    unsigned long long  _state;
    <PKPlugIn> * _supersededBy;
    NSUUID * _supersedingUUID;
    <PKCorePlugInProtocol> * _syncService;
    bool  _terminating;
    unsigned int  _useCount;
}

@property (retain) NSObject<OS_dispatch_queue> *_replyQueue;
@property (retain) NSObject<OS_dispatch_queue> *_startQueue;
@property (retain) NSObject<OS_dispatch_queue> *_syncQueue;
@property (readonly) bool active;
@property (readonly) NSDictionary *attributes;
@property (retain) NSDate *beganUsingAt;
@property (readonly) NSDictionary *bundleInfoDictionary;
@property (readonly) NSURL *containingUrl;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly) NSUserDefaults *defaults;
@property (readonly, copy) NSString *description;
@property (retain) NSDictionary *discoveryExtensions;
@property (readonly) NSUUID *effectiveUUID;
@property (retain) NSBundle *embeddedBundle;
@property (retain) id embeddedPrincipal;
@property (readonly) NSDictionary *entitlements;
@property (retain) NSDictionary *environment;
@property (readonly) unsigned int extensionPointPlatform;
@property (retain) NSDictionary *extensionState;
@property (readonly) unsigned long long hash;
@property (retain) PKHost *host;
@property (readonly) NSString *identifier;
@property (readonly) NSArray *launchPersonas;
@property (readonly) NSString *localizedContainingName;
@property (readonly) NSDictionary *localizedFileProviderActionNames;
@property (readonly) NSString *localizedName;
@property (readonly) NSString *localizedShortName;
@property (retain) NSUUID *multipleInstanceUUID;
@property (copy) id /* block */ notificationBlock;
@property (readonly) bool onSystemVolume;
@property (readonly) NSDictionary *plugInDictionary;
@property (retain) id plugInPrincipal;
@property (retain) NSXPCConnection *pluginConnection;
@property (copy) NSArray *preferredLanguages;
@property (retain) id queuedHostPrincipal;
@property (retain) Protocol *queuedHostProtocol;
@property (readonly) NSMutableSet *requests;
@property (retain) NSArray *sandboxExtensions;
@property (copy) NSString *sandboxProfile;
@property (retain) <PKCorePlugInProtocol> *service;
@property (retain) NSString *serviceExtension;
@property (retain) NSDictionary *sourceForm;
@property (readonly) bool spent;
@property unsigned long long state;
@property (readonly) Class superclass;
@property <PKPlugIn> *supersededBy;
@property (retain) NSUUID *supersedingUUID;
@property (retain) <PKCorePlugInProtocol> *syncService;
@property bool terminating;
@property (readonly) NSDate *timestamp;
@property (readonly) NSURL *url;
@property unsigned int useCount;
@property long long userElection;
@property (readonly) NSUUID *uuid;
@property (readonly) NSString *version;

- (void).cxx_destruct;
- (id)_replyQueue;
- (id)_startQueue;
- (id)_syncQueue;
- (void)_validatePersona;
- (bool)active;
- (void)addRequestUUID:(id)arg1;
- (id)beganUsingAt;
- (void)beginUsing:(id /* block */)arg1;
- (void)beginUsingRequest:(id)arg1 completion:(id /* block */)arg2;
- (bool)beginUsingRequest:(id)arg1 error:(id*)arg2;
- (void)beginUsingRequest:(id)arg1 withSubsystemOptions:(id)arg2 completion:(id /* block */)arg3;
- (bool)beginUsingRequest:(id)arg1 withSubsystemOptions:(id)arg2 error:(id*)arg3;
- (bool)beginUsingWithError:(id*)arg1;
- (void)beginUsingWithSubsystemOptions:(id)arg1 completion:(id /* block */)arg2;
- (bool)beginUsingWithSubsystemOptions:(id)arg1 error:(id*)arg2;
- (void)changeState:(unsigned long long)arg1;
- (void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(bool)arg3;
- (id)createInstanceWithUUID:(id)arg1;
- (id)defaults;
- (id)description;
- (id)discoveryExtensions;
- (id)effectiveUUID;
- (id)embeddedBundle;
- (id)embeddedPrincipal;
- (void)endUsing:(id /* block */)arg1;
- (void)endUsingRequest:(id)arg1 completion:(id /* block */)arg2;
- (bool)endUsingRequest:(id)arg1 error:(id*)arg2;
- (bool)endUsingWithError:(id*)arg1;
- (id)environment;
- (id)extensionState;
- (id)host;
- (id)initWithForm:(id)arg1 host:(id)arg2;
- (bool)isSandboxed;
- (bool)loadExtensions:(id)arg1 error:(id*)arg2;
- (void)messageTraceUsage;
- (id)multipleInstanceUUID;
- (id /* block */)notificationBlock;
- (id)plugInPrincipal;
- (id)pluginConnection;
- (id)preferredLanguages;
- (void)preparePlugInUsingService:(id)arg1 completion:(id /* block */)arg2;
- (id)queuedHostPrincipal;
- (id)queuedHostProtocol;
- (id)requests;
- (void)resume;
- (id)sandboxExtensions;
- (id)sandboxProfile;
- (id)service;
- (id)serviceExtension;
- (void)setBeganUsingAt:(id)arg1;
- (void)setBootstrapWithSubsystemOptions:(id)arg1;
- (void)setDiscoveryExtensions:(id)arg1;
- (void)setEmbeddedBundle:(id)arg1;
- (void)setEmbeddedPrincipal:(id)arg1;
- (void)setEnvironment:(id)arg1;
- (void)setExtensionState:(id)arg1;
- (void)setHost:(id)arg1;
- (void)setHostPrincipal:(id)arg1 withProtocol:(id)arg2;
- (void)setMultipleInstanceUUID:(id)arg1;
- (void)setNotificationBlock:(id /* block */)arg1;
- (void)setPlugInPrincipal:(id)arg1;
- (void)setPluginConnection:(id)arg1;
- (void)setPreferredLanguages:(id)arg1;
- (void)setQueuedHostPrincipal:(id)arg1;
- (void)setQueuedHostProtocol:(id)arg1;
- (void)setReplyQueue:(id)arg1;
- (void)setSandboxExtensions:(id)arg1;
- (void)setSandboxProfile:(id)arg1;
- (void)setService:(id)arg1;
- (void)setServiceExtension:(id)arg1;
- (void)setSourceForm:(id)arg1;
- (void)setState:(unsigned long long)arg1;
- (void)setSupersededBy:(id)arg1;
- (void)setSupersedingUUID:(id)arg1;
- (void)setSyncService:(id)arg1;
- (void)setTerminating:(bool)arg1;
- (void)setUseCount:(unsigned int)arg1;
- (void)setUserElection:(long long)arg1;
- (void)set_replyQueue:(id)arg1;
- (void)set_startQueue:(id)arg1;
- (void)set_syncQueue:(id)arg1;
- (id)sourceForm;
- (bool)spent;
- (void)startPlugInRequest:(id)arg1 synchronously:(bool)arg2 subsystemOptions:(id)arg3 completion:(id /* block */)arg4;
- (unsigned long long)state;
- (id)supersededBy;
- (id)supersedingUUID;
- (void)suspend;
- (id)syncService;
- (bool)terminating;
- (void)unwind:(unsigned long long)arg1 force:(bool)arg2;
- (void)updateFromForm:(id)arg1 host:(id)arg2;
- (bool)useBundle:(id)arg1 error:(id*)arg2;
- (unsigned int)useCount;
- (long long)userElection;

@end
