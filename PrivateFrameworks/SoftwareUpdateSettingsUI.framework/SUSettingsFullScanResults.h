/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SoftwareUpdateSettingsUI.framework/SoftwareUpdateSettingsUI
 */

@interface SUSettingsFullScanResults : SUSettingsScanResults {
    SUDescriptor * _alternateDescriptor;
    NSArray * _betaPrograms;
    SDDevice * _currentSeedingDevice;
    SUCoreDDMDeclaration * _ddmDeclaration;
    bool  _emptyScanResults;
    SDBetaProgram * _enrolledBetaProgram;
    bool  _isDelayingUpdate;
    bool  _isRollingBack;
    unsigned long long  _mdmPathRestrictions;
    SUDescriptor * _preferredDescriptor;
    SURollbackDescriptor * _rollbackDescriptor;
    NSError * _scanError;
}

@property (nonatomic, retain) SUDescriptor *alternateDescriptor;
@property (retain) NSArray *betaPrograms;
@property (retain) SDDevice *currentSeedingDevice;
@property (setter=setDDMDeclaration:, nonatomic, retain) SUCoreDDMDeclaration *ddmDeclaration;
@property (nonatomic) bool emptyScanResults;
@property (retain) SDBetaProgram *enrolledBetaProgram;
@property (nonatomic) bool isDelayingUpdate;
@property (nonatomic) bool isRollingBack;
@property (nonatomic) unsigned long long mdmPathRestrictions;
@property (nonatomic, retain) SUDescriptor *preferredDescriptor;
@property (nonatomic, retain) SURollbackDescriptor *rollbackDescriptor;
@property (nonatomic, retain) NSError *scanError;

- (void).cxx_destruct;
- (id)alternateDescriptor;
- (id)betaPrograms;
- (id)currentSeedingDevice;
- (id)ddmDeclaration;
- (id)description;
- (bool)emptyScanResults;
- (id)enrolledBetaProgram;
- (id)initFromScanParam:(id)arg1 withUUID:(id)arg2;
- (bool)isDelayingUpdate;
- (bool)isRollingBack;
- (unsigned long long)mdmPathRestrictions;
- (id)preferredDescriptor;
- (id)rollbackDescriptor;
- (id)scanError;
- (void)setAlternateDescriptor:(id)arg1;
- (void)setBetaPrograms:(id)arg1;
- (void)setCurrentSeedingDevice:(id)arg1;
- (void)setDDMDeclaration:(id)arg1;
- (void)setEmptyScanResults:(bool)arg1;
- (void)setEnrolledBetaProgram:(id)arg1;
- (void)setIsDelayingUpdate:(bool)arg1;
- (void)setIsRollingBack:(bool)arg1;
- (void)setMdmPathRestrictions:(unsigned long long)arg1;
- (void)setPreferredDescriptor:(id)arg1;
- (void)setRollbackDescriptor:(id)arg1;
- (void)setScanError:(id)arg1;

@end