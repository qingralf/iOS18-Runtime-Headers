/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSCertificateWarningPageContext : NSObject <NSSecureCoding> {
    bool  _canGoBack;
    double  _clockSkew;
    NSString * _expiredCertificateDescription;
    NSURL * _failingURL;
    long long  _numberOfDaysInvalid;
    long long  _warningCategory;
}

@property (nonatomic, readonly) bool canGoBack;
@property (nonatomic, readonly) double clockSkew;
@property (nonatomic, readonly) NSString *expiredCerticateDescription;
@property (nonatomic, readonly) NSURL *failingURL;
@property (nonatomic, readonly) long long numberOfDaysInvalid;
@property (nonatomic, readonly) long long warningCategory;

+ (bool)certificateWarningCannotBeBypassedForTrust:(struct __SecTrust { }*)arg1;
+ (long long)certificateWarningCategoryForError:(id)arg1 trustIncludesRevokedCertificate:(bool)arg2 clockSkew:(double)arg3;
+ (long long)numberOfDaysBetweenCertificateValidityRangeAndNow:(id)arg1;
+ (id)permanentAcceptanceConfirmationButtonTitle;
+ (id)permanentAcceptanceConfirmationTitle;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)canGoBack;
- (double)clockSkew;
- (void)encodeWithCoder:(id)arg1;
- (id)expiredCerticateDescription;
- (id)failingURL;
- (id)init;
- (id)initLegacyTLSWarningWithFailingURL:(id)arg1 canGoBack:(bool)arg2;
- (id)initPrivateRelayFailClosedNavigationWarningWithFailingURL:(id)arg1 isPrivateRelaySetToTrackersAndWebsites:(bool)arg2 canGoBack:(bool)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithWarningCategory:(long long)arg1 failingURL:(id)arg2 numberOfDaysInvalid:(long long)arg3 canGoBack:(bool)arg4 clockSkew:(double)arg5;
- (long long)numberOfDaysInvalid;
- (long long)warningCategory;

@end
