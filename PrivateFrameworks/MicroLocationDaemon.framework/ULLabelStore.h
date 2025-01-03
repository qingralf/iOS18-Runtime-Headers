/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MicroLocationDaemon.framework/MicroLocationDaemon
 */

@interface ULLabelStore : ULStore <ULStoreProtocol>

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)MOClass;
+ (id)defaultSortProperty;
+ (unsigned int)maxEntriesInTable;

- (struct vector<CLMicroLocationRecordingLabelsTable::Entry, std::allocator<CLMicroLocationRecordingLabelsTable::Entry>> { struct Entry {} *x1; struct Entry {} *x2; struct __compressed_pair<CLMicroLocationRecordingLabelsTable::Entry *, std::allocator<CLMicroLocationRecordingLabelsTable::Entry>> { struct Entry {} *x_3_1_1; } x3; })_fetchLabelsByAndPredicates:(id)arg1 sortDescriptors:(id)arg2 andLimit:(unsigned long long)arg3;
- (bool)deleteAllLabelsOfDeletedServices;
- (bool)deleteRecordingLabelsForClients:(const void*)arg1;
- (bool)deleteSimilarityListLabelsOlderThan:(double)arg1 orNewerThan:(double)arg2;
- (struct vector<CLMicroLocationRecordingLabelsTable::Entry, std::allocator<CLMicroLocationRecordingLabelsTable::Entry>> { struct Entry {} *x1; struct Entry {} *x2; struct __compressed_pair<CLMicroLocationRecordingLabelsTable::Entry *, std::allocator<CLMicroLocationRecordingLabelsTable::Entry>> { struct Entry {} *x_3_1_1; } x3; })fetchAllRecordsWithLimit:(unsigned int)arg1;
- (struct vector<CLMicroLocationRecordingLabelsTable::Entry, std::allocator<CLMicroLocationRecordingLabelsTable::Entry>> { struct Entry {} *x1; struct Entry {} *x2; struct __compressed_pair<CLMicroLocationRecordingLabelsTable::Entry *, std::allocator<CLMicroLocationRecordingLabelsTable::Entry>> { struct Entry {} *x_3_1_1; } x3; })fetchRecordingLabelsForClient:(const void*)arg1 limit:(unsigned int)arg2;
- (struct vector<CLMicroLocationRecordingLabelsTable::Entry, std::allocator<CLMicroLocationRecordingLabelsTable::Entry>> { struct Entry {} *x1; struct Entry {} *x2; struct __compressed_pair<CLMicroLocationRecordingLabelsTable::Entry *, std::allocator<CLMicroLocationRecordingLabelsTable::Entry>> { struct Entry {} *x_3_1_1; } x3; })fetchRecordingLabelsForServiceUuid:(const struct uuid { unsigned char x1[16]; }*)arg1 atLoiGroupID:(const struct uuid { unsigned char x1[16]; }*)arg2 fromTime:(const void*)arg3 limit:(unsigned int)arg4;
- (struct vector<std::string, std::allocator<std::string>> { void *x1; void *x2; struct __compressed_pair<std::string *, std::allocator<std::string>> { void *x_3_1_1; } x3; })getAllRecordingLabelsClientIds;
- (bool)insertEntries:(const void*)arg1;
- (bool)updateAllLabelsWithMatchingClientId:(struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __short { BOOL x_1_4_1[23]; unsigned char x_1_4_2[0]; unsigned int x_1_4_3 : 7; unsigned int x_1_4_4 : 1; } x_1_3_1; struct __long { char *x_2_4_1; unsigned long long x_2_4_2; unsigned int x_2_4_3 : 63; unsigned int x_2_4_4 : 1; } x_1_3_2; struct __raw { unsigned long long x_3_4_1[3]; } x_1_3_3; } x_1_2_1; } x_1_1_1; } x1; })arg1 withNewClientId:(struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __short { BOOL x_1_4_1[23]; unsigned char x_1_4_2[0]; unsigned int x_1_4_3 : 7; unsigned int x_1_4_4 : 1; } x_1_3_1; struct __long { char *x_2_4_1; unsigned long long x_2_4_2; unsigned int x_2_4_3 : 63; unsigned int x_2_4_4 : 1; } x_1_3_2; struct __raw { unsigned long long x_3_4_1[3]; } x_1_3_3; } x_1_2_1; } x_1_1_1; } x1; })arg2;
- (bool)updateAllLabelsWithMatchingServiceUUID:(struct uuid { unsigned char x1[16]; })arg1 withNewServiceUUID:(struct uuid { unsigned char x1[16]; })arg2;

@end
