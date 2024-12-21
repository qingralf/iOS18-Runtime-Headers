/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
 */

@interface CBServiceUUIDParamInfo : NSObject <CUXPCCodable> {
    NSData * _blobData;
    NSData * _maskData;
    NSData * _serviceUUID;
}

@property (nonatomic, copy) NSData *blobData;
@property (nonatomic, copy) NSData *maskData;
@property (nonatomic, copy) NSData *serviceUUID;

- (void).cxx_destruct;
- (id)blobData;
- (id)description;
- (void)encodeWithXPCObject:(id)arg1;
- (unsigned long long)hash;
- (id)initWithXPCObject:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (id)maskData;
- (id)serviceUUID;
- (void)setBlobData:(id)arg1;
- (void)setMaskData:(id)arg1;
- (void)setServiceUUID:(id)arg1;

@end