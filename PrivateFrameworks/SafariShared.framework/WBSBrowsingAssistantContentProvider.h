/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSBrowsingAssistantContentProvider : NSObject

+ (id)_assetManagerForCurrentSystemLocale;
+ (id)_sharedSessionConfiguration;
+ (bool)assistantEnabledForCurrentDevice;
+ (bool)assistantEnabledForLocale:(id)arg1;
+ (void)clearAssistantAssetCache;
+ (id)filteredStringForURL:(id)arg1 needsVariants:(bool*)arg2;
+ (id)sharedPARSession;
+ (void)subscribeToAssistantAssetAndDownloadNow:(bool)arg1;
+ (void)unsubscribeFromAssistantAsset;

- (void)checkContentAvailabilityForURL:(id)arg1 locale:(id)arg2 webpageIdentifier:(id)arg3 completion:(id /* block */)arg4;
- (void)fetchContentForURL:(id)arg1 completion:(id /* block */)arg2;

@end