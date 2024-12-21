/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MicroLocationDaemon.framework/MicroLocationDaemon
 */

@interface ULConfigurationStore : ULStore <ULStoreProtocol>

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)MOClass;
+ (id)defaultSortProperty;
+ (unsigned int)maxEntriesInTable;

- (struct vector<CLMicroLocationConfigurationTable::Entry, std::allocator<CLMicroLocationConfigurationTable::Entry>> { struct Entry {} *x1; struct Entry {} *x2; struct __compressed_pair<CLMicroLocationConfigurationTable::Entry *, std::allocator<CLMicroLocationConfigurationTable::Entry>> { struct Entry {} *x_3_1_1; } x3; })_fetchConfigurationsByAndPredicates:(id)arg1 sortDescriptors:(id)arg2 andLimit:(unsigned long long)arg3;
- (bool)batchTransferRecordsUsingBatchSize:(unsigned long long)arg1 andLimit:(unsigned long long)arg2 intoTargetStore:(id)arg3 withCancelFunc:(struct function<bool ()>={__value_func<bool ()>={type=[24C] {})arg4;
- (struct vector<CLMicroLocationConfigurationTable::Entry, std::allocator<CLMicroLocationConfigurationTable::Entry>> { struct Entry {} *x1; struct Entry {} *x2; struct __compressed_pair<CLMicroLocationConfigurationTable::Entry *, std::allocator<CLMicroLocationConfigurationTable::Entry>> { struct Entry {} *x_3_1_1; } x3; })fetchAllConfigurationsOfType:(struct optional<const CLMicroLocationProto::ConfigurationType> { union { BOOL x_1_1_1; int x_1_1_2; } x1; bool x2; })arg1 loiGroupId:(const struct uuid { unsigned char x1[16]; }*)arg2 withLimit:(unsigned int)arg3;
- (struct vector<CLMicroLocationConfigurationTable::Entry, std::allocator<CLMicroLocationConfigurationTable::Entry>> { struct Entry {} *x1; struct Entry {} *x2; struct __compressed_pair<CLMicroLocationConfigurationTable::Entry *, std::allocator<CLMicroLocationConfigurationTable::Entry>> { struct Entry {} *x_3_1_1; } x3; })fetchAllConfigurationsforLoiGroup:(const struct uuid { unsigned char x1[16]; }*)arg1 withLimit:(unsigned int)arg2;
- (struct vector<CLMicroLocationConfigurationTable::Entry, std::allocator<CLMicroLocationConfigurationTable::Entry>> { struct Entry {} *x1; struct Entry {} *x2; struct __compressed_pair<CLMicroLocationConfigurationTable::Entry *, std::allocator<CLMicroLocationConfigurationTable::Entry>> { struct Entry {} *x_3_1_1; } x3; })fetchAllRecordsWithLimit:(unsigned int)arg1;
- (struct vector<CLMicroLocationConfigurationTable::Entry, std::allocator<CLMicroLocationConfigurationTable::Entry>> { struct Entry {} *x1; struct Entry {} *x2; struct __compressed_pair<CLMicroLocationConfigurationTable::Entry *, std::allocator<CLMicroLocationConfigurationTable::Entry>> { struct Entry {} *x_3_1_1; } x3; })fetchLatestConfigurationPerTypeAtLoi:(const struct uuid { unsigned char x1[16]; }*)arg1 withLimit:(unsigned int)arg2;
- (struct optional<CLMicroLocationConfigurationTable::Entry> { union { BOOL x_1_1_1; struct Entry { struct time_point<cl::chrono::CFAbsoluteTimeClock, std::chrono::duration<long double>> { struct duration<long double, std::ratio<1>> { long doublex_1_4_1; } x_1_3_1; } x_2_2_1; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __short { BOOL x_1_7_1[23]; unsigned char x_1_7_2[0]; unsigned int x_1_7_3 : 7; unsigned int x_1_7_4 : 1; } x_1_6_1; struct __long { char *x_2_7_1; unsigned long long x_2_7_2; unsigned int x_2_7_3 : 63; unsigned int x_2_7_4 : 1; } x_1_6_2; struct __raw { unsigned long long x_3_7_1[3]; } x_1_6_3; } x_1_5_1; } x_1_4_1; } x_2_3_1; } x_2_2_2; struct uuid { unsigned char x_3_3_1[16]; } x_2_2_3; int x_2_2_4; struct Configuration { int (**x_5_3_1)(); double x_5_3_2; struct WifiHistogram {} *x_5_3_3; struct AnchorAppearanceConfiguration {} *x_5_3_4; struct AnchorValueStatisticsConfiguration {} *x_5_3_5; int x_5_3_6; int x_5_3_7; unsigned int x_5_3_8[1]; } x_2_2_5; } x_1_1_2; } x1; })fetchMostRecentAnchorAppearancesAtLoi:(const struct uuid { unsigned char x1[16]; }*)arg1;
- (struct optional<CLMicroLocationConfigurationTable::Entry> { union { BOOL x_1_1_1; struct Entry { struct time_point<cl::chrono::CFAbsoluteTimeClock, std::chrono::duration<long double>> { struct duration<long double, std::ratio<1>> { long doublex_1_4_1; } x_1_3_1; } x_2_2_1; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __short { BOOL x_1_7_1[23]; unsigned char x_1_7_2[0]; unsigned int x_1_7_3 : 7; unsigned int x_1_7_4 : 1; } x_1_6_1; struct __long { char *x_2_7_1; unsigned long long x_2_7_2; unsigned int x_2_7_3 : 63; unsigned int x_2_7_4 : 1; } x_1_6_2; struct __raw { unsigned long long x_3_7_1[3]; } x_1_6_3; } x_1_5_1; } x_1_4_1; } x_2_3_1; } x_2_2_2; struct uuid { unsigned char x_3_3_1[16]; } x_2_2_3; int x_2_2_4; struct Configuration { int (**x_5_3_1)(); double x_5_3_2; struct WifiHistogram {} *x_5_3_3; struct AnchorAppearanceConfiguration {} *x_5_3_4; struct AnchorValueStatisticsConfiguration {} *x_5_3_5; int x_5_3_6; int x_5_3_7; unsigned int x_5_3_8[1]; } x_2_2_5; } x_1_1_2; } x1; })fetchMostRecentClusterAnchorValueStatisticsForLOIType:(const void*)arg1;
- (struct optional<CLMicroLocationConfigurationTable::Entry> { union { BOOL x_1_1_1; struct Entry { struct time_point<cl::chrono::CFAbsoluteTimeClock, std::chrono::duration<long double>> { struct duration<long double, std::ratio<1>> { long doublex_1_4_1; } x_1_3_1; } x_2_2_1; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __short { BOOL x_1_7_1[23]; unsigned char x_1_7_2[0]; unsigned int x_1_7_3 : 7; unsigned int x_1_7_4 : 1; } x_1_6_1; struct __long { char *x_2_7_1; unsigned long long x_2_7_2; unsigned int x_2_7_3 : 63; unsigned int x_2_7_4 : 1; } x_1_6_2; struct __raw { unsigned long long x_3_7_1[3]; } x_1_6_3; } x_1_5_1; } x_1_4_1; } x_2_3_1; } x_2_2_2; struct uuid { unsigned char x_3_3_1[16]; } x_2_2_3; int x_2_2_4; struct Configuration { int (**x_5_3_1)(); double x_5_3_2; struct WifiHistogram {} *x_5_3_3; struct AnchorAppearanceConfiguration {} *x_5_3_4; struct AnchorValueStatisticsConfiguration {} *x_5_3_5; int x_5_3_6; int x_5_3_7; unsigned int x_5_3_8[1]; } x_2_2_5; } x_1_1_2; } x1; })fetchMostRecentClusterAnchorValueStatisticsForModelUUID:(const struct uuid { unsigned char x1[16]; }*)arg1;
- (struct optional<CLMicroLocationConfigurationTable::Entry> { union { BOOL x_1_1_1; struct Entry { struct time_point<cl::chrono::CFAbsoluteTimeClock, std::chrono::duration<long double>> { struct duration<long double, std::ratio<1>> { long doublex_1_4_1; } x_1_3_1; } x_2_2_1; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __short { BOOL x_1_7_1[23]; unsigned char x_1_7_2[0]; unsigned int x_1_7_3 : 7; unsigned int x_1_7_4 : 1; } x_1_6_1; struct __long { char *x_2_7_1; unsigned long long x_2_7_2; unsigned int x_2_7_3 : 63; unsigned int x_2_7_4 : 1; } x_1_6_2; struct __raw { unsigned long long x_3_7_1[3]; } x_1_6_3; } x_1_5_1; } x_1_4_1; } x_2_3_1; } x_2_2_2; struct uuid { unsigned char x_3_3_1[16]; } x_2_2_3; int x_2_2_4; struct Configuration { int (**x_5_3_1)(); double x_5_3_2; struct WifiHistogram {} *x_5_3_3; struct AnchorAppearanceConfiguration {} *x_5_3_4; struct AnchorValueStatisticsConfiguration {} *x_5_3_5; int x_5_3_6; int x_5_3_7; unsigned int x_5_3_8[1]; } x_2_2_5; } x_1_1_2; } x1; })fetchMostRecentConfiguration:(const int*)arg1 atLoiGroupId:(const struct uuid { unsigned char x1[16]; }*)arg2 beforeTime:(double)arg3;
- (struct optional<CLMicroLocationConfigurationTable::Entry> { union { BOOL x_1_1_1; struct Entry { struct time_point<cl::chrono::CFAbsoluteTimeClock, std::chrono::duration<long double>> { struct duration<long double, std::ratio<1>> { long doublex_1_4_1; } x_1_3_1; } x_2_2_1; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __short { BOOL x_1_7_1[23]; unsigned char x_1_7_2[0]; unsigned int x_1_7_3 : 7; unsigned int x_1_7_4 : 1; } x_1_6_1; struct __long { char *x_2_7_1; unsigned long long x_2_7_2; unsigned int x_2_7_3 : 63; unsigned int x_2_7_4 : 1; } x_1_6_2; struct __raw { unsigned long long x_3_7_1[3]; } x_1_6_3; } x_1_5_1; } x_1_4_1; } x_2_3_1; } x_2_2_2; struct uuid { unsigned char x_3_3_1[16]; } x_2_2_3; int x_2_2_4; struct Configuration { int (**x_5_3_1)(); double x_5_3_2; struct WifiHistogram {} *x_5_3_3; struct AnchorAppearanceConfiguration {} *x_5_3_4; struct AnchorValueStatisticsConfiguration {} *x_5_3_5; int x_5_3_6; int x_5_3_7; unsigned int x_5_3_8[1]; } x_2_2_5; } x_1_1_2; } x1; })fetchMostRecentConfiguration:(const int*)arg1 atLoiType:(const void*)arg2 loiGroupId:(const void*)arg3 beforeTime:(struct optional<const double> { union { BOOL x_1_1_1; double x_1_1_2; } x1; bool x2; })arg4;
- (struct optional<CLMicroLocationConfigurationTable::Entry> { union { BOOL x_1_1_1; struct Entry { struct time_point<cl::chrono::CFAbsoluteTimeClock, std::chrono::duration<long double>> { struct duration<long double, std::ratio<1>> { long doublex_1_4_1; } x_1_3_1; } x_2_2_1; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __short { BOOL x_1_7_1[23]; unsigned char x_1_7_2[0]; unsigned int x_1_7_3 : 7; unsigned int x_1_7_4 : 1; } x_1_6_1; struct __long { char *x_2_7_1; unsigned long long x_2_7_2; unsigned int x_2_7_3 : 63; unsigned int x_2_7_4 : 1; } x_1_6_2; struct __raw { unsigned long long x_3_7_1[3]; } x_1_6_3; } x_1_5_1; } x_1_4_1; } x_2_3_1; } x_2_2_2; struct uuid { unsigned char x_3_3_1[16]; } x_2_2_3; int x_2_2_4; struct Configuration { int (**x_5_3_1)(); double x_5_3_2; struct WifiHistogram {} *x_5_3_3; struct AnchorAppearanceConfiguration {} *x_5_3_4; struct AnchorValueStatisticsConfiguration {} *x_5_3_5; int x_5_3_6; int x_5_3_7; unsigned int x_5_3_8[1]; } x_2_2_5; } x_1_1_2; } x1; })fetchMostRecentWifiChannelHistogramAtLoi:(const struct uuid { unsigned char x1[16]; }*)arg1;
- (bool)insertEntries:(const void*)arg1;

@end