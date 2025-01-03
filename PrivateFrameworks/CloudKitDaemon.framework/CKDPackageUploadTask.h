/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPackageUploadTask : NSObject <CKDCancelling> {
    CKDMMCSItem * _MMCSManifestItem;
    CKDMMCSRequestOptions * _MMCSRequestOptions;
    NSArray * _MMCSSectionItems;
    CKDCancelTokenGroup * _cancelTokens;
    NSError * _error;
    NSObject<OS_dispatch_group> * _group;
    CKPackage * _package;
    CKDProgressTracker * _progressTracker;
}

@property (nonatomic, retain) CKDMMCSItem *MMCSManifestItem;
@property (nonatomic, retain) CKDMMCSRequestOptions *MMCSRequestOptions;
@property (nonatomic, retain) NSArray *MMCSSectionItems;
@property (nonatomic, retain) CKDCancelTokenGroup *cancelTokens;
@property (retain) NSError *error;
@property (nonatomic, retain) NSObject<OS_dispatch_group> *group;
@property (nonatomic, readonly) CKPackage *package;
@property (nonatomic, retain) CKDProgressTracker *progressTracker;
@property (nonatomic, readonly) NSString *recordKey;
@property (nonatomic, readonly) long long storageGroupingPolicy;
@property (nonatomic, readonly) long long uploadRank;

- (void).cxx_destruct;
- (id)MMCSManifestItem;
- (id)MMCSRequestOptions;
- (id)MMCSSectionItems;
- (id)activityCreate;
- (void)cancel;
- (id)cancelTokens;
- (id)error;
- (id)group;
- (id)initWithPackage:(id)arg1 trackProgress:(bool)arg2;
- (id)package;
- (id)progressTracker;
- (id)recordKey;
- (void)setCancelTokens:(id)arg1;
- (void)setError:(id)arg1;
- (void)setGroup:(id)arg1;
- (void)setMMCSManifestItem:(id)arg1;
- (void)setMMCSRequestOptions:(id)arg1;
- (void)setMMCSSectionItems:(id)arg1;
- (void)setProgressTracker:(id)arg1;
- (long long)storageGroupingPolicy;
- (long long)uploadRank;

@end
