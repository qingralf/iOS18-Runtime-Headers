/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeRecommendationEngine.framework/HomeRecommendationEngine
 */

@interface HRERecommendableObjectTypeListRule : HRERecommendableObjectRule {
    NSSet * _typesSatisfyingRequirement;
}

@property (nonatomic, readonly) NSSet *typesSatisfyingRequirement;

+ (id)ruleRequiringOneOfTypes:(id)arg1;

- (void).cxx_destruct;
- (id)initWithRequiredTypeGroup:(id)arg1;
- (bool)passesWithHomeObjects:(id)arg1;
- (id)typesSatisfyingRequirement;

@end