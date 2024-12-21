/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKExpandedHashableReminder : NSObject {
    NSString * _buttonImageName;
    UIColor * _color;
    bool  _completed;
    NSDate * _date;
    bool  _editable;
    EKEvent * _event;
    NSString * _title;
}

@property (nonatomic, retain) NSString *buttonImageName;
@property (nonatomic, retain) UIColor *color;
@property (nonatomic) bool completed;
@property (nonatomic, retain) NSDate *date;
@property (nonatomic) bool editable;
@property (nonatomic, retain) EKEvent *event;
@property (nonatomic, retain) NSString *title;

- (void).cxx_destruct;
- (id)buttonImageName;
- (id)color;
- (bool)completed;
- (id)date;
- (bool)editable;
- (id)event;
- (unsigned long long)hash;
- (id)initWithEKEvent:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setButtonImageName:(id)arg1;
- (void)setColor:(id)arg1;
- (void)setCompleted:(bool)arg1;
- (void)setDate:(id)arg1;
- (void)setEditable:(bool)arg1;
- (void)setEvent:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end