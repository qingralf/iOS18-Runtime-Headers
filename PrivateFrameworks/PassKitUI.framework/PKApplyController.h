/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKApplyController : NSObject <PKPaymentServiceDelegate, PKSetupFlowControllerProtocol> {
    unsigned long long  _accessLevel;
    PKAccount * _account;
    NSSet * _actionIdentifiersRequiringAuthentication;
    NSString * _analyticsExistingAccountType;
    long long  _applicationType;
    PKAppleCardApplyExperiment * _applyExperiment;
    NSURL * _applyServiceURL;
    PKODIServiceProviderAssessment * _applyTermsODISession;
    long long  _associatedIntent;
    long long  _channel;
    long long  _context;
    NSString * _coreIDVNextStepToken;
    PKODIServiceProviderAssessment * _createApplicationODISession;
    bool  _didEncounterError;
    unsigned long long  _documentUploadType;
    NSArray * _encryptionCertificates;
    bool  _endedApplyFlow;
    PKFamilyMember * _familyMember;
    PKFeatureApplication * _featureApplication;
    unsigned long long  _featureIdentifier;
    unsigned long long  _featureProduct;
    PKAccountPaymentFundingSource * _fundingSource;
    DIVerificationSession * _idVerificationSession;
    PKODIServiceProviderAssessment * _inflightODISession;
    PKPaymentInstallmentConfiguration * _installmentConfiguration;
    PKAssertion * _notificationSupressionAssertion;
    NSMutableArray * _pagesToSubmit;
    <PKSetupFlowControllerProtocol> * _parentFlowController;
    PKPayLaterSetupFlowController * _payLaterSetupController;
    PKPaymentService * _paymentService;
    NSString * _preliminaryAssessmentIdentifier;
    NSString * _previousContextIdentifier;
    NSMutableSet * _processedTermsIdentifiers;
    PKPaymentProvisioningController * _provisioningController;
    NSString * _referenceIdentifier;
    unsigned long long  _requiredMetadataFields;
    bool  _requiresODIAssessment;
    unsigned long long  _runningApplicationUpdates;
    <PKPaymentSetupViewControllerDelegate> * _setupDelegate;
    NSMutableSet * _shownTermsIdentifiers;
    PKODIServiceProviderAssessment * _submitApplicationODISession;
    long long  _updateUserInfoSubType;
    unsigned long long  _verificationType;
    unsigned long long  _viewControllerIndex;
    NSMutableArray * _viewControllers;
    PKPaymentWebService * _webService;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic) unsigned long long accessLevel;
@property (nonatomic, readonly) PKAccount *account;
@property (nonatomic, copy) NSString *analyticsExistingAccountType;
@property (nonatomic, readonly) long long applicationType;
@property (nonatomic, retain) NSURL *applyServiceURL;
@property (nonatomic) long long associatedIntent;
@property (nonatomic, readonly) long long channel;
@property (nonatomic, readonly) long long context;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool didEncounterError;
@property (nonatomic, retain) PKFamilyMember *familyMember;
@property (nonatomic, readonly) PKFeatureApplication *featureApplication;
@property (nonatomic, readonly) unsigned long long featureIdentifier;
@property (nonatomic, readonly) unsigned long long featureProduct;
@property (nonatomic, readonly) PKAccountPaymentFundingSource *fundingSource;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PKPaymentInstallmentConfiguration *installmentConfiguration;
@property (nonatomic, retain) <PKSetupFlowControllerProtocol> *parentFlowController;
@property (nonatomic, retain) PKPayLaterSetupFlowController *payLaterSetupController;
@property (nonatomic, copy) NSString *preliminaryAssessmentIdentifier;
@property (nonatomic, readonly) PKPaymentProvisioningController *provisioningController;
@property (nonatomic, copy) NSString *referenceIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long updateUserInfoSubType;
@property (nonatomic, readonly) unsigned long long verificationType;

+ (id)localizationBundleForFeatureIdentifier:(unsigned long long)arg1 account:(id)arg2;
+ (id)localizationBundleForFeatureIdentifier:(unsigned long long)arg1 account:(id)arg2 mainBundle:(id)arg3;
+ (id)preferredLanguageForFeatureIdentifier:(unsigned long long)arg1 account:(id)arg2;
+ (id)preferredLanguageForFeatureIdentifier:(unsigned long long)arg1 account:(id)arg2 mainBundle:(id)arg3;

- (void).cxx_destruct;
- (void)_acquireAssertion;
- (id)_applyExperiment;
- (id)_applyExperimentDetails;
- (id)_defaultSubject;
- (void)_deviceMetadataFields:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (id)_displayableErrorForError:(id)arg1 showDetailedErrorFlow:(bool)arg2;
- (id)_fieldsViewControllerForPage:(id)arg1;
- (id)_formatStringSuffixForItemType:(long long)arg1;
- (void)_getODIAssessmentForSession:(id)arg1 completion:(id /* block */)arg2;
- (void)_handleApplyResponse:(id)arg1 originalFeatureApplication:(id)arg2 error:(id)arg3 completion:(id /* block */)arg4;
- (void)_handleCoreIDVPage:(id)arg1 totalPageCount:(long long)arg2 error:(id)arg3 completion:(id /* block */)arg4;
- (void)_handleResponseError:(id)arg1 completion:(id /* block */)arg2;
- (void)_invalidateAssertion;
- (void)_invalidateIDVSession;
- (id)_nextQueuedViewController;
- (void)_performApplyWithRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)_performAuthenticationLocationBased:(bool)arg1 withCompletion:(id /* block */)arg2;
- (void)_performCoreIDVNextStepWithPage:(id)arg1 completion:(id /* block */)arg2;
- (void)_performCoreIDVShareWithCompletion:(id /* block */)arg1;
- (void)_performCreateWithCompletion:(id /* block */)arg1;
- (void)_performWithdrawWithCompletion:(id /* block */)arg1;
- (void)_prewarmODIAssessmentIfNecessary;
- (void)_queueAcceptedFlowWithPage:(id)arg1;
- (void)_queueActionFlowWithPage:(id)arg1;
- (void)_queueApplicationTermsFlow;
- (void)_queueApplicationVerificationWithNextStepInfo:(id)arg1;
- (void)_queueCannotResumeIDVFlow;
- (void)_queueCompleteFlowWithNextPage:(id)arg1;
- (void)_queueConfirmInfoFlowWithPage:(id)arg1;
- (void)_queueDeclinedFlowWithPage:(id)arg1;
- (void)_queueDocumentSubmissionWithNextStepInfo:(id)arg1;
- (void)_queueEmailRequiredErrorViewController;
- (void)_queueExpiredFlowWithPage:(id)arg1;
- (void)_queueFieldsFlowWithNextStepInfo:(id)arg1;
- (void)_queueGenericErrorViewController;
- (void)_queueGenericErrorViewControllerWithPage:(id)arg1;
- (void)_queueInfoFlowWithNextWithPage:(id)arg1;
- (void)_queueOfferFlowWithPage:(id)arg1;
- (void)_queuePassActivationFlowWithCompletion:(id /* block */)arg1;
- (void)_queueProgramConsentFlowWithPage:(id)arg1;
- (void)_queueStateReasonExplanationFlowWithPage:(id)arg1;
- (void)_queueTerminalStateFlowWithPage:(id)arg1;
- (void)_reset;
- (void)_sendODISessionFeedbackforInflightSessionIfNecessary;
- (void)_setActionIdentifiersRequiringAuthentication:(id)arg1;
- (void)_startCoreIDVSessionWithStepInfo:(id)arg1 completion:(id /* block */)arg2;
- (void)_startPaymentServiceListener;
- (void)_stopPaymentServiceListener;
- (void)_submitAllFieldPages:(id)arg1 completion:(id /* block */)arg2;
- (void)_submitCoreIDVDocumentsPage:(id)arg1 selectedDocument:(id)arg2 frontImageData:(id)arg3 backImageData:(id)arg4 completion:(id /* block */)arg5;
- (void)_submitCoreIDVFieldsPage:(id)arg1 completion:(id /* block */)arg2;
- (void)_submitDocumentPageWithCoreIDVImageUpload:(id)arg1 selectedDocument:(id)arg2 frontImageData:(id)arg3 backImageData:(id)arg4 completion:(id /* block */)arg5;
- (void)_submitDocumentsPage:(id)arg1 selectedDocument:(id)arg2 frontImageData:(id)arg3 backImageData:(id)arg4 completion:(id /* block */)arg5;
- (unsigned long long)accessLevel;
- (id)account;
- (void)accountUserInvitationsWithCompletion:(id /* block */)arg1;
- (id)analyticsExistingAccountType;
- (long long)applicationType;
- (id)applicationUpdatedAlertControllerWithHandler:(id /* block */)arg1;
- (void)applyFlowDidAppear;
- (id)applyServiceURL;
- (long long)associatedIntent;
- (id)cancelAlertWithContinueAction:(id /* block */)arg1;
- (long long)channel;
- (long long)context;
- (void)dealloc;
- (bool)didEncounterError;
- (void)endApplyFlow;
- (id)familyMember;
- (id)featureApplication;
- (void)featureApplicationChanged:(id)arg1;
- (void)featureApplicationsWithCompletion:(id /* block */)arg1;
- (unsigned long long)featureIdentifier;
- (unsigned long long)featureProduct;
- (id)fundingSource;
- (id)initWithApplyConfiguration:(id)arg1;
- (id)installmentConfiguration;
- (id)loadHeroImageFromApplyExperiment;
- (id)localizationBundle;
- (void)nextViewControllerWithCompletion:(id /* block */)arg1;
- (id)parentFlowController;
- (id)payLaterSetupController;
- (id)preferredLanguage;
- (id)preliminaryAssessmentIdentifier;
- (id)provisioningController;
- (id)referenceIdentifier;
- (void)reportAnalyticsDictionaryForPage:(id)arg1 pageTag:(id)arg2 additionalValues:(id)arg3;
- (void)reportAnalyticsDictionaryForPage:(id)arg1 subject:(id)arg2 pageTag:(id)arg3 additionalValues:(id)arg4;
- (void)reportAnalyticsDictionaryForPage:(id)arg1 subject:(id)arg2 pageTag:(id)arg3 error:(id)arg4 additionalValues:(id)arg5;
- (void)reportAnalyticsError:(id)arg1 page:(id)arg2 pageTag:(id)arg3 additionalValues:(id)arg4;
- (void)resendVerificationForPage:(id)arg1 completion:(id /* block */)arg2;
- (void)setAccessLevel:(unsigned long long)arg1;
- (void)setAnalyticsExistingAccountType:(id)arg1;
- (void)setApplyServiceURL:(id)arg1;
- (void)setAssociatedIntent:(long long)arg1;
- (void)setFamilyMember:(id)arg1;
- (void)setInstallmentConfiguration:(id)arg1;
- (void)setParentFlowController:(id)arg1;
- (void)setPayLaterSetupController:(id)arg1;
- (void)setPreliminaryAssessmentIdentifier:(id)arg1;
- (void)setReferenceIdentifier:(id)arg1;
- (void)submitActionIdentifier:(id)arg1 termsIdentifiers:(id)arg2 odiAttributesDictionary:(id)arg3 completion:(id /* block */)arg4;
- (void)submitDocumentPage:(id)arg1 selectedDocument:(id)arg2 frontImage:(id)arg3 backImage:(id)arg4 completion:(id /* block */)arg5;
- (void)submitFieldsPage:(id)arg1 completion:(id /* block */)arg2;
- (void)submitVerificationPage:(id)arg1 verificationInfo:(id)arg2 completion:(id /* block */)arg3;
- (void)termsAccepted:(bool)arg1 termsIdentifier:(id)arg2 secondaryIdentifier:(id)arg3 actionIdentifier:(id)arg4 completion:(id /* block */)arg5;
- (void)termsDataForFeatureWithIdentifier:(id)arg1 format:(id)arg2 completion:(id /* block */)arg3;
- (void)termsDataForIdentifier:(id)arg1 format:(id)arg2 completion:(id /* block */)arg3;
- (void)termsShownWithIdentifier:(id)arg1;
- (long long)updateUserInfoSubType;
- (unsigned long long)verificationType;
- (void)withdrawApplicationWithCompletion:(id /* block */)arg1;

@end
