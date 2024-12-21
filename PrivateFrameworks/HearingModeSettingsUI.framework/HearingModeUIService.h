/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HearingModeSettingsUI.framework/HearingModeSettingsUI
 */

@interface HearingModeUIService : NSObject {
    NSString * _address;
    <HearingModeUIServiceDelegate> * _delegate;
    BluetoothDevice * _device;
    HPMHeadphoneDevice * _headphoneDevice;
    _TtC21HearingModeSettingsUI27HearingAssistFlowController * _hearingAssistFlowController;
    _TtC21HearingModeSettingsUI20HMHearingTestService * _hearingTestService;
    HMServiceClient * _hmsClient;
}

@property (nonatomic) <HearingModeUIServiceDelegate> *delegate;
@property (nonatomic, retain) HPMHeadphoneDevice *headphoneDevice;
@property (nonatomic, retain) HMServiceClient *hmsClient;

+ (bool)shouldShowFeatureForDevice:(id)arg1;

- (void).cxx_destruct;
- (bool)_getHearingAssist;
- (id)_getHearingAssistPayload:(id)arg1 device:(id)arg2 inUsecase:(long long)arg3;
- (id)_getOcclusionPayload:(id)arg1 device:(id)arg2 inUsecase:(long long)arg3;
- (bool)_showOcclusionDetectionPlacard;
- (void)_showOcclusionTutorial;
- (void)configHearingModeClient;
- (id)decoratedSpecifiers:(id)arg1 btAddress:(id)arg2;
- (id)delegate;
- (id)enrollmentViewController;
- (id)getHearingAidLink:(id)arg1;
- (id)getHearingAidMode;
- (id)getHearingAidModeString;
- (id)getHearingAidString:(id)arg1;
- (id)headphoneDevice;
- (void)hearingTestTapped;
- (id)hmsClient;
- (id)initWithDevice:(id)arg1;
- (id)initWithDeviceAddress:(id)arg1;
- (id)occlusionDetectionSpecifiers;
- (void)presentHearingAssistWelcomeFlow;
- (void)presentHearingTest;
- (void)setDelegate:(id)arg1;
- (void)setHeadphoneDevice:(id)arg1;
- (void)setHearingAidMode:(id)arg1;
- (void)setHmsClient:(id)arg1;
- (bool)shouldShowHearingAid;
- (bool)shouldShowHearingTest;
- (id)specifiers;
- (void)submitHADeviceAnalyticsWithEnrolled:(long long)arg1;
- (id)tuningViewController;
- (void)userDidTapHearingHealthLearnMore:(id)arg1;

@end