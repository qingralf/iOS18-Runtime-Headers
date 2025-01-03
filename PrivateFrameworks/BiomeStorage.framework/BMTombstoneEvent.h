/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BiomeStorage.framework/BiomeStorage
 */

@interface BMTombstoneEvent : NSObject <BMProtoBufWrapper, BMStoreData, NSSecureCoding> {
    unsigned int  _dataVersion;
    unsigned long long  _deletionReason;
    double  _eventTimestamp;
    unsigned long long  _length;
    unsigned long long  _offset;
    NSString * _policyID;
    NSString * _processName;
    NSString * _segmentName;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic, readonly) unsigned long long deletionReason;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double eventTimestamp;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long length;
@property (nonatomic, readonly) unsigned long long offset;
@property (nonatomic, readonly) NSString *policyID;
@property (nonatomic, readonly) NSString *processName;
@property (nonatomic, readonly) NSString *segmentName;
@property (readonly) Class superclass;

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (unsigned int)latestDataVersion;
+ (id)new;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithSegmentName:(id)arg1 offset:(unsigned long long)arg2 length:(unsigned long long)arg3 eventTimestamp:(double)arg4 reason:(unsigned long long)arg5 policyID:(id)arg6 processName:(id)arg7;
- (unsigned int)dataVersion;
- (unsigned long long)deletionReason;
- (id)description;
- (id)encodeAsProto;
- (void)encodeWithCoder:(id)arg1;
- (double)eventTimestamp;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (id)initWithSegmentName:(id)arg1 offset:(unsigned long long)arg2 length:(unsigned long long)arg3 eventTimestamp:(double)arg4 reason:(unsigned long long)arg5 policyID:(id)arg6;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (unsigned long long)length;
- (unsigned long long)offset;
- (id)policyID;
- (id)processName;
- (id)proto;
- (id)segmentName;
- (id)serialize;

@end
