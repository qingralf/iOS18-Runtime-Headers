/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SafetyMonitor.framework/SafetyMonitor
 */

@interface SMLikelyReceiverOptions : NSObject <NSSecureCoding> {
    bool  _requireContact;
    bool  _requireEligibility;
    bool  _requireNonBlockedContact;
    bool  _requireOnlyFavoritedHandles;
    bool  _requireOnlyPastSessionRecipients;
}

@property (nonatomic, readonly) bool requireContact;
@property (nonatomic, readonly) bool requireEligibility;
@property (nonatomic, readonly) bool requireNonBlockedContact;
@property (nonatomic, readonly) bool requireOnlyFavoritedHandles;
@property (nonatomic, readonly) bool requireOnlyPastSessionRecipients;

+ (id)defaultOptions;
+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (bool)hasNoFilters;
- (id)initWithCoder:(id)arg1;
- (id)initWithRequireEligibility:(bool)arg1 requireContact:(bool)arg2 requireNonBlockedContact:(bool)arg3 requireOnlyFavoritedHandles:(bool)arg4 requireOnlyPastSessionRecipients:(bool)arg5;
- (bool)isEqual:(id)arg1;
- (bool)requireContact;
- (bool)requireEligibility;
- (bool)requireNonBlockedContact;
- (bool)requireOnlyFavoritedHandles;
- (bool)requireOnlyPastSessionRecipients;

@end
