/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXMapOptionsView : UIView {
    void compassButton;
    void delegate;
    void enableUserTrackingButton;
    void mapSettingsButton;
    void mapStyle;
    void perspectiveButton;
    void perspectiveButtonPlatterView;
    void perspectiveButtonState;
    void platterSeparatorView;
    void platterStackView;
    void topPlatterView;
    void userLocationButton;
    void userLocationStackView;
}

@property (nonatomic) <PXMapOptionsViewDelegate> *delegate;
@property (nonatomic) bool enableUserTrackingButton;
@property (nonatomic) unsigned long long mapStyle;

- (void).cxx_destruct;
- (id)delegate;
- (void)didTapMapModeSettingsButton;
- (void)didTapPerspectiveButtonWithSender:(id)arg1;
- (bool)enableUserTrackingButton;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithMapView:(id)arg1;
- (unsigned long long)mapStyle;
- (void)setDelegate:(id)arg1;
- (void)setEnableUserTrackingButton:(bool)arg1;
- (void)setMapStyle:(unsigned long long)arg1;
- (void)setPerspectiveButtonState:(unsigned long long)arg1 animated:(bool)arg2;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
