/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUUserAccessoryAccessItemManager : HFItemManager {
    NSString * _accessoryCategoryType;
    HMHome * _overrideHome;
    HFTransformItemProvider * _transformedAllowedAccessoryItemProvider;
    HMUser * _user;
}

@property (nonatomic, readonly) NSString *accessoryCategoryType;
@property (nonatomic, readonly) HMHome *overrideHome;
@property (nonatomic, retain) HFTransformItemProvider *transformedAllowedAccessoryItemProvider;
@property (nonatomic, readonly) HMUser *user;

- (void).cxx_destruct;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (id)_homeFuture;
- (id)accessoryCategoryType;
- (id)initWithHome:(id)arg1 user:(id)arg2 accessoryCategoryType:(id)arg3;
- (id)overrideHome;
- (void)setTransformedAllowedAccessoryItemProvider:(id)arg1;
- (id)transformedAllowedAccessoryItemProvider;
- (id)user;

@end