/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BiomeLibrary.framework/BiomeLibrary
 */

@interface BMDeviceAccessoryChargingSession : BMEventBase <BMStoreData> {
    unsigned int  _dataVersion;
    double  _endTimestamp;
    unsigned int  _firmwareVersion;
    bool  _hasEndTimestamp;
    bool  _hasFirmwareVersion;
    bool  _hasProductID;
    bool  _hasStartTimestamp;
    unsigned int  _productID;
    int  _side;
    double  _startTimestamp;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double endTimestamp;
@property (nonatomic, readonly) unsigned int firmwareVersion;
@property (nonatomic) bool hasEndTimestamp;
@property (nonatomic) bool hasFirmwareVersion;
@property (nonatomic) bool hasProductID;
@property (nonatomic) bool hasStartTimestamp;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned int productID;
@property (nonatomic, readonly) int side;
@property (nonatomic, readonly) double startTimestamp;
@property (readonly) Class superclass;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (unsigned int)latestDataVersion;
+ (id)protoFields;
+ (id)validKeyPaths;

- (unsigned int)dataVersion;
- (id)description;
- (double)endTimestamp;
- (unsigned int)firmwareVersion;
- (bool)hasEndTimestamp;
- (bool)hasFirmwareVersion;
- (bool)hasProductID;
- (bool)hasStartTimestamp;
- (id)initByReadFrom:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithProductID:(id)arg1 firmwareVersion:(id)arg2 startTimestamp:(id)arg3 endTimestamp:(id)arg4 side:(int)arg5;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (unsigned int)productID;
- (id)serialize;
- (void)setHasEndTimestamp:(bool)arg1;
- (void)setHasFirmwareVersion:(bool)arg1;
- (void)setHasProductID:(bool)arg1;
- (void)setHasStartTimestamp:(bool)arg1;
- (int)side;
- (double)startTimestamp;
- (void)writeTo:(id)arg1;

@end
