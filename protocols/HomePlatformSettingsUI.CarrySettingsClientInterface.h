/* Generated by RuntimeBrowser.
 */

@protocol HomePlatformSettingsUI.CarrySettingsClientInterface

@required

+ (void)shouldShowCarrySettingsButtonForHomeID:(void *)arg1 homeKitIdentifiers:(void *)arg2 withCompletion:(void *)arg3; // needs 3 arg types, found 9: NSUUID *, NSSet *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
+ (void)shouldShowCarrySettingsButtonForHomeID:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 8: NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

- (id)initWithHomeID:(NSUUID *)arg1;

@end
