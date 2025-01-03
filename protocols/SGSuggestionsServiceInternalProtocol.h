/* Generated by RuntimeBrowser.
 */

@protocol SGSuggestionsServiceInternalProtocol <_SGSuggestionsServiceBaseProtocol>

@required

- (void)addInteractions:(void *)arg1 bundleId:(void *)arg2 withCompletion:(void *)arg3; // needs 3 arg types, found 8: NSArray *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)addSearchableItemMetadata:(void *)arg1 htmlData:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSData *, NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)addSearchableItems:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (bool)clearCachesFully:(bool)arg1 error:(id*)arg2;
- (void)clearCachesFully:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (bool)daemonExit:(id*)arg1;
- (void)daemonExitWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)deleteCloudKitZoneWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)deleteInteractionsWithBundleId:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)deleteInteractionsWithBundleId:(void *)arg1 groupIdentifiers:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSString *, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)deleteInteractionsWithBundleId:(void *)arg1 identifiers:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSString *, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)deleteSpotlightReferencesWithBundleIdentifier:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)deleteSpotlightReferencesWithBundleIdentifier:(void *)arg1 domainIdentifiers:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSString *, _PASDomainSelection *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)deleteSpotlightReferencesWithBundleIdentifier:(void *)arg1 uniqueIdentifiers:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSString *, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)emailAddressIsSignificant:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSNumber *, NSError *, void*
- (bool)ping:(id*)arg1;
- (void)pingWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (NSDictionary *)powerState;
- (void)realtimeSuggestionsFromURL:(void *)arg1 title:(void *)arg2 HTMLPayload:(void *)arg3 extractionDate:(void *)arg4 withCompletion:(void *)arg5; // needs 5 arg types, found 11: NSURL *, NSString *, NSString *, NSDate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (bool)rebuildNamesForDetailCache:(id*)arg1;
- (void)rebuildNamesForDetailCacheWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)removeAllStoredPseudoContactsWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (bool)resetConfirmationAndRejectionHistory:(id*)arg1;
- (void)resetConfirmationAndRejectionHistoryWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (bool)sendRTCLogs:(id*)arg1;
- (bool)sleep:(id*)arg1;
- (void)sleepWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)spotlightReimportFromIdentifier:(void *)arg1 forPersonHandle:(void *)arg2 startDate:(void *)arg3 endDate:(void *)arg4 withCompletion:(void *)arg5; // needs 5 arg types, found 10: NSString *, NSString *, NSDate *, NSDate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)suggestEventsInFutureLimitTo:(void *)arg1 options:(void *)arg2 withCompletion:(void *)arg3; // needs 3 arg types, found 9: unsigned long long, unsigned int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)suggestEventsInFutureLimitTo:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 8: unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)suggestEventsStartingAt:(void *)arg1 endingAt:(void *)arg2 limitTo:(void *)arg3 options:(void *)arg4 withCompletion:(void *)arg5; // needs 5 arg types, found 11: NSDate *, NSDate *, unsigned long long, unsigned int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)suggestEventsStartingAt:(void *)arg1 endingAt:(void *)arg2 limitTo:(void *)arg3 withCompletion:(void *)arg4; // needs 4 arg types, found 10: NSDate *, NSDate *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)suggestEventsStartingAt:(void *)arg1 endingAt:(void *)arg2 prefix:(void *)arg3 limitTo:(void *)arg4 options:(void *)arg5 withCompletion:(void *)arg6; // needs 6 arg types, found 12: NSDate *, NSDate *, NSString *, unsigned long long, unsigned int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)suggestEventsStartingAt:(void *)arg1 endingAt:(void *)arg2 prefix:(void *)arg3 limitTo:(void *)arg4 withCompletion:(void *)arg5; // needs 5 arg types, found 11: NSDate *, NSDate *, NSString *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)suggestionsFromEmailContent:(void *)arg1 headers:(void *)arg2 source:(void *)arg3 options:(void *)arg4 withCompletion:(void *)arg5; // needs 5 arg types, found 11: NSString *, NSData *, NSString *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (NSArray *)suggestionsFromRFC822Data:(NSData *)arg1 source:(NSString *)arg2 options:(unsigned long long)arg3 error:(id*)arg4;
- (void)suggestionsFromRFC822Data:(void *)arg1 source:(void *)arg2 options:(void *)arg3 withCompletion:(void *)arg4; // needs 4 arg types, found 10: NSData *, NSString *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (NSArray *)suggestionsFromSimpleMailMessage:(SGSimpleMailMessage *)arg1 headers:(NSData *)arg2 options:(unsigned long long)arg3 error:(id*)arg4;
- (void)suggestionsFromSimpleMailMessage:(void *)arg1 headers:(void *)arg2 options:(void *)arg3 withCompletion:(void *)arg4; // needs 4 arg types, found 10: SGSimpleMailMessage *, NSData *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*

@end
