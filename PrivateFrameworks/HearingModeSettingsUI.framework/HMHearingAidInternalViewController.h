/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HearingModeSettingsUI.framework/HearingModeSettingsUI
 */

@interface HMHearingAidInternalViewController : PSListController <FaultCheckDelegate, FitNoiseCheckDelegate, HearingAidEnrollmentDelegate> {
    NSString * _address;
    BluetoothDevice * _device;
    HMEnrollmentService * _hearingModeService;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)faultCheckCancelled:(id)arg1;
- (void)faultCheckCompleted:(id)arg1;
- (void)faultCheckCompleted:(id)arg1 status:(unsigned long long)arg2;
- (void)fitNoiseCheckCancelled:(id)arg1;
- (void)fitNoiseCheckCompleted:(id)arg1 status:(unsigned long long)arg2;
- (id)hearingAidEnrolled;
- (void)hearingAidEnrollmentCancelled:(id)arg1;
- (void)hearingAidEnrollmentCompleted:(id)arg1 status:(unsigned long long)arg2;
- (void)presentFitTestAnimationViewTester;
- (void)pushEnrollmentViewControllerWithDevice;
- (void)pushEnrollmentViewControllerWithDeviceAndAudiogramSample;
- (void)pushFaultCheckViewController;
- (void)pushFaultCheckViewControllerForFailedResult;
- (void)pushFaultCheckViewControllerForUnknownResult;
- (void)pushFitNoiseCheckViewController;
- (void)pushMediaAssistEnrollmentViewControllerWithDeviceAndAudiogramSample;
- (void)resetOcclusionData;
- (void)setHearingAidEnrolled:(id)arg1;
- (id)specifiers;
- (void)viewDidLoad;

@end