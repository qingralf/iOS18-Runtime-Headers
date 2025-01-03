/* Generated by RuntimeBrowser.
 */

@protocol ICNoteFormattingViewControllerDelegate <NSObject>

@required

- (void)changeIndentationByIncreasing:(bool)arg1 sender:(id)arg2;
- (bool)isOnlyBlockQuoteEnabled;
- (void)noteFormattingDidFinish:(ICNoteFormattingViewController *)arg1;
- (void)noteFormattingNeedsUpdate:(ICNoteFormattingViewController *)arg1;
- (UIColor *)noteFormattingTintColor;
- (void)setEmphasisType:(long long)arg1 sender:(id)arg2;
- (void)setTextStyle:(unsigned int)arg1 sender:(id)arg2;
- (void)toggleBIUS:(unsigned long long)arg1 sender:(id)arg2;
- (void)toggleBlockQuote:(id)arg1;

@end
