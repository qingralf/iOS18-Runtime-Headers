/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VFX.framework/VFX
 */

@interface VFX.EntityManager : _TtCs12_SwiftObject {
    void _entries;
    void _invalidated;
    void activeStatesPerEffects;
    void allComponentDataChunks;
    void allEntityClasses;
    void applicationInBackground;
    void asyncQueue;
    void backgroundingSignalLock;
    void canUseImGUI;
    void chunkStorageLock;
    void chunkTable;
    void clientID;
    void clock;
    void commandQueues;
    void componentRegistry;
    void copyGroup;
    void copyQueue;
    void counters;
    void currentState;
    void didBeginTransactionAtLastFrame;
    void entityCapacity;
    void entityCount;
    void entityFamilies;
    void firstFreeIndex;
    void generationSalt;
    void groupsCount;
    void hasRunloopTransaction;
    void imGUIEnabled;
    void isInAuthoringMode;
    void isInPrepare;
    void isVFX2;
    void lock;
    void lockChunksOnQueryForEach;
    void logger;
    void mainGraphScriptGroup;
    void name;
    void nextFrameBlocks;
    void nextFrameBlocksLock;
    void peerPid;
    void peerTaskIdentity;
    void queryManager;
    void recycledChunksData;
    void recycledChunksDataHistory;
    void relations;
    void renderer;
    void replicationStream;
    void runtimeThread;
    void scene;
    void sceneComponentStorage;
    void sceneInBackground;
    void scheduler;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  scriptingConfig;
    void shouldNotifyEntityEvent;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  signpostID;
    void stateDidChangeFn;
    void syncLock;
    void transactionDepth;
    void updateHandlerIndex;
    void updateQueue;
    void workerComponentStorage;
    void world;
}

- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_sceneDidEnterBackground:(id)arg1;
- (void)_sceneWillEnterForeground:(id)arg1;

@end
