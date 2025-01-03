/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDModifySubscriptionsOperation : CKDDatabaseOperation {
    id /* block */  _deleteCompletionBlock;
    bool  _hasSubscriptionsToDelete;
    bool  _hasSubscriptionsToSave;
    id /* block */  _saveCompletionBlock;
    NSArray * _subscriptionIDsToDelete;
    NSMutableDictionary * _subscriptionsByServerID;
    NSArray * _subscriptionsToSave;
}

@property (nonatomic, retain) <CKModifySubscriptionsOperationCallbacks><CKDOperationCallbackProxy> *clientOperationCallbackProxy;
@property (nonatomic, copy) id /* block */ deleteCompletionBlock;
@property (nonatomic, copy) id /* block */ saveCompletionBlock;
@property (nonatomic, retain) NSArray *subscriptionIDsToDelete;
@property (nonatomic, retain) NSMutableDictionary *subscriptionsByServerID;
@property (nonatomic, retain) NSArray *subscriptionsToSave;

+ (long long)isPredominatelyDownload;

- (void).cxx_destruct;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleSubscriptionDeleted:(id)arg1 responseCode:(id)arg2;
- (void)_handleSubscriptionSaved:(id)arg1 error:(id)arg2;
- (void)_handleSubscriptionSaved:(id)arg1 responseCode:(id)arg2;
- (id)activityCreate;
- (id /* block */)deleteCompletionBlock;
- (id)initWithOperationInfo:(id)arg1 container:(id)arg2;
- (bool)isOperationType:(int)arg1;
- (void)main;
- (int)operationType;
- (id /* block */)saveCompletionBlock;
- (void)setDeleteCompletionBlock:(id /* block */)arg1;
- (void)setSaveCompletionBlock:(id /* block */)arg1;
- (void)setSubscriptionIDsToDelete:(id)arg1;
- (void)setSubscriptionsByServerID:(id)arg1;
- (void)setSubscriptionsToSave:(id)arg1;
- (id)subscriptionIDsToDelete;
- (id)subscriptionsByServerID;
- (id)subscriptionsToSave;

@end
