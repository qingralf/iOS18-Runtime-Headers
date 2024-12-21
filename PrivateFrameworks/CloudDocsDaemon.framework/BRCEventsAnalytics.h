/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCEventsAnalytics : NSObject

+ (id)sharedAnalytics;

- (void)_sendDictionaryToCoreAnalytics:(id)arg1 eventName:(id)arg2;
- (void)registerAndSendNewApplyFailureWithOutcome:(id)arg1;
- (void)registerAndSendNewContainerResetWithOutcome:(id)arg1;
- (void)registerAndSendNewFolderSharePCSChainingTime:(double)arg1 chainedRecordsCount:(id)arg2 zoneMangledID:(id)arg3 enhancedDrivePrivacyEnabled:(bool)arg4 itemIDString:(id)arg5 error:(id)arg6 analyticsReporter:(id)arg7;
- (void)registerAndSendNewPeriodicSyncWithOutcome:(id)arg1;
- (void)registerAndSendNewShareAcceptationWithLastStep:(id)arg1 zoneMangledID:(id)arg2 enhancedDrivePrivacyEnabled:(bool)arg3 itemIDString:(id)arg4 error:(id)arg5 analyticsReporter:(id)arg6;

@end