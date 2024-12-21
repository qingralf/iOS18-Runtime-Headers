/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SoftwareUpdateSettingsUI.framework/SoftwareUpdateSettingsUI
 */

@interface SUSettingsScanOptions : NSObject {
    bool  _allowUnrestrictedCellularDownload;
    bool  _clientIsBuddy;
    SDDevice * _currentSeedingDevice;
    SUScanOptions * _scanOptions;
}

@property (nonatomic) bool allowUnrestrictedCellularDownload;
@property (nonatomic) bool clientIsBuddy;
@property (retain) SDDevice *currentSeedingDevice;
@property (nonatomic, retain) SUScanOptions *scanOptions;

- (void).cxx_destruct;
- (bool)allowUnrestrictedCellularDownload;
- (bool)clientIsBuddy;
- (id)currentSeedingDevice;
- (id)init;
- (id)initWithScanOptions:(id)arg1;
- (id)scanOptions;
- (void)setAllowUnrestrictedCellularDownload:(bool)arg1;
- (void)setClientIsBuddy:(bool)arg1;
- (void)setCurrentSeedingDevice:(id)arg1;
- (void)setScanOptions:(id)arg1;

@end