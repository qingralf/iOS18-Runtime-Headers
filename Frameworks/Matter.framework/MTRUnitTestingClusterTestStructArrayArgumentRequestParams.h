/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Matter.framework/Matter
 */

@interface MTRUnitTestingClusterTestStructArrayArgumentRequestParams : NSObject <NSCopying> {
    NSArray * _arg1;
    NSArray * _arg2;
    NSArray * _arg3;
    NSArray * _arg4;
    NSNumber * _arg5;
    NSNumber * _arg6;
    NSNumber * _serverSideProcessingTimeout;
    NSNumber * _timedInvokeTimeoutMs;
}

@property (nonatomic, copy) NSArray *arg1;
@property (nonatomic, copy) NSArray *arg2;
@property (nonatomic, copy) NSArray *arg3;
@property (nonatomic, copy) NSArray *arg4;
@property (nonatomic, copy) NSNumber *arg5;
@property (nonatomic, copy) NSNumber *arg6;
@property (nonatomic, copy) NSNumber *serverSideProcessingTimeout;
@property (nonatomic, copy) NSNumber *timedInvokeTimeoutMs;

- (void).cxx_destruct;
- (id)_encodeAsDataValue:(id*)arg1;
- (struct ChipError { unsigned int x1; char *x2; unsigned int x3; })_encodeToTLVReader:(struct PacketBufferTLVReader { unsigned int x1; void *x2; struct Tag { unsigned long long x_3_1_1; } x3; unsigned long long x4; struct TLVBackingStore {} *x5; char *x6; char *x7; unsigned int x8; unsigned int x9; int x10; unsigned short x11; bool x12; struct PacketBufferHandle { struct PacketBuffer {} *x_13_1_1; } x13; }*)arg1;
- (id)arg1;
- (id)arg2;
- (id)arg3;
- (id)arg4;
- (id)arg5;
- (id)arg6;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)serverSideProcessingTimeout;
- (void)setArg1:(id)arg1;
- (void)setArg2:(id)arg1;
- (void)setArg3:(id)arg1;
- (void)setArg4:(id)arg1;
- (void)setArg5:(id)arg1;
- (void)setArg6:(id)arg1;
- (void)setServerSideProcessingTimeout:(id)arg1;
- (void)setTimedInvokeTimeoutMs:(id)arg1;
- (id)timedInvokeTimeoutMs;

@end
