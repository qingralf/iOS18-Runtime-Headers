/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKit.framework/NanoTimeKit
 */

@interface NTKPersistentFaceCollection : NTKFaceCollection <NTKCollectionClient, NTKFaceObserver> {
    NSXPCConnection * _connection;
    bool  _hasLoaded;
    bool  _isLibraryCollection;
    NSArray * _referenceOrderedUUIDs;
    NSUUID * _referenceSelectedUUID;
    bool  _registrationNeeded;
    NSNumber * _seqId;
    bool  _suppressingFaceObserverCallbacks;
    NSString * _updateSuspensionIdentifier;
    NSMutableArray * _updatesFromDaemonEnqueuedWhileSuspended;
    bool  _updatesFromDaemonSuspended;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_didAddFace:(id)arg1 withUUID:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)_didMoveFace:(id)arg1 withUUID:(id)arg2 toIndex:(unsigned long long)arg3;
- (void)_didRemoveFace:(id)arg1 withUUID:(id)arg2;
- (void)_didSelectFaceUUID:(id)arg1 suppressingCallback:(bool)arg2;
- (void)_fromDaemon_addFace:(id)arg1 forUUID:(id)arg2;
- (void)_fromDaemon_computeSelectedUUIDFromReferenceAndNotifySelected;
- (void)_fromDaemon_removeFaceForUUID:(id)arg1;
- (void)_fromDaemon_updateFaceForUUID:(id)arg1 withConfiguration:(id)arg2;
- (void)_fromDaemon_updateFaceForUUID:(id)arg1 withResourceDirectory:(id)arg2;
- (void)_fromDaemon_upgradeFace:(id)arg1 forUUID:(id)arg2;
- (void)_handleConnectionInterrupted;
- (void)_handleFlushCompleteForIdentifier:(id)arg1;
- (void)_notifyLoaded;
- (void)_notifyReset;
- (void)_performOrEnqueueUpdateOfType:(long long)arg1 forFaceUUID:(id)arg2 block:(id /* block */)arg3;
- (void)_performSuppressingFaceObserverCallbacks:(id /* block */)arg1;
- (void)_pruneEnqueuedUpdatesMadeObsoleteByNewUpdate:(id)arg1;
- (void)_register;
- (void)_registerIfNeeded;
- (void)_sendToDaemonAddedFace:(id)arg1 forUUID:(id)arg2;
- (void)_sendToDaemonFlushWithIdentifier:(id)arg1;
- (void)_sendToDaemonOrderedUUIDs;
- (void)_sendToDaemonRemovedFaceForUUID:(id)arg1;
- (void)_sendToDaemonReset;
- (void)_sendToDaemonSelectedUUIDSuppressingCallback:(bool)arg1;
- (void)_sendToDaemonUpdatedConfigurationForFace:(id)arg1 withUUID:(id)arg2;
- (void)_sendToDaemonUpdatedResourceDirectoryForFace:(id)arg1 withUUID:(id)arg2;
- (void)_sendToDaemonUpgradeForFace:(id)arg1 withUUID:(id)arg2;
- (id)_serverProxy;
- (void)addFaceInstanceDescriptor:(id)arg1 forUUID:(id)arg2 seqId:(id)arg3;
- (void)dealloc;
- (void)faceConfigurationDidChange:(id)arg1;
- (void)faceResourceDirectoryDidChange:(id)arg1;
- (void)faceUpgradeOccurred:(id)arg1;
- (void)flushCompleteForIdentifier:(id)arg1;
- (bool)hasLoaded;
- (id)initWithCollectionIdentifier:(id)arg1 deviceUUID:(id)arg2;
- (void)loadFullCollectionWithOrderedUUIDs:(id)arg1 selectedUUID:(id)arg2 facesDescriptorsByUUID:(id)arg3 seqId:(id)arg4 completion:(id /* block */)arg5;
- (void)removeFaceForUUID:(id)arg1 seqId:(id)arg2 completion:(id /* block */)arg3;
- (void)reset;
- (void)resetClientCollectionWithCompletion:(id /* block */)arg1;
- (void)resumeUpdatesFromDaemon;
- (void)suspendUpdatesFromDaemon;
- (void)updateFaceForUUID:(id)arg1 withConfigurationJSONRepresentation:(id)arg2 seqId:(id)arg3;
- (void)updateFaceForUUID:(id)arg1 withResourceDirectory:(id)arg2 seqId:(id)arg3 completion:(id /* block */)arg4;
- (void)updateOrderedFaceUUIDs:(id)arg1 seqId:(id)arg2;
- (void)updateSelectedFaceUUID:(id)arg1 seqId:(id)arg2;
- (void)upgradeFaceInstanceDescriptor:(id)arg1 forUUID:(id)arg2 seqID:(id)arg3;

@end
