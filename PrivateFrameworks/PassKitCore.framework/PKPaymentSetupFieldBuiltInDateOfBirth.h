/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentSetupFieldBuiltInDateOfBirth : PKPaymentSetupFieldDate {
    bool  _disallowCurrentYear;
    long long  _minimumAge;
}

@property (nonatomic) bool disallowCurrentYear;
@property (nonatomic, readonly) long long minimumAge;

- (bool)disallowCurrentYear;
- (id)initWithIdentifier:(id)arg1 type:(unsigned long long)arg2;
- (bool)isBuiltIn;
- (long long)minimumAge;
- (void)setDisallowCurrentYear:(bool)arg1;
- (bool)submissionStringMeetsAllRequirements;
- (void)updateWithConfiguration:(id)arg1;

@end
