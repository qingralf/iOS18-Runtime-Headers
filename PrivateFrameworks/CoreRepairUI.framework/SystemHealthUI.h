/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreRepairUI.framework/CoreRepairUI
 */

@interface SystemHealthUI : PSListController {
    NSNumber * _batteryLevel;
    CRUIAnalytics * analytics;
    NSObject<OS_dispatch_queue> * asyncQueue;
    NSArray * cachedSpecifiers;
    int  deviceClass;
    bool  deviceFDRVersion1;
    int  failedComponentsCount;
    bool  isRCHLDevice;
    bool  isRepaired;
    CRRepairHistory * localRepairHistory;
    MRLocalization * locale;
}

@property (nonatomic) PSListController *parentViewController;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_updateSpecifiers:(id)arg1 specifierToInsertAfter:(id)arg2 withUpdates:(id)arg3;
- (void)clearCAARequestHistory;
- (void)configureSpin:(bool)arg1 ofCellForSpecifier:(id)arg2 setEnabled:(bool)arg3;
- (void)extractAudioSpecifiers;
- (void)extractBackGlassSpecifiers:(id)arg1 configurationSpecifiers:(id)arg2 caaRepairHistory:(id)arg3 rchlHistory:(id)arg4;
- (void)extractBasebandSpecifiers:(id)arg1;
- (void)extractBatterySpecifiers:(id)arg1 configurationSpecifiers:(id)arg2 caaRepairHistory:(id)arg3 rchlHistory:(id)arg4 claimCount:(id)arg5;
- (void)extractBluetoohSpecifiers;
- (void)extractCameraSpecifiers:(id)arg1 componentsInfoSpecifiers:(id)arg2 configurationSpecifiers:(id)arg3 caaRepairHistory:(id)arg4 srvp:(id)arg5 rchlHistory:(id)arg6 claimCount:(id)arg7;
- (void)extractDisplaySpecifiers:(id)arg1 configurationSpecifiers:(id)arg2 caaRepairHistory:(id)arg3 srvp:(id)arg4 rchlHistory:(id)arg5 claimCount:(id)arg6;
- (void)extractEnclosureSpecifiers:(id)arg1 caaRepairHistory:(id)arg2 rchlHistory:(id)arg3;
- (void)extractFaceIDSpecifiers:(id)arg1 configurationSpecifiers:(id)arg2 caaRepairHistory:(id)arg3 rchlHistory:(id)arg4 claimCount:(id)arg5;
- (void)extractMtubSpecifiers:(id)arg1 caaRepairHistory:(id)arg2 srvp:(id)arg3 rchlHistory:(id)arg4;
- (void)extractNFCSpecifiers:(id)arg1;
- (void)extractRCameraHWFailureSpecifiers;
- (void)extractTouchIDSpecifiers:(id)arg1 configurationSpecifiers:(id)arg2 caaRepairHistory:(id)arg3 rchlHistory:(id)arg4;
- (void)extractUWBSpecifiers:(id)arg1;
- (void)extractWifiSpecifiers;
- (void)extractiPadBatterySpecifiers:(id)arg1;
- (void)extractiPadCameraSpecifiers:(id)arg1 componentsInfoSpecifiers:(id)arg2 configurationSpecifiers:(id)arg3 caaRepairHistory:(id)arg4 rchlHistory:(id)arg5;
- (id)findSpecifierToInsertAfter:(id)arg1;
- (int)getBatteryHealthServiceState;
- (void)getCAAForRepairHistory;
- (long long)getCpuUptimeInSec;
- (id)getCurrentDetailsWithPrivacySpecifier:(bool)arg1;
- (id)getCurrentSystemHealthInfoSpecifiers;
- (bool)hasUnsealedComponents;
- (id)init;
- (bool)isPreFlightDone;
- (bool)isVaildCAA:(id)arg1;
- (void)performBackGroundMiniPreflight;
- (void)performInteractiveMiniPreflight;
- (id)reloadCurrentSystemHealthInfoSpecifiers;
- (void)requestCAA;
- (void)retryCAA;
- (void)scheduleNetworkActivityWith:(long long)arg1;
- (void)setupCAARetry:(id*)arg1;
- (id)setupGroupSpecifer;
- (void)setupPrivacyFooterFor:(id)arg1 withPrivacySpecifier:(bool)arg2;
- (void)showActionSheets:(id)arg1;
- (void)updateSpecifiersWithCompletionHandler:(id /* block */)arg1;
- (id)valueForSpecifierFinishRepair;
- (id)valueForSpecifierIssue;
- (id)valueForSpecifierPartData:(id)arg1;
- (id)valueForSpecifierPartDate:(id)arg1;
- (id)valueForSpecifierPartProperty:(id)arg1;
- (id)valueForSpecifierPartRC:(id)arg1;
- (id)valueForSpecifierPartService:(id)arg1;
- (id)valueForSpecifierRepaired;
- (id)valueForSpecifierService;
- (id)valueForSpecifierUnknown;
- (id)valueForSpecifierUsed;

@end
