/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudSubscriptionFeatures.framework/CloudSubscriptionFeatures
 */

@interface CSFAvailability : NSObject <NSSecureCoding> {
    long long  _status;
    long long  _unavailabiltyReasons;
}

@property (nonatomic, readonly) bool deviceHasEnoughStorage;
@property (nonatomic, readonly) bool shouldShowGM;
@property (nonatomic) long long status;
@property (nonatomic, readonly) bool unableToFetchAvailability;
@property (nonatomic) long long unavailabiltyReasons;

+ (id)_availabilityGivenUnavailabilityReasons:(long long)arg1;
+ (void)_currentAvailabilityWithFeatureObject:(id)arg1 completionHandler:(id /* block */)arg2;
+ (id)_descriptionForUnavailabilityReasons:(long long)arg1;
+ (void)_handleFeatureResponseWithFeatureObject:(id)arg1 error:(id)arg2 reasons:(long long)arg3 shouldBypassEligibility:(bool)arg4 requestID:(id)arg5 completionHandler:(id /* block */)arg6;
+ (long long)_syncUnavailabilityReasonsWithRequestID:(id)arg1;
+ (id)currentAvailability;
+ (void)currentAvailabilityWithCompletionHandler:(id /* block */)arg1;
+ (id)dispatchQueue;
+ (id)generateRequestID;
+ (bool)supportsSecureCoding;

- (id)description;
- (bool)deviceHasEnoughStorage;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStatus:(long long)arg1 withUnavailabilityReasons:(long long)arg2;
- (void)setStatus:(long long)arg1;
- (void)setUnavailabiltyReasons:(long long)arg1;
- (bool)shouldShowGM;
- (long long)status;
- (bool)unableToFetchAvailability;
- (long long)unavailabiltyReasons;

@end
