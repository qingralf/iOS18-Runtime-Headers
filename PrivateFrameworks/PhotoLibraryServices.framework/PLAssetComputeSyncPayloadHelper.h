/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLAssetComputeSyncPayloadHelper : NSObject

+ (id)mediaAnalysisPayloadDataForWrapperData:(id)arg1;
+ (id)mediaAnalysisPayloadDataForWrapperURL:(id)arg1;

- (bool)applyComputeSyncWrapperData:(id)arg1 toAsset:(id)arg2 error:(id*)arg3;
- (id)assetPayloadForComputeSyncWrapperData:(id)arg1 payloadID:(id)arg2 error:(id*)arg3;
- (id)computeSyncWrapperDataForAsset:(id)arg1 mediaAnalysisPayload:(id)arg2 analysisStage:(short)arg3 error:(id*)arg4;
- (id)computeSyncWrapperURLForAsset:(id)arg1 analysisStage:(short)arg2;

@end
