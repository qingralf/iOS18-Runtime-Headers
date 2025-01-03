/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDShareAccessRequestOperation : CKDDatabaseOperation {
    id /* block */  _shareAccessRequestCompletionBlock;
    NSMutableArray * _shareURLsToRequestAccessFor;
}

@property (nonatomic, retain) <CKShareAccessRequestOperationCallbacks><CKDOperationCallbackProxy> *clientOperationCallbackProxy;
@property (nonatomic, copy) id /* block */ shareAccessRequestCompletionBlock;
@property (nonatomic, retain) NSMutableArray *shareURLsToRequestAccessFor;
@property (nonatomic) unsigned long long state;

+ (id)nameForState:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleShareAccessRequestedForURL:(id)arg1 responseCode:(id)arg2;
- (void)_performCallbackForURL:(id)arg1 error:(id)arg2;
- (bool)_shareAccessRequest;
- (id)activityCreate;
- (id)initWithOperationInfo:(id)arg1 container:(id)arg2;
- (bool)isEmail:(id)arg1;
- (bool)isPhoneNumber:(id)arg1;
- (void)main;
- (bool)makeStateTransition;
- (int)operationType;
- (void)setShareAccessRequestCompletionBlock:(id /* block */)arg1;
- (void)setShareURLsToRequestAccessFor:(id)arg1;
- (id /* block */)shareAccessRequestCompletionBlock;
- (id)shareURLsToRequestAccessFor;

@end
