/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MicroLocationDaemon.framework/MicroLocationDaemon
 */

@interface ULCustomLoiStore : ULStore <ULStoreProtocol>

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)MOClass;
+ (id)defaultSortProperty;
+ (unsigned int)maxEntriesInTable;

- (struct vector<CLMiLoCustomLoiTable::Entry, std::allocator<CLMiLoCustomLoiTable::Entry>> { struct Entry {} *x1; struct Entry {} *x2; struct __compressed_pair<CLMiLoCustomLoiTable::Entry *, std::allocator<CLMiLoCustomLoiTable::Entry>> { struct Entry {} *x_3_1_1; } x3; })_fetchCustomLoisByAndPredicates:(id)arg1 sortDescriptors:(id)arg2 andLimit:(unsigned long long)arg3;
- (bool)addServiceToCustomLoiMapping:(const struct uuid { unsigned char x1[16]; }*)arg1 loiId:(const struct uuid { unsigned char x1[16]; }*)arg2;
- (bool)deleteAllCustomLoiOfDeletedServices;
- (struct vector<CLMiLoCustomLoiTable::Entry, std::allocator<CLMiLoCustomLoiTable::Entry>> { struct Entry {} *x1; struct Entry {} *x2; struct __compressed_pair<CLMiLoCustomLoiTable::Entry *, std::allocator<CLMiLoCustomLoiTable::Entry>> { struct Entry {} *x_3_1_1; } x3; })fetchAllRecordsWithLimit:(unsigned int)arg1;
- (struct vector<boost::uuids::uuid, std::allocator<boost::uuids::uuid>> { struct uuid {} *x1; struct uuid {} *x2; struct __compressed_pair<boost::uuids::uuid *, std::allocator<boost::uuids::uuid>> { struct uuid {} *x_3_1_1; } x3; })getAllCustomLoiIdsForServiceId:(const struct uuid { unsigned char x1[16]; }*)arg1;
- (struct vector<boost::uuids::uuid, std::allocator<boost::uuids::uuid>> { struct uuid {} *x1; struct uuid {} *x2; struct __compressed_pair<boost::uuids::uuid *, std::allocator<boost::uuids::uuid>> { struct uuid {} *x_3_1_1; } x3; })getAllDistinctCustomLoiIds;
- (struct vector<boost::uuids::uuid, std::allocator<boost::uuids::uuid>> { struct uuid {} *x1; struct uuid {} *x2; struct __compressed_pair<boost::uuids::uuid *, std::allocator<boost::uuids::uuid>> { struct uuid {} *x_3_1_1; } x3; })getAllServicesEnabledAtCustomLoiId:(const struct uuid { unsigned char x1[16]; }*)arg1;
- (bool)insertEntries:(const void*)arg1;
- (bool)removeServiceToCustomLoiMapping:(const struct uuid { unsigned char x1[16]; }*)arg1 loiId:(const struct uuid { unsigned char x1[16]; }*)arg2;
- (bool)updateAllCustomLoiIdsWithMatchingServiceUUID:(const struct uuid { unsigned char x1[16]; }*)arg1 withNewServiceUUID:(const struct uuid { unsigned char x1[16]; }*)arg2;

@end
