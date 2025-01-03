/* Generated by RuntimeBrowser.
 */

@protocol MobileKeybagManager

@required

- (double)backOffTime;
- (long long)currentState;
- (unsigned long long)failedAttemptCount;
- (bool)hasUnlockedSinceBoot;
- (bool)isLocked;
- (void)lock;
- (NSUUID *)registerFirstUnlockBlock:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (NSUUID *)registerLockStateChangedBlock:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (bool)unlockWithPasscode:(NSString *)arg1 error:(id*)arg2;
- (void)unregisterFirstUnlockBlockWithIdentifier:(NSUUID *)arg1;
- (void)unregisterLockStateChangedBlockWithIdentifier:(NSUUID *)arg1;

@end
