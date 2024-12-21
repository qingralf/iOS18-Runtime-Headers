/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@interface IMCloudKitSyncProgress : NSObject {
    void descriptor;
    void progressBarMax;
    void progressBarValue;
    void syncState;
    void syncStatistics;
    void type;
}

@property (nonatomic, readonly) NSString *actionLabel;
@property (nonatomic, readonly) double broadcastDeferralOverride;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSArray *errors;
@property (nonatomic, readonly) bool isHidden;
@property (nonatomic, readonly) double percentComplete;
@property (nonatomic, readonly) NSString *percentCompleteString;
@property (nonatomic, readonly) double progressBarMax;
@property (nonatomic, readonly) double progressBarValue;
@property (nonatomic, readonly) NSString *progressLabel;
@property (nonatomic, readonly) double remainingItems;
@property (nonatomic, readonly) bool shouldShowIndeterminateProgress;
@property (nonatomic, readonly) bool shouldShowProgressBar;
@property (nonatomic, readonly) bool shouldShowUserActionLabel;
@property (nonatomic, readonly) bool shouldShowUserMessageLabel;
@property (nonatomic, readonly) IMCloudKitSyncState *syncState;
@property (nonatomic, readonly) IMCloudKitSyncStatistics *syncStatistics;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) NSString *userMessageLabel;

- (void).cxx_destruct;
- (id)actionLabel;
- (double)broadcastDeferralOverride;
- (id)description;
- (id)errors;
- (id)init;
- (id)initWithType:(long long)arg1 syncState:(id)arg2 syncStatistics:(id)arg3;
- (bool)isHidden;
- (double)percentComplete;
- (id)percentCompleteString;
- (double)progressBarMax;
- (double)progressBarValue;
- (id)progressLabel;
- (double)remainingItems;
- (bool)shouldShowIndeterminateProgress;
- (bool)shouldShowProgressBar;
- (bool)shouldShowUserActionLabel;
- (bool)shouldShowUserMessageLabel;
- (id)syncState;
- (id)syncStatistics;
- (long long)type;
- (id)userMessageLabel;

@end