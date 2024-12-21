/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ClarityFoundation.framework/ClarityFoundation
 */

@interface _CLFAppAvailabilityObserver : NSObject <APSubjectMonitor, BSInvalidatable> {
    id /* block */  _handler;
    <APSubjectMonitorSubscription> * _subscription;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ handler;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <APSubjectMonitorSubscription> *subscription;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)appProtectionSubjectsChanged:(id)arg1 forSubscription:(id)arg2;
- (id /* block */)handler;
- (id)initWithHandler:(id /* block */)arg1;
- (void)invalidate;
- (void)setHandler:(id /* block */)arg1;
- (void)setSubscription:(id)arg1;
- (id)subscription;

@end