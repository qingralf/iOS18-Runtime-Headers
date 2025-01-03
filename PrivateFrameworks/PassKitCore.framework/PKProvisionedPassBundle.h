/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKProvisionedPassBundle : NSObject {
    bool  _ampEnrollmentAvailable;
    bool  _expressEnabled;
    bool  _expressModeSetupOptional;
    NSArray * _moreInfoItems;
    NSOrderedSet * _provisionedPasses;
    PKPaymentProvisioningResponse * _provisioningResponse;
}

@property (nonatomic) bool ampEnrollmentAvailable;
@property (nonatomic) bool expressEnabled;
@property (nonatomic) bool expressModeSetupOptional;
@property (nonatomic, retain) NSArray *moreInfoItems;
@property (nonatomic, retain) NSOrderedSet *provisionedPasses;
@property (nonatomic, retain) PKPaymentProvisioningResponse *provisioningResponse;

- (void).cxx_destruct;
- (id)_init;
- (bool)ampEnrollmentAvailable;
- (bool)expressEnabled;
- (bool)expressModeSetupOptional;
- (id)init;
- (id)moreInfoItems;
- (id)provisionedPasses;
- (id)provisioningResponse;
- (void)setAmpEnrollmentAvailable:(bool)arg1;
- (void)setExpressEnabled:(bool)arg1;
- (void)setExpressModeSetupOptional:(bool)arg1;
- (void)setMoreInfoItems:(id)arg1;
- (void)setProvisionedPasses:(id)arg1;
- (void)setProvisioningResponse:(id)arg1;

@end
