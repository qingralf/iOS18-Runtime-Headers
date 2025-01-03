/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@interface TelephonyUI.RecentsListItemViewHelper : _TtCs12_SwiftObject {
    void $__lazy_storage_$_callButton;
    void $__lazy_storage_$_detailAccessoryButton;
    void accessorySize;
    void appIconImageView;
    void applicationIcon;
    void avatarViewController;
    void callButtonTapHandler;
    void dateLabel;
    void detailAccessoryTapHandler;
    void extraSubtitleLabel;
    void gridView;
    void linkView;
    void location;
    void messageIndicatorView;
    void occurrenceCountLabel;
    void parentView;
    void recentsCallItemStyle;
    void rootStackView;
    void senderIdentityBadgeView;
    void subtitleImageView;
    void subtitleLabel;
    void subtitleStackView;
    void titleLabel;
    void titleStackView;
    void verifiedBadgeView;
}

@property (nonatomic, readonly) UIDateLabel *dateLabel;
@property (nonatomic, readonly) UILabel *extraSubtitleLabel;
@property (nonatomic, readonly) UILabel *occurrenceCountLabel;
@property (nonatomic, readonly) UILabel *subtitleLabel;
@property (nonatomic, readonly) UILabel *titleLabel;

- (id)dateLabel;
- (void)didTapCallButtonWithSender:(id)arg1;
- (void)didTapDetailAccessoryButtonWithSender:(id)arg1;
- (id)extraSubtitleLabel;
- (id)occurrenceCountLabel;
- (id)subtitleLabel;
- (id)titleLabel;
- (void)updateForReducedTransparancy;

@end
