/* Generated by RuntimeBrowser.
 */

@protocol ASCompetitionManagerSecureCloudDelegate <NSObject>

@required

- (void)competitionManager:(void *)arg1 deleteCompetitionLists:(void *)arg2 group:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: ASCompetitionManager *, NSSet *, CKOperationGroup *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)competitionManager:(void *)arg1 saveCompetitionLists:(void *)arg2 group:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 11: ASCompetitionManager *, NSSet *, CKOperationGroup *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, NSArray *, void*
- (void)competitionManager:(void *)arg1 saveCurrentCompetitionList:(void *)arg2 archivedCompetitionList:(void *)arg3 contact:(void *)arg4 group:(void *)arg5 completion:(void *)arg6; // needs 6 arg types, found 13: ASCompetitionManager *, ASCompetitionList *, ASCompetitionList *, ASContact *, CKOperationGroup *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, NSArray *, void*

@end