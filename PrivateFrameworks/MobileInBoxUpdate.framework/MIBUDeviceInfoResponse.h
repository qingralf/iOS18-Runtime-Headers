/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileInBoxUpdate.framework/MobileInBoxUpdate
 */

@interface MIBUDeviceInfoResponse : MIBUNFCResponse {
    NSData * _apNonce;
    NSNumber * _boardID;
    NSNumber * _chipID;
    NSNumber * _ecid;
    bool  _productionMode;
    NSNumber * _securityDomain;
    bool  _securityMode;
    NSData * _sepNonce;
    NSString * _serialNumber;
    NSNumber * _sikaFuse;
    bool  _sikaFuseExists;
    bool  _uidMode;
}

@property (nonatomic, retain) NSData *apNonce;
@property (nonatomic, retain) NSNumber *boardID;
@property (nonatomic, retain) NSNumber *chipID;
@property (nonatomic, retain) NSNumber *ecid;
@property (nonatomic) bool productionMode;
@property (nonatomic) NSNumber *securityDomain;
@property (nonatomic) bool securityMode;
@property (nonatomic, retain) NSData *sepNonce;
@property (nonatomic, retain) NSString *serialNumber;
@property (nonatomic, retain) NSNumber *sikaFuse;
@property (nonatomic) bool sikaFuseExists;
@property (nonatomic) bool uidMode;

- (void).cxx_destruct;
- (bool)_deserialize:(id)arg1;
- (id)apNonce;
- (id)boardID;
- (id)chipID;
- (id)ecid;
- (id)init;
- (bool)productionMode;
- (id)securityDomain;
- (bool)securityMode;
- (id)sepNonce;
- (id)serialNumber;
- (id)serialize;
- (void)setApNonce:(id)arg1;
- (void)setBoardID:(id)arg1;
- (void)setChipID:(id)arg1;
- (void)setEcid:(id)arg1;
- (void)setProductionMode:(bool)arg1;
- (void)setSecurityDomain:(id)arg1;
- (void)setSecurityMode:(bool)arg1;
- (void)setSepNonce:(id)arg1;
- (void)setSerialNumber:(id)arg1;
- (void)setSikaFuse:(id)arg1;
- (void)setSikaFuseExists:(bool)arg1;
- (void)setUidMode:(bool)arg1;
- (id)sikaFuse;
- (bool)sikaFuseExists;
- (bool)uidMode;

@end
