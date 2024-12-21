/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSCyclerCloudKitMigrationTestSuite : NSObject <WBSCyclerTestSuite> {
    WBSCyclerTestSuiteBookmarkAuxiliary * _bookmarkAuxiliary;
    unsigned long long  _bookmarksGeneratedPriorToMigration;
    bool  _finished;
    bool  _hasValidatedResultsOfPrimaryMigration;
    WBSCyclerItemListRepresentation * _topLevelBookmarksPriorToMigration;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (getter=isFinished, nonatomic, readonly) bool finished; /* unknown property attribute: ? */
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) WBSCyclerIterationCounter *iterationCounter; /* unknown property attribute: ? */
@property (readonly) Class superclass;

+ (bool)setValue:(id)arg1 forConfigurationKey:(id)arg2;

- (void).cxx_destruct;
- (void)_createRandomBookmarkWithTarget:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)_descriptionForErrorCode:(long long)arg1;
- (id)_errorWithCode:(long long)arg1;
- (void)_fetchBookmarksPriorToMigrationWithTarget:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_generateDAVServerIDsForExistingBookmarksWithTarget:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_migrateToCloudKitWithTarget:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_validateResultsOfMigrationWithTarget:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)init;
- (bool)isFinished;
- (void)runWithTarget:(id)arg1 completionHandler:(id /* block */)arg2;

@end