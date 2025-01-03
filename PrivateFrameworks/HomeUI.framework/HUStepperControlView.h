/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUStepperControlView : UIView <HUControlView> {
    <HUControlViewDelegate> * _delegate;
    NSString * _identifier;
    NSArray * _layoutConstraints;
    UIStepper * _stepper;
    id  _value;
    NSFormatter * _valueFormatter;
    UILabel * _valueLabel;
}

@property (nonatomic) bool canBeHighlighted; /* unknown property attribute: ? */
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <HUControlViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isDisabled, nonatomic) bool disabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, retain) NSArray *layoutConstraints;
@property (nonatomic) double maxValue;
@property (nonatomic) double minValue;
@property (nonatomic) double stepValue;
@property (nonatomic, readonly) UIStepper *stepper;
@property (readonly) Class superclass;
@property (nonatomic, retain) id value;
@property (nonatomic, retain) NSFormatter *valueFormatter;
@property (nonatomic, readonly) UILabel *valueLabel;

+ (bool)requiresConstraintBasedLayout;
+ (Class)valueClass;

- (void).cxx_destruct;
- (id)_defaultValueFormatter;
- (void)_stepperTouchDown:(id)arg1;
- (void)_stepperTouchUp:(id)arg1;
- (void)_stepperValueChanged:(id)arg1;
- (void)_updateValueLabel;
- (id)delegate;
- (id)identifier;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isDisabled;
- (id)layoutConstraints;
- (double)maxValue;
- (double)minValue;
- (void)setDelegate:(id)arg1;
- (void)setDisabled:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLayoutConstraints:(id)arg1;
- (void)setMaxValue:(double)arg1;
- (void)setMinValue:(double)arg1;
- (void)setStepValue:(double)arg1;
- (void)setValue:(id)arg1;
- (void)setValueFormatter:(id)arg1;
- (double)stepValue;
- (id)stepper;
- (void)updateConstraints;
- (id)value;
- (id)valueFormatter;
- (id)valueLabel;

@end
