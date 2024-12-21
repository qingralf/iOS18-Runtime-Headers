/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BiomeLibrary.framework/BiomeLibrary
 */

@interface BMContextSyncCellularAvailabilityStatus : BMEventBase <BMStoreData> {
    NSString * _ID;
    bool  _aboveThreshold;
    unsigned int  _dataVersion;
    int  _deviceRegistrationStatus;
    int  _deviceType;
    NSString * _deviceUUID;
    bool  _hasAboveThreshold;
    bool  _hasRaw_latestStrongTimeStamp;
    bool  _hasRaw_timeStamp;
    int  _previousDeviceRegistrationStatus;
    double  _raw_latestStrongTimeStamp;
    double  _raw_timeStamp;
}

@property (nonatomic, readonly) NSString *ID;
@property (nonatomic, readonly) bool aboveThreshold;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) int deviceRegistrationStatus;
@property (nonatomic, readonly) int deviceType;
@property (nonatomic, readonly) NSString *deviceUUID;
@property (nonatomic) bool hasAboveThreshold;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSDate *latestStrongTimeStamp;
@property (nonatomic, readonly) int previousDeviceRegistrationStatus;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSDate *timeStamp;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (unsigned int)latestDataVersion;
+ (id)protoFields;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (id)ID;
- (bool)aboveThreshold;
- (unsigned int)dataVersion;
- (id)description;
- (int)deviceRegistrationStatus;
- (int)deviceType;
- (id)deviceUUID;
- (bool)hasAboveThreshold;
- (id)initByReadFrom:(id)arg1;
- (id)initWithID:(id)arg1 deviceUUID:(id)arg2 timeStamp:(id)arg3 deviceType:(int)arg4 deviceRegistrationStatus:(int)arg5 previousDeviceRegistrationStatus:(int)arg6;
- (id)initWithID:(id)arg1 deviceUUID:(id)arg2 timeStamp:(id)arg3 deviceType:(int)arg4 deviceRegistrationStatus:(int)arg5 previousDeviceRegistrationStatus:(int)arg6 aboveThreshold:(id)arg7 latestStrongTimeStamp:(id)arg8;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)latestStrongTimeStamp;
- (int)previousDeviceRegistrationStatus;
- (id)serialize;
- (void)setHasAboveThreshold:(bool)arg1;
- (id)timeStamp;
- (void)writeTo:(id)arg1;

@end