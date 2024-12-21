/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSSharedStoreReview : NSObject <AMSBagConsumer> {
    <AMSBagProtocol> * _bag;
    NSObject<OS_dispatch_queue> * _sharedStoreReviewQueue;
    AMSStoreReviewGatingController * _storeReviewGatingController;
}

@property (nonatomic, retain) <AMSBagProtocol> *bag;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *sharedStoreReviewQueue;
@property (nonatomic, retain) AMSStoreReviewGatingController *storeReviewGatingController;
@property (readonly) Class superclass;

+ (void)_applicationDidForegroundWithCurrentTime:(id)arg1 storeReviewMetrics:(id)arg2 sessionInterval:(long long)arg3;
+ (bool)_isGroupedLogicSupported;
+ (bool)_isRepeatedPromptsSupported;
+ (void)_logDidAttemptPromptReviewWithStoreReviewMetrics:(id)arg1 currentTime:(id)arg2;
+ (void)_logNewSessionWithStoreReviewMetrics:(id)arg1 currentTime:(id)arg2;
+ (void)_persistStoreReviewMetrics:(id)arg1;
+ (bool)_shouldLogNewSessionWithLastLoggedTimeStamp:(id)arg1 currentTime:(id)arg2 sessionInterval:(long long)arg3;
+ (bool)_shouldPromptReviewForStoreReviewMetrics:(id)arg1 currentTime:(id)arg2 sessionCount:(long long)arg3 promptInterval:(long long)arg4;
+ (bool)_shouldPromptReviewForStoreReviewMetrics:(id)arg1 sessionCount:(long long)arg2;
+ (id)_storeReviewMetrics;
+ (id)bagKeySet;
+ (id)bagSubProfile;
+ (id)bagSubProfileVersion;
+ (id)createBagForSubProfile;

- (void).cxx_destruct;
- (void)applicationDidForeground;
- (id)bag;
- (void)didAttemptPromptReview;
- (id)initWithBag:(id)arg1;
- (bool)isEnabled;
- (id)isReviewEnabled;
- (void)setBag:(id)arg1;
- (void)setStoreReviewGatingController:(id)arg1;
- (id)sharedStoreReviewQueue;
- (bool)shouldAttemptPromptReview;
- (id)shouldAttemptReview;
- (id)storeReviewGatingController;

@end