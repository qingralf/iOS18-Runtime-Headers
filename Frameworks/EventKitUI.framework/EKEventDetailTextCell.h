/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKEventDetailTextCell : EKEventDetailCell <EKEventDetailTextCellHeaderDelegate> {
    <EKEventDetailTextCellDelegate> * _delegate;
    EKEventDetailTextCellHeader * _headerView;
    bool  _isTruncatingText;
    UITextView * _sizingTextView;
    id /* block */  _textFromEventBlock;
    UITextView * _textView;
    NSString * _title;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <EKEventDetailTextCellDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isTruncatingText;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_createNewTextView;
- (id)_headerView;
- (double)_layoutForWidth:(double)arg1;
- (struct CGSize { double x1; double x2; })_sizeForTextViewGivenWidth:(double)arg1 outTruncatingText:(bool*)arg2;
- (id)_sizingTextView;
- (id)_textView;
- (void)cellHeaderTapped;
- (id)delegate;
- (id)initWithEvent:(id)arg1 editable:(bool)arg2 title:(id)arg3 textFromEventBlock:(id /* block */)arg4;
- (bool)isTruncatingText;
- (void)layoutForWidth:(double)arg1 position:(int)arg2;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg1;
- (void)setIsTruncatingText:(bool)arg1;
- (bool)update;

@end