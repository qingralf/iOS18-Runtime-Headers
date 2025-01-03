/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLResourceInstaller : NSObject

+ (void)_applyCodecToNonDerivativeExternalResource:(id)arg1 fromCloudMaster:(id)arg2;
+ (void)_applyColorSpaceAndCodecUsingFileToExternalResource:(id)arg1 managedObjectContext:(id)arg2;
+ (void)_applyImageIOMetadataToExternalResource:(id)arg1 fromFileURL:(id)arg2 fileExists:(bool)arg3 assumedWidth:(long long)arg4 assumedHeight:(long long)arg5 recipe:(id)arg6 assetKind:(short)arg7;
+ (unsigned long long)_getURLDataLength:(id)arg1;
+ (bool)_installInternalResourcesForExistingAsset:(id)arg1 assumeNoExistingResources:(bool)arg2 referencedResourceURLs:(id)arg3 includeLegacyCloudResources:(bool)arg4 outResourcesStoreCount:(unsigned long long*)arg5 error:(id*)arg6;
+ (bool)_isPenultimateVersionFromCPLType:(unsigned long long)arg1;
+ (id)_predicateForUnrecoverableResources;
+ (void)_recipeAndDerivativeStateFromCPLResourceType:(unsigned long long)arg1 fromAdjustedSet:(bool)arg2 assetType:(short)arg3 recipeID:(unsigned int*)arg4;
+ (id)_speculativePathForPenultimateFullsizeRenderImageFileForAsset:(id)arg1;
+ (id)_storeValidatedLocalExternalResource:(id)arg1 forAsset:(id)arg2;
+ (id)_validatedExternalResourceAtPath:(id)arg1 recipe:(id)arg2 type:(unsigned int)arg3 version:(unsigned int)arg4 identifier:(id)arg5;
+ (id)_validatedExternalResourceForComputeResourceAtPath:(id)arg1 recipe:(id)arg2;
+ (id)_validatedExternalResourceForComputeResourceWithRecipe:(id)arg1;
+ (id)_validatedExternalResourceFromSupplementalFileURL:(id)arg1 withUTI:(id)arg2 ptpTrashedState:(long long)arg3 index:(id)arg4 asset:(id)arg5;
+ (id)_validatedExternalResourceIfPresentForAudioOrUnknownAsset:(id)arg1;
+ (id)_validatedExternalResourcesFromLocalImageOrVideoAsset:(id)arg1 referencedResourceURLs:(id)arg2;
+ (id)_validatedExternalResourcesFromSharedStreamAsset:(id)arg1;
+ (bool)createInternalResourcesForExistingAssetsWithNoExistingResourcesInStore:(id)arg1 migrator:(id)arg2;
+ (unsigned long long)derivativeCPLTypeFromRecipeID:(unsigned int)arg1 version:(unsigned int)arg2;
+ (id)externalResourcesForExistingAsset:(id)arg1 referencedResourceURLs:(id)arg2;
+ (id)generateAdjustedFullSizeRenderResourceForFilePath:(id)arg1 requireFileToBePresent:(bool)arg2 basedOnFullSizeWidth:(long long)arg3 andHeight:(long long)arg4;
+ (id)generateExternalResourceFromCPLResource:(id)arg1 asset:(id)arg2 fromAdjustedSet:(bool)arg3;
+ (id)generateExternalResourceFromCPLResource:(id)arg1 cloudMaster:(id)arg2 masterResources:(id)arg3;
+ (id)generateValidatedExternalImageResourceOfType:(unsigned int)arg1 forFilePath:(id)arg2 requireFileToBePresent:(bool)arg3 version:(unsigned int)arg4 basedOnFullSizeWidth:(long long)arg5 andHeight:(long long)arg6 recipe:(id)arg7 assetKind:(short)arg8 error:(id*)arg9;
+ (id)generateValidatedExternalOtherResourceOfType:(unsigned int)arg1 forFilePath:(id)arg2 uti:(id)arg3 requireFileToBePresent:(bool)arg4 version:(unsigned int)arg5;
+ (id)generateVideoResourcesFromVideoAsset:(id)arg1 referencedVideoPath:(id)arg2;
+ (id)generatedValidatedExternalSyndicationResourceOfType:(unsigned int)arg1 version:(unsigned int)arg2 recipeID:(unsigned int)arg3 fileURL:(id)arg4 requireFileToBePresent:(bool)arg5 uniformTypeIdentifier:(id)arg6;
+ (bool)installInternalResourcesForExistingAsset:(id)arg1 assumeNoExistingResources:(bool)arg2 referencedResourceURLs:(id)arg3 error:(id*)arg4;
+ (bool)installInternalResourcesForExistingAssetsWithNoExistingResourcesInManagedObjectContext:(id)arg1 migrator:(id)arg2;
+ (bool)installSupplementalResourceForExistingFileAtURL:(id)arg1 ptpTrashedState:(long long)arg2 index:(id)arg3 forAsset:(id)arg4 imageOrientation:(id)arg5 resultingResource:(id*)arg6 error:(id*)arg7;
+ (bool)isValidCPLResourceTypeForPersistence:(unsigned long long)arg1;
+ (unsigned long long)nonDerivativeCPLTypeFromResourceType:(unsigned int)arg1 version:(unsigned int)arg2 uniformTypeIdentifier:(id)arg3;
+ (id)onDemand_installAdjustedDeferredFullSizeVideoComplementResourceForAsset:(id)arg1;
+ (id)onDemand_installAdjustedFullSizeRenderResourceAtFilePath:(id)arg1 forAsset:(id)arg2;
+ (id)onDemand_installAdjustedFullSizeVideoComplementResourceIfPresentForAsset:(id)arg1;
+ (id)onDemand_installEmptyComputeResourceWithRecipe:(id)arg1 forAsset:(id)arg2 error:(id*)arg3;
+ (id)onDemand_installExistingAdjustedResourceAtFilePath:(id)arg1 withType:(unsigned int)arg2 recipe:(id)arg3 forAsset:(id)arg4 error:(id*)arg5;
+ (id)onDemand_installExistingAdjustmentSuggestionResourceAtFilePath:(id)arg1 recipe:(id)arg2 forAsset:(id)arg3;
+ (id)onDemand_installExistingComputeResourceAtFilePath:(id)arg1 recipe:(id)arg2 forAsset:(id)arg3;
+ (id)onDemand_installLocalVideoKeyFrameForAsset:(id)arg1;
+ (id)onDemand_installOriginalAdjustmentResourceIfPresentForAsset:(id)arg1;
+ (id)onDemand_installOriginalResourceForSyndicationAsset:(id)arg1;
+ (id)onDemand_installOriginalSOCImagePresentForAsset:(id)arg1 referencedResourceURLs:(id)arg2;
+ (id)onDemand_installOriginalSOCVideoComplementPresentForAsset:(id)arg1 referencedResourceURLs:(id)arg2;
+ (id)onDemand_installOriginalSOCVideoPresentForAsset:(id)arg1 referencedResourceURLs:(id)arg2;
+ (id)onDemand_installOriginalVideoComplementForSyndicationAsset:(id)arg1 contentType:(id)arg2;
+ (id)onDemand_installOriginalVideoComplementResourceIfPresentForAsset:(id)arg1;
+ (id)onDemand_installPrimaryImageResourceWithRecipe:(id)arg1 version:(unsigned int)arg2 forAsset:(id)arg3;
+ (id)onDemand_installPrimaryImageResourceWithRecipe:(id)arg1 version:(unsigned int)arg2 forAsset:(id)arg3 requireFileToBePresent:(bool)arg4;
+ (id)onDemand_installResourceWithResourceIdentity:(id)arg1 forAsset:(id)arg2;
+ (unsigned int)recipeIDFromCPLResourceType:(unsigned long long)arg1 assetType:(short)arg2 fromAdjustedSet:(bool)arg3;
+ (bool)reconsiderSavedAssetTypeInStore:(id)arg1 migrator:(id)arg2;
+ (bool)recoverSupplementalResourcesForAsset:(id)arg1 usingSidecarFinder:(id)arg2 outResourcesStoreCount:(unsigned long long*)arg3 error:(id*)arg4;
+ (bool)removeLegacyCloudResourcesInStore:(id)arg1 migrator:(id)arg2;
+ (bool)resetImageRequestHintsInContext:(id)arg1;
+ (bool)resetImageRequestHintsInContext:(id)arg1 allowOneTimeThumbRebuild:(bool)arg2;
+ (bool)resetInternalResourcesInStore:(id)arg1 resetUTIs:(bool)arg2 resetCodecs:(bool)arg3 resetMasters:(bool)arg4 migrator:(id)arg5;
+ (unsigned int)resourceTypeFromCPLType:(unsigned long long)arg1 assetType:(short)arg2;
+ (unsigned int)resourceVersionFromCPLType:(unsigned long long)arg1 fromAdjustedSet:(bool)arg2;
+ (id)validatedExternalResourceForLocalVideoIfPresentAtPath:(id)arg1 context:(id)arg2;
+ (id)validatedExternalResourceFromExternalResourceCloudAttributes:(id)arg1 cplType:(unsigned long long)arg2 assetType:(short)arg3 uti:(id)arg4 resourceWidth:(unsigned long long)arg5 resourceHeight:(unsigned long long)arg6 resourceFingerprint:(id)arg7 resourceStableHash:(id)arg8 resourceSize:(unsigned long long)arg9 isAvailable:(bool)arg10 fromAdjustedSet:(bool)arg11 resourceURL:(id)arg12 cloudMaster:(id)arg13 isForMigration:(bool)arg14 context:(id)arg15;

@end
