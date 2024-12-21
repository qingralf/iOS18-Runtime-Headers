/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RemindersUICore.framework/RemindersUICore
 */

@interface TTRIRecurrenceChooserController : NSObject {
    UIColor * _backgroundColor;
    NSDate * _date;
    <TTRIRecurrenceChooserControllerDelegate> * _delegate;
}

@property (nonatomic, copy) UIColor *backgroundColor;
@property (copy) NSDate *date;
@property <TTRIRecurrenceChooserControllerDelegate> *delegate;
@property (nonatomic, readonly) long long frequency;

+ (int)dayFromNumber:(long long)arg1;

- (void).cxx_destruct;
- (id)backgroundColor;
- (id)cellForRow:(long long)arg1;
- (id)date;
- (id)delegate;
- (bool)drawBackgroundForRow:(long long)arg1;
- (long long)frequency;
- (double)heightForRow:(long long)arg1;
- (id)initWithDate:(id)arg1;
- (void)notifyDelegate;
- (long long)numberOfRows;
- (void)rowTapped:(long long)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)startDateComponents:(unsigned long long)arg1;
- (void)updateFromRecurrenceRule:(id)arg1;
- (void)updateRecurrenceRuleBuilder:(id)arg1;

@end