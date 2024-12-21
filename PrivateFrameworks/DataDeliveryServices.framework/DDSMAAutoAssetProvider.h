/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataDeliveryServices.framework/DataDeliveryServices
 */

@interface DDSMAAutoAssetProvider : NSObject <DDSMAAutoAssetProvider>

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)fetchAssetUpdateStatusDateForAutoAsset:(id)arg1;
+ (void)setFetchAssetUpdateStatusDateForAutoAsset:(id)arg1;

- (id)autoAssetForAssetSelector:(id)arg1;
- (void)eliminateInterestForAutoAsset:(id)arg1;
- (void)fetchLockReasonCountForAutoAsset:(id)arg1 callback:(id /* block */)arg2;
- (void)fetchUpdateStatusForAutoAsset:(id)arg1 completion:(id /* block */)arg2;
- (void)interestInContentForAutoAsset:(id)arg1 completion:(id /* block */)arg2;
- (void)lockAutoAsset:(id)arg1 forReason:(id)arg2 withTimeout:(long long)arg3 completion:(id /* block */)arg4;
- (id)lockAutoAssetSync:(id)arg1 forReason:(id)arg2 error:(id*)arg3;
- (void)unlockAutoAsset:(id)arg1 forReason:(id)arg2;
- (void)updateAutoAsset:(id)arg1 forReason:(id)arg2 completion:(id /* block */)arg3;

@end