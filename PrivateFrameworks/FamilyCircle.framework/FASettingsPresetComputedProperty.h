/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FamilyCircle.framework/FamilyCircle
 */

@interface FASettingsPresetComputedProperty : NSObject <NSCoding, NSSecureCoding> {
    void conditions;
}

@property (nonatomic, readonly) NSArray *conditions;
@property (nonatomic, readonly) NSSet *dependencies;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)computedValueWithValueProvider:(id /* block */)arg1;
- (id)conditions;
- (id)dependencies;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithConditions:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end
