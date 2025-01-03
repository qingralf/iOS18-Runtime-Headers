/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleCV3D.framework/AppleCV3D
 */

@interface AppleCommonSchemaDeviceInfo : PBCodable <AppleCommonSchemaDeviceInfo, NSSecureCoding> {
    NSString * _deviceId;
    NSString * _deviceType;
    bool  _isInternal;
    NSString * _systemBuild;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *deviceId;
@property (nonatomic, copy) NSString *deviceType;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isInternal;
@property (nonatomic, readonly) NSData *jsonData;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *systemBuild;

- (void).cxx_destruct;
- (id)deviceId;
- (id)deviceType;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isInternal;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setDeviceId:(id)arg1;
- (void)setDeviceType:(id)arg1;
- (void)setIsInternal:(bool)arg1;
- (void)setSystemBuild:(id)arg1;
- (id)systemBuild;
- (void)writeTo:(id)arg1;

@end
