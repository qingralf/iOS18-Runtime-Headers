/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SleepHealthDaemon.framework/SleepHealthDaemon
 */

@interface HDSHSleepApneaRescindedNotificationManager : NSObject <HDProfileReadyObserver, HKFeatureStatusProvidingObserver> {
    <HKFeatureStatusProviding> * _featureStatusProvider;
    HDKeyValueDomain * _localKeyValueDomain;
    HDProfile * _profile;
    NSObject<OS_dispatch_queue> * _queue;
    id /* block */  _unitTesting_postNotificationHandler;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ unitTesting_postNotificationHandler;

- (void).cxx_destruct;
- (id)_categoryIdentifierFromRescindedReason:(id)arg1;
- (bool)_isFeatureRescindedWithRequirementsEvaluation:(id)arg1;
- (bool)_isFeatureUnavailableForNonRescindedReasonWithRequirementsEvaluation:(id)arg1;
- (void)_queue_checkFeatureStatus;
- (void)_queue_sendNotificationRequestIfNeededWithFeatureStatus:(id)arg1;
- (id)_rescindedNotificationTitleAndBodyKeysWithHighestPriorityUnsatisfiedRequirementIdentifier:(id)arg1;
- (id)_rescindedRequirementIdentifiers;
- (void)_showRescindedNotificationWithTitleAndBodyKeys:(id)arg1 rescindedReason:(id)arg2;
- (void)featureStatusProviding:(id)arg1 didUpdateFeatureStatus:(id)arg2;
- (id)initWithProfile:(id)arg1 featureStatusProvider:(id)arg2;
- (id)initWithProfile:(id)arg1 featureStatusProvider:(id)arg2 queueOverride:(id)arg3;
- (void)profileDidBecomeReady:(id)arg1;
- (void)setUnitTesting_postNotificationHandler:(id /* block */)arg1;
- (id /* block */)unitTesting_postNotificationHandler;

@end