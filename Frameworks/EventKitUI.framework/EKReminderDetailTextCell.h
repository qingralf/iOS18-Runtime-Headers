/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKReminderDetailTextCell : EKEventDetailCell {
    UITextView * _textView;
    UILabel * _title;
}

- (void).cxx_destruct;
- (void)commonSetupCellWithTitle:(id)arg1 showExtraSpaceAtBottom:(bool)arg2;
- (id)initWithEvent:(id)arg1 reminder:(id)arg2 editable:(bool)arg3 showExtraSpaceAtBottom:(bool)arg4 allowDataDetector:(bool)arg5 title:(id)arg6 textFromEventAndReminderBlock:(id /* block */)arg7;
- (id)initWithEvent:(id)arg1 reminder:(id)arg2 editable:(bool)arg3 showExtraSpaceAtBottom:(bool)arg4 title:(id)arg5 attributedText:(id)arg6;
- (void)setSeparatorStyle:(long long)arg1;

@end
