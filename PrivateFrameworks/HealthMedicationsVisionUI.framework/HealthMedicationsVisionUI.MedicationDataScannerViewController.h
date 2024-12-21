/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthMedicationsVisionUI.framework/HealthMedicationsVisionUI
 */

@interface HealthMedicationsVisionUI.MedicationDataScannerViewController : HealthExperienceUI.CameraScannerFlowViewController <HKOntologyStoreObserver> {
    void $__lazy_storage_$_feedbackGenerator;
    void $__lazy_storage_$_regionOfInterestOverlay;
    void accumulatedBarcodes;
    void accumulatedText;
    void allTokens;
    void analyticsContext;
    void analyticsCurrentAlgorithmType;
    void analyticsCurrentStep;
    void assetReady;
    void assetStateCanceller;
    void controlTimer;
    void coordinator;
    void coordinatorCanceller;
    void dataLock;
    void healthStore;
    void ontologyStore;
    void resolutionEngine;
    void scannerDelegate;
    void tokenizer;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)onClose;
- (void)ontologyStore:(id)arg1 didImportEntry:(id)arg2;
- (void)ontologyStore:(id)arg1 didStageEntry:(id)arg2;
- (void)ontologyStoreDidReconnect:(id)arg1;
- (void)tapToRadarButtonTappedWithSender:(id)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end