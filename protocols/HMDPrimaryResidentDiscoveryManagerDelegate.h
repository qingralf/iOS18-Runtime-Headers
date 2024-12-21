/* Generated by RuntimeBrowser.
 */

@protocol HMDPrimaryResidentDiscoveryManagerDelegate

@required

- (void)discoveryManager:(id <HMDPrimaryResidentDiscoveryManager>)arg1 didCompleteDiscoveryWithPrimaryResidentDevice:(HMDResidentDevice *)arg2 primaryResidentGenerationID:(NSUUID *)arg3 error:(NSError *)arg4;
- (void)discoveryManager:(id <HMDPrimaryResidentDiscoveryManager>)arg1 didCompleteInitialDiscoveryAttemptWithError:(NSError *)arg2;
- (void)discoveryManager:(id <HMDPrimaryResidentDiscoveryManager>)arg1 didNotCompleteDiscoveryWithError:(NSError *)arg2;

@end