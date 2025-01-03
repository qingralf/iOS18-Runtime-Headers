/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ExternalAccessory.framework/ExternalAccessory
 */

@interface EAAccessoryInternal : NSObject {
    id /* block */  _WiFiCredentialsCompletionBlock;
    NSDictionary * _audioPorts;
    NSNumber * _averageFrameworkDelay;
    NSNumber * _averageXPCDelay;
    NSString * _bonjourName;
    NSArray * _cameraComponents;
    unsigned int  _capabilities;
    NSData * _certData;
    NSData * _certSerial;
    int  _classType;
    bool  _connected;
    unsigned int  _connectionID;
    NSString * _coreAccessoryPrimaryUUID;
    bool  _createdByCoreAccessories;
    <EAAccessoryDelegate> * _delegate;
    unsigned long long  _destinationSharingOptions;
    NSString * _dockType;
    NSMutableArray * _enqueuedNMEASentences;
    NSMutableArray * _enqueuedNMEATimestamps;
    unsigned int  _eqIndex;
    NSArray * _eqNames;
    NSString * _firmwareRevisionActive;
    NSString * _firmwareRevisionPending;
    NSString * _hardwareRevision;
    bool  _hasIPConnection;
    NSNumber * _highestFrameworkDelay;
    NSNumber * _highestXPCDelay;
    bool  _isAvailableOverBonjour;
    NSLock * _locationLock;
    int  _locationSentenceTypesMask;
    NSString * _macAddress;
    NSString * _manufacturer;
    NSString * _modelNumber;
    NSString * _name;
    unsigned long long  _nmeaSentenceAddCounter;
    unsigned long long  _nmeaSentenceGetCounter;
    bool  _notPresentInIAPAccessoriesArray;
    id /* block */  _pairingCompletionBlock;
    bool  _pointOfInterestHandoffEnabled;
    NSString * _ppid;
    NSString * _preferredApp;
    NSDictionary * _protocolDetails;
    NSDictionary * _protocols;
    NSString * _regionCode;
    NSString * _serialNumber;
    NSMutableArray * _sessionsList;
    long long  _transportType;
    NSDictionary * _vehicleInfoInitialData;
    NSDictionary * _vehicleInfoSupportedTypes;
}

@property (copy) id /* block */ WiFiCredentialsCompletionBlock;
@property (nonatomic, retain) NSDictionary *audioPorts;
@property (nonatomic, retain) NSNumber *averageFrameworkDelay;
@property (nonatomic, retain) NSNumber *averageXPCDelay;
@property (nonatomic, copy) NSString *bonjourName;
@property (nonatomic, retain) NSArray *cameraComponents;
@property (nonatomic) unsigned int capabilities;
@property (nonatomic, copy) NSData *certData;
@property (nonatomic, copy) NSData *certSerial;
@property (nonatomic) int classType;
@property (nonatomic) bool connected;
@property (nonatomic) unsigned int connectionID;
@property (nonatomic, copy) NSString *coreAccessoryPrimaryUUID;
@property bool createdByCoreAccessories;
@property (nonatomic) <EAAccessoryDelegate> *delegate;
@property unsigned long long destinationSharingOptions;
@property (nonatomic, copy) NSString *dockType;
@property (nonatomic, retain) NSMutableArray *enqueuedNMEASentences;
@property (nonatomic, retain) NSMutableArray *enqueuedNMEATimestamps;
@property (nonatomic) unsigned int eqIndex;
@property (nonatomic, retain) NSArray *eqNames;
@property (nonatomic, copy) NSString *firmwareRevisionActive;
@property (nonatomic, copy) NSString *firmwareRevisionPending;
@property (nonatomic, copy) NSString *hardwareRevision;
@property (nonatomic) bool hasIPConnection;
@property (nonatomic, retain) NSNumber *highestFrameworkDelay;
@property (nonatomic, retain) NSNumber *highestXPCDelay;
@property (nonatomic) bool isAvailableOverBonjour;
@property (nonatomic) int locationSentenceTypesMask;
@property (nonatomic, copy) NSString *macAddress;
@property (nonatomic, copy) NSString *manufacturer;
@property (nonatomic, copy) NSString *modelNumber;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) unsigned long long nmeaSentenceAddCounter;
@property (nonatomic) unsigned long long nmeaSentenceGetCounter;
@property (nonatomic) bool notPresentInIAPAccessoriesArray;
@property (copy) id /* block */ pairingCompletionBlock;
@property bool pointOfInterestHandoffEnabled;
@property (nonatomic, copy) NSString *ppid;
@property (nonatomic, copy) NSString *preferredApp;
@property (nonatomic, copy) NSDictionary *protocolDetails;
@property (nonatomic, retain) NSDictionary *protocols;
@property (nonatomic, copy) NSString *regionCode;
@property (nonatomic, copy) NSString *serialNumber;
@property (nonatomic, readonly) NSArray *sessionsList;
@property (nonatomic) long long transportType;
@property (nonatomic, retain) NSDictionary *vehicleInfoInitialData;
@property (nonatomic, retain) NSDictionary *vehicleInfoSupportedTypes;

- (id /* block */)WiFiCredentialsCompletionBlock;
- (void)addSession:(id)arg1;
- (id)audioPorts;
- (id)averageFrameworkDelay;
- (id)averageXPCDelay;
- (id)bonjourName;
- (id)cameraComponents;
- (unsigned int)capabilities;
- (id)certData;
- (id)certSerial;
- (int)classType;
- (bool)connected;
- (unsigned int)connectionID;
- (id)coreAccessoryPrimaryUUID;
- (bool)createdByCoreAccessories;
- (void)dealloc;
- (id)delegate;
- (unsigned long long)destinationSharingOptions;
- (id)dockType;
- (id)enqueuedNMEASentences;
- (id)enqueuedNMEATimestamps;
- (unsigned int)eqIndex;
- (id)eqNames;
- (id)firmwareRevisionActive;
- (id)firmwareRevisionPending;
- (id)hardwareRevision;
- (bool)hasIPConnection;
- (id)highestFrameworkDelay;
- (id)highestXPCDelay;
- (id)init;
- (bool)isAvailableOverBonjour;
- (int)locationSentenceTypesMask;
- (id)macAddress;
- (id)manufacturer;
- (id)modelNumber;
- (id)name;
- (unsigned long long)nmeaSentenceAddCounter;
- (unsigned long long)nmeaSentenceGetCounter;
- (bool)notPresentInIAPAccessoriesArray;
- (id /* block */)pairingCompletionBlock;
- (bool)pointOfInterestHandoffEnabled;
- (id)ppid;
- (id)preferredApp;
- (id)protocolDetails;
- (id)protocols;
- (id)regionCode;
- (void)removeSession:(id)arg1;
- (id)serialNumber;
- (id)sessionsList;
- (void)setAudioPorts:(id)arg1;
- (void)setAverageFrameworkDelay:(id)arg1;
- (void)setAverageXPCDelay:(id)arg1;
- (void)setBonjourName:(id)arg1;
- (void)setCameraComponents:(id)arg1;
- (void)setCapabilities:(unsigned int)arg1;
- (void)setCertData:(id)arg1;
- (void)setCertSerial:(id)arg1;
- (void)setClassType:(int)arg1;
- (void)setConnected:(bool)arg1;
- (void)setConnectionID:(unsigned int)arg1;
- (void)setCoreAccessoryPrimaryUUID:(id)arg1;
- (void)setCreatedByCoreAccessories:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDestinationSharingOptions:(unsigned long long)arg1;
- (void)setDockType:(id)arg1;
- (void)setEnqueuedNMEASentences:(id)arg1;
- (void)setEnqueuedNMEATimestamps:(id)arg1;
- (void)setEqIndex:(unsigned int)arg1;
- (void)setEqNames:(id)arg1;
- (void)setFirmwareRevisionActive:(id)arg1;
- (void)setFirmwareRevisionPending:(id)arg1;
- (void)setHardwareRevision:(id)arg1;
- (void)setHasIPConnection:(bool)arg1;
- (void)setHighestFrameworkDelay:(id)arg1;
- (void)setHighestXPCDelay:(id)arg1;
- (void)setIsAvailableOverBonjour:(bool)arg1;
- (void)setLocationSentenceTypesMask:(int)arg1;
- (void)setMacAddress:(id)arg1;
- (void)setManufacturer:(id)arg1;
- (void)setModelNumber:(id)arg1;
- (void)setName:(id)arg1;
- (void)setNmeaSentenceAddCounter:(unsigned long long)arg1;
- (void)setNmeaSentenceGetCounter:(unsigned long long)arg1;
- (void)setNotPresentInIAPAccessoriesArray:(bool)arg1;
- (void)setPairingCompletionBlock:(id /* block */)arg1;
- (void)setPointOfInterestHandoffEnabled:(bool)arg1;
- (void)setPpid:(id)arg1;
- (void)setPreferredApp:(id)arg1;
- (void)setProtocolDetails:(id)arg1;
- (void)setProtocols:(id)arg1;
- (void)setRegionCode:(id)arg1;
- (void)setSerialNumber:(id)arg1;
- (void)setTransportType:(long long)arg1;
- (void)setVehicleInfoInitialData:(id)arg1;
- (void)setVehicleInfoSupportedTypes:(id)arg1;
- (void)setWiFiCredentialsCompletionBlock:(id /* block */)arg1;
- (long long)transportType;
- (id)vehicleInfoInitialData;
- (id)vehicleInfoSupportedTypes;

@end
