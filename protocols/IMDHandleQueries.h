/* Generated by RuntimeBrowser.
 */

@protocol IMDHandleQueries <NSObject>

@required

- (void)fetchHandleRecordsFilteredUsingPredicate:(void *)arg1 sortedUsingDescriptors:(void *)arg2 limit:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 9: NSPredicate *, NSArray *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (NSArray *)handleRecordsFilteredByPredicate:(NSPredicate *)arg1;

@end