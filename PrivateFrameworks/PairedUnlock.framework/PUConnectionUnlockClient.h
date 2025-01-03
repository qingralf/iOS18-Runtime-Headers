/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PairedUnlock.framework/PairedUnlock
 */

@interface PUConnectionUnlockClient : NSObject <PUUnlockClient> {
    PUConnection * _connection;
}

@property (nonatomic) PUConnection *connection;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)connection;
- (void)didDisableOnlyRemoteUnlock:(bool)arg1 error:(id)arg2;
- (void)didEnableOnlyRemoteUnlock:(bool)arg1 error:(id)arg2;
- (void)didGetRemoteDeviceState:(id)arg1 error:(id)arg2;
- (void)didPairForUnlock:(bool)arg1 error:(id)arg2;
- (void)didUnpairForUnlock:(bool)arg1 error:(id)arg2;
- (id)initWithConnection:(id)arg1;
- (void)remoteDeviceDidCompleteRemoteAction:(bool)arg1 remoteDeviceState:(id)arg2 error:(id)arg3;
- (void)remoteDeviceDidRemoveLockout:(bool)arg1 error:(id)arg2;
- (void)remoteDeviceDidUnlock;
- (void)setConnection:(id)arg1;

@end
