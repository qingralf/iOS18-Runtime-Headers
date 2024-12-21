/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUIEdit.framework/PhotosUIEdit
 */

@interface PEPhotoStyleValuesPlatterView : UIView {
    void hostingController;
    void valueLabelsModel;
}

@property (nonatomic) double color;
@property (nonatomic) bool hidePaletteLabel;
@property (nonatomic) bool hideResetButton;
@property (nonatomic) bool hideToneAndColorLabels;
@property (nonatomic) bool isResetButtonEnabled;
@property (nonatomic) double palette;
@property (nonatomic, copy) id /* block */ resetAction;
@property (nonatomic) double tone;

- (void).cxx_destruct;
- (double)color;
- (bool)hidePaletteLabel;
- (bool)hideResetButton;
- (bool)hideToneAndColorLabels;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithTone:(double)arg1 color:(double)arg2 palette:(double)arg3;
- (bool)isResetButtonEnabled;
- (double)palette;
- (id /* block */)resetAction;
- (void)setColor:(double)arg1;
- (void)setHidePaletteLabel:(bool)arg1;
- (void)setHideResetButton:(bool)arg1;
- (void)setHideToneAndColorLabels:(bool)arg1;
- (void)setIsResetButtonEnabled:(bool)arg1;
- (void)setPalette:(double)arg1;
- (void)setResetAction:(id /* block */)arg1;
- (void)setTone:(double)arg1;
- (double)tone;

@end