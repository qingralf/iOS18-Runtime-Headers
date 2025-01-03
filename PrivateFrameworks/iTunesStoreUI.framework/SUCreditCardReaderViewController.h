/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUCreditCardReaderViewController : UIViewController <CRCameraReaderDelegate> {
    id /* block */  _completionBlock;
    CRCameraReader * cameraController;
    SUCreditCardReaderInfoView * captureInfoView;
    SUCreditCardReaderOutput * pendingOutput;
}

@property (nonatomic, copy) id /* block */ completionBlock;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)cameraSupported;

- (void).cxx_destruct;
- (void)_cancelButtonPressed;
- (void)_returnCameraOutput:(id)arg1 error:(id)arg2;
- (void)cameraReader:(id)arg1 didFailWithError:(id)arg2;
- (void)cameraReader:(id)arg1 didRecognizeObjects:(id)arg2;
- (void)cameraReaderDidCancel:(id)arg1;
- (void)cameraReaderDidEnd:(id)arg1;
- (id /* block */)completionBlock;
- (void)didReceiveMemoryWarning;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
