/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PasswordManagerUI.framework/PasswordManagerUI
 */

@interface PMOtpauthQRCodeScannerViewController : UIViewController <AVCaptureMetadataOutputObjectsDelegate> {
    AVCaptureSession * _captureSession;
    <PMOtpauthQRCodeScannerViewControllerDelegate> * _delegate;
    AVCaptureVideoPreviewLayer * _previewLayer;
    UIView * _viewfinderView;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <PMOtpauthQRCodeScannerViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)_avCaptureVideoOrientationFromUIDeviceOrientation:(long long)arg1;
- (void)_configureCaptureSession;
- (void)_dismiss:(id)arg1;
- (void)_updatePreviewLayerOrientation;
- (void)captureOutput:(id)arg1 didOutputMetadataObjects:(id)arg2 fromConnection:(id)arg3;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end