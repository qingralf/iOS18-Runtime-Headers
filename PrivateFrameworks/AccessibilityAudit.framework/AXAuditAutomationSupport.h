/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AccessibilityAudit.framework/AccessibilityAudit
 */

@interface AXAuditAutomationSupport : NSObject <AXAuditerDelegate> {
    NSObject<OS_dispatch_queue> * __auditQueue;
    NSString * __auditTimestamp;
    AXAuditer * __auditor;
    struct __AXObserver { } * __axEventObserver;
    NSObject<OS_dispatch_queue> * __backgroudQueue;
    id /* block */  __completionBlock;
    bool  __registeredForNotifications;
    bool  __runningContinuousAudit;
    AXAuditThrottler * __screenChangedThrottler;
    long long  __singleAuditPendingCount;
    NSArray * _auditTypes;
    NSArray * _auditWarningsToCapture;
    NSArray * _auditWarningsToIgnore;
    <AXAuditAutomationDelegate> * _delegate;
    NSArray * _elementIdentifiersToIgnore;
    bool  _runContinuousAudit;
    int  _targetPid;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *_auditQueue;
@property (copy) NSString *_auditTimestamp;
@property (nonatomic, retain) AXAuditer *_auditor;
@property (nonatomic) struct __AXObserver { }*_axEventObserver;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *_backgroudQueue;
@property (nonatomic, copy) id /* block */ _completionBlock;
@property (nonatomic) bool _registeredForNotifications;
@property (nonatomic) bool _runningContinuousAudit;
@property (nonatomic, retain) AXAuditThrottler *_screenChangedThrottler;
@property (nonatomic) long long _singleAuditPendingCount;
@property (nonatomic, copy) NSArray *auditTypes;
@property (nonatomic, retain) NSArray *auditWarningsToCapture;
@property (nonatomic, retain) NSArray *auditWarningsToIgnore;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <AXAuditAutomationDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSArray *elementIdentifiersToIgnore;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool runContinuousAudit;
@property (readonly) Class superclass;
@property (nonatomic) int targetPid;

+ (id)_currentTimestamp;
+ (struct __AXUIElement { }*)createAXElementForAuditIssue:(id)arg1;
+ (id)longDescriptionForAuditIssue:(id)arg1;
+ (id)sharedManager;
+ (id)shortDescriptionForAuditIssue:(id)arg1;

- (void).cxx_destruct;
- (id)_accessibilityNotificationsForContinuousAudit;
- (id)_auditQueue;
- (id)_auditTimestamp;
- (id)_auditor;
- (struct __AXObserver { }*)_axEventObserver;
- (id)_backgroudQueue;
- (void)_captureScreenshot;
- (id /* block */)_completionBlock;
- (void)_informDelegateOfResults:(id)arg1 error:(id)arg2;
- (bool)_initializeAXObserverIfNeeded;
- (void)_registerForAXNotifications:(bool)arg1;
- (bool)_registeredForNotifications;
- (void)_runAudit;
- (void)_runNextAuditIfNeeded;
- (void)_runNextContinuousAudit;
- (bool)_runningContinuousAudit;
- (void)_screenChangedNotification;
- (void)_screenChangedThrottled;
- (id)_screenChangedThrottler;
- (void)_sendResultsToDelegate:(id)arg1;
- (void)_setupAudit;
- (id)_setupWarningsFromAuditTypes;
- (long long)_singleAuditPendingCount;
- (void)_startContinuousAudit;
- (void)_stopContinuousAudit;
- (id)auditTypes;
- (id)auditWarningsToCapture;
- (id)auditWarningsToIgnore;
- (void)auditer:(id)arg1 didAppendLogWithMessage:(id)arg2;
- (void)auditer:(id)arg1 didCompleteWithResults:(id)arg2;
- (void)auditer:(id)arg1 didEncounterIssue:(id)arg2;
- (id)delegate;
- (id)elementIdentifiersToIgnore;
- (id)fetchScreenshot;
- (id)init;
- (bool)runContinuousAudit;
- (bool)runningContinuousAudit;
- (bool)runningSingleAudit;
- (id)screenshotHighlightingIssue:(id)arg1;
- (void)setAuditTypes:(id)arg1;
- (void)setAuditWarningsToCapture:(id)arg1;
- (void)setAuditWarningsToIgnore:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setElementIdentifiersToIgnore:(id)arg1;
- (void)setRunContinuousAudit:(bool)arg1;
- (void)setTargetPid:(int)arg1;
- (void)set_auditQueue:(id)arg1;
- (void)set_auditTimestamp:(id)arg1;
- (void)set_auditor:(id)arg1;
- (void)set_axEventObserver:(struct __AXObserver { }*)arg1;
- (void)set_backgroudQueue:(id)arg1;
- (void)set_completionBlock:(id /* block */)arg1;
- (void)set_registeredForNotifications:(bool)arg1;
- (void)set_runningContinuousAudit:(bool)arg1;
- (void)set_screenChangedThrottler:(id)arg1;
- (void)set_singleAuditPendingCount:(long long)arg1;
- (void)startAuditWithCompletionBlock:(id /* block */)arg1;
- (void)startContinuousAudit;
- (void)startSingleAudit;
- (void)stopContinuousAudit;
- (int)targetPid;

@end