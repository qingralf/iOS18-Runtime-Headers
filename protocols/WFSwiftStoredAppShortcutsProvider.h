/* Generated by RuntimeBrowser.
 */

@protocol WFSwiftStoredAppShortcutsProvider

@required

- (NSDictionary *)autoShortcutsForLocaleIdentifier:(NSString *)arg1 error:(id*)arg2;
- (NSDictionary *)propertiesForIdentifiers:(NSArray *)arg1 error:(id*)arg2;
- (void)retrieveActionForBundleIdentifier:(void *)arg1 basePhraseTemplate:(void *)arg2 actionIdentifier:(void *)arg3 parameterIdentifier:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 11: NSString *, NSString *, NSString *, NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, LNAction *, NSError *, void*

@end
