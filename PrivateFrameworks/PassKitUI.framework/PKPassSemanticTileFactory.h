/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPassSemanticTileFactory : NSObject {
    PKWebServiceTicketingFeature * _featureOverrides;
    NSMutableDictionary * _outstandingTileUpdates;
    NSCache * _tileContentCache;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _tileUpdatesLock;
    NSObject<OS_dispatch_queue> * _workQueue;
}

+ (id)sharedInstance;
+ (bool)supportsSemanticTilesForPass:(id)arg1;

- (void).cxx_destruct;
- (id)_additionalTicketInfoTilesForPass:(id)arg1;
- (id)_cacheKeyForPassUniqueID:(id)arg1 contentIdentifier:(id)arg2;
- (void)_cacheTileContent:(id)arg1 forPassUniqueID:(id)arg2 contentIdentifier:(id)arg3;
- (id)_cachedTileContentForPassUniqueID:(id)arg1 contentIdentifier:(id)arg2;
- (bool)_coalesceOutstandingRequestForPassUniqueID:(id)arg1 contentIdentifier:(id)arg2 tileUpdateBlock:(id /* block */)arg3;
- (id)_dashboardTilesForPass:(id)arg1 tileUpdateBlock:(id /* block */)arg2;
- (id)_eventGuideTilesForPass:(id)arg1 tileUpdateBlock:(id /* block */)arg2;
- (id)_eventInformationItemsForPass:(id)arg1 semantics:(id)arg2;
- (id)_footerValueForTicketInfoField:(id)arg1;
- (id)_generatedTicketTilesWithPass:(id)arg1 context:(long long)arg2 tileUpdateBlock:(id /* block */)arg3;
- (id)_init;
- (id)_issuerActionTilesForPass:(id)arg1;
- (bool)_passSupportsMusicTileWithSemantics:(id)arg1;
- (bool)_passSupportsWeatherTile:(id)arg1;
- (void)_perfomOutstandingUpdatesForPassUniqueID:(id)arg1 contentIdentifier:(id)arg2 updatedTiles:(id)arg3;
- (void)_reloadMapsInformationForPass:(id)arg1 semantics:(id)arg2 tileUpdateBlock:(id /* block */)arg3;
- (void)_reloadMusicInformationForPass:(id)arg1 semantics:(id)arg2 tileUpdateBlock:(id /* block */)arg3;
- (void)_reloadWeatherInformationForPass:(id)arg1 tileUpdateBlock:(id /* block */)arg2;
- (id)analyticsTileAvailabilityForPass:(id)arg1;
- (id)createTilesForPass:(id)arg1 context:(long long)arg2 tileUpdateBlock:(id /* block */)arg3;
- (void)prewarmTileContentForPass:(id)arg1 context:(long long)arg2;

@end
