/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TransparencyUI.framework/TransparencyUI
 */

@interface TUIKTStatusCell : PSTableCell {
    NSArray * _constraints;
    UIStackView * _ktStatusStackView;
    UILabel * _ktStatusTextLabel;
    UILabel * _ktStatusTitleLabel;
}

@property (nonatomic, retain) NSArray *constraints;
@property (nonatomic, retain) UIStackView *ktStatusStackView;
@property (nonatomic, retain) UILabel *ktStatusTextLabel;
@property (nonatomic, retain) UILabel *ktStatusTitleLabel;

- (void).cxx_destruct;
- (void)_setStatusText:(id)arg1;
- (id)constraints;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)ktStatusStackView;
- (id)ktStatusTextLabel;
- (id)ktStatusTitleLabel;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (void)setConstraints:(id)arg1;
- (void)setKtStatusStackView:(id)arg1;
- (void)setKtStatusTextLabel:(id)arg1;
- (void)setKtStatusTitleLabel:(id)arg1;
- (void)updateConstraints;

@end