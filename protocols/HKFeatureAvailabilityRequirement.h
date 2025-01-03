/* Generated by RuntimeBrowser.
 */

@protocol HKFeatureAvailabilityRequirement <NSObject, NSSecureCoding, NSCopying, HKFeatureAvailabilityRequirementsProviding>

@required

+ (NSString *)requirementIdentifier;

- (NSNumber *)isSatisfiedWithDataSource:(HKFeatureAvailabilityRequirementEvaluationDataSource *)arg1 error:(id*)arg2;
- (NSString *)requirementDescription;

@end
