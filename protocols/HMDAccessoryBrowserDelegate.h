/* Generated by RuntimeBrowser.
 */

@protocol HMDAccessoryBrowserDelegate <NSObject>

@required

- (void)accessoryBrowser:(HMDAccessoryBrowser *)arg1 accessoryServer:(HAPAccessoryServer *)arg2 didDiscoverAccessories:(NSArray *)arg3 transaction:(HMFOSTransaction *)arg4 error:(NSError *)arg5;
- (void)accessoryBrowser:(HMDAccessoryBrowser *)arg1 accessoryServer:(HAPAccessoryServer *)arg2 didStopPairingWithError:(NSError *)arg3;
- (void)accessoryBrowser:(HMDAccessoryBrowser *)arg1 accessoryServer:(HAPAccessoryServer *)arg2 didUpdateCategory:(NSNumber *)arg3;
- (void)accessoryBrowser:(HMDAccessoryBrowser *)arg1 accessoryServer:(HAPAccessoryServer *)arg2 didUpdateConnectionState:(bool)arg3 linkLayerType:(long long)arg4 bookkeeping:(HAPAccessoryServerBookkeeping *)arg5 withError:(NSError *)arg6;
- (void)accessoryBrowser:(HMDAccessoryBrowser *)arg1 accessoryServer:(HAPAccessoryServer *)arg2 didUpdateConnectionState:(bool)arg3 sessionInfo:(HAP2AccessorySessionInfo *)arg4 linkLayerType:(long long)arg5 withError:(NSError *)arg6;
- (void)accessoryBrowser:(HMDAccessoryBrowser *)arg1 accessoryServer:(HAPAccessoryServer *)arg2 didUpdateHasPairings:(bool)arg3;
- (void)accessoryBrowser:(HMDAccessoryBrowser *)arg1 accessoryServer:(HAPAccessoryServer *)arg2 didUpdateValuesForCharacteristics:(NSArray *)arg3 stateNumber:(NSNumber *)arg4 broadcast:(bool)arg5;
- (void)accessoryBrowser:(HMDAccessoryBrowser *)arg1 didAddAccessoryAdvertisement:(HMDAccessoryAdvertisement *)arg2;
- (void)accessoryBrowser:(void *)arg1 didFindAccessoryServer:(void *)arg2 stateChanged:(void *)arg3 stateNumber:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 11: HMDAccessoryBrowser *, HAPAccessoryServer *, bool, NSNumber *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, bool, void*
- (void)accessoryBrowser:(HMDAccessoryBrowser *)arg1 didFindAccessoryServerNeedingReprovisioning:(HAPAccessoryServer *)arg2 error:(NSError *)arg3;
- (void)accessoryBrowser:(HMDAccessoryBrowser *)arg1 didFinishPairingForAccessoryServer:(HAPAccessoryServer *)arg2;
- (void)accessoryBrowser:(HMDAccessoryBrowser *)arg1 didFinishWACForAccessoryWithIdentifier:(NSString *)arg2 error:(NSError *)arg3;
- (void)accessoryBrowser:(HMDAccessoryBrowser *)arg1 didRemoveAccessoryAdvertisement:(HMDAccessoryAdvertisement *)arg2;
- (void)accessoryBrowser:(HMDAccessoryBrowser *)arg1 didRemoveAccessoryServer:(HAPAccessoryServer *)arg2 error:(NSError *)arg3;
- (void)accessoryBrowser:(HMDAccessoryBrowser *)arg1 didTombstoneAccessoryServer:(HAPAccessoryServer *)arg2;
- (void)accessoryBrowser:(HMDAccessoryBrowser *)arg1 didUpdateEndpoint:(HMDMediaEndpoint *)arg2;
- (void)accessoryBrowser:(HMDAccessoryBrowser *)arg1 didUpdateReachability:(bool)arg2 forBTLEAccessoriesWithServerIdentifier:(NSString *)arg3;
- (void)accessoryBrowser:(HMDAccessoryBrowser *)arg1 discoveryFailedWithError:(NSError *)arg2 accessoryServer:(NSString *)arg3 linkType:(long long)arg4;
- (void)accessoryBrowser:(HMDAccessoryBrowser *)arg1 identifier:(NSString *)arg2 reachable:(bool)arg3;

@end
