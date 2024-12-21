/* Generated by RuntimeBrowser.
 */

@protocol HMDResidentSelectionMode <NSObject>

@required

- (bool)allowExternalUpdateOfPrimaryResidentTo:(HMDResidentDevice *)arg1 selectionTimestamp:(NSDate *)arg2;
- (void)configureAsAResidentWithRunPrimaryEvaluation:(bool)arg1;
- (void)currentDeviceReadyAsAResident;
- (unsigned long long)currentModeType;
- (<HMDResidentSelectionModeDelegate> *)delegate;
- (void)didReceiveSelectionMessage:(HMFMessage *)arg1;
- (void)didUpdateResidentSelectionModelTo:(HMDResidentSelectionInfo *)arg1;
- (void)didUpdateResidentStatus:(HMDResidentSelectionStatusKit *)arg1 residentsFound:(NSSet *)arg2 residentsLost:(NSSet *)arg3;
- (NSDictionary *)dumpState;
- (id)initWithContext:(id <HMDResidentDeviceManagerContext>)arg1;
- (HMDPreferredResidentsList *)localPreferredResidentsList;
- (NSSet *)locallyReachableResidents;
- (void)performSelectionWithPreferredPrimaryResident:(void *)arg1 requireAutoUpdate:(void *)arg2 reason:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: HMDResidentDevice *, bool, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, NSError *, void*
- (unsigned long long)primaryChangedReason;
- (void)primaryResidentChanged:(HMDResidentDevice *)arg1 previousResidentDevice:(HMDResidentDevice *)arg2;
- (bool)residentIsLocallyReachable:(HMDResidentDevice *)arg1;
- (NSArray *)residentsNotPresentInPreferredResidentsList:(NSArray *)arg1;
- (void)setDelegate:(id <HMDResidentSelectionModeDelegate>)arg1;
- (void)start;
- (void)stop;

@end