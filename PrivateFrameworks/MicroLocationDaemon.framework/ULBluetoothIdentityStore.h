/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MicroLocationDaemon.framework/MicroLocationDaemon
 */

@interface ULBluetoothIdentityStore : ULStore <ULStoreProtocol>

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)MOClass;
+ (id)defaultSortProperty;
+ (unsigned int)maxEntriesInTable;

- (struct vector<CLMicroLocationBluetoothIdentityTable::Entry, std::allocator<CLMicroLocationBluetoothIdentityTable::Entry>> { struct Entry {} *x1; struct Entry {} *x2; struct __compressed_pair<CLMicroLocationBluetoothIdentityTable::Entry *, std::allocator<CLMicroLocationBluetoothIdentityTable::Entry>> { struct Entry {} *x_3_1_1; } x3; })_fetchBtIdentityEntriesByAndPredicates:(id)arg1 sortDescriptors:(id)arg2 andLimit:(unsigned long long)arg3;
- (struct vector<CLMicroLocationBluetoothIdentityTable::Entry, std::allocator<CLMicroLocationBluetoothIdentityTable::Entry>> { struct Entry {} *x1; struct Entry {} *x2; struct __compressed_pair<CLMicroLocationBluetoothIdentityTable::Entry *, std::allocator<CLMicroLocationBluetoothIdentityTable::Entry>> { struct Entry {} *x_3_1_1; } x3; })fetchAllRecordsWithLimit:(unsigned int)arg1;
- (struct vector<CLMicroLocationBluetoothIdentityTable::Entry, std::allocator<CLMicroLocationBluetoothIdentityTable::Entry>> { struct Entry {} *x1; struct Entry {} *x2; struct __compressed_pair<CLMicroLocationBluetoothIdentityTable::Entry *, std::allocator<CLMicroLocationBluetoothIdentityTable::Entry>> { struct Entry {} *x_3_1_1; } x3; })fetchBtIdentityEntriesBetweenTimes:(double)arg1 toTime:(double)arg2;
- (bool)insertEntries:(const void*)arg1;

@end