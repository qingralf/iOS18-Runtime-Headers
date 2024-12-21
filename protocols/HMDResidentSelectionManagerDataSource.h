/* Generated by RuntimeBrowser.
 */

@protocol HMDResidentSelectionManagerDataSource <NSObject>

@required

- (NSBackgroundActivityScheduler *)autoModeEvaluationScheduler;
- (<HMDResidentSelectionMode> *)createResidentSelectionModeWithType:(unsigned long long)arg1 context:(id <HMDResidentDeviceManagerContext>)arg2;
- (HMDIDSServerBag *)idsServerBagForHome:(HMDHome *)arg1;
- (HMDHomeKitVersion *)minimumHomeKitVersionForResidentSelection;
- (NSNotificationCenter *)notificationCenter;

@end