/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

@interface LPIndeterminateProgressSpinnerView : LPComponentView {
    UIActivityIndicatorView * _indicatorView;
    LPIndeterminateProgressSpinnerPresentationProperties * _properties;
    LPIndeterminateProgressSpinnerStyle * _style;
    LPTextView * _text;
}

- (void).cxx_destruct;
- (void)ensureIndicatorView;
- (void)ensureURLLabel;
- (id)initWithHost:(id)arg1 style:(id)arg2 properties:(id)arg3;
- (void)layoutComponentView;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end