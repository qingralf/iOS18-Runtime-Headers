/* Generated by RuntimeBrowser.
 */

@protocol HMDResidentDeviceManagerRoarBackingStore

@required

- (NSString *)cloudChangeUpdateNotificationName;
- (NSArray *)findResidents:(HMDDevice *)arg1 outHasResidents:(bool*)arg2;
- (HMDBackingStoreResidentUpdateResult *)handleCloudResidentChange:(NSNotification *)arg1 currentResidents:(NSSet *)arg2 isCurrentDevicePrimaryResident:(bool)arg3 currentDevice:(HMDDevice *)arg4;
- (void)handleHomeDataReadyAfterBecomingPrimary:(NSNotification *)arg1;
- (bool)hasAnyResident;
- (bool)hasResidentSelectionInfoUpdateInNotification:(NSNotification *)arg1;
- (HMDResidentSelectionInfo *)residentSelectionInfo;
- (HMFFuture *)residentsRequiringReachabilityUpdate:(NSSet *)arg1;
- (void)updateIdentifiersForAvailableResidentDevices:(NSArray *)arg1;
- (void)updateReachabilityForResidents:(NSSet *)arg1;
- (void)updateResidentSelectionInfoTo:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: HMDResidentSelectionInfo *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
