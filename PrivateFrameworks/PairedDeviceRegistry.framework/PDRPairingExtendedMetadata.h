/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PairedDeviceRegistry.framework/PairedDeviceRegistry
 */

@interface PDRPairingExtendedMetadata : NSObject {
    long long  _chipID;
    unsigned long long  _encodedSystemVersion;
    bool  _isCellularEnabled;
    long long  _pairingVersion;
    bool  _postFailsafeObliteration;
    NSString * _productType;
}

@property (nonatomic) long long chipID;
@property (nonatomic) unsigned long long encodedSystemVersion;
@property (nonatomic) bool isCellularEnabled;
@property (nonatomic) long long pairingVersion;
@property (nonatomic) bool postFailsafeObliteration;
@property (nonatomic, retain) NSString *productType;

- (void).cxx_destruct;
- (long long)chipID;
- (unsigned long long)encodedSystemVersion;
- (bool)isCellularEnabled;
- (long long)pairingVersion;
- (bool)postFailsafeObliteration;
- (id)productType;
- (void)setChipID:(long long)arg1;
- (void)setEncodedSystemVersion:(unsigned long long)arg1;
- (void)setIsCellularEnabled:(bool)arg1;
- (void)setPairingVersion:(long long)arg1;
- (void)setPostFailsafeObliteration:(bool)arg1;
- (void)setProductType:(id)arg1;

@end
