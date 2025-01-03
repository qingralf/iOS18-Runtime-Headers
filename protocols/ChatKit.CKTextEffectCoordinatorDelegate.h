/* Generated by RuntimeBrowser.
 */

@protocol ChatKit.CKTextEffectCoordinatorDelegate

@required

- (bool)canStartNewTextAnimationsInTextEffectCoordinator:(_TtC7ChatKit23CKTextEffectCoordinator *)arg1;
- (void)textEffectCoordinator:(_TtC7ChatKit23CKTextEffectCoordinator *)arg1 didChangeStateOfAnimator:(id <_NSTextAnimator>)arg2 textView:(UITextView *)arg3;
- (void)textEffectCoordinator:(_TtC7ChatKit23CKTextEffectCoordinator *)arg1 didDetectInvalidAnimationForTextViewIdentifier:(NSString *)arg2;
- (NSArray *)textEffectCoordinator:(_TtC7ChatKit23CKTextEffectCoordinator *)arg1 highPriorityTextViewIdentifiersForUnplayedVisibleTextViewIdentifiers:(NSArray *)arg2;
- (UITextView *)textEffectCoordinator:(_TtC7ChatKit23CKTextEffectCoordinator *)arg1 textViewForTextViewIdentifier:(NSString *)arg2;
- (bool)textEffectCoordinator:(_TtC7ChatKit23CKTextEffectCoordinator *)arg1 textViewIdentifierIsCandidateForTextEffectPlayback:(NSString *)arg2;
- (void)textEffectCoordinator:(_TtC7ChatKit23CKTextEffectCoordinator *)arg1 willRequestAnimatorUsing:(CKTextEffectCoordinatorAnimatorRequest *)arg2;
- (NSArray *)visibleTextViewIdentifiersFor:(_TtC7ChatKit23CKTextEffectCoordinator *)arg1;

@end
