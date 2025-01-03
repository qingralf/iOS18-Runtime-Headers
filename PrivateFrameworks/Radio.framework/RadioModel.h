/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioModel : NSObject <NSFetchedResultsControllerDelegate> {
    NSObject<OS_dispatch_queue> * _accessSerialQueue;
    NSOperationQueue * _backgroundCleanupQueue;
    BKSProcessAssertion * _backgroundProcessAssertion;
    long long  _backgroundTaskCount;
    NSObject<OS_dispatch_source> * _backgroundTaskInvalidateTimerSource;
    NSManagedObjectContext * _context;
    bool  _isBackgroundModel;
    NSManagedObjectModel * _model;
    int  _modelChangedToken;
    bool  _modelChangedTokenIsValid;
    int  _modelDeletedToken;
    bool  _modelDeletedTokenIsValid;
    NSFetchRequest * _stationFetchRequest;
    NSFetchedResultsController * _stationFetchedResultsController;
    NSMapTable * _stationToSkipControllerMapTable;
    NSPersistentStoreCoordinator * _storeCoordinator;
    long long  _transactionCount;
}

@property (nonatomic, readonly) NSArray *allStations;
@property (nonatomic) unsigned long long authenticatedAccountIdentifier;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *featuredStations;
@property (nonatomic, copy) NSString *globalHash;
@property (nonatomic) unsigned long long globalVersion;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *previewStations;
@property (nonatomic, readonly, copy) NSArray *reportProblemIssueTypes;
@property (nonatomic, copy) NSArray *stationSortOrdering;
@property (nonatomic, readonly) NSArray *stations;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *userStations;

+ (id)_persistentStoreConfigurationOptions;
+ (void)_postAccountDidDeauthenticateNotification;
+ (id)_radioDatabasePath;
+ (id)_radioDirectoryPath;
+ (id)backgroundModel;
+ (void)deleteAllData;
+ (id)sharedModel;

- (void).cxx_destruct;
- (id)_arrayByReplacingManagedObjectsInArray:(id)arg1;
- (void)_beginBackgroundTaskAssertion;
- (void)_contextDidSaveNotification:(id)arg1;
- (void)_createRadioDirectoryAndDatabaseIfNecessary;
- (id)_databasePropertyValueForKey:(id)arg1;
- (void)_defaultRadioModelInitialization;
- (void)_endBackgroundTaskAssertion;
- (id)_init;
- (id)_initBackgroundModelWithPersistentStoreCoordinator:(id)arg1;
- (unsigned long long)_numberOfSkipsUsedWithSkipTimestamps:(id)arg1 currentTimestamp:(double)arg2 skipInterval:(double)arg3 returningEarliestSkipTimestamp:(double*)arg4;
- (void)_performTransactionAndSave:(bool)arg1 withBlock:(id /* block */)arg2;
- (void)_postContextDidChangeNotification:(id)arg1;
- (void)_prepareModel;
- (void)_resetModel;
- (id)_setByReplacingManagedObjectsInSet:(id)arg1;
- (void)_setDatabasePropertyValue:(id)arg1 forKey:(id)arg2;
- (id)allStations;
- (unsigned long long)authenticatedAccountIdentifier;
- (id)context;
- (void)controller:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned long long)arg4 newIndexPath:(id)arg5;
- (void)controllerDidChangeContent:(id)arg1;
- (id)convertObject:(id)arg1;
- (id)convertObjects:(id)arg1;
- (id)convertObjectsInSet:(id)arg1;
- (long long)databaseVersion;
- (void)dealloc;
- (void)deleteAllData;
- (void)deletePreviewStation:(id)arg1;
- (void)deleteStation:(id)arg1;
- (void)deleteStationWithID:(long long)arg1;
- (id)featuredStations;
- (id)globalHash;
- (unsigned long long)globalVersion;
- (id)init;
- (id)newFeaturedStationWithDictionary:(id)arg1;
- (id)newPreviewStationWithDictionary:(id)arg1;
- (id)newStationWithDictionary:(id)arg1;
- (void)performTransactionWithBlock:(id /* block */)arg1;
- (void)performWriteTransactionWithBlock:(id /* block */)arg1;
- (id)previewStations;
- (id)reportProblemIssueTypes;
- (void)setAuthenticatedAccountIdentifier:(unsigned long long)arg1;
- (void)setDatabaseVersion:(long long)arg1;
- (void)setGlobalHash:(id)arg1;
- (void)setGlobalVersion:(unsigned long long)arg1;
- (void)setReportProblemIssueTypes:(id)arg1;
- (void)setStationSortOrdering:(id)arg1;
- (void)setTrackPlaybackDescriptorQueue:(id)arg1 forStation:(id)arg2;
- (id)stationSortOrdering;
- (id)stationWithHash:(id)arg1;
- (id)stationWithID:(long long)arg1;
- (id)stationWithPersistentID:(long long)arg1;
- (id)stationWithStationStringID:(id)arg1;
- (id)stations;
- (id)userStations;

@end
