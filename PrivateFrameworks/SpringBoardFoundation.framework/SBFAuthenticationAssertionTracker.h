/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBFAuthenticationAssertionTracker : NSObject <BSDescriptionProviding> {
    NSHashTable * _assertions;
    struct __MKBAssertion { } * _mkbAssertion;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addAssertion:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (bool)hasActiveAssertions;
- (id)init;
- (bool)isAssertionValid:(id)arg1;
- (id)mkbAssertionOptions;
- (void)removeAssertion:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
