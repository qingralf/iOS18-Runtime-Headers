/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Matter.framework/Matter
 */

@interface MTRUnitTestingClusterTestComplexNullableOptionalRequestParams : NSObject <NSCopying> {
    NSNumber * _nullableInt;
    NSArray * _nullableList;
    NSNumber * _nullableOptionalInt;
    NSArray * _nullableOptionalList;
    NSString * _nullableOptionalString;
    MTRUnitTestingClusterSimpleStruct * _nullableOptionalStruct;
    NSString * _nullableString;
    MTRUnitTestingClusterSimpleStruct * _nullableStruct;
    NSNumber * _optionalInt;
    NSArray * _optionalList;
    NSString * _optionalString;
    MTRUnitTestingClusterSimpleStruct * _optionalStruct;
    NSNumber * _serverSideProcessingTimeout;
    NSNumber * _timedInvokeTimeoutMs;
}

@property (nonatomic, copy) NSNumber *nullableInt;
@property (nonatomic, copy) NSArray *nullableList;
@property (nonatomic, copy) NSNumber *nullableOptionalInt;
@property (nonatomic, copy) NSArray *nullableOptionalList;
@property (nonatomic, copy) NSString *nullableOptionalString;
@property (nonatomic, copy) MTRUnitTestingClusterSimpleStruct *nullableOptionalStruct;
@property (nonatomic, copy) NSString *nullableString;
@property (nonatomic, copy) MTRUnitTestingClusterSimpleStruct *nullableStruct;
@property (nonatomic, copy) NSNumber *optionalInt;
@property (nonatomic, copy) NSArray *optionalList;
@property (nonatomic, copy) NSString *optionalString;
@property (nonatomic, copy) MTRUnitTestingClusterSimpleStruct *optionalStruct;
@property (nonatomic, copy) NSNumber *serverSideProcessingTimeout;
@property (nonatomic, copy) NSNumber *timedInvokeTimeoutMs;

- (void).cxx_destruct;
- (id)_encodeAsDataValue:(id*)arg1;
- (struct ChipError { unsigned int x1; char *x2; unsigned int x3; })_encodeToTLVReader:(struct PacketBufferTLVReader { unsigned int x1; void *x2; struct Tag { unsigned long long x_3_1_1; } x3; unsigned long long x4; struct TLVBackingStore {} *x5; char *x6; char *x7; unsigned int x8; unsigned int x9; int x10; unsigned short x11; bool x12; struct PacketBufferHandle { struct PacketBuffer {} *x_13_1_1; } x13; }*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)nullableInt;
- (id)nullableList;
- (id)nullableOptionalInt;
- (id)nullableOptionalList;
- (id)nullableOptionalString;
- (id)nullableOptionalStruct;
- (id)nullableString;
- (id)nullableStruct;
- (id)optionalInt;
- (id)optionalList;
- (id)optionalString;
- (id)optionalStruct;
- (id)serverSideProcessingTimeout;
- (void)setNullableInt:(id)arg1;
- (void)setNullableList:(id)arg1;
- (void)setNullableOptionalInt:(id)arg1;
- (void)setNullableOptionalList:(id)arg1;
- (void)setNullableOptionalString:(id)arg1;
- (void)setNullableOptionalStruct:(id)arg1;
- (void)setNullableString:(id)arg1;
- (void)setNullableStruct:(id)arg1;
- (void)setOptionalInt:(id)arg1;
- (void)setOptionalList:(id)arg1;
- (void)setOptionalString:(id)arg1;
- (void)setOptionalStruct:(id)arg1;
- (void)setServerSideProcessingTimeout:(id)arg1;
- (void)setTimedInvokeTimeoutMs:(id)arg1;
- (id)timedInvokeTimeoutMs;

@end