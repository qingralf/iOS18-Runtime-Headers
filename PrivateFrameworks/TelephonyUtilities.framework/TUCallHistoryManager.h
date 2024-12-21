/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUCallHistoryManager : NSObject {
    <TUCallHistoryManagerDataSource> * _dataSource;
}

@property (nonatomic, readonly) <TUCallHistoryManagerDataSource> *dataSource;

- (void).cxx_destruct;
- (id)dataSource;
- (void)dealloc;
- (id)init;
- (id)initWithDataSource:(id)arg1;
- (void)reportRecentCallForConversation:(id)arg1 withStartDate:(id)arg2 avMode:(unsigned long long)arg3;
- (void)updateOutgoingLocalParticipantUUID:(id)arg1 forCallsWithLocalParticipantUUID:(id)arg2;
- (void)updateOutgoingLocalParticipantUUID:(id)arg1 forCallsWithOutgoingLocalParticipantUUID:(id)arg2;

@end