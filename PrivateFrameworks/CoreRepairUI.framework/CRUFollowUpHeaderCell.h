/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreRepairUI.framework/CoreRepairUI
 */

@interface CRUFollowUpHeaderCell : PSTableCell {
    NSArray * _constraints;
    UILabel * _followSubtitle;
    UILabel * _followTitle;
}

+ (long long)cellStyle;

- (void).cxx_destruct;
- (id)createFollowUpSubtitle;
- (id)createFollowUpTitle;
- (void)handleTapOnLabel;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (void)layoutSubviews;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (void)updateConstraints;

@end