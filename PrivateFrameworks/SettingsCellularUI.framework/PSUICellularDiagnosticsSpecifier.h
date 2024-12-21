/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
 */

@interface PSUICellularDiagnosticsSpecifier : PSSpecifier {
    long long  _cellularDiagCode;
    bool  _cellularIssueDetected;
    int  _cellularStatus;
    PSUICoreTelephonyRadioCache * _radioCache;
}

@property (nonatomic, readonly) long long cellularDiagCode;
@property (nonatomic, readonly) bool cellularIssueDetected;
@property (nonatomic, readonly) int cellularStatus;
@property (nonatomic, retain) PSUICoreTelephonyRadioCache *radioCache;

- (void).cxx_destruct;
- (long long)cellularDiagCode;
- (bool)cellularIssueDetected;
- (bool)cellularIssueFound;
- (int)cellularStatus;
- (id)getCellularDiagnosticsRunResult:(id)arg1;
- (void)getCellularDiagnosticsStatus;
- (long long)getDiagnosticsDetailsCode;
- (id)getDiagnosticsStatusRecommendation;
- (id)getDiagnosticsStatusText;
- (id)getLogger;
- (id)init;
- (id)initWithRadioCache:(id)arg1;
- (bool)needToShowHelpLink;
- (id)radioCache;
- (void)setRadioCache:(id)arg1;

@end