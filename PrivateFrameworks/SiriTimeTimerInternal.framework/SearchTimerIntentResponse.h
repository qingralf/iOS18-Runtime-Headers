/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriTimeTimerInternal.framework/SiriTimeTimerInternal
 */

@interface SearchTimerIntentResponse : INIntentResponse {
    void code;
}

@property (nonatomic) long long code;
@property (nonatomic, copy) NSArray *matchedTimers;
@property (nonatomic, copy) NSArray *remoteTimers;
@property (nonatomic, copy) NSArray *unmatchedTimers;

- (long long)code;
- (id)init;
- (id)initWithBackingStore:(id)arg1;
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithPropertiesByName:(id)arg1;
- (void)setCode:(long long)arg1;

@end
