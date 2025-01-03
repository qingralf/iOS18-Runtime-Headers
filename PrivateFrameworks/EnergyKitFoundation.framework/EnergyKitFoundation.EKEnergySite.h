/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/EnergyKitFoundation.framework/EnergyKitFoundation
 */

@interface EnergyKitFoundation.EKEnergySite : NSObject <NSSecureCoding> {
    void accessToken;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  accessTokenExpirationDate;
    void accountName;
    void accountNumber;
    void address;
    void alternateSupplier;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  amiLastRefreshDate;
    void ckFunctionToken;
    void ckZoneName;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  currentRatePlan;
    void encoder;
    void generationMeters;
    void hasExportedEnergy;
    void intervalBlockCustomIndex;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  intervalBlockNextRefreshDate;
    void location;
    void refreshToken;
    void serviceLocationID;
    void siteID;
    void siteName;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  siteTombstone;
    void siteVersion;
    void state;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  subscriptionCreationDate;
    void subscriptionID;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  subscriptionStartDate;
    void timezone;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  unknownFields;
    void usagePointCustomIndex;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  usagePointNextRefreshDate;
    void usageSummaryCustomIndex;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  usageSummaryNextRefreshDate;
    void utilityID;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  utilitySupportedCheckDate;
}

+ (void)setSupportsSecureCoding:(bool)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
