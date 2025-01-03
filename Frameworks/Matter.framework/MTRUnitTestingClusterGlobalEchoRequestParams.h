/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Matter.framework/Matter
 */

@interface MTRUnitTestingClusterGlobalEchoRequestParams : NSObject <NSCopying> {
    MTRDataTypeTestGlobalStruct * _field1;
    NSNumber * _field2;
    NSNumber * _serverSideProcessingTimeout;
    NSNumber * _timedInvokeTimeoutMs;
}

@property (nonatomic, copy) MTRDataTypeTestGlobalStruct *field1;
@property (nonatomic, copy) NSNumber *field2;
@property (nonatomic, copy) NSNumber *serverSideProcessingTimeout;
@property (nonatomic, copy) NSNumber *timedInvokeTimeoutMs;

- (void).cxx_destruct;
- (id)_encodeAsDataValue:(id*)arg1;
- (struct ChipError { unsigned int x1; char *x2; unsigned int x3; })_encodeToTLVReader:(struct PacketBufferTLVReader { unsigned int x1; void *x2; struct Tag { unsigned long long x_3_1_1; } x3; unsigned long long x4; struct TLVBackingStore {} *x5; char *x6; char *x7; unsigned int x8; unsigned int x9; int x10; unsigned short x11; bool x12; struct PacketBufferHandle { struct PacketBuffer {} *x_13_1_1; } x13; }*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)field1;
- (id)field2;
- (id)init;
- (id)serverSideProcessingTimeout;
- (void)setField1:(id)arg1;
- (void)setField2:(id)arg1;
- (void)setServerSideProcessingTimeout:(id)arg1;
- (void)setTimedInvokeTimeoutMs:(id)arg1;
- (id)timedInvokeTimeoutMs;

@end
