/* Generated by RuntimeBrowser.
 */

@protocol PLClientAuthorization <PLClientIdentification>

@required

- (bool)analyticsCacheReadEntitled;
- (bool)analyticsCacheWriteEntitled;
- (PLCaptureSessionState *)captureSessionState;
- (bool)clientIsSandboxed;
- (bool)cloudInternalEntitled;
- (bool)coreSceneUnderstandingTaxonomyReadAuthorized;
- (bool)coreSceneUnderstandingTaxonomyWriteAuthorized;
- (bool)directDatabaseAccessAuthorized;
- (bool)directDatabaseWriteAuthorized;
- (NSString *)fetchFilterIdentifier;
- (bool)internalDataReadWriteAuthorized;
- (bool)isCameraClient;
- (bool)isClientAuthorizedForTCCServicePhotos;
- (bool)isClientAuthorizedForTCCServicePhotosAdd;
- (bool)isClientLimitedLibraryCapable;
- (bool)limitedLibraryMode;
- (bool)managedSpotlightIndexReadWriteEntitled;
- (bool)photoKitEntitled;
- (bool)photoKitEntitledFor:(NSString *)arg1;
- (bool)photosDataVaultEntitled;
- (bool)smartSharingCacheReadEntitled;
- (bool)smartSharingCacheWriteEntitled;
- (LSBundleRecord *)trustedCallerContainingBundleRecord;
- (NSString *)trustedCallerDisplayName;
- (NSString *)trustedCallerPhotoLibraryUsageDescription;

@end
