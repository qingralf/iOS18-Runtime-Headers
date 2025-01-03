/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TestFlightCore.framework/TestFlightCore
 */

@interface TFFeedbackSession : NSObject <TFDataAggregatorDelegate> {
    TFFeedbackFormViewController * _activeFormViewController;
    TFDataAggregator * _aggregator;
    NSString * _bundleIdentifier;
    NSURL * _bundleURL;
    unsigned long long  _context;
    unsigned long long  _currentPhase;
    TFFeedbackDataContainer * _dataContainer;
    <TFFeedbackSessionDelegate> * _delegate;
    bool  _didSnapshot;
    bool  _forcePrefilledEmailViewVariant;
    ASDBetaAppLaunchInfo * _launchInfo;
    NSString * _logKey;
    <TFFeedbackSubmissionService> * _submissionService;
    bool  _waitingOnAggregatorForSubmission;
}

@property (nonatomic) TFFeedbackFormViewController *activeFormViewController;
@property (nonatomic, readonly) TFDataAggregator *aggregator;
@property (nonatomic, readonly, copy) NSString *bundleIdentifier;
@property (nonatomic, readonly, copy) NSURL *bundleURL;
@property (nonatomic, readonly) unsigned long long context;
@property (nonatomic) unsigned long long currentPhase;
@property (nonatomic, readonly) TFFeedbackDataContainer *dataContainer;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <TFFeedbackSessionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool didSnapshot;
@property (nonatomic) bool forcePrefilledEmailViewVariant;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) ASDBetaAppLaunchInfo *launchInfo;
@property (nonatomic, readonly, copy) NSString *logKey;
@property (nonatomic, readonly) <TFFeedbackSubmissionService> *submissionService;
@property (readonly) Class superclass;
@property (getter=isWaitingOnAggregatorForSubmission, nonatomic) bool waitingOnAggregatorForSubmission;

- (void).cxx_destruct;
- (void)_abortFeedbackSubmissionForViewController:(id)arg1 withError:(id)arg2;
- (id)_associatePrefilledEmailIfNeeded;
- (void)_beginFeedbackSubmisionForViewController:(id)arg1;
- (id)_currentContextStringDescription;
- (id)_developerName;
- (id)_displayableErrorMessageFromService:(id)arg1 submissionError:(id)arg2;
- (void)_finishFeedbackSubmissionForViewController:(id)arg1;
- (id)_generateFormForCurrentState;
- (id)activeFormViewController;
- (id)aggregator;
- (void)associateComments:(id)arg1;
- (void)associateEmail:(id)arg1;
- (void)associateIncidentId:(id)arg1;
- (void)associateScreenshotImages:(id)arg1;
- (id)bundleIdentifier;
- (id)bundleURL;
- (void)cancelFeedbackForActiveFormViewController;
- (void)commonInitWithContext:(unsigned long long)arg1;
- (unsigned long long)context;
- (id)createFeedbackViewControllerForCurrentState;
- (unsigned long long)currentPhase;
- (void)dataAggregator:(id)arg1 didCompleteTasks:(id)arg2;
- (id)dataContainer;
- (id)delegate;
- (bool)didSnapshot;
- (bool)forcePrefilledEmailViewVariant;
- (id)initForContext:(unsigned long long)arg1 betaApplicationBundleURL:(id)arg2;
- (id)initForContext:(unsigned long long)arg1 betaApplicationIdentifier:(id)arg2;
- (id)initForContext:(unsigned long long)arg1 betaApplicationLoadableBundleURL:(id)arg2;
- (id)initForContext:(unsigned long long)arg1 withTestingWithLaunchInfo:(id)arg2;
- (id)initWithBetaApplicationIdentifier:(id)arg1;
- (void)initiateFeedbackSnapshot;
- (bool)isWaitingOnAggregatorForSubmission;
- (id)launchInfo;
- (id)logKey;
- (void)setActiveFormViewController:(id)arg1;
- (void)setCurrentPhase:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDidSnapshot:(bool)arg1;
- (void)setForcePrefilledEmailViewVariant:(bool)arg1;
- (void)setWaitingOnAggregatorForSubmission:(bool)arg1;
- (id)submissionService;
- (void)submitCrashFeedback;
- (void)submitFeedbackForActiveFormViewController;

@end
