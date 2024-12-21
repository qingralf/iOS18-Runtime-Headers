/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
 */

@interface CBBLEServiceDataInfo : NSObject {
    bool  _connectable;
    NSData * _serviceData;
    unsigned short  _serviceUUID16;
}

@property (nonatomic) bool connectable;
@property (nonatomic, copy) NSData *serviceData;
@property (nonatomic) unsigned short serviceUUID16;

- (void).cxx_destruct;
- (bool)connectable;
- (id)serviceData;
- (unsigned short)serviceUUID16;
- (void)setConnectable:(bool)arg1;
- (void)setServiceData:(id)arg1;
- (void)setServiceUUID16:(unsigned short)arg1;

@end