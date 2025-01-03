/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNGeminiPickerCell : UITableViewCell {
    CNGeminiBadge * _badgeView;
    CNGeminiBadge * _centeredBadgeView;
    UILabel * _centeredNameLabel;
    UILabel * _labelLabel;
    UILabel * _valueLabel;
}

@property (nonatomic, retain) CNGeminiBadge *badgeView;
@property (nonatomic, retain) CNGeminiBadge *centeredBadgeView;
@property (nonatomic, retain) UILabel *centeredNameLabel;
@property (nonatomic, retain) UILabel *labelLabel;
@property (nonatomic, retain) UILabel *valueLabel;

- (void).cxx_destruct;
- (id)badgeView;
- (id)centeredBadgeView;
- (id)centeredNameLabel;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)labelLabel;
- (void)setBadgeView:(id)arg1;
- (void)setCenteredBadgeView:(id)arg1;
- (void)setCenteredNameLabel:(id)arg1;
- (void)setLabelLabel:(id)arg1;
- (void)setText:(id)arg1 detailText:(id)arg2 badgeText:(id)arg3;
- (void)setValueLabel:(id)arg1;
- (void)tintColorDidChange;
- (id)valueLabel;

@end
