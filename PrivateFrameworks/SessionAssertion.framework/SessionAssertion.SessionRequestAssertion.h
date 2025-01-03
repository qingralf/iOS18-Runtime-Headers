/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SessionAssertion.framework/SessionAssertion
 */

@interface SessionAssertion.SessionRequestAssertion : NSObject {
    void attributeAssertion;
    void explanation;
    void invalidationHandler;
    void target;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, copy) NSString *explanation;
@property (nonatomic, readonly) NSArray *sessionIdentifiers;
@property (nonatomic, readonly) unsigned long long snaInvalidationReason;
@property (nonatomic, readonly) unsigned long long snaState;
@property (nonatomic, readonly) SNAAssertionTarget *snaTarget;

- (void).cxx_destruct;
- (id)description;
- (id)explanation;
- (id)init;
- (id)initWithExplanation:(id)arg1 target:(id)arg2 invalidateOnSessionRequest:(bool)arg3 invalidationHandler:(id /* block */)arg4;
- (id)initWithExplanation:(id)arg1 target:(id)arg2 options:(id)arg3 invalidationHandler:(id /* block */)arg4;
- (void)invalidate;
- (id)sessionIdentifiers;
- (void)setExplanation:(id)arg1;
- (unsigned long long)snaInvalidationReason;
- (unsigned long long)snaState;
- (id)snaTarget;

@end
