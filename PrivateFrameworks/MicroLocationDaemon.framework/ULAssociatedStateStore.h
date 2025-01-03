/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MicroLocationDaemon.framework/MicroLocationDaemon
 */

@interface ULAssociatedStateStore : ULStore <ULStoreProtocol>

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)MOClass;
+ (id)defaultSortProperty;
+ (unsigned int)maxEntriesInTable;

- (struct vector<CLMicroLocationAssociatedStateTable::Entry, std::allocator<CLMicroLocationAssociatedStateTable::Entry>> { struct Entry {} *x1; struct Entry {} *x2; struct __compressed_pair<CLMicroLocationAssociatedStateTable::Entry *, std::allocator<CLMicroLocationAssociatedStateTable::Entry>> { struct Entry {} *x_3_1_1; } x3; })_fetchAssociatedStatesByAndPredicates:(id)arg1 sortDescriptors:(id)arg2 andLimit:(unsigned long long)arg3;
- (struct vector<CLMicroLocationAssociatedStateTable::Entry, std::allocator<CLMicroLocationAssociatedStateTable::Entry>> { struct Entry {} *x1; struct Entry {} *x2; struct __compressed_pair<CLMicroLocationAssociatedStateTable::Entry *, std::allocator<CLMicroLocationAssociatedStateTable::Entry>> { struct Entry {} *x_3_1_1; } x3; })fetchAllAssociatedStateBetweenTimes:(double)arg1 toTime:(double)arg2 atLoiGroupId:(const struct uuid { unsigned char x1[16]; }*)arg3;
- (struct vector<CLMicroLocationAssociatedStateTable::Entry, std::allocator<CLMicroLocationAssociatedStateTable::Entry>> { struct Entry {} *x1; struct Entry {} *x2; struct __compressed_pair<CLMicroLocationAssociatedStateTable::Entry *, std::allocator<CLMicroLocationAssociatedStateTable::Entry>> { struct Entry {} *x_3_1_1; } x3; })fetchAllRecordsWithLimit:(unsigned int)arg1;
- (struct vector<boost::uuids::uuid, std::allocator<boost::uuids::uuid>> { struct uuid {} *x1; struct uuid {} *x2; struct __compressed_pair<boost::uuids::uuid *, std::allocator<boost::uuids::uuid>> { struct uuid {} *x_3_1_1; } x3; })getAllDistinctAssociatedStateLoiIds;
- (bool)insertEntries:(const void*)arg1;

@end
