/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CarAccessoryFramework.framework/CarAccessoryFramework
 */

@interface CAFNowPlayingManager : NSObject <BSInvalidatable, CAFNowPlayingClient> {
    BSServiceConnection * _connection;
    CAFNowPlayingSnapshot * _lastSnapshot;
    id /* block */  _snapshotObserver;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, retain) BSServiceConnection *connection;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) CAFNowPlayingSnapshot *lastSnapshot;
@property (nonatomic, copy) id /* block */ snapshotObserver;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;

- (void).cxx_destruct;
- (void)_connectionActivated;
- (void)_connectionInterrupted;
- (void)_fetchSnapshot;
- (void)_setupConnection;
- (id)connection;
- (id)initWithObserver:(id /* block */)arg1;
- (void)invalidate;
- (id)lastSnapshot;
- (void)refreshNowPlayingSnapshot;
- (void)setConnection:(id)arg1;
- (void)setSnapshotObserver:(id /* block */)arg1;
- (void)setWorkQueue:(id)arg1;
- (id /* block */)snapshotObserver;
- (id)workQueue;

@end