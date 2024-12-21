/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Matter.framework/Matter
 */

@interface MTRUnitTestingClusterTestSecondBatchHelperRequestParams : NSObject <NSCopying> {
    NSNumber * _fillCharacter;
    NSNumber * _serverSideProcessingTimeout;
    NSNumber * _sizeOfResponseBuffer;
    NSNumber * _sleepBeforeResponseTimeMs;
    NSNumber * _timedInvokeTimeoutMs;
}

@property (nonatomic, copy) NSNumber *fillCharacter;
@property (nonatomic, copy) NSNumber *serverSideProcessingTimeout;
@property (nonatomic, copy) NSNumber *sizeOfResponseBuffer;
@property (nonatomic, copy) NSNumber *sleepBeforeResponseTimeMs;
@property (nonatomic, copy) NSNumber *timedInvokeTimeoutMs;

- (void).cxx_destruct;
- (id)_encodeAsDataValue:(id*)arg1;
- (struct ChipError { unsigned int x1; char *x2; unsigned int x3; })_encodeToTLVReader:(struct PacketBufferTLVReader { unsigned int x1; void *x2; struct Tag { unsigned long long x_3_1_1; } x3; unsigned long long x4; struct TLVBackingStore {} *x5; char *x6; char *x7; unsigned int x8; unsigned int x9; int x10; unsigned short x11; bool x12; struct PacketBufferHandle { struct PacketBuffer {} *x_13_1_1; } x13; }*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)fillCharacter;
- (id)init;
- (id)serverSideProcessingTimeout;
- (void)setFillCharacter:(id)arg1;
- (void)setServerSideProcessingTimeout:(id)arg1;
- (void)setSizeOfResponseBuffer:(id)arg1;
- (void)setSleepBeforeResponseTimeMs:(id)arg1;
- (void)setTimedInvokeTimeoutMs:(id)arg1;
- (id)sizeOfResponseBuffer;
- (id)sleepBeforeResponseTimeMs;
- (id)timedInvokeTimeoutMs;

@end