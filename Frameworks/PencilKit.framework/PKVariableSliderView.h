/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

@interface PKVariableSliderView : UIView {
    UIVisualEffectView * _blurView;
    double  _currentValue;
    <PKVariableSliderViewDelegate> * _delegate;
    long long  _fractionalDigits;
    double  _initialValue;
    UILabel * _label;
    double  _lastSentTimestamp;
    UISlider * _slider;
    double  _valueToSend;
}

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)sendValueChanged;
- (void)sliderValueChanged;

@end