/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFInstrumentationObserverConnection : NSObject <AFInvalidating>

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)flushWithCompletion:(id /* block */)arg1;
- (id)initWithObservation:(id /* block */)arg1;
- (id)initWithObservation:(id /* block */)arg1 filterByInstrumentationTypes:(id)arg2;
- (void)invalidate;
- (void)waitUntilInvalidated;

@end
