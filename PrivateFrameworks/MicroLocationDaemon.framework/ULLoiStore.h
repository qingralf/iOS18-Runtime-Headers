/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MicroLocationDaemon.framework/MicroLocationDaemon
 */

@interface ULLoiStore : ULStore <ULStoreProtocol>

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)MOClass;
+ (id)defaultSortProperty;
+ (unsigned int)maxEntriesInTable;

- (struct vector<CLMiLoLoiTable::Entry, std::allocator<CLMiLoLoiTable::Entry>> { struct Entry {} *x1; struct Entry {} *x2; struct __compressed_pair<CLMiLoLoiTable::Entry *, std::allocator<CLMiLoLoiTable::Entry>> { struct Entry {} *x_3_1_1; } x3; })_fetchLoisByAndPredicates:(id)arg1 sortDescriptors:(id)arg2 andLimit:(unsigned long long)arg3;
- (bool)batchTransferRecordsUsingBatchSize:(unsigned long long)arg1 andLimit:(unsigned long long)arg2 intoTargetStore:(id)arg3 withCancelFunc:(struct function<bool ()>={__value_func<bool ()>={type=[24C] {})arg4;
- (unsigned int)countDistinctLoiGroups;
- (unsigned int)countDistinctLoiTypes:(const void*)arg1;
- (struct vector<CLMiLoLoiTable::Entry, std::allocator<CLMiLoLoiTable::Entry>> { struct Entry {} *x1; struct Entry {} *x2; struct __compressed_pair<CLMiLoLoiTable::Entry *, std::allocator<CLMiLoLoiTable::Entry>> { struct Entry {} *x_3_1_1; } x3; })fetchAllDistinctLoiGroups;
- (struct vector<CLMiLoLoiTable::Entry, std::allocator<CLMiLoLoiTable::Entry>> { struct Entry {} *x1; struct Entry {} *x2; struct __compressed_pair<CLMiLoLoiTable::Entry *, std::allocator<CLMiLoLoiTable::Entry>> { struct Entry {} *x_3_1_1; } x3; })fetchAllRecordsWithLimit:(unsigned int)arg1;
- (struct vector<CLMiLoLoiTable::Entry, std::allocator<CLMiLoLoiTable::Entry>> { struct Entry {} *x1; struct Entry {} *x2; struct __compressed_pair<CLMiLoLoiTable::Entry *, std::allocator<CLMiLoLoiTable::Entry>> { struct Entry {} *x_3_1_1; } x3; })fetchLoiIdEntriesInLoiGroupId:(const struct uuid { unsigned char x1[16]; }*)arg1;
- (struct vector<CLMiLoLoiTable::Entry, std::allocator<CLMiLoLoiTable::Entry>> { struct Entry {} *x1; struct Entry {} *x2; struct __compressed_pair<CLMiLoLoiTable::Entry *, std::allocator<CLMiLoLoiTable::Entry>> { struct Entry {} *x_3_1_1; } x3; })fetchLoiIdEntriesforLoiGroupIds:(void*)arg1 withLimit:(unsigned int)arg2;
- (struct vector<boost::uuids::uuid, std::allocator<boost::uuids::uuid>> { struct uuid {} *x1; struct uuid {} *x2; struct __compressed_pair<boost::uuids::uuid *, std::allocator<boost::uuids::uuid>> { struct uuid {} *x_3_1_1; } x3; })getDistinctHomeLoiGroupIdsWithLimit:(unsigned int)arg1;
- (struct optional<boost::uuids::uuid> { union { BOOL x_1_1_1; struct uuid { unsigned char x_2_2_1[16]; } x_1_1_2; } x1; bool x2; })getLoiGroupIdForLoi:(const struct uuid { unsigned char x1[16]; }*)arg1;
- (struct vector<boost::uuids::uuid, std::allocator<boost::uuids::uuid>> { struct uuid {} *x1; struct uuid {} *x2; struct __compressed_pair<boost::uuids::uuid *, std::allocator<boost::uuids::uuid>> { struct uuid {} *x_3_1_1; } x3; })getLoiGroupIdsForLois:(const void*)arg1;
- (id)getLoiIdsInLoiGroupId:(const struct uuid { unsigned char x1[16]; }*)arg1;
- (struct optional<std::string> { union { BOOL x_1_1_1; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __short { BOOL x_1_6_1[23]; unsigned char x_1_6_2[0]; unsigned int x_1_6_3 : 7; unsigned int x_1_6_4 : 1; } x_1_5_1; struct __long { char *x_2_6_1; unsigned long long x_2_6_2; unsigned int x_2_6_3 : 63; unsigned int x_2_6_4 : 1; } x_1_5_2; struct __raw { unsigned long long x_3_6_1[3]; } x_1_5_3; } x_1_4_1; } x_1_3_1; } x_2_2_1; } x_1_1_2; } x1; bool x2; })getLoiTypeForLoi:(const struct uuid { unsigned char x1[16]; }*)arg1;
- (bool)insertEntries:(const void*)arg1;
- (bool)updateLoiIds:(const void*)arg1 withLoiGroupId:(const struct uuid { unsigned char x1[16]; }*)arg2 andLoiType:(const void*)arg3;

@end