/* Generated by RuntimeBrowser.
 */

@protocol RMAssetResolverControllerProtocol

@required

+ (void)extractUserIdentityAsset:(void *)arg1 assetIdentifier:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: RMSubscribedConfigurationReference *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, RMModelAssetUserIdentityDeclaration *, NSError *, void*
+ (void)resolveDataAsset:(void *)arg1 assetIdentifier:(void *)arg2 downloadURL:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 10: RMSubscribedConfigurationReference *, NSString *, NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
+ (void)resolveKeychainAsset:(void *)arg1 assetIdentifier:(void *)arg2 accessGroup:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 10: RMSubscribedConfigurationReference *, NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, NSError *, void*
+ (void)resolveKeychainAssets:(void *)arg1 assetIdentifiers:(void *)arg2 accessGroup:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 10: RMSubscribedConfigurationReference *, NSArray *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
+ (void)resolveKeychainPasswordAsset:(void *)arg1 assetIdentifier:(void *)arg2 accessGroup:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 11: RMSubscribedConfigurationReference *, NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, NSString *, NSError *, void*
+ (void)resolveUserNameAndPasswordAsset:(void *)arg1 assetIdentifier:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: RMSubscribedConfigurationReference *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, RMModelUserNameAndPasswordCredentialDeclaration *, NSError *, void*

@end