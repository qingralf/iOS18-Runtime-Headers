/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WPDaemon.framework/WPDaemon
 */

@interface WPDConnection : NSObject <CBPeripheralDelegate> {
    CBCentral * _central;
    CBCharacteristic * _centralCharacteristic;
    CBService * _centralService;
    NSString * _characteristicService;
    WPCharacteristic * _characteristicToSend;
    NSDictionary * _charsAndServicesToDiscover;
    WPDClient * _client;
    bool  _connectablePacket;
    long long  _connectionType;
    unsigned long long  _dataLeftToSend;
    bool  _didConnectSent;
    CBPeripheral * _peripheral;
    long long  _recentRole;
    CBPeripheralManager * _sendDataManager;
    NSMutableSet * _subscribedCharacteristics;
    NSObject<OS_voucher> * _voucher;
}

@property (retain) CBCentral *central;
@property (retain) CBCharacteristic *centralCharacteristic;
@property (retain) CBService *centralService;
@property (retain) NSString *characteristicService;
@property (retain) WPCharacteristic *characteristicToSend;
@property (retain) NSDictionary *charsAndServicesToDiscover;
@property (nonatomic) WPDClient *client;
@property bool connectablePacket;
@property (getter=fetchConnectionType, nonatomic) long long connectionType;
@property unsigned long long dataLeftToSend;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic) bool didConnectSent;
@property (readonly) unsigned long long hash;
@property (retain) CBPeripheral *peripheral;
@property (nonatomic) long long recentRole;
@property (retain) CBPeripheralManager *sendDataManager;
@property (nonatomic, retain) NSMutableSet *subscribedCharacteristics;
@property (readonly) Class superclass;
@property (retain) NSObject<OS_voucher> *voucher;

- (void).cxx_destruct;
- (id)central;
- (id)centralCharacteristic;
- (id)centralService;
- (id)characteristicService;
- (id)characteristicToSend;
- (id)charsAndServicesToDiscover;
- (id)client;
- (bool)connectablePacket;
- (long long)connectionType;
- (unsigned long long)dataLeftToSend;
- (void)dealloc;
- (id)description;
- (bool)didConnectSent;
- (void)discoverCharacteristicsAndServices:(id)arg1 forPeripheral:(id)arg2;
- (long long)fetchConnectionType;
- (id)getCentral;
- (id)getCharacteristicWithUUID:(id)arg1 inService:(id)arg2 forPeripheral:(id)arg3;
- (id)getPeripheral;
- (id)getPeripheralUUID;
- (void)holdVoucher;
- (id)init;
- (id)initWithCentral:(id)arg1 characteristic:(id)arg2;
- (id)initWithPeripheral:(id)arg1;
- (id)peripheral;
- (void)peripheral:(id)arg1 didDiscoverCharacteristicsForService:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didDiscoverServices:(id)arg2;
- (void)peripheral:(id)arg1 didModifyServices:(id)arg2;
- (void)peripheral:(id)arg1 didUpdateNotificationStateForCharacteristic:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didWriteValueForCharacteristic:(id)arg2 error:(id)arg3;
- (void)readyForDataTransfer;
- (long long)recentRole;
- (void)resetData;
- (id)sendDataManager;
- (void)sendDataToCentral;
- (id)sendDataToCharacteristic:(id)arg1 inService:(id)arg2 forPeer:(id)arg3;
- (void)sendDataToPeripheral;
- (void)setCentral:(id)arg1;
- (void)setCentralCharacteristic:(id)arg1;
- (void)setCentralService:(id)arg1;
- (void)setCharacteristicService:(id)arg1;
- (void)setCharacteristicToSend:(id)arg1;
- (void)setCharsAndServicesToDiscover:(id)arg1;
- (void)setClient:(id)arg1;
- (void)setConnectablePacket:(bool)arg1;
- (void)setConnectionType:(long long)arg1;
- (void)setDataLeftToSend:(unsigned long long)arg1;
- (void)setDidConnectSent:(bool)arg1;
- (void)setPeripheral:(id)arg1;
- (void)setRecentRole:(long long)arg1;
- (void)setSendDataManager:(id)arg1;
- (void)setSubscribedCharacteristics:(id)arg1;
- (void)setVoucher:(id)arg1;
- (id)subscribe:(bool)arg1 toPeer:(id)arg2 withCharacteristic:(id)arg3 inService:(id)arg4;
- (id)subscribedCharacteristics;
- (void)updateWithCentral:(id)arg1 characteristic:(id)arg2;
- (void)updateWithPeripheral:(id)arg1;
- (id)voucher;

@end
