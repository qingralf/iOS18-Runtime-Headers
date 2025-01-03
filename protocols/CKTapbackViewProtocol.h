/* Generated by RuntimeBrowser.
 */

@protocol CKTapbackViewProtocol

@required

- (double)attributionScaleFactor;
- (void)configureForTapback:(IMTapback *)arg1 isSelected:(bool)arg2;
- (<CKTapbackViewDelegate> *)delegate;
- (bool)isSelected;
- (void)performSendAnimation;
- (void)performViewControllerAppearingAnimation;
- (void)performViewControllerDismissingAnimation;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })platterEdgeInsets;
- (void)setDelegate:(id <CKTapbackViewDelegate>)arg1;
- (void)setIsSelected:(bool)arg1;

@optional

- (void)prepareForAppearingAnimation;

@end
