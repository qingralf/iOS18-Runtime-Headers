/* Generated by RuntimeBrowser.
 */

@protocol PLAssetsdPhotoKitServiceProtocol <PLAssetsdPhotoKitCommonServiceProtocol>

@required

- (NSProgress *)analyzeAssets:(void *)arg1 forFeature:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: NSArray *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (NSProgress *)analyzeLibraryForFeature:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)cancelReservedCloudIdentifiersWithEntityName:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)getUUIDsForAssetObjectURIs:(void *)arg1 filterPredicate:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: NSArray *, NSPredicate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)processUniversalSearchJITForAssetUUID:(void *)arg1 processingTypes:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: NSString *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)processUniversalSearchJITForCoreSpotlightUniqueIdentifier:(void *)arg1 bundleID:(void *)arg2 processingTypes:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 10: NSString *, NSString *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (void)reserveCloudIdentifiersWithEntityName:(void *)arg1 count:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: NSString *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)reservedCloudIdentifiersWithEntityName:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (NSProgress *)resetStateForMediaProcessingTaskID:(void *)arg1 assetUUIDs:(void *)arg2 resetOptions:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 10: unsigned long long, NSArray *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)resolveLocalIdentifiersForCloudIdentifiers:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: NSSet *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*

@end
