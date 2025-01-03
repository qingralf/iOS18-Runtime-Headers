/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FSKit.framework/FSKit
 */

@interface FSModuleConnector : NSObject <FSModuleProjectOperations, FSModuleXPC> {
    NSXPCConnection * _ourConnection;
    FSModuleExtension * _ourModule;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) NSXPCConnection *ourConnection;
@property (retain) FSModuleExtension *ourModule;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)activateVolume:(id)arg1 resource:(id)arg2 options:(id)arg3 replyHandler:(id /* block */)arg4;
- (void)checkIn:(id)arg1 replyHandler:(id /* block */)arg2;
- (void)checkResource:(id)arg1 options:(id)arg2 connection:(id)arg3 taskID:(id)arg4 replyHandler:(id /* block */)arg5;
- (void)checkWithOptions:(id)arg1 connection:(id)arg2 taskID:(id)arg3 replyHandler:(id /* block */)arg4;
- (void)deactivateVolume:(id)arg1 numericOptions:(unsigned long long)arg2 replyHandler:(id /* block */)arg3;
- (void)formatResource:(id)arg1 options:(id)arg2 connection:(id)arg3 taskID:(id)arg4 replyHandler:(id /* block */)arg5;
- (void)formatWithOptions:(id)arg1 connection:(id)arg2 taskID:(id)arg3 replyHandler:(id /* block */)arg4;
- (void)getLegacyVolumeEndpoint:(id)arg1 replyHandler:(id /* block */)arg2;
- (void)getModuleListenerEndpoint:(id /* block */)arg1;
- (void)getProgressPortForTask:(id)arg1 replyHandler:(id /* block */)arg2;
- (void)getVolumeEndpoint:(id)arg1 replyHandler:(id /* block */)arg2;
- (void)loadResource:(id)arg1 options:(id)arg2 replyHandler:(id /* block */)arg3;
- (id)ourConnection;
- (id)ourModule;
- (void)ping:(id /* block */)arg1;
- (void)probeResource:(id)arg1 replyHandler:(id /* block */)arg2;
- (void)sendCloseResource:(id)arg1;
- (void)sendConfigureUserClient:(id)arg1 replyHandler:(id /* block */)arg2;
- (void)sendIsVolumeUsed:(id)arg1 bundle:(id)arg2 replyHandler:(id /* block */)arg3;
- (void)sendRevokeResource:(id)arg1;
- (void)sendTaskUpdate:(id)arg1;
- (void)sendWipeResource:(id)arg1 replyHandler:(id /* block */)arg2;
- (void)setOurConnection:(id)arg1;
- (void)setOurModule:(id)arg1;
- (void)unloadResource:(id)arg1 options:(id)arg2 replyHandler:(id /* block */)arg3;

@end
