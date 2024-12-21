/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ExtensionKit.framework/ExtensionKit
 */

@interface _EXHostViewControllerSession : NSObject <APSubjectMonitor, NSXPCListenerDelegate, _EXExtensionProcessObserver, _UISceneHostingControllerDelegate> {
    struct { 
        struct os_activity_scope_state_s { 
            unsigned long long opaque[2]; 
        } state; 
        NSObject<OS_os_activity> *osActivity; 
    }  _activity;
    _EXHostViewControllerSessionConfiguration * _configuration;
    <_EXHostViewControllerSessionDelegate> * _delegate;
    bool  _detached;
    NSError * _error;
    _EXExtensionProcessHandle * _extensionProcess;
    NSXPCListener * _hostListener;
    UIView * _hostView;
    _UISceneHostingController * _hostingController;
    NSObject<OS_dispatch_queue> * _internalQueue;
    id /* block */  _invalidationHandler;
    bool  _isLocked;
    unsigned long long  _maxState;
    _EXHostConfiguration * _processConfiguration;
    id /* block */  _readyBlock;
    _EXRemoteViewController * _remoteViewController;
    NSXPCListenerEndpoint * _remoteViewControllerEndpoint;
    bool  _requiresFBSceneHosting;
    NSXPCConnection * _sceneSessionConnection;
    UIViewController * _sceneViewController;
    unsigned long long  _signpost;
    unsigned long long  _state;
    APExtensionSubjectMonitorRegistry * _subjectMonitorRegistry;
    <APSubjectMonitorSubscription> * _subjectMonitorSubscription;
    NSUUID * _uuid;
}

@property struct { struct os_activity_scope_state_s { unsigned long long x_1_1_1[2]; } x1; id x2; } activity;
@property (nonatomic, readonly) _EXHostViewControllerSessionConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <_EXHostViewControllerSessionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property bool detached;
@property (retain) NSError *error;
@property (retain) _EXExtensionProcessHandle *extensionProcess;
@property (readonly) unsigned long long hash;
@property (retain) NSXPCListener *hostListener;
@property UIView *hostView;
@property (retain) _UISceneHostingController *hostingController;
@property (readonly) NSObject<OS_dispatch_queue> *internalQueue;
@property (copy) id /* block */ invalidationHandler;
@property (readonly) bool isLocked;
@property (nonatomic) unsigned long long maxState;
@property (nonatomic, readonly) _EXHostConfiguration *processConfiguration;
@property (copy) id /* block */ readyBlock;
@property (readonly) <_UIRemoteSheet> *remoteSheet;
@property (nonatomic, retain) _EXRemoteViewController *remoteViewController;
@property (nonatomic, retain) NSXPCListenerEndpoint *remoteViewControllerEndpoint;
@property (readonly) bool requiresFBSceneHosting;
@property (retain) NSXPCConnection *sceneSessionConnection;
@property (nonatomic, retain) UIViewController *sceneViewController;
@property unsigned long long signpost;
@property (nonatomic) unsigned long long state;
@property (retain) APExtensionSubjectMonitorRegistry *subjectMonitorRegistry;
@property (retain) <APSubjectMonitorSubscription> *subjectMonitorSubscription;
@property (readonly) Class superclass;
@property (readonly) NSUUID *uuid;

+ (void)sessionWithProcess:(id)arg1 configuration:(id)arg2 completion:(id /* block */)arg3;
+ (void)sessionWithProcessConfiguration:(id)arg1 configuration:(id)arg2 completion:(id /* block */)arg3;

- (void).cxx_destruct;
- (void)_internalQueue_prepareToHost;
- (void)_invalidateSession;
- (id)_makeXPCConnectionWithError:(id*)arg1;
- (struct { struct os_activity_scope_state_s { unsigned long long x_1_1_1[2]; } x1; id x2; })activity;
- (void)appProtectionSubjectsChanged:(id)arg1 forSubscription:(id)arg2;
- (void)clientIsReady;
- (id)configuration;
- (void)dealloc;
- (id)delegate;
- (bool)detached;
- (id)error;
- (id)extensionProcess;
- (id)hostListener;
- (id)hostView;
- (id)hostingController;
- (id)initWithProcessConfiguration:(id)arg1 configuration:(id)arg2;
- (id)initWithProcessConfiguration:(id)arg1 configuration:(id)arg2 detached:(bool)arg3;
- (id)internalQueue;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (bool)isLocked;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)makeSceneHostViewController;
- (id)makeXPCConnectionWithError:(id*)arg1;
- (unsigned long long)maxState;
- (id)processConfiguration;
- (void)processDidInvalidate:(id)arg1;
- (id /* block */)readyBlock;
- (id)remoteSheet;
- (id)remoteViewController;
- (id)remoteViewControllerEndpoint;
- (void)requestRemoteViewController;
- (bool)requiresFBSceneHosting;
- (void)resume;
- (void)resumeWithReadyNotification:(id /* block */)arg1;
- (id)sceneSessionConnection;
- (id)sceneViewController;
- (void)setActivity:(struct { struct os_activity_scope_state_s { unsigned long long x_1_1_1[2]; } x1; id x2; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setDetached:(bool)arg1;
- (void)setError:(id)arg1;
- (void)setExtensionProcess:(id)arg1;
- (void)setHostListener:(id)arg1;
- (void)setHostView:(id)arg1;
- (void)setHostingController:(id)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setMaxState:(unsigned long long)arg1;
- (void)setReadyBlock:(id /* block */)arg1;
- (void)setRemoteViewController:(id)arg1;
- (void)setRemoteViewControllerEndpoint:(id)arg1;
- (void)setSceneSessionConnection:(id)arg1;
- (void)setSceneViewController:(id)arg1;
- (void)setSignpost:(unsigned long long)arg1;
- (void)setState:(unsigned long long)arg1;
- (void)setSubjectMonitorRegistry:(id)arg1;
- (void)setSubjectMonitorSubscription:(id)arg1;
- (unsigned long long)signpost;
- (unsigned long long)state;
- (id)subjectMonitorRegistry;
- (id)subjectMonitorSubscription;
- (id)uuid;

@end