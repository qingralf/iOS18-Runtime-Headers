/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AvatarPersistence.framework/AvatarPersistence
 */

@interface _AVTCoreDataPersistentStoreLocalConfiguration : NSObject <AVTCoreDataPersistentStoreLocalConfiguration> {
    NSPersistentStoreCoordinator * _coordinator;
    NSURL * _databaseLocation;
    AVTCoreEnvironment * _environment;
    NSURL * _folderLocation;
    <AVTUILogger> * _logger;
    NSPersistentStoreDescription * _storeDescription;
    NSURL * _storeLocation;
}

@property (nonatomic, readonly) NSPersistentStoreCoordinator *coordinator;
@property (nonatomic, readonly) NSURL *databaseLocation;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) AVTCoreEnvironment *environment;
@property (nonatomic, readonly) NSURL *folderLocation;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <AVTUILogger> *logger;
@property (nonatomic, readonly) NSPersistentStoreDescription *storeDescription;
@property (nonatomic, readonly) NSURL *storeLocation;
@property (readonly) Class superclass;

+ (id)createStoreDescriptionWithDatabaseLocation:(id)arg1 logger:(id)arg2;
+ (id)databaseFolderForStoreLocation:(id)arg1;
+ (id)databaseLocationForFolderLocation:(id)arg1;
+ (id)sideDatabaseFolderForStoreLocation:(id)arg1;

- (void).cxx_destruct;
- (bool)contentExists;
- (id)coordinator;
- (id)copiedAsideMigratableSource;
- (bool)copyStorageAside:(id*)arg1;
- (bool)createDatabaseDirectoryIfNeeded:(id*)arg1 usingFileManager:(id)arg2;
- (id)createManagedObjectContext;
- (id)createStoreServerWithError:(id*)arg1;
- (id)databaseLocation;
- (id)environment;
- (id)folderLocation;
- (id)initWithStoreLocation:(id)arg1 copiedAside:(bool)arg2 environment:(id)arg3;
- (id)logger;
- (id)migratableSources;
- (id)persistentStoreCoordinator;
- (bool)setupIfNeeded:(id*)arg1;
- (id)storeDescription;
- (id)storeLocation;
- (bool)tearDownAndEraseAllContent:(id*)arg1;
- (void)updateBackupInclusionStatusOnQueue:(id)arg1 completionHandler:(id /* block */)arg2;

@end
