/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SoftwareUpdateSettingsUI.framework/SoftwareUpdateSettingsUI
 */

@interface SUSettingsUpdateParam : NSObject {
    SUAutoInstallOperation * _autoInstallOperation;
    bool  _bypassTermsAndConditions;
    int  _cellularAgreementStatus;
    bool  _createdKeybag;
    SUDownload * _currentDownload;
    SUDescriptor * _descriptor;
    bool  _downloadStartedSuccessfully;
    bool  _installInitiatedSuccessfully;
    NSError * _operationError;
    SUSettingsUpdateOptions * _options;
    NSError * _scheduleError;
    bool  _unattendedInstall;
    bool  _updateScheduledSuccessfully;
}

@property (nonatomic, retain) SUAutoInstallOperation *autoInstallOperation;
@property (nonatomic) bool bypassTermsAndConditions;
@property (nonatomic) int cellularAgreementStatus;
@property (nonatomic) bool createdKeybag;
@property (nonatomic, retain) SUDownload *currentDownload;
@property (nonatomic, retain) SUDescriptor *descriptor;
@property (nonatomic) bool downloadStartedSuccessfully;
@property (nonatomic) bool installInitiatedSuccessfully;
@property (nonatomic, retain) NSError *operationError;
@property (nonatomic, retain) SUSettingsUpdateOptions *options;
@property (nonatomic, retain) NSError *scheduleError;
@property (getter=isUnattendedInstall, nonatomic) bool unattendedInstall;
@property (nonatomic) bool updateScheduledSuccessfully;

- (void).cxx_destruct;
- (id)autoInstallOperation;
- (bool)bypassTermsAndConditions;
- (int)cellularAgreementStatus;
- (bool)createdKeybag;
- (id)currentDownload;
- (id)description;
- (id)descriptor;
- (bool)downloadStartedSuccessfully;
- (id)initWithDescriptor:(id)arg1 andUpdateOptions:(id)arg2 forUnattendedInstall:(bool)arg3;
- (bool)installInitiatedSuccessfully;
- (bool)isUnattendedInstall;
- (id)operationError;
- (id)options;
- (id)scheduleError;
- (void)setAutoInstallOperation:(id)arg1;
- (void)setBypassTermsAndConditions:(bool)arg1;
- (void)setCellularAgreementStatus:(int)arg1;
- (void)setCreatedKeybag:(bool)arg1;
- (void)setCurrentDownload:(id)arg1;
- (void)setDescriptor:(id)arg1;
- (void)setDownloadStartedSuccessfully:(bool)arg1;
- (void)setInstallInitiatedSuccessfully:(bool)arg1;
- (void)setOperationError:(id)arg1;
- (void)setOptions:(id)arg1;
- (void)setScheduleError:(id)arg1;
- (void)setUnattendedInstall:(bool)arg1;
- (void)setUpdateScheduledSuccessfully:(bool)arg1;
- (bool)updateScheduledSuccessfully;

@end