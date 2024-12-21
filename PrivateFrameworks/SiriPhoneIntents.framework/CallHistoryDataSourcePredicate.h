/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriPhoneIntents.framework/SiriPhoneIntents
 */

@interface CallHistoryDataSourcePredicate : NSObject

+ (id)predicateFilteringOutCallTypes:(unsigned long long)arg1;
+ (id)predicateForAudioCalls;
+ (id)predicateForCallToCallBackWithAnyOfTheseRemoteParticipantHandles:(id)arg1 isoCountryCodes:(id)arg2;
+ (id)predicateForCallsAfterDate:(id)arg1 beforeDate:(id)arg2;
+ (id)predicateForCallsThatAreRead:(bool)arg1;
+ (id)predicateForCallsThatWereAnswered:(bool)arg1;
+ (id)predicateForCallsThatWereOriginated:(bool)arg1;
+ (id)predicateForCallsWithAnyOfTheseRemoteParticipantHandles:(id)arg1 isoCountryCodes:(id)arg2;
+ (id)predicateForCallsWithCallCategory:(unsigned int)arg1;
+ (id)predicateForCallsWithDurationGreaterThan:(double)arg1;
+ (id)predicateForCallsWithDurationLongerThanImmediateHangUp;
+ (id)predicateForCallsWithNoDuration;
+ (id)predicateForCallsWithNumberOfRemoteParticipants:(long long)arg1;
+ (id)predicateForCallsWithServiceProvider:(id)arg1;
+ (id)predicateForFaceTimeCalls;
+ (id)predicateForMissedCallsSinceDate:(id)arg1;
+ (id)predicateForRemoteParticipantsWithNormalizedValues:(id)arg1;
+ (id)predicateForRemoteParticipantsWithValues:(id)arg1;
+ (id)predicateForRemoteParticipantsWithValues:(id)arg1 caseInsensitiveValues:(id)arg2 normalizedValues:(id)arg3;
+ (id)predicateForRemoteParticipantsWithValuesCaseInsensitive:(id)arg1;
+ (id)predicateForTelephonyCalls;
+ (id)predicateForTelephonyOrFaceTimeCalls;
+ (id)predicateForVideoCalls;

@end