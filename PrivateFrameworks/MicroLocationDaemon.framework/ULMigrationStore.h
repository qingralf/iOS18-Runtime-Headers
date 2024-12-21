/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MicroLocationDaemon.framework/MicroLocationDaemon
 */

@interface ULMigrationStore : ULStore <ULStoreProtocol>

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)MOClass;
+ (id)defaultSortProperty;
+ (unsigned int)maxEntriesInTable;

- (struct vector<CLMicroLocationMigrationTable::Entry, std::allocator<CLMicroLocationMigrationTable::Entry>> { struct Entry {} *x1; struct Entry {} *x2; struct __compressed_pair<CLMicroLocationMigrationTable::Entry *, std::allocator<CLMicroLocationMigrationTable::Entry>> { struct Entry {} *x_3_1_1; } x3; })_fetchMigrationsByAndPredicates:(id)arg1 sortDescriptors:(id)arg2 andLimit:(unsigned long long)arg3;
- (struct vector<CLMicroLocationMigrationTable::Entry, std::allocator<CLMicroLocationMigrationTable::Entry>> { struct Entry {} *x1; struct Entry {} *x2; struct __compressed_pair<CLMicroLocationMigrationTable::Entry *, std::allocator<CLMicroLocationMigrationTable::Entry>> { struct Entry {} *x_3_1_1; } x3; })fetchAllRecordsWithLimit:(unsigned int)arg1;
- (struct vector<CLMicroLocationMigrationTable::Entry, std::allocator<CLMicroLocationMigrationTable::Entry>> { struct Entry {} *x1; struct Entry {} *x2; struct __compressed_pair<CLMicroLocationMigrationTable::Entry *, std::allocator<CLMicroLocationMigrationTable::Entry>> { struct Entry {} *x_3_1_1; } x3; })fetchMigrationEntriesWithStates:(const void*)arg1 limit:(unsigned int)arg2;
- (bool)insertEntries:(const void*)arg1;

@end