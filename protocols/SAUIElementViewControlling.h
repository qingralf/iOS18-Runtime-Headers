/* Generated by RuntimeBrowser.
 */

@protocol SAUIElementViewControlling <SAUIElementViewControllingObservable>

@required

- (<SAElementViewProviding> *)elementViewProvider;
- (long long)handleElementLongPress:(UIGestureRecognizer *)arg1;
- (long long)handleElementTap:(UIGestureRecognizer *)arg1;

@optional

- (bool)handleLongPress:(UIGestureRecognizer *)arg1;
- (bool)handleTap:(UIGestureRecognizer *)arg1;

@end