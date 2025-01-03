/* Generated by RuntimeBrowser.
 */

@protocol IMReasonTrackingUpdaterDelegate

@required

- (void)reasonTrackingUpdater:(IMReasonTrackingUpdater *)arg1 didBeginHoldingUpdatesWithInitialReason:(id)arg2;
- (void)reasonTrackingUpdater:(IMReasonTrackingUpdater *)arg1 didEndHoldingUpdatesWithFinalReason:(id)arg2;
- (void)reasonTrackingUpdater:(IMReasonTrackingUpdater *)arg1 needsUpdateForReasons:(NSCountedSet *)arg2 followingHoldForReason:(id)arg3;

@end
