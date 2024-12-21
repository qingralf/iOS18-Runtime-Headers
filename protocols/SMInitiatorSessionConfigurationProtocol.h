/* Generated by RuntimeBrowser.
 */

@protocol SMInitiatorSessionConfigurationProtocol

@required

- (void)cancelInitializationForSessionID:(void *)arg1 handler:(void *)arg2; // needs 2 arg types, found 7: NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)cancelInitializationWithHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)endSessionForSessionID:(void *)arg1 reason:(void *)arg2 handler:(void *)arg3; // needs 3 arg types, found 8: NSUUID *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)fetchCurrentLocalSessionStateWithHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SMLocalSessionState *, NSError *, void*
- (void)fetchCurrentSessionStateWithHandler:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SMSessionManagerState *, bool, NSError *, void*
- (void)fetchSOSReceiversWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)handoffSessionForSessionID:(void *)arg1 handler:(void *)arg2; // needs 2 arg types, found 7: NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)initializeSessionWithConversation:(void *)arg1 handler:(void *)arg2; // needs 2 arg types, found 10: SMConversation *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, long long, long long, NSError *, void*
- (void)modifySessionWithConfiguration:(void *)arg1 handler:(void *)arg2; // needs 2 arg types, found 7: SMSessionConfiguration *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)promptDestinationAnomalyVerificationWithContext:(void *)arg1 handler:(void *)arg2; // needs 2 arg types, found 7: SMSessionMonitorContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)promptRoundTripAnomalyVerificationWithContext:(void *)arg1 handler:(void *)arg2; // needs 2 arg types, found 7: SMSessionMonitorContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)promptSafeArrivalWithContext:(void *)arg1 handler:(void *)arg2; // needs 2 arg types, found 7: SMSessionMonitorContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)promptTimerEndedVerificationWithContext:(void *)arg1 handler:(void *)arg2; // needs 2 arg types, found 7: SMSessionMonitorContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)promptWorkoutAnomalyVerificationWithContext:(void *)arg1 handler:(void *)arg2; // needs 2 arg types, found 7: SMSessionMonitorContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)respondToTriggerPromptForSessionID:(void *)arg1 response:(void *)arg2 handler:(void *)arg3; // needs 3 arg types, found 8: NSUUID *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)sendSafetyCacheForSessionID:(void *)arg1 handler:(void *)arg2; // needs 2 arg types, found 7: NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)startSessionWithConfiguration:(void *)arg1 handler:(void *)arg2; // needs 2 arg types, found 7: SMSessionConfiguration *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@optional

- (void)initializeAndStartSessionWithConfiguration:(void *)arg1 handler:(void *)arg2; // needs 2 arg types, found 7: SMSessionConfiguration *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)sendHeartbeatForSessionID:(void *)arg1 handler:(void *)arg2; // needs 2 arg types, found 7: NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end