/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

@interface FIUIChartMinMaxValueAxisDescriptor : NSObject <FIUIChartAxisDescriptor> {
    double  _axisDescriptorPadding;
    UIColor * _highlightedLabelColor;
    NSNumber * _highlightedValue;
    UIFont * _labelFont;
    NSNumber * _maxValue;
    NSNumber * _minValue;
    double  _shadowBlur;
    UIColor * _shadowColor;
    struct CGSize { 
        double width; 
        double height; 
    }  _shadowOffset;
    UIColor * _unhighlightedLabelColor;
}

@property (nonatomic) double axisDescriptorPadding;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hideClippedLabels; /* unknown property attribute: ? */
@property (nonatomic, retain) UIColor *highlightedLabelColor;
@property (nonatomic, retain) UIColor *highlightedSubLabelColor; /* unknown property attribute: ? */
@property (nonatomic, retain) NSNumber *highlightedValue;
@property (nonatomic) unsigned long long labelAlignment; /* unknown property attribute: ? */
@property (nonatomic, retain) UIFont *labelFont;
@property (nonatomic, retain) NSNumber *maxValue;
@property (nonatomic, retain) NSNumber *minValue;
@property (nonatomic, retain) UIColor *selectedLabelColor; /* unknown property attribute: ? */
@property (nonatomic) double shadowBlur; /* unknown property attribute: ? */
@property (nonatomic, retain) UIColor *shadowColor; /* unknown property attribute: ? */
@property (nonatomic) struct CGSize { double x1; double x2; } shadowOffset; /* unknown property attribute: ? */
@property (nonatomic) double subAxisDescriptorPadding; /* unknown property attribute: ? */
@property (nonatomic) unsigned long long subLabelAlignment; /* unknown property attribute: ? */
@property (nonatomic, retain) UIFont *subLabelFont; /* unknown property attribute: ? */
@property (readonly) Class superclass;
@property (nonatomic, retain) UIColor *unhighlightedLabelColor;
@property (nonatomic, retain) UIColor *unhighlightedSubLabelColor; /* unknown property attribute: ? */

- (void).cxx_destruct;
- (id)_axisLabelForValue:(id)arg1 highlighted:(bool)arg2;
- (double)axisDescriptorPadding;
- (id)axisLabels;
- (Class)expectedDataType;
- (id)highlightedLabelColor;
- (id)highlightedValue;
- (id)labelFont;
- (id)maxValue;
- (id)minValue;
- (void)setAxisDescriptorPadding:(double)arg1;
- (void)setHighlightedLabelColor:(id)arg1;
- (void)setHighlightedValue:(id)arg1;
- (void)setLabelFont:(id)arg1;
- (void)setMaxValue:(id)arg1;
- (void)setMinValue:(id)arg1;
- (void)setShadowBlur:(double)arg1;
- (void)setShadowColor:(id)arg1;
- (void)setShadowOffset:(struct CGSize { double x1; double x2; })arg1;
- (void)setUnhighlightedLabelColor:(id)arg1;
- (double)shadowBlur;
- (id)shadowColor;
- (struct CGSize { double x1; double x2; })shadowOffset;
- (id)unhighlightedLabelColor;

@end
