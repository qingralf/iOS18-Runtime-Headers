/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MicroLocationDaemon.framework/MicroLocationDaemon
 */

@interface ULServiceMO : NSManagedObject

@property (nonatomic, retain) NSString *clientId;
@property (nonatomic) double lastActiveTimestamp;
@property (nonatomic) long long locationTypes;
@property (nonatomic) int serviceType;
@property (nonatomic, retain) NSString *serviceUUID;
@property (nonatomic, retain) NSString *userId;

+ (id)createFromEntry:(const void*)arg1 inManagedObjectContext:(id)arg2;
+ (id)fetchRequest;

- (struct optional<CLMiLoServiceTable::Entry> { union { BOOL x_1_1_1; struct Entry { unsigned long long x_2_2_1; struct uuid { unsigned char x_2_3_1[16]; } x_2_2_2; struct time_point<cl::chrono::CFAbsoluteTimeClock, std::chrono::duration<long double>> { struct duration<long double, std::ratio<1>> { long doublex_1_4_1; } x_3_3_1; } x_2_2_3; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __short { BOOL x_1_7_1[23]; unsigned char x_1_7_2[0]; unsigned int x_1_7_3 : 7; unsigned int x_1_7_4 : 1; } x_1_6_1; struct __long { char *x_2_7_1; unsigned long long x_2_7_2; unsigned int x_2_7_3 : 63; unsigned int x_2_7_4 : 1; } x_1_6_2; struct __raw { unsigned long long x_3_7_1[3]; } x_1_6_3; } x_1_5_1; } x_1_4_1; } x_4_3_1; } x_2_2_4; unsigned long long x_2_2_5; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __short { BOOL x_1_7_1[23]; unsigned char x_1_7_2[0]; unsigned int x_1_7_3 : 7; unsigned int x_1_7_4 : 1; } x_1_6_1; struct __long { char *x_2_7_1; unsigned long long x_2_7_2; unsigned int x_2_7_3 : 63; unsigned int x_2_7_4 : 1; } x_1_6_2; struct __raw { unsigned long long x_3_7_1[3]; } x_1_6_3; } x_1_5_1; } x_1_4_1; } x_6_3_1; } x_2_2_6; } x_1_1_2; } x1; })convertToEntry;

@end