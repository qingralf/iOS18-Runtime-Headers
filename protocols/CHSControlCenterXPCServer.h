/* Generated by RuntimeBrowser.
 */

@protocol CHSControlCenterXPCServer

@required

- (oneway void)currentConfigurations:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, NSError *, void*
- (oneway void)reloadAllControlsForBundleIdentifier:(NSString *)arg1;
- (oneway void)reloadControlsOfKind:(NSString *)arg1;

@end