/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoordinationCore.framework/CoordinationCore
 */

@interface COMeshController : NSObject <CODiscoveryManagerDelegate, COMeshNodeDelegate, COMeshNodeStateTrackerDelegate, CONodeManagerDelegate> {
    NSOrderedSet * _addOns;
    COBallot * _ballot;
    COBallotBrowser * _ballotBrowser;
    unsigned long long  _clusterOptions;
    NSDictionary * _commandHandlers;
    <COCompanionLinkClientFactoryProtocol> * _companionLinkClientFactory;
    NSUserDefaults * _coordinationDefaults;
    CODiscoveryManager * _discoveryManager;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    NSObject<OS_dispatch_source> * _electionElapsedTimer;
    unsigned long long  _electionEnd;
    unsigned long long  _electionPrevious;
    unsigned long long  _electionStart;
    unsigned long long  _generation;
    NSString * _globalServiceName;
    COIDSBrowser * _idsBrowser;
    unsigned long long  _internalFlags;
    NSString * _label;
    COConstituent * _leader;
    COMeshLocalNode * _listener;
    unsigned long long  _longestBackOff;
    COConstituent * _longestBackedOffConstituent;
    COConstituent * _me;
    NSString * _meshName;
    CONodeManager * _nodeManager;
    NSDictionary * _notificationHandlers;
    bool  _pendingPing;
    double  _pingMaximum;
    double  _pingMinimum;
    NSArray * _queuedCommands;
    CORapportBrowser * _rapportBrowser;
    id /* block */  _recorder;
    NSDictionary * _requestHandlers;
    NSArray * _sentCommands;
    unsigned long long  _state;
    COMeshNodeStateTrackerSet * _trackers;
}

@property (nonatomic, copy) NSOrderedSet *addOns;
@property (nonatomic, copy) COBallot *ballot;
@property (nonatomic, retain) COBallotBrowser *ballotBrowser;
@property (nonatomic) unsigned long long clusterOptions;
@property (nonatomic, copy) NSDictionary *commandHandlers;
@property (nonatomic, retain) <COCompanionLinkClientFactoryProtocol> *companionLinkClientFactory;
@property (nonatomic, retain) NSUserDefaults *coordinationDefaults;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) CODiscoveryManager *discoveryManager;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *electionElapsedTimer;
@property (nonatomic) unsigned long long electionEnd;
@property (nonatomic) unsigned long long electionPrevious;
@property (nonatomic) unsigned long long electionStart;
@property (nonatomic) unsigned long long generation;
@property (nonatomic, copy) NSString *globalServiceName;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) COIDSBrowser *idsBrowser;
@property (nonatomic) unsigned long long internalFlags;
@property (nonatomic, copy) NSString *label;
@property (nonatomic, retain) COConstituent *leader;
@property (nonatomic, retain) COMeshLocalNode *listener;
@property (nonatomic) unsigned long long longestBackOff;
@property (nonatomic, retain) COConstituent *longestBackedOffConstituent;
@property (nonatomic, readonly) COConstituent *me;
@property (nonatomic, copy) NSString *meshName;
@property (nonatomic, readonly) COMeshNode *nodeForMe;
@property (nonatomic, readonly) CONodeManager *nodeManager;
@property (nonatomic, readonly, copy) NSArray *nodes;
@property (nonatomic, copy) NSDictionary *notificationHandlers;
@property (getter=hasPendingPing, nonatomic) bool pendingPing;
@property (nonatomic) double pingMaximum;
@property (nonatomic) double pingMinimum;
@property (nonatomic, copy) NSArray *queuedCommands;
@property (nonatomic, retain) CORapportBrowser *rapportBrowser;
@property (nonatomic, copy) id /* block */ recorder;
@property (nonatomic, copy) NSDictionary *requestHandlers;
@property (nonatomic, copy) NSArray *sentCommands;
@property (nonatomic, readonly) unsigned long long state;
@property (readonly) Class superclass;
@property (nonatomic, readonly) COMeshNodeStateTrackerSet *trackers;

- (void).cxx_destruct;
- (id)_acceptResponseWithBallot:(id)arg1 generation:(unsigned long long)arg2;
- (id)_ballotResponseWithBallot:(id)arg1 generation:(unsigned long long)arg2;
- (id)_constituentCharacteristics:(id)arg1;
- (id)_currentBallotMergedWithBallot:(id)arg1;
- (id)_electionRequestWithBallot:(id)arg1 generation:(unsigned long long)arg2;
- (void)_enqueueCommand:(id)arg1;
- (void)_finalizeCompletionOfNode:(id)arg1 memberOfMesh:(bool)arg2 eventProvider:(id /* block */)arg3;
- (void)_handleAcceptResponse:(id)arg1 onNode:(id)arg2;
- (void)_handleBallotResponse:(id)arg1 onNode:(id)arg2;
- (void)_handleDiscoveryUsingBallot:(id)arg1;
- (id)_handleDiscoveryUsingElectionRequest:(id)arg1;
- (void)_handleElectionRequest:(id)arg1 onNode:(id)arg2 responseCallBack:(id /* block */)arg3;
- (void)_handleNodeChanges;
- (void)_handleVoteRequest:(id)arg1 onNode:(id)arg2 responseCallBack:(id /* block */)arg3;
- (id)_inflateQueueCommands;
- (bool)_isCurrentElectionVariant:(long long)arg1;
- (bool)_isElectionComplete;
- (void)_logElectionSummary;
- (id)_newCompanionLinkClient;
- (id)_nodeDetails:(id)arg1;
- (void)_performElectionGeneration:(unsigned long long)arg1 source:(id)arg2 allowingPostTransition:(bool)arg3;
- (void)_performInvalidationOfNode:(id)arg1 error:(id)arg2 eventProvider:(id /* block */)arg3;
- (void)_performStopOfNode:(id)arg1 error:(id)arg2 eventProvider:(id /* block */)arg3;
- (void)_pingLeader;
- (void)_processBackedOffNodesExcludingTracker:(id)arg1;
- (void)_processQueuedCommands;
- (void)_removeSentCommand:(id)arg1 fromNode:(id)arg2 withResponse:(id)arg3 error:(id)arg4;
- (void)_setupBrowsers;
- (void)_setupCoordinationPrefsObserver;
- (void)_tearDownCoordinationPrefsObserver;
- (void)_transitionToPostElection;
- (id)_voteRequestWithBallot:(id)arg1 generation:(unsigned long long)arg2;
- (bool)addAddOn:(id)arg1;
- (void)addBrowser:(id)arg1;
- (id)addOns;
- (void)backedOffNodeMovedOutOfElection:(id)arg1;
- (id)ballot;
- (id)ballotBrowser;
- (void)broadcastRequest:(id)arg1 includingSelf:(bool)arg2 recipientsCallback:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
- (unsigned long long)clusterOptions;
- (id)commandHandlers;
- (id)companionLinkClientFactory;
- (id)coordinationDefaults;
- (void)degisterHandlerForRequestClass:(Class)arg1;
- (void)deregisterHandlerForCommandClass:(Class)arg1;
- (void)deregisterHandlerForNotificationClass:(Class)arg1;
- (void)deregisterHandlerForRequestClass:(Class)arg1;
- (id)description;
- (void)didActivateNode:(id)arg1;
- (void)didAddNode:(id)arg1;
- (void)didCompleteElection;
- (void)didInvalidateNode:(id)arg1;
- (void)didRemoveNode:(id)arg1;
- (void)didStartElection;
- (void)didTransitionToState:(unsigned long long)arg1;
- (id)discoveryManager;
- (void)discoveryManager:(id)arg1 didDiscoverRecords:(id)arg2;
- (id)dispatchQueue;
- (id)electionElapsedTimer;
- (unsigned long long)electionEnd;
- (unsigned long long)electionPrevious;
- (unsigned long long)electionStart;
- (unsigned long long)generation;
- (id)globalServiceName;
- (bool)hasPendingPing;
- (id)idsBrowser;
- (id)init;
- (id)initWithConstituentType:(unsigned long long)arg1;
- (unsigned long long)internalFlags;
- (id)label;
- (id)leader;
- (id)listener;
- (unsigned long long)longestBackOff;
- (id)longestBackedOffConstituent;
- (id)me;
- (id)meshName;
- (void)node:(id)arg1 didReceiveCommand:(id)arg2;
- (void)node:(id)arg1 didReceiveError:(id)arg2 forCommand:(id)arg3;
- (void)node:(id)arg1 didReceiveRequest:(id)arg2 responseCallBack:(id /* block */)arg3;
- (void)node:(id)arg1 didReceiveResponse:(id)arg2 toRequest:(id)arg3;
- (void)node:(id)arg1 didSendCommand:(id)arg2;
- (void)nodeBecameAvailable:(id)arg1;
- (id)nodeForConstituent:(id)arg1;
- (id)nodeForMe;
- (id)nodeManager;
- (void)nodeShouldRetryAfterBackoff:(id)arg1;
- (id)nodes;
- (id)notificationHandlers;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (double)pingMaximum;
- (double)pingMinimum;
- (id)queuedCommands;
- (id)rapportBrowser;
- (id /* block */)recorder;
- (void)registerHandler:(id /* block */)arg1 forCommandClass:(Class)arg2;
- (void)registerHandler:(id /* block */)arg1 forNotificationClass:(Class)arg2;
- (void)registerHandler:(id /* block */)arg1 forRequestClass:(Class)arg2;
- (bool)removeAddOn:(id)arg1;
- (id)requestHandlers;
- (void)sendCommand:(id)arg1 sentCommandCallback:(id /* block */)arg2;
- (void)sendCommand:(id)arg1 toPeer:(id)arg2;
- (void)sendCommand:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)sendNotification:(id)arg1;
- (void)sendRequest:(id)arg1 sentRequestCallback:(id /* block */)arg2;
- (void)sendRequest:(id)arg1 toPeer:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)sendRequest:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)sentCommands;
- (void)setAddOns:(id)arg1;
- (void)setBallot:(id)arg1;
- (void)setBallotBrowser:(id)arg1;
- (void)setClusterOptions:(unsigned long long)arg1;
- (void)setCommandHandlers:(id)arg1;
- (void)setCompanionLinkClientFactory:(id)arg1;
- (void)setCoordinationDefaults:(id)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setElectionElapsedTimer:(id)arg1;
- (void)setElectionEnd:(unsigned long long)arg1;
- (void)setElectionPrevious:(unsigned long long)arg1;
- (void)setElectionStart:(unsigned long long)arg1;
- (void)setGeneration:(unsigned long long)arg1;
- (void)setGlobalServiceName:(id)arg1;
- (void)setIdsBrowser:(id)arg1;
- (void)setInternalFlags:(unsigned long long)arg1;
- (void)setLabel:(id)arg1;
- (void)setLeader:(id)arg1;
- (void)setListener:(id)arg1;
- (void)setLongestBackOff:(unsigned long long)arg1;
- (void)setLongestBackedOffConstituent:(id)arg1;
- (void)setMeshName:(id)arg1;
- (void)setNotificationHandlers:(id)arg1;
- (void)setPendingPing:(bool)arg1;
- (void)setPingMaximum:(double)arg1;
- (void)setPingMinimum:(double)arg1;
- (void)setQueuedCommands:(id)arg1;
- (void)setRapportBrowser:(id)arg1;
- (void)setRecorder:(id /* block */)arg1;
- (void)setRequestHandlers:(id)arg1;
- (void)setSentCommands:(id)arg1;
- (void)start;
- (unsigned long long)state;
- (void)stop;
- (id)trackers;
- (void)unknownNodeForCommand:(id)arg1 result:(id /* block */)arg2;
- (void)unknownNodeForRequest:(id)arg1 result:(id /* block */)arg2;
- (void)willActivateNode:(id)arg1;
- (void)willInvalidateNode:(id)arg1 error:(id)arg2;
- (void)willTransitionToState:(unsigned long long)arg1;

@end
