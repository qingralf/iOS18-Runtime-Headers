/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AccessibilityUIService.framework/AccessibilityUIService
 */

@interface AXUIAssertionManager : NSObject {
    RBSAssertion * _assertionBackground;
    RBSAssertion * _assertionUI;
    NSMutableSet * _clientsWithUIAssertion;
    AXDispatchTimer * _timerBackground;
    AXDispatchTimer * _timerUI;
}

@property (nonatomic, retain) RBSAssertion *assertionBackground;
@property (nonatomic, retain) RBSAssertion *assertionUI;
@property (nonatomic, retain) NSMutableSet *clientsWithUIAssertion;
@property (nonatomic, retain) AXDispatchTimer *timerBackground;
@property (nonatomic, retain) AXDispatchTimer *timerUI;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_invalidateAssertion;
- (void)_invalidateAssertionUI;
- (id)_serviceClientIDForService:(id)arg1 clientIdentifier:(id)arg2;
- (void)acquireAssertionIfNeeded;
- (void)acquireAssertionUIIfNeeded;
- (void)acquireAssertionUIIfNeededForService:(id)arg1 clientIdentifier:(id)arg2;
- (id)assertionBackground;
- (id)assertionUI;
- (id)clientsWithUIAssertion;
- (void)dealloc;
- (id)init;
- (void)invalidateAssertionIfNeeded;
- (void)invalidateAssertionUIIfNeeded;
- (void)invalidateAssertionUIIfNeededForService:(id)arg1 clientIdentifier:(id)arg2;
- (void)setAssertionBackground:(id)arg1;
- (void)setAssertionUI:(id)arg1;
- (void)setClientsWithUIAssertion:(id)arg1;
- (void)setTimerBackground:(id)arg1;
- (void)setTimerUI:(id)arg1;
- (id)timerBackground;
- (id)timerUI;

@end
