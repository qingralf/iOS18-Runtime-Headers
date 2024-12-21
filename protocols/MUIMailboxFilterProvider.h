/* Generated by RuntimeBrowser.
 */

@protocol MUIMailboxFilterProvider <NSObject>

@required

- (NSArray *)allFilters;
- (NSArray *)defaultFilters;
- (NSArray *)filtersGroups;
- (EMFocus *)focus;
- (NSArray *)focusFilters;
- (MUIMailboxFilterGroup *)groupContainingFilter:(MUIMailboxFilter *)arg1;
- (MUIMailboxFilterGroup *)individualVIPFilterGroup;
- (NSArray *)reduce:(NSArray *)arg1;
- (MUIMailboxFilter *)senderFilter;
- (void)setIndividualVIPFilterGroup:(MUIMailboxFilterGroup *)arg1;
- (void)setSenderFilter:(MUIMailboxFilter *)arg1;

@end