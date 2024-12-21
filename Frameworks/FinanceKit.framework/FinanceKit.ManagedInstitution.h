/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/FinanceKit.framework/FinanceKit
 */

@interface FinanceKit.ManagedInstitution : NSManagedObject

@property (nonatomic) short authTypeObjects;
@property (nonatomic, retain) NSNumber *backgroundRefreshConfirmationExpiryWindow;
@property (nonatomic, retain) NSNumber *backgroundRefreshConfirmationWindow;
@property (nonatomic, copy) NSDate *backgroundRefreshRetryAfterDate;
@property (nonatomic) bool balanceWidgetEnabled;
@property (nonatomic) bool consentSyncingEnabled;
@property (nonatomic) double consentSyncingOutdatedTokenWaitTimeout;
@property (nonatomic, copy) NSDate *earliestUpdateRequestStartDate;
@property (nonatomic, copy) NSArray *extensionsBundleIdentifiers;
@property (nonatomic) bool financialLabEnabled;
@property (nonatomic, retain) NSNumber *firstTransactionsRequestWindow;
@property (nonatomic, copy) NSString *id;
@property (nonatomic, copy) NSDate *lastBackgroundRefreshDate;
@property (nonatomic, copy) NSDate *lastUpdateRequestAttemptDate;
@property (nonatomic) double maxAgeTransactionsFirstRequest;
@property (nonatomic) double maxAgeTransactionsRefreshRequest;
@property (nonatomic) short maximumNumberOfBackgroundRefreshes;
@property (nonatomic) bool multipleConsentsEnabled;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) short numberOfRemainingBackgroundRefreshes;
@property (nonatomic, retain) _TtC10FinanceKit32ManagedPIIRedactionConfiguration *piiRedactionConfiguration;
@property (nonatomic) short privacyLabelsValue;
@property (nonatomic) bool problemReportingEnabled;
@property (nonatomic) short reconsentTypeValue;
@property (nonatomic) int supportedNotificationEventTypesValue;
@property (nonatomic, retain) _TtC10FinanceKit36ManagedBankConnectTermsAndConditions *termsAndConditionsObject;
@property (nonatomic) bool timestampSuitableForUserDisplay;
@property (nonatomic) long long updateRequestAttemptCount;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end