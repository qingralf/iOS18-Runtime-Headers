/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DigitalSeparation.framework/DigitalSeparation
 */

@interface DSWifiSyncStore : NSObject {
    DSRemotePairingWrapper * _remotePairing;
    DSRemotePairingStore * _remotePairingStore;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, retain) DSRemotePairingWrapper *remotePairing;
@property (nonatomic, retain) DSRemotePairingStore *remotePairingStore;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;

- (void).cxx_destruct;
- (void)fetchPairedDevicesOnQueue:(id)arg1 completion:(id /* block */)arg2;
- (bool)fetchWifiSyncStatus;
- (id)init;
- (id)remotePairing;
- (id)remotePairingStore;
- (void)removeAllPairedDevicesOnQueue:(id)arg1 completion:(id /* block */)arg2;
- (void)removeComputersFromRemotePairing:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)removePairedDevices:(id)arg1 onQueue:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)setRemotePairing:(id)arg1;
- (void)setRemotePairingStore:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (id)workQueue;

@end
