/* Generated by RuntimeBrowser.
 */

@protocol HKSourceStoreServer <NSObject>

@required

- (void)remote_deleteSourceWithBundleIdentifier:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_fetchAllSourcesWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)remote_fetchHasSampleWithBundleIdentifier:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_fetchOrderedSourcesForObjectType:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: HKObjectType *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)remote_qaSourceForBundleIdentifier:(void *)arg1 name:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, HKSource *, NSError *, void*
- (void)remote_sourceForAppleDeviceWithUUID:(void *)arg1 identifier:(void *)arg2 name:(void *)arg3 productType:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 11: NSUUID *, NSString *, NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, HKSource *, NSError *, void*
- (void)remote_updateOrderedSources:(void *)arg1 forObjectType:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSArray *, HKObjectType *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end
