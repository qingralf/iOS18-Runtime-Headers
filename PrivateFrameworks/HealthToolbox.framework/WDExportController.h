/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

@interface WDExportController : NSObject {
    unsigned long long  _backgroundTask;
    NSURL * _exportFileURL;
    WDExportManager * _exportManager;
    UIViewController * _exportPresentingViewController;
    unsigned long long  _exportResult;
    UIView * _exportSourceView;
    bool  _isExporting;
}

@property (nonatomic) <HKApplicationProviding> *applicationProvider;

- (void).cxx_destruct;
- (void)_beginExport;
- (void)_cleanUpExport;
- (void)_shareExportFileAndCleanUp;
- (id)applicationProvider;
- (bool)exportInProgress;
- (id)initWithProfile:(id)arg1;
- (void)setApplicationProvider:(id)arg1;
- (void)verifyExportWithPresentingViewController:(id)arg1 shareSheetSourceView:(id)arg2;

@end