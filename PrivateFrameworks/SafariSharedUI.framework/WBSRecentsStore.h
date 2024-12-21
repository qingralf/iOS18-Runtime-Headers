/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
 */

@interface WBSRecentsStore : NSObject {
    NSArray * _availableDevices;
    NSArray * _displayableRecentItems;
    NSMutableArray * _providers;
    NSMutableArray * _recentItemsByProviderIndex;
    NSMapTable * _recentItemsToMetadataTokens;
    WBSSiteMetadataManager * _siteMetadataManager;
}

@property (nonatomic, readonly) NSArray *availableDevices;
@property (nonatomic, readonly) NSArray *displayableRecentItems;
@property (nonatomic, readonly) WBSSiteMetadataManager *siteMetadataManager;

- (void).cxx_destruct;
- (void)_fetchPendingMetadataAndNotifyRecentItemChanges;
- (void)_notifyRecentItemsDidReceiveMetadata;
- (void)_rebuildAllRecentItemsAndDevices;
- (id)availableDevices;
- (void)dealloc;
- (id)displayableRecentItems;
- (void)fetchMetadata;
- (void)ingestRecentItemsFromProvider:(id)arg1;
- (id)initWithSiteMetadataManager:(id)arg1;
- (id)providerForItem:(id)arg1;
- (void)registerProvider:(id)arg1;
- (id)siteMetadataManager;
- (void)updateRecentItem:(id)arg1 withLinkMetadata:(id)arg2;

@end