/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AudiogramIngestion.framework/AudiogramIngestion
 */

@interface AIAudiogramResultGraphCell : UITableViewCell {
    HKAudiogramSample * _audiogram;
    UIViewController * _audiogramChart;
}

@property (nonatomic, retain) HKAudiogramSample *audiogram;
@property (nonatomic, retain) UIViewController *audiogramChart;

+ (double)cellHeight;
+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (id)audiogram;
- (id)audiogramChart;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (bool)isAccessibilityElement;
- (void)setAudiogram:(id)arg1;
- (void)setAudiogramChart:(id)arg1;

@end