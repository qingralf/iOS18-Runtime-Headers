/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileSafariUI.framework/MobileSafariUI
 */

@interface ActivityItemConfiguration : NSObject <UIActivityItemsConfigurationReading> {
    NSArray * _additionalItemProviders;
    <UIActivityItemsConfigurationReading> * _innerProvider;
    long long  _innerProviderItemCount;
}

@property (nonatomic, readonly, copy) NSArray *applicationActivitiesForActivityItemsConfiguration; /* unknown property attribute: ? */
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSArray *itemProvidersForActivityItemsConfiguration;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)activityItemsConfigurationMetadataForItemAtIndex:(long long)arg1 key:(id)arg2;
- (id)activityItemsConfigurationMetadataForKey:(id)arg1;
- (id)activityItemsConfigurationPreviewForItemAtIndex:(long long)arg1 intent:(id)arg2 suggestedSize:(struct CGSize { double x1; double x2; })arg3;
- (bool)activityItemsConfigurationSupportsInteraction:(id)arg1;
- (id)applicationActivitiesForActivityItemsConfiguration;
- (id)initWithInnerItemConfigurationProvider:(id)arg1 additionalItemProviders:(id)arg2;
- (id)itemProvidersForActivityItemsConfiguration;

@end
