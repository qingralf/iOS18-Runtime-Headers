/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDFetchRegisteredBundleIDsOperation : CKDOperation {
    NSArray * _bundleIDs;
}

@property (nonatomic, copy) NSArray *bundleIDs;
@property (nonatomic, retain) <CKFetchRegisteredBundleIDsOperationCallbacks><CKDOperationCallbackProxy> *clientOperationCallbackProxy;

- (void).cxx_destruct;
- (id)_unitTestBundleIDsByContainerID:(id)arg1;
- (id)activityCreate;
- (id)bundleIDs;
- (id)initWithOperationInfo:(id)arg1 container:(id)arg2;
- (void)main;
- (int)operationType;
- (void)setBundleIDs:(id)arg1;

@end