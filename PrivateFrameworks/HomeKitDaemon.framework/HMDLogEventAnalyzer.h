/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemonLegacy.framework/HomeKitDaemonLegacy
 */

@interface HMDLogEventAnalyzer : HMFObject <HMFLogging, HMMLogEventObserver>

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)logCategory;
+ (id)managedEventCounterRequestGroups;

- (void)didReceiveEventFromDispatcher:(id)arg1;

@end
