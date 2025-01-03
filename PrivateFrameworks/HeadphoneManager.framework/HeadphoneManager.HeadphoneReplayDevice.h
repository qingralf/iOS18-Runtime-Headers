/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HeadphoneManager.framework/HeadphoneManager
 */

@interface HeadphoneManager.HeadphoneReplayDevice : HPMHeadphoneDevice {
    void listeners;
    void replayDevice;
}

@property (nonatomic) unsigned int accessorySettingFeatureBitMask;
@property (nonatomic) float batteryLevelCase;
@property (nonatomic) float batteryLevelLeft;
@property (nonatomic) float batteryLevelMain;
@property (nonatomic) float batteryLevelRight;
@property (nonatomic) unsigned int deviceColor;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) CBProductInfo *productInfo;

- (void).cxx_destruct;
- (unsigned int)accessorySettingFeatureBitMask;
- (float)batteryLevelCase;
- (float)batteryLevelLeft;
- (float)batteryLevelMain;
- (float)batteryLevelRight;
- (unsigned int)deviceColor;
- (bool)isServiceSupported:(unsigned int)arg1;
- (id)name;
- (id)productInfo;
- (void)setAccessorySettingFeatureBitMask:(unsigned int)arg1;
- (void)setBatteryLevelCase:(float)arg1;
- (void)setBatteryLevelLeft:(float)arg1;
- (void)setBatteryLevelMain:(float)arg1;
- (void)setBatteryLevelRight:(float)arg1;
- (void)setDeviceColor:(unsigned int)arg1;
- (void)setName:(id)arg1;
- (void)setProductInfo:(id)arg1;

@end
