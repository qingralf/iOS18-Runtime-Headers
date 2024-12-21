/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HeadphoneConfigs.framework/HeadphoneConfigs
 */

@interface HPSBatteryGroupView : UIView {
    HPSBatteryIconView * _batteryIconView;
    UIImageView * batteryGlyphView;
    NSString * batteryLevelDescription;
    UILabel * batteryPercentLabel;
    unsigned char  batteryPercentNumber;
}

@property (nonatomic, retain) HPSBatteryIconView *batteryIconView;

- (void).cxx_destruct;
- (id)batteryIconView;
- (void)createBatteryGroupView:(bool)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 batteryPercent:(unsigned char)arg2 isCharging:(bool)arg3 glyph:(id)arg4 batteryLevelDescription:(id)arg5;
- (void)setBatteryIconView:(id)arg1;
- (void)setChargePercent:(unsigned char)arg1;

@end