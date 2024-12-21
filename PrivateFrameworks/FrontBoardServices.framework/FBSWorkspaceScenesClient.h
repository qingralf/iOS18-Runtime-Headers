/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSWorkspaceScenesClient : NSObject <FBSSceneUpdater, FBSWorkspaceServiceServerInterface, FBSWorkspaceServiceTarget> {
    bool  _activated;
    FBSSerialQueue * _callOutQueue;
    NSMutableDictionary * _clientSettingsByIdentity;
    BSServiceConnection * _connection;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _handshakeLock;
    <FBSWorkspaceServiceClientInterface> * _handshakeLock_remoteTarget;
    FBSSceneHostHandle * _hostHandle;
    FBSWorkspaceScenesClientIdentifier * _identifier;
    NSMutableArray * _pendedSendBlocks;
    NSObject<OS_dispatch_queue> * _queue;
    NSHashTable * _reconnectingScenes;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _reportingLock;
    NSMutableDictionary * _reportingLock_scenesByIdentity;
    NSMutableDictionary * _scenesByIdentity;
    FBSWorkspace * _workspace;
    <FBSWorkspaceDelegate> * _workspaceDelegate;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<NSCopying> *identifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)activateSceneFuture:(id)arg1 completion:(id /* block */)arg2;
- (id)callOutQueue;
- (bool)canHaveAgent;
- (id)createSceneFutureWithDefinition:(id)arg1;
- (oneway void)createSceneWithIdentity:(id)arg1 parameters:(id)arg2 transitionContext:(id)arg3 completion:(id /* block */)arg4;
- (id)hostProcess;
- (id)identifier;
- (id)init;
- (oneway void)reconnectSceneWithIdentity:(id)arg1 parameters:(id)arg2 transitionContext:(id)arg3 completion:(id /* block */)arg4;
- (void)requestSceneWithOptions:(id)arg1 completion:(id /* block */)arg2;
- (void)scene:(id)arg1 didReceiveActions:(id)arg2 forExtension:(Class)arg3;
- (void)scene:(id)arg1 didUpdateClientSettings:(id)arg2 withDiff:(id)arg3 transitionContext:(id)arg4;
- (void)scene:(id)arg1 sendMessage:(id)arg2 withResponse:(id /* block */)arg3;
- (oneway void)sceneID:(id)arg1 destroyWithTransitionContext:(id)arg2 completion:(id /* block */)arg3;
- (oneway void)sceneID:(id)arg1 sendActions:(id)arg2 toExtension:(id)arg3 completion:(id /* block */)arg4;
- (oneway void)sceneID:(id)arg1 sendMessage:(id)arg2 completion:(id /* block */)arg3;
- (oneway void)sceneID:(id)arg1 updateWithSettingsDiff:(id)arg2 transitionContext:(id)arg3 completion:(id /* block */)arg4;
- (id)sceneWithIdentity:(id)arg1;
- (id)scenes;
- (oneway void)sendActions:(id)arg1 completion:(id /* block */)arg2;
- (void)sendActions:(id)arg1 toWorkspaceID:(id)arg2 completion:(id /* block */)arg3;
- (oneway void)willTerminateWithTransitionContext:(id)arg1;

@end