/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMAccessoryDiagnosticInfoProtoAppleMediaAccessoryDiagnosticInfo : PBCodable <NSCopying> {
    HMAccessoryDiagnosticInfoProtoCloudInfo * _cloudInfo;
    HMAccessoryDiagnosticInfoProtoCurrentAccessoryInfo * _currentAccessoryInfo;
    HMRemoteEventRouterProtoServerDiagnosticInfo * _eventRouterServerInfo;
    double  _generationTime;
    struct { 
        unsigned int generationTime : 1; 
        unsigned int numAppleMediaAccessories : 1; 
        unsigned int numResidents : 1; 
        unsigned int sfProblemFlags : 1; 
        unsigned int primaryResidentStatus : 1; 
    }  _has;
    HMAccessoryDiagnosticInfoProtoIdsInfo * _idsInfo;
    NSString * _manufacturer;
    NSString * _mediaRouteIdString;
    NSString * _modelIdentifier;
    NSMutableArray * _nearbyVisibleDeviceInfos;
    NSMutableArray * _networkInfos;
    NSMutableArray * _networkServiceInfos;
    NSMutableArray * _networkVisibleDeviceInfos;
    long long  _numAppleMediaAccessories;
    long long  _numResidents;
    int  _primaryResidentStatus;
    NSString * _regionInfo;
    NSString * _serialNumber;
    unsigned long long  _sfProblemFlags;
    HMSoftwareUpdateEventProtoSoftwareUpdateDescriptor * _softwareUpdateDescriptor;
    HMSoftwareUpdateEventProtoSoftwareUpdateProgress * _softwareUpdateProgress;
    NSString * _softwareVersion;
    HMAccessoryInfoProtoWifiNetworkInfoEvent * _wifiInfo;
}

@property (nonatomic, retain) HMAccessoryDiagnosticInfoProtoCloudInfo *cloudInfo;
@property (nonatomic, retain) HMAccessoryDiagnosticInfoProtoCurrentAccessoryInfo *currentAccessoryInfo;
@property (nonatomic, retain) HMRemoteEventRouterProtoServerDiagnosticInfo *eventRouterServerInfo;
@property (nonatomic) double generationTime;
@property (nonatomic, readonly) bool hasCloudInfo;
@property (nonatomic, readonly) bool hasCurrentAccessoryInfo;
@property (nonatomic, readonly) bool hasEventRouterServerInfo;
@property (nonatomic) bool hasGenerationTime;
@property (nonatomic, readonly) bool hasIdsInfo;
@property (nonatomic, readonly) bool hasManufacturer;
@property (nonatomic, readonly) bool hasMediaRouteIdString;
@property (nonatomic, readonly) bool hasModelIdentifier;
@property (nonatomic) bool hasNumAppleMediaAccessories;
@property (nonatomic) bool hasNumResidents;
@property (nonatomic) bool hasPrimaryResidentStatus;
@property (nonatomic, readonly) bool hasRegionInfo;
@property (nonatomic, readonly) bool hasSerialNumber;
@property (nonatomic) bool hasSfProblemFlags;
@property (nonatomic, readonly) bool hasSoftwareUpdateDescriptor;
@property (nonatomic, readonly) bool hasSoftwareUpdateProgress;
@property (nonatomic, readonly) bool hasSoftwareVersion;
@property (nonatomic, readonly) bool hasWifiInfo;
@property (nonatomic, retain) HMAccessoryDiagnosticInfoProtoIdsInfo *idsInfo;
@property (nonatomic, retain) NSString *manufacturer;
@property (nonatomic, retain) NSString *mediaRouteIdString;
@property (nonatomic, retain) NSString *modelIdentifier;
@property (nonatomic, retain) NSMutableArray *nearbyVisibleDeviceInfos;
@property (nonatomic, retain) NSMutableArray *networkInfos;
@property (nonatomic, retain) NSMutableArray *networkServiceInfos;
@property (nonatomic, retain) NSMutableArray *networkVisibleDeviceInfos;
@property (nonatomic) long long numAppleMediaAccessories;
@property (nonatomic) long long numResidents;
@property (nonatomic) int primaryResidentStatus;
@property (nonatomic, retain) NSString *regionInfo;
@property (nonatomic, retain) NSString *serialNumber;
@property (nonatomic) unsigned long long sfProblemFlags;
@property (nonatomic, retain) HMSoftwareUpdateEventProtoSoftwareUpdateDescriptor *softwareUpdateDescriptor;
@property (nonatomic, retain) HMSoftwareUpdateEventProtoSoftwareUpdateProgress *softwareUpdateProgress;
@property (nonatomic, retain) NSString *softwareVersion;
@property (nonatomic, retain) HMAccessoryInfoProtoWifiNetworkInfoEvent *wifiInfo;

+ (Class)nearbyVisibleDeviceInfosType;
+ (Class)networkInfoType;
+ (Class)networkServiceInfoType;
+ (Class)networkVisibleDeviceInfosType;

- (void).cxx_destruct;
- (int)StringAsPrimaryResidentStatus:(id)arg1;
- (void)addNearbyVisibleDeviceInfos:(id)arg1;
- (void)addNetworkInfo:(id)arg1;
- (void)addNetworkServiceInfo:(id)arg1;
- (void)addNetworkVisibleDeviceInfos:(id)arg1;
- (void)clearNearbyVisibleDeviceInfos;
- (void)clearNetworkInfos;
- (void)clearNetworkServiceInfos;
- (void)clearNetworkVisibleDeviceInfos;
- (id)cloudInfo;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentAccessoryInfo;
- (id)description;
- (id)dictionaryRepresentation;
- (id)eventRouterServerInfo;
- (double)generationTime;
- (bool)hasCloudInfo;
- (bool)hasCurrentAccessoryInfo;
- (bool)hasEventRouterServerInfo;
- (bool)hasGenerationTime;
- (bool)hasIdsInfo;
- (bool)hasManufacturer;
- (bool)hasMediaRouteIdString;
- (bool)hasModelIdentifier;
- (bool)hasNumAppleMediaAccessories;
- (bool)hasNumResidents;
- (bool)hasPrimaryResidentStatus;
- (bool)hasRegionInfo;
- (bool)hasSerialNumber;
- (bool)hasSfProblemFlags;
- (bool)hasSoftwareUpdateDescriptor;
- (bool)hasSoftwareUpdateProgress;
- (bool)hasSoftwareVersion;
- (bool)hasWifiInfo;
- (unsigned long long)hash;
- (id)idsInfo;
- (bool)isEqual:(id)arg1;
- (id)manufacturer;
- (id)mediaRouteIdString;
- (void)mergeFrom:(id)arg1;
- (id)modelIdentifier;
- (id)nearbyVisibleDeviceInfos;
- (id)nearbyVisibleDeviceInfosAtIndex:(unsigned long long)arg1;
- (unsigned long long)nearbyVisibleDeviceInfosCount;
- (id)networkInfoAtIndex:(unsigned long long)arg1;
- (id)networkInfos;
- (unsigned long long)networkInfosCount;
- (id)networkServiceInfoAtIndex:(unsigned long long)arg1;
- (id)networkServiceInfos;
- (unsigned long long)networkServiceInfosCount;
- (id)networkVisibleDeviceInfos;
- (id)networkVisibleDeviceInfosAtIndex:(unsigned long long)arg1;
- (unsigned long long)networkVisibleDeviceInfosCount;
- (long long)numAppleMediaAccessories;
- (long long)numResidents;
- (int)primaryResidentStatus;
- (id)primaryResidentStatusAsString:(int)arg1;
- (bool)readFrom:(id)arg1;
- (id)regionInfo;
- (id)serialNumber;
- (void)setCloudInfo:(id)arg1;
- (void)setCurrentAccessoryInfo:(id)arg1;
- (void)setEventRouterServerInfo:(id)arg1;
- (void)setGenerationTime:(double)arg1;
- (void)setHasGenerationTime:(bool)arg1;
- (void)setHasNumAppleMediaAccessories:(bool)arg1;
- (void)setHasNumResidents:(bool)arg1;
- (void)setHasPrimaryResidentStatus:(bool)arg1;
- (void)setHasSfProblemFlags:(bool)arg1;
- (void)setIdsInfo:(id)arg1;
- (void)setManufacturer:(id)arg1;
- (void)setMediaRouteIdString:(id)arg1;
- (void)setModelIdentifier:(id)arg1;
- (void)setNearbyVisibleDeviceInfos:(id)arg1;
- (void)setNetworkInfos:(id)arg1;
- (void)setNetworkServiceInfos:(id)arg1;
- (void)setNetworkVisibleDeviceInfos:(id)arg1;
- (void)setNumAppleMediaAccessories:(long long)arg1;
- (void)setNumResidents:(long long)arg1;
- (void)setPrimaryResidentStatus:(int)arg1;
- (void)setRegionInfo:(id)arg1;
- (void)setSerialNumber:(id)arg1;
- (void)setSfProblemFlags:(unsigned long long)arg1;
- (void)setSoftwareUpdateDescriptor:(id)arg1;
- (void)setSoftwareUpdateProgress:(id)arg1;
- (void)setSoftwareVersion:(id)arg1;
- (void)setWifiInfo:(id)arg1;
- (unsigned long long)sfProblemFlags;
- (id)softwareUpdateDescriptor;
- (id)softwareUpdateProgress;
- (id)softwareVersion;
- (id)wifiInfo;
- (void)writeTo:(id)arg1;

@end