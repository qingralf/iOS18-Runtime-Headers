/* Generated by RuntimeBrowser.
 */

@protocol TUIAssistantButtonBarViewDelegate <NSObject>

@required

- (void)assistantButtonBarView:(TUIAssistantButtonBarView *)arg1 wantsToShowCollapsedItemGroup:(UIBarButtonItemGroup *)arg2 fromButton:(_UIButtonBarButton *)arg3;
- (UITextInputAssistantItem *)inputAssistantItem;
- (NSLocale *)locale;
- (void)setLocale:(NSLocale *)arg1;

@end