/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUTemperatureUnitControlView : UIView <HUControlView> {
    bool  _canBeHighlighted;
    long long  _currentUnit;
    <HUControlViewDelegate> * _delegate;
    UILabel * _detailLabel;
    NSString * _identifier;
    NSArray * _labelConstraints;
    UILabel * _titleLabel;
    bool  _viewDisabled;
}

@property (nonatomic) bool canBeHighlighted; /* unknown property attribute: ? */
@property (nonatomic) long long currentUnit;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <HUControlViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UILabel *detailLabel;
@property (getter=isDisabled, nonatomic) bool disabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSArray *labelConstraints;
@property (readonly) Class superclass;
@property (nonatomic, retain) UILabel *titleLabel;
@property (nonatomic, retain) id value;
@property (nonatomic) bool viewDisabled;

+ (Class)valueClass;

- (void).cxx_destruct;
- (id)_unitStringForCurrentUnit;
- (bool)canBeHighlighted;
- (long long)currentUnit;
- (id)delegate;
- (id)detailLabel;
- (id)identifier;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isDisabled;
- (id)labelConstraints;
- (void)setCanBeHighlighted:(bool)arg1;
- (void)setCurrentUnit:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDetailLabel:(id)arg1;
- (void)setDisabled:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLabelConstraints:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setValue:(id)arg1;
- (void)setViewDisabled:(bool)arg1;
- (id)titleLabel;
- (void)updateConstraints;
- (id)value;
- (bool)viewDisabled;

@end
