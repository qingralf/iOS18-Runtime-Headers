/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKProvisioningAnalyticsSession : NSObject <PKProvisioningAnalyticsSessionReportingResponder> {
    bool  _didBeginWalletProvisioningSubject;
    NSString * _environment;
    NSString * _intent;
    NSMutableDictionary * _passMetadata;
    NSMutableDictionary * _productMetadata;
    NSString * _productSubtypeDescriptor;
    NSString * _productTypeDescriptor;
    NSString * _referralSource;
    NSString * _sessionID;
    NSString * _subject;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)continueAnalyticsSessionForEnvironment:(id)arg1 intent:(id)arg2 referralSource:(id)arg3 archivedParent:(id)arg4;
+ (id)startAnalyticsSessionForEnvironment:(id)arg1 intent:(id)arg2 referralSource:(id)arg3;

- (void).cxx_destruct;
- (void)_clearEnvironmentValues;
- (void)_reportEvent:(id)arg1;
- (id)archivedParentToken;
- (id)createStepReporter;
- (id)createViewReporterForPage:(id)arg1;
- (void)didReceiveEvent:(id)arg1;
- (id)initWithEnvironment:(id)arg1 intent:(id)arg2 referralSource:(id)arg3;
- (id)initWithEnvironment:(id)arg1 intent:(id)arg2 referralSource:(id)arg3 archivedParent:(id)arg4;
- (void)resetForNewProductSetup;
- (void)resetProductTypes;
- (void)setPass:(id)arg1;
- (void)setProductType:(id)arg1 subtype:(id)arg2;
- (void)setSetupProduct:(id)arg1;
- (void)stop;

@end
