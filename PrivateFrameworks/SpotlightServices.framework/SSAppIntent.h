/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
 */

@interface SSAppIntent : SSBaseConsumer

+ (id)sharedInstance;

- (id)_attributesUpdatesForEvent:(id)arg1;
- (id)_extractIdentifiersForIndex:(id)arg1 interaction:(id)arg2;
- (id)_getInteraction:(id)arg1;
- (id)_itemUpdatesForEvent:(id)arg1 itemIdentifiers:(id)arg2 bundleToUpdate:(id)arg3;
- (id)consumerLabel;
- (id)extractIdentifiersForIndex:(id)arg1 interaction:(id)arg2;
- (bool)filterEvent:(id)arg1;
- (void)handleEvent:(id)arg1;
- (id)init;
- (id)itemUpdatesForEvent:(id)arg1 itemIdentifiers:(id)arg2 bundleToUpdate:(id)arg3;
- (id)stream;

@end