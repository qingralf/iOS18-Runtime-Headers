/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CarouselPreferenceServices.framework/CarouselPreferenceServices
 */

@interface CSLPRFLauncherViewModeSetting : NSObject <CSLPRFTwoWaySyncSettingDelegate> {
    <CSLPRFLauncherViewModeSettingDelegate> * _delegate;
    CSLPRFTwoWaySyncSetting * _modeSetting;
    CSLPRFTwoWaySyncSetting * _reasonSetting;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <CSLPRFLauncherViewModeSettingDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)delegate;
- (id)init;
- (long long)launcherViewMode;
- (unsigned long long)launcherViewModeReason;
- (void)setDelegate:(id)arg1;
- (void)setLauncherViewMode:(long long)arg1 reason:(unsigned long long)arg2;
- (void)twoWaySyncSettingDidUpdate:(id)arg1;

@end
