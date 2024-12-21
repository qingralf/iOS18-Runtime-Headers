/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCloudSyncUpdateLastPullDateOperation : HDJournalableOperation {
    NSString * _lastSuccessfulPullKey;
    NSDate * _pullCompleteDate;
}

@property (nonatomic, retain) NSString *lastSuccessfulPullKey;
@property (nonatomic, retain) NSDate *pullCompleteDate;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPullCompleteDate:(id)arg1 lastSuccessfulPullKey:(id)arg2;
- (id)lastSuccessfulPullKey;
- (bool)performWithProfile:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
- (id)pullCompleteDate;
- (void)setLastSuccessfulPullKey:(id)arg1;
- (void)setPullCompleteDate:(id)arg1;

@end