/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PassKitUI.NearbyPeerPaymentButtonsView : UIView {
    void closeAction;
    void closeButton;
    void primaryAction;
    void primaryButton;
    void secondaryAction;
    void secondaryButton;
    void singleButton;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  style;
}

- (void).cxx_destruct;
- (void)closeTapped;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)primaryTapped;
- (void)secondaryTapped;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end