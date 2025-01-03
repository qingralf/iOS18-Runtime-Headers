/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreRepairUI.framework/CoreRepairUI
 */

@interface MRBaseComponentHandler : NSObject {
    NSString * _componentStatusKey;
    NSObject<OS_dispatch_queue> * asyncQueue;
    id  componentAuthHandler;
    NSString * componentDataCollectionPresentedKey;
    NSString * componentEnableNonAuthUIKey;
    NSString * componentFirstUIDisplayedTimeKey;
    NSString * componentFollowupClientID;
    int  componentFollowupRetriggerdays;
    NSString * componentForceKey;
    NSString * componentHasDisplayedFollowUpKey;
    NSString * componentHasNotifiedServerKey;
    long long  componentId;
    NSString * componentLastCheckTimeKey;
    NSString * componentName;
    NSString * componentNtwkActivityName;
    NSString * componentRetriggerCountKey;
    NSString * componentSUCaseKey;
    NSString * componentUnLockCheckCountKey;
    NSString * componentUnlockCheckerActivityName;
    int  componentfollowUpDisplaydays;
    int  deviceClass;
    bool  disableUIForComponent;
    bool  displayFollowup;
    bool  displayModalPopup;
    bool  displayNotification;
    NSString * finishRepairKey;
    NSString * finishRepairMessage;
    NSString * finishRepairTitle;
    NSString * followUpInfoMessage;
    bool  isSUCaseForComponent;
    NSString * lastKnownComponentIdentifierKey;
    NSString * lastKnownComponentIdentifierValue;
    bool  legacyPopup;
    NSURL * linkedSensitiveURL;
    bool  notifyServer;
    NSString * popUpNotificationMessage;
    NSString * popUpNotificationTitle;
    NSString * stateFilePath;
    bool  supportsRepair;
    double  timeIntervalOverride;
    bool  unlockCheckActivityRequired;
}

@property (nonatomic, retain) id componentAuthHandler;
@property (nonatomic, retain) NSString *componentDataCollectionPresentedKey;
@property (nonatomic, retain) NSString *componentEnableNonAuthUIKey;
@property (nonatomic, retain) NSString *componentFirstUIDisplayedTimeKey;
@property (nonatomic, retain) NSString *componentFollowupClientID;
@property (nonatomic) int componentFollowupRetriggerdays;
@property (nonatomic, retain) NSString *componentForceKey;
@property (nonatomic, retain) NSString *componentHasDisplayedFollowUpKey;
@property (nonatomic, retain) NSString *componentHasNotifiedServerKey;
@property (nonatomic) long long componentId;
@property (nonatomic, retain) NSString *componentLastCheckTimeKey;
@property (nonatomic, retain) NSString *componentName;
@property (nonatomic, retain) NSString *componentNtwkActivityName;
@property (nonatomic, retain) NSString *componentRetriggerCountKey;
@property (nonatomic, retain) NSString *componentSUCaseKey;
@property (nonatomic, retain) NSString *componentStatusKey;
@property (nonatomic, retain) NSString *componentUnLockCheckCountKey;
@property (nonatomic, retain) NSString *componentUnlockCheckerActivityName;
@property (nonatomic) int componentfollowUpDisplaydays;
@property (nonatomic) int deviceClass;
@property (nonatomic) bool disableUIForComponent;
@property (nonatomic) bool displayFollowup;
@property (nonatomic) bool displayModalPopup;
@property (nonatomic) bool displayNotification;
@property (nonatomic, retain) NSString *finishRepairKey;
@property (nonatomic, retain) NSString *finishRepairMessage;
@property (nonatomic, retain) NSString *finishRepairTitle;
@property (nonatomic, retain) NSString *followUpInfoMessage;
@property (nonatomic) bool isSUCaseForComponent;
@property (nonatomic, retain) NSString *lastKnownComponentIdentifierKey;
@property (nonatomic, retain) NSString *lastKnownComponentIdentifierValue;
@property (nonatomic) bool legacyPopup;
@property (nonatomic, retain) NSURL *linkedSensitiveURL;
@property (nonatomic) bool notifyServer;
@property (nonatomic, retain) NSString *popUpNotificationMessage;
@property (nonatomic, retain) NSString *popUpNotificationTitle;
@property (nonatomic, retain) NSString *stateFilePath;
@property (nonatomic) bool supportsRepair;
@property (nonatomic) double timeIntervalOverride;
@property (nonatomic) bool unlockCheckActivityRequired;

+ (id)getHwRevision;
+ (void)handleComponentSUCase:(id)arg1 lastAUthCheckBuildVersion:(id)arg2 followUpItemID:(id)arg3 queryString:(id)arg4 suCasekey:(id)arg5 startBuildVersion:(id)arg6 componentAuth:(id)arg7;
+ (void)handleSUCase;

- (void).cxx_destruct;
- (void)checkInAndHandleAuthStatus;
- (void)clearNSUserDefaults;
- (void)clearRepairFollowUp;
- (bool)clearStateFile:(bool*)arg1;
- (id)componentAuthHandler;
- (id)componentDataCollectionPresentedKey;
- (id)componentEnableNonAuthUIKey;
- (id)componentFirstUIDisplayedTimeKey;
- (id)componentFollowupClientID;
- (int)componentFollowupRetriggerdays;
- (id)componentForceKey;
- (id)componentHasDisplayedFollowUpKey;
- (id)componentHasNotifiedServerKey;
- (long long)componentId;
- (id)componentLastCheckTimeKey;
- (id)componentName;
- (id)componentNtwkActivityName;
- (id)componentRetriggerCountKey;
- (id)componentSUCaseKey;
- (id)componentStatusKey;
- (id)componentUnLockCheckCountKey;
- (id)componentUnlockCheckerActivityName;
- (int)componentfollowUpDisplaydays;
- (id)createCriteriaForUnlockCheckerWithInterval:(double)arg1;
- (void)createFinishRepairFollowUpWithNotification:(bool)arg1;
- (void)createRepairFollowUp;
- (int)deviceClass;
- (bool)disableUIForComponent;
- (bool)displayFollowup;
- (bool)displayModalPopup;
- (bool)displayNotification;
- (id)finishRepairKey;
- (id)finishRepairMessage;
- (id)finishRepairTitle;
- (id)followUpInfoMessage;
- (id)init;
- (bool)isSUCaseForComponent;
- (id)lastKnownComponentIdentifierKey;
- (id)lastKnownComponentIdentifierValue;
- (bool)legacyPopup;
- (id)linkedSensitiveURL;
- (void)mainNonAuthRepairFlow;
- (bool)notifyServer;
- (id)popUpNotificationMessage;
- (void)popUpNotificationNowWithMessage;
- (id)popUpNotificationTitle;
- (void)scheduleNetworkActivity;
- (void)scheduleUnlockCheckerActivity:(double)arg1 forFinishRepair:(bool)arg2;
- (void)sendAnalyticsForCount:(long long)arg1;
- (void)setComponentAuthHandler:(id)arg1;
- (void)setComponentDataCollectionPresentedKey:(id)arg1;
- (void)setComponentEnableNonAuthUIKey:(id)arg1;
- (void)setComponentFirstUIDisplayedTimeKey:(id)arg1;
- (void)setComponentFollowupClientID:(id)arg1;
- (void)setComponentFollowupRetriggerdays:(int)arg1;
- (void)setComponentForceKey:(id)arg1;
- (void)setComponentHasDisplayedFollowUpKey:(id)arg1;
- (void)setComponentHasNotifiedServerKey:(id)arg1;
- (void)setComponentId:(long long)arg1;
- (void)setComponentLastCheckTimeKey:(id)arg1;
- (void)setComponentName:(id)arg1;
- (void)setComponentNtwkActivityName:(id)arg1;
- (void)setComponentRetriggerCountKey:(id)arg1;
- (void)setComponentSUCaseKey:(id)arg1;
- (void)setComponentStatusKey:(id)arg1;
- (void)setComponentUnLockCheckCountKey:(id)arg1;
- (void)setComponentUnlockCheckerActivityName:(id)arg1;
- (void)setComponentfollowUpDisplaydays:(int)arg1;
- (void)setDeviceClass:(int)arg1;
- (void)setDisableUIForComponent:(bool)arg1;
- (void)setDisplayFollowup:(bool)arg1;
- (void)setDisplayModalPopup:(bool)arg1;
- (void)setDisplayNotification:(bool)arg1;
- (void)setFinishRepairKey:(id)arg1;
- (void)setFinishRepairMessage:(id)arg1;
- (void)setFinishRepairTitle:(id)arg1;
- (void)setFollowUpInfoMessage:(id)arg1;
- (void)setIsSUCaseForComponent:(bool)arg1;
- (void)setLastKnownComponentIdentifierKey:(id)arg1;
- (void)setLastKnownComponentIdentifierValue:(id)arg1;
- (void)setLegacyPopup:(bool)arg1;
- (void)setLinkedSensitiveURL:(id)arg1;
- (void)setNotifyServer:(bool)arg1;
- (void)setPopUpNotificationMessage:(id)arg1;
- (void)setPopUpNotificationTitle:(id)arg1;
- (void)setStateFilePath:(id)arg1;
- (void)setSupportsRepair:(bool)arg1;
- (void)setTimeIntervalOverride:(double)arg1;
- (void)setUnlockCheckActivityRequired:(bool)arg1;
- (id)stateFilePath;
- (bool)supportsRepair;
- (double)timeIntervalOverride;
- (bool)unlockCheckActivityRequired;
- (void)unlockCheckerActivityBody;
- (void)unlockCheckerActivityBodyForFinishRepair;

@end
