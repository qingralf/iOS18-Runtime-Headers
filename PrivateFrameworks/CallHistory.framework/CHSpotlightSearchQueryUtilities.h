/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
 */

@interface CHSpotlightSearchQueryUtilities : NSObject

+ (unsigned long long)callsDeferredReindexingReason;
+ (id)lastFourDigitsFrom:(long long)arg1;
+ (void)logEventReindexingFinishedForReason:(unsigned long long)arg1 timeTaken:(double)arg2;
+ (void)logEventReindexingRequestedForReason:(unsigned long long)arg1;
+ (id)searchQueryWithSearchString:(id)arg1;
+ (id)searchStringForCallsMatchingHandles:(id)arg1 orContactIdentifier:(id)arg2;
+ (id)searchStringForFacetimeAudioCalls;
+ (id)searchStringForFacetimeVideoCalls;
+ (void)setCallsNeedsDeferredReindexingForReason:(unsigned long long)arg1;
+ (bool)shouldReindexCallsDueToDeferredReindexing;
+ (bool)shouldReindexCallsDueToVersionMismatch;
+ (id)userDefaults;

@end
