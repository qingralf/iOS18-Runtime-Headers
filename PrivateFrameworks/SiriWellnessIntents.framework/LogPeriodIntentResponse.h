/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriWellnessIntents.framework/SiriWellnessIntents
 */

@interface LogPeriodIntentResponse : INIntentResponse {
    void code;
}

@property (nonatomic) long long code;
@property (nonatomic, copy) NSDate *date;
@property (nonatomic) long long flow;

- (long long)code;
- (id)init;
- (id)initWithBackingStore:(id)arg1;
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithPropertiesByName:(id)arg1;
- (void)setCode:(long long)arg1;

@end