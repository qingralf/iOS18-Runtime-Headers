/* Generated by RuntimeBrowser.
 */

@protocol LNConnectionHostEntityInterface <NSObject>

@required

- (void)exportTransientEntities:(void *)arg1 withConfiguration:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: NSArray *, LNExportedContentConfiguration *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, LNValue *, NSError *, void*
- (void)fetchEntityURL:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: LNEntity *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSURL *, NSError *, void*
- (void)fetchValueForPropertyWithIdentifier:(void *)arg1 entity:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: NSString *, LNEntity *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, LNValue *, NSError *, void*
- (void)updateProperties:(void *)arg1 withQuery:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: NSArray *, LNQueryRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end