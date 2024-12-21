/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Matter.framework/Matter
 */

@interface MTRCommissionerControlClusterCommissionNodeParams : NSObject <NSCopying> {
    NSNumber * _requestID;
    NSNumber * _responseTimeoutSeconds;
    NSNumber * _serverSideProcessingTimeout;
    NSNumber * _timedInvokeTimeoutMs;
}

@property (nonatomic, copy) NSNumber *requestID;
@property (nonatomic, copy) NSNumber *responseTimeoutSeconds;
@property (nonatomic, copy) NSNumber *serverSideProcessingTimeout;
@property (nonatomic, copy) NSNumber *timedInvokeTimeoutMs;

- (void).cxx_destruct;
- (id)_encodeAsDataValue:(id*)arg1;
- (struct ChipError { unsigned int x1; char *x2; unsigned int x3; })_encodeToTLVReader:(struct PacketBufferTLVReader { unsigned int x1; void *x2; struct Tag { unsigned long long x_3_1_1; } x3; unsigned long long x4; struct TLVBackingStore {} *x5; char *x6; char *x7; unsigned int x8; unsigned int x9; int x10; unsigned short x11; bool x12; struct PacketBufferHandle { struct PacketBuffer {} *x_13_1_1; } x13; }*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)requestID;
- (id)responseTimeoutSeconds;
- (id)serverSideProcessingTimeout;
- (void)setRequestID:(id)arg1;
- (void)setResponseTimeoutSeconds:(id)arg1;
- (void)setServerSideProcessingTimeout:(id)arg1;
- (void)setTimedInvokeTimeoutMs:(id)arg1;
- (id)timedInvokeTimeoutMs;

@end