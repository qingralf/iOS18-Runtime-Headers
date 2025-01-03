/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthMedicationsVisionUI.framework/HealthMedicationsVisionUI
 */

@interface HealthMedicationsVisionUI.MedicationScanMultiResultsViewController : HealthExperienceUI.OnboardingCollectionViewControllerWithNextButton <HealthExperienceUI.SnapshotDataSourceEventHandler> {
    void $__lazy_storage_$_blurView;
    void $__lazy_storage_$_closeButton;
    void $__lazy_storage_$_tapToRadarButton;
    void delegate;
    void healthStore;
    void resolutionResults;
    void rootFlowStep;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  sessionId;
}

@property (nonatomic, readonly) unsigned long long supportedInterfaceOrientations;

- (void).cxx_destruct;
- (void)hxui_primaryFooterButtonTapped;
- (void)hxui_secondaryFooterButtonTapped;
- (void)onClose;
- (void)snapshotDidChangeWithDataSourceID:(id)arg1 snapshot:(id)arg2 animated:(bool)arg3;
- (unsigned long long)supportedInterfaceOrientations;
- (void)tapToRadarButtonTappedWithSender:(id)arg1;
- (void)viewDidLoad;

@end
