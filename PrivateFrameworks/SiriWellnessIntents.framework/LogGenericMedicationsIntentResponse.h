/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriWellnessIntents.framework/SiriWellnessIntents
 */

@interface LogGenericMedicationsIntentResponse : INIntentResponse {
    void code;
}

@property (nonatomic) long long code;
@property (nonatomic, copy) NSArray *matchingMeds;
@property (nonatomic, copy) NSArray *matchingMedsBeforeUpdate;

- (long long)code;
- (id)init;
- (id)initWithBackingStore:(id)arg1;
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithPropertiesByName:(id)arg1;
- (void)setCode:(long long)arg1;

@end
