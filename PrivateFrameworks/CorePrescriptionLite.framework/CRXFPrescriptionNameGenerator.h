/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CorePrescriptionLite.framework/CorePrescriptionLite
 */

@interface CRXFPrescriptionNameGenerator : NSObject {
    NSString * _defaultLensName;
    NSString * _demoLensName;
    NSString * _developerLensName;
    NSString * _developerLensPersonalizedName;
    NSString * _guestLensName;
    NSString * _prescriptionLensName;
    NSString * _prescriptionLensPersonalizedName;
    NSString * _readerLensName;
    NSString * _readerLensPersonalizedName;
}

- (void).cxx_destruct;
- (id)generatePrescriptionNameForLensType:(unsigned long long)arg1 userName:(id)arg2 inGuestMode:(bool)arg3;
- (id)init;

@end
