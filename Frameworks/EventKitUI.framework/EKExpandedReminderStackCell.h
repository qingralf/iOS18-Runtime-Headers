/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKExpandedReminderStackCell : UICollectionViewCell {
    UIView * _backgroundColorView;
    UIImageView * _backgroundImageView;
    UIButton * _circle;
    <EKExpandedReminderStackCellDelegate> * _delegate;
    NSString * _eventIdentifer;
    UIImageView * _recurringImageView;
    UILabel * _time;
    UILabel * _title;
}

@property (nonatomic, retain) UIView *backgroundColorView;
@property (nonatomic, retain) UIImageView *backgroundImageView;
@property (nonatomic, retain) UIButton *circle;
@property (nonatomic, retain) UIImageView *recurringImageView;
@property (nonatomic, retain) UILabel *time;
@property (nonatomic, retain) UILabel *title;

+ (id)exampleCell;

- (void).cxx_destruct;
- (id)backgroundColorView;
- (id)backgroundImageView;
- (id)circle;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)recurringImageView;
- (void)setBackgroundColorView:(id)arg1;
- (void)setBackgroundImageView:(id)arg1;
- (void)setCircle:(id)arg1;
- (void)setRecurringImageView:(id)arg1;
- (void)setTime:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setVisibleForExpandingAnimation:(bool)arg1;
- (void)setupCellWithTitle:(id)arg1 completed:(bool)arg2 editable:(bool)arg3 date:(id)arg4 buttonColor:(id)arg5 buttonImageName:(id)arg6 backgroundColor:(id)arg7 recurringString:(id)arg8 delegate:(id)arg9;
- (id)time;
- (id)title;

@end
