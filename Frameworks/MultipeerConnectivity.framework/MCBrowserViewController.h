/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MultipeerConnectivity.framework/MultipeerConnectivity
 */

@interface MCBrowserViewController : UIViewController <MCNearbyServiceBrowserDelegate, MCSessionPrivateDelegate, UINavigationBarDelegate, UITableViewDataSource, UITableViewDelegate> {
    MCNearbyServiceBrowser * _browser;
    NSObject<OS_dispatch_queue> * _callbackQueue;
    UIBarButtonItem * _cancelButton;
    unsigned long long  _declinedPeersCount;
    <MCBrowserViewControllerDelegate> * _delegate;
    UIBarButtonItem * _doneButton;
    NSMutableArray * _foundPeers;
    NSBundle * _frameworkBundle;
    NSMutableArray * _invitedPeersSection;
    NSMutableDictionary * _invitedPeersState;
    unsigned long long  _maximumNumberOfPeers;
    unsigned long long  _minimumNumberOfPeers;
    MCPeerID * _myPeerID;
    UINavigationBar * _navigationBar;
    NSMutableArray * _nearbyPeersSection;
    MCSession * _session;
    UITableView * _tableView;
}

@property (nonatomic, retain) MCNearbyServiceBrowser *browser;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *callbackQueue;
@property (nonatomic, retain) UIBarButtonItem *cancelButton;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) unsigned long long declinedPeersCount;
@property (nonatomic) <MCBrowserViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIBarButtonItem *doneButton;
@property (nonatomic, retain) NSMutableArray *foundPeers;
@property (nonatomic, retain) NSBundle *frameworkBundle;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableArray *invitedPeersSection;
@property (nonatomic, retain) NSMutableDictionary *invitedPeersState;
@property (nonatomic) unsigned long long maximumNumberOfPeers;
@property (nonatomic, readonly) bool maximumNumberOfPeersReached;
@property (nonatomic) unsigned long long minimumNumberOfPeers;
@property (nonatomic, readonly) bool minimumNumberOfPeersReached;
@property (nonatomic, copy) MCPeerID *myPeerID;
@property (nonatomic, retain) UINavigationBar *navigationBar;
@property (nonatomic, retain) NSMutableArray *nearbyPeersSection;
@property (nonatomic, retain) MCSession *session;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITableView *tableView;

- (void)applicationDidEnterBackgroundNotification:(id)arg1;
- (void)applicationWillEnterForegroundNotification:(id)arg1;
- (id)browser;
- (void)browser:(id)arg1 foundPeer:(id)arg2 withDiscoveryInfo:(id)arg3;
- (void)browser:(id)arg1 lostPeer:(id)arg2;
- (id)callbackQueue;
- (id)cancelButton;
- (void)cancelTapped:(id)arg1;
- (void)dealloc;
- (unsigned long long)declinedPeersCount;
- (id)delegate;
- (id)description;
- (id)detailStringForPeerState:(int)arg1;
- (void)didReceiveMemoryWarning;
- (id)doneButton;
- (void)doneTapped:(id)arg1;
- (id)foundPeers;
- (id)frameworkBundle;
- (void)handleViewDidDisappear;
- (void)handleViewWillAppear;
- (id)init;
- (id)initWithBrowser:(id)arg1 session:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithServiceType:(id)arg1 session:(id)arg2;
- (id)invitedPeersSection;
- (id)invitedPeersState;
- (bool)isVisible;
- (unsigned long long)maximumNumberOfPeers;
- (bool)maximumNumberOfPeersReached;
- (unsigned long long)minimumNumberOfPeers;
- (bool)minimumNumberOfPeersReached;
- (id)myPeerID;
- (id)navigationBar;
- (id)nearbyPeersSection;
- (id)nearbySectionTitle;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)peer:(id)arg1 changedStateTo:(int)arg2;
- (void)peerJoinedSession;
- (long long)positionForBar:(id)arg1;
- (id)session;
- (void)session:(id)arg1 didFinishReceivingResourceWithName:(id)arg2 fromPeer:(id)arg3 atURL:(id)arg4 withError:(id)arg5 propagate:(bool*)arg6;
- (void)session:(id)arg1 didReceiveData:(id)arg2 fromPeer:(id)arg3 propagate:(bool*)arg4;
- (void)session:(id)arg1 didReceiveStream:(id)arg2 withName:(id)arg3 fromPeer:(id)arg4 propagate:(bool*)arg5;
- (void)session:(id)arg1 didStartReceivingResourceWithName:(id)arg2 fromPeer:(id)arg3 withProgress:(id)arg4 propagate:(bool*)arg5;
- (void)session:(id)arg1 peer:(id)arg2 didChangeState:(long long)arg3 propagate:(bool*)arg4;
- (void)setBrowser:(id)arg1;
- (void)setCallbackQueue:(id)arg1;
- (void)setCancelButton:(id)arg1;
- (void)setDeclinedPeersCount:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDoneButton:(id)arg1;
- (void)setFoundPeers:(id)arg1;
- (void)setFrameworkBundle:(id)arg1;
- (void)setInvitedPeersSection:(id)arg1;
- (void)setInvitedPeersState:(id)arg1;
- (void)setMaximumNumberOfPeers:(unsigned long long)arg1;
- (void)setMinimumNumberOfPeers:(unsigned long long)arg1;
- (void)setMyPeerID:(id)arg1;
- (void)setNavigationBar:(id)arg1;
- (void)setNearbyPeersSection:(id)arg1;
- (void)setSession:(id)arg1;
- (void)setTableView:(id)arg1;
- (id)tableView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)verifyPeerIsAccountedFor:(id)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
