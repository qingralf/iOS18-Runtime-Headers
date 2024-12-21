/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MicroLocationDaemon.framework/MicroLocationDaemon
 */

@interface ULModelStore : ULStore <ULStoreProtocol>

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)MOClass;
+ (id)defaultSortProperty;
+ (unsigned int)maxEntriesInTable;

- (struct vector<CLMicroLocationModelTable::Entry, std::allocator<CLMicroLocationModelTable::Entry>> { struct Entry {} *x1; struct Entry {} *x2; struct __compressed_pair<CLMicroLocationModelTable::Entry *, std::allocator<CLMicroLocationModelTable::Entry>> { struct Entry {} *x_3_1_1; } x3; })_fetchModelEntriesByAndPredicates:(id)arg1 sortDescriptors:(id)arg2 andLimit:(unsigned long long)arg3;
- (bool)deleteAllModelsOfDeletedServices;
- (bool)deleteModelsForClients:(const void*)arg1;
- (bool)deleteUnneededModelsWithNumNonLslsModeltoKeep:(unsigned int)arg1 numLSLModelsToKeep:(unsigned int)arg2;
- (struct vector<CLMicroLocationModelTable::Entry, std::allocator<CLMicroLocationModelTable::Entry>> { struct Entry {} *x1; struct Entry {} *x2; struct __compressed_pair<CLMicroLocationModelTable::Entry *, std::allocator<CLMicroLocationModelTable::Entry>> { struct Entry {} *x_3_1_1; } x3; })fetchAllRecordsWithLimit:(unsigned int)arg1;
- (struct vector<CLMicroLocationModelTable::Entry, std::allocator<CLMicroLocationModelTable::Entry>> { struct Entry {} *x1; struct Entry {} *x2; struct __compressed_pair<CLMicroLocationModelTable::Entry *, std::allocator<CLMicroLocationModelTable::Entry>> { struct Entry {} *x_3_1_1; } x3; })fetchModelsAtLoiGroupId:(struct uuid { unsigned char x1[16]; })arg1 andLimit:(unsigned long long)arg2;
- (struct optional<CLMicroLocationModelTable::Entry> { union { BOOL x_1_1_1; struct Entry { struct uuid { unsigned char x_1_3_1[16]; } x_2_2_1; struct time_point<cl::chrono::CFAbsoluteTimeClock, std::chrono::duration<long double>> { struct duration<long double, std::ratio<1>> { long doublex_1_4_1; } x_2_3_1; } x_2_2_2; int x_2_2_3; struct Model { int (**x_4_3_1)(); struct RepeatedPtrField<CLMicroLocationProto::Fingerprint> { void **x_2_4_1; int x_2_4_2; int x_2_4_3; int x_2_4_4; } x_4_3_2; unsigned long long x_4_3_3; double x_4_3_4; int x_4_3_5; int x_4_3_6; struct RepeatedPtrField<CLMicroLocationProto::ClusterRecordings> { void **x_7_4_1; int x_7_4_2; int x_7_4_3; int x_7_4_4; } x_4_3_7; struct RepeatedPtrField<CLMicroLocationProto::AnchorMetadata> { void **x_8_4_1; int x_8_4_2; int x_8_4_3; int x_8_4_4; } x_4_3_8; bool x_4_3_9; unsigned int x_4_3_10; struct anchorAppearancesVector {} *x_4_3_11; struct LocationSimilarityListData {} *x_4_3_12; int x_4_3_13; int x_4_3_14; struct RepeatedField<int> { int *x_15_4_1; int x_15_4_2; int x_15_4_3; } x_4_3_15; unsigned int x_4_3_16; unsigned int x_4_3_17; unsigned int x_4_3_18; unsigned int x_4_3_19; unsigned int x_4_3_20; unsigned int x_4_3_21; void *x_4_3_22; struct BlueAtlasData {} *x_4_3_23; unsigned int x_4_3_24; int x_4_3_25; unsigned int x_4_3_26[1]; } x_2_2_4; } x_1_1_2; } x1; })fetchMostRecentMagicalMomentsModelForClient:(struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __short { BOOL x_1_4_1[23]; unsigned char x_1_4_2[0]; unsigned int x_1_4_3 : 7; unsigned int x_1_4_4 : 1; } x_1_3_1; struct __long { char *x_2_4_1; unsigned long long x_2_4_2; unsigned int x_2_4_3 : 63; unsigned int x_2_4_4 : 1; } x_1_3_2; struct __raw { unsigned long long x_3_4_1[3]; } x_1_3_3; } x_1_2_1; } x_1_1_1; } x1; })arg1 atLoiGroupId:(struct uuid { unsigned char x1[16]; })arg2;
- (struct optional<CLMicroLocationModelTable::Entry> { union { BOOL x_1_1_1; struct Entry { struct uuid { unsigned char x_1_3_1[16]; } x_2_2_1; struct time_point<cl::chrono::CFAbsoluteTimeClock, std::chrono::duration<long double>> { struct duration<long double, std::ratio<1>> { long doublex_1_4_1; } x_2_3_1; } x_2_2_2; int x_2_2_3; struct Model { int (**x_4_3_1)(); struct RepeatedPtrField<CLMicroLocationProto::Fingerprint> { void **x_2_4_1; int x_2_4_2; int x_2_4_3; int x_2_4_4; } x_4_3_2; unsigned long long x_4_3_3; double x_4_3_4; int x_4_3_5; int x_4_3_6; struct RepeatedPtrField<CLMicroLocationProto::ClusterRecordings> { void **x_7_4_1; int x_7_4_2; int x_7_4_3; int x_7_4_4; } x_4_3_7; struct RepeatedPtrField<CLMicroLocationProto::AnchorMetadata> { void **x_8_4_1; int x_8_4_2; int x_8_4_3; int x_8_4_4; } x_4_3_8; bool x_4_3_9; unsigned int x_4_3_10; struct anchorAppearancesVector {} *x_4_3_11; struct LocationSimilarityListData {} *x_4_3_12; int x_4_3_13; int x_4_3_14; struct RepeatedField<int> { int *x_15_4_1; int x_15_4_2; int x_15_4_3; } x_4_3_15; unsigned int x_4_3_16; unsigned int x_4_3_17; unsigned int x_4_3_18; unsigned int x_4_3_19; unsigned int x_4_3_20; unsigned int x_4_3_21; void *x_4_3_22; struct BlueAtlasData {} *x_4_3_23; unsigned int x_4_3_24; int x_4_3_25; unsigned int x_4_3_26[1]; } x_2_2_4; } x_1_1_2; } x1; })fetchMostRecentModelForServiceUuid:(struct uuid { unsigned char x1[16]; })arg1 atLoiGroupId:(struct uuid { unsigned char x1[16]; })arg2;
- (struct optional<CLMicroLocationModelTable::Entry> { union { BOOL x_1_1_1; struct Entry { struct uuid { unsigned char x_1_3_1[16]; } x_2_2_1; struct time_point<cl::chrono::CFAbsoluteTimeClock, std::chrono::duration<long double>> { struct duration<long double, std::ratio<1>> { long doublex_1_4_1; } x_2_3_1; } x_2_2_2; int x_2_2_3; struct Model { int (**x_4_3_1)(); struct RepeatedPtrField<CLMicroLocationProto::Fingerprint> { void **x_2_4_1; int x_2_4_2; int x_2_4_3; int x_2_4_4; } x_4_3_2; unsigned long long x_4_3_3; double x_4_3_4; int x_4_3_5; int x_4_3_6; struct RepeatedPtrField<CLMicroLocationProto::ClusterRecordings> { void **x_7_4_1; int x_7_4_2; int x_7_4_3; int x_7_4_4; } x_4_3_7; struct RepeatedPtrField<CLMicroLocationProto::AnchorMetadata> { void **x_8_4_1; int x_8_4_2; int x_8_4_3; int x_8_4_4; } x_4_3_8; bool x_4_3_9; unsigned int x_4_3_10; struct anchorAppearancesVector {} *x_4_3_11; struct LocationSimilarityListData {} *x_4_3_12; int x_4_3_13; int x_4_3_14; struct RepeatedField<int> { int *x_15_4_1; int x_15_4_2; int x_15_4_3; } x_4_3_15; unsigned int x_4_3_16; unsigned int x_4_3_17; unsigned int x_4_3_18; unsigned int x_4_3_19; unsigned int x_4_3_20; unsigned int x_4_3_21; void *x_4_3_22; struct BlueAtlasData {} *x_4_3_23; unsigned int x_4_3_24; int x_4_3_25; unsigned int x_4_3_26[1]; } x_2_2_4; } x_1_1_2; } x1; })fetchMostRecentModelOfModelType:(int)arg1 ForClient:(const void*)arg2 atLoiGroupId:(struct optional<const boost::uuids::uuid> { union { BOOL x_1_1_1; struct uuid { unsigned char x_2_2_1[16]; } x_1_1_2; } x1; bool x2; })arg3;
- (struct optional<CLMicroLocationModelTable::Entry> { union { BOOL x_1_1_1; struct Entry { struct uuid { unsigned char x_1_3_1[16]; } x_2_2_1; struct time_point<cl::chrono::CFAbsoluteTimeClock, std::chrono::duration<long double>> { struct duration<long double, std::ratio<1>> { long doublex_1_4_1; } x_2_3_1; } x_2_2_2; int x_2_2_3; struct Model { int (**x_4_3_1)(); struct RepeatedPtrField<CLMicroLocationProto::Fingerprint> { void **x_2_4_1; int x_2_4_2; int x_2_4_3; int x_2_4_4; } x_4_3_2; unsigned long long x_4_3_3; double x_4_3_4; int x_4_3_5; int x_4_3_6; struct RepeatedPtrField<CLMicroLocationProto::ClusterRecordings> { void **x_7_4_1; int x_7_4_2; int x_7_4_3; int x_7_4_4; } x_4_3_7; struct RepeatedPtrField<CLMicroLocationProto::AnchorMetadata> { void **x_8_4_1; int x_8_4_2; int x_8_4_3; int x_8_4_4; } x_4_3_8; bool x_4_3_9; unsigned int x_4_3_10; struct anchorAppearancesVector {} *x_4_3_11; struct LocationSimilarityListData {} *x_4_3_12; int x_4_3_13; int x_4_3_14; struct RepeatedField<int> { int *x_15_4_1; int x_15_4_2; int x_15_4_3; } x_4_3_15; unsigned int x_4_3_16; unsigned int x_4_3_17; unsigned int x_4_3_18; unsigned int x_4_3_19; unsigned int x_4_3_20; unsigned int x_4_3_21; void *x_4_3_22; struct BlueAtlasData {} *x_4_3_23; unsigned int x_4_3_24; int x_4_3_25; unsigned int x_4_3_26[1]; } x_2_2_4; } x_1_1_2; } x1; })fetchMostRecentModelOfModelType:(int)arg1 ForService:(struct optional<const boost::uuids::uuid> { union { BOOL x_1_1_1; struct uuid { unsigned char x_2_2_1[16]; } x_1_1_2; } x1; bool x2; })arg2 atLoiGroupId:(struct optional<const boost::uuids::uuid> { union { BOOL x_1_1_1; struct uuid { unsigned char x_2_2_1[16]; } x_1_1_2; } x1; bool x2; })arg3;
- (struct optional<CLMicroLocationModelTable::Entry> { union { BOOL x_1_1_1; struct Entry { struct uuid { unsigned char x_1_3_1[16]; } x_2_2_1; struct time_point<cl::chrono::CFAbsoluteTimeClock, std::chrono::duration<long double>> { struct duration<long double, std::ratio<1>> { long doublex_1_4_1; } x_2_3_1; } x_2_2_2; int x_2_2_3; struct Model { int (**x_4_3_1)(); struct RepeatedPtrField<CLMicroLocationProto::Fingerprint> { void **x_2_4_1; int x_2_4_2; int x_2_4_3; int x_2_4_4; } x_4_3_2; unsigned long long x_4_3_3; double x_4_3_4; int x_4_3_5; int x_4_3_6; struct RepeatedPtrField<CLMicroLocationProto::ClusterRecordings> { void **x_7_4_1; int x_7_4_2; int x_7_4_3; int x_7_4_4; } x_4_3_7; struct RepeatedPtrField<CLMicroLocationProto::AnchorMetadata> { void **x_8_4_1; int x_8_4_2; int x_8_4_3; int x_8_4_4; } x_4_3_8; bool x_4_3_9; unsigned int x_4_3_10; struct anchorAppearancesVector {} *x_4_3_11; struct LocationSimilarityListData {} *x_4_3_12; int x_4_3_13; int x_4_3_14; struct RepeatedField<int> { int *x_15_4_1; int x_15_4_2; int x_15_4_3; } x_4_3_15; unsigned int x_4_3_16; unsigned int x_4_3_17; unsigned int x_4_3_18; unsigned int x_4_3_19; unsigned int x_4_3_20; unsigned int x_4_3_21; void *x_4_3_22; struct BlueAtlasData {} *x_4_3_23; unsigned int x_4_3_24; int x_4_3_25; unsigned int x_4_3_26[1]; } x_2_2_4; } x_1_1_2; } x1; })fetchMostRecentModelOfModelType:(int)arg1 atLoiGroupId:(struct optional<const boost::uuids::uuid> { union { BOOL x_1_1_1; struct uuid { unsigned char x_2_2_1[16]; } x_1_1_2; } x1; bool x2; })arg2;
- (struct vector<CLMicroLocationModelTable::Entry, std::allocator<CLMicroLocationModelTable::Entry>> { struct Entry {} *x1; struct Entry {} *x2; struct __compressed_pair<CLMicroLocationModelTable::Entry *, std::allocator<CLMicroLocationModelTable::Entry>> { struct Entry {} *x_3_1_1; } x3; })fetchMostRecentModels;
- (bool)insertEntries:(const void*)arg1;
- (bool)updateAllModelsWithMatchingClientId:(struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __short { BOOL x_1_4_1[23]; unsigned char x_1_4_2[0]; unsigned int x_1_4_3 : 7; unsigned int x_1_4_4 : 1; } x_1_3_1; struct __long { char *x_2_4_1; unsigned long long x_2_4_2; unsigned int x_2_4_3 : 63; unsigned int x_2_4_4 : 1; } x_1_3_2; struct __raw { unsigned long long x_3_4_1[3]; } x_1_3_3; } x_1_2_1; } x_1_1_1; } x1; })arg1 withNewClientId:(struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __short { BOOL x_1_4_1[23]; unsigned char x_1_4_2[0]; unsigned int x_1_4_3 : 7; unsigned int x_1_4_4 : 1; } x_1_3_1; struct __long { char *x_2_4_1; unsigned long long x_2_4_2; unsigned int x_2_4_3 : 63; unsigned int x_2_4_4 : 1; } x_1_3_2; struct __raw { unsigned long long x_3_4_1[3]; } x_1_3_3; } x_1_2_1; } x_1_1_1; } x1; })arg2;
- (bool)updateAllModelsWithMatchingServiceUUID:(struct uuid { unsigned char x1[16]; })arg1 withNewServiceUUID:(struct uuid { unsigned char x1[16]; })arg2;

@end