/* Generated by RuntimeBrowser.
 */

@protocol CRFeedbackListener <NSObject>

@optional

- (void)cardSectionView:(id <CRCardSection>)arg1 willProcessEngagementFeedback:(id <CRCardSectionEngagementFeedback>)arg2;
- (void)cardSectionViewDidAppearForCardSection:(id <CRCardSection>)arg1 withAppearanceFeedback:(id <CRCardSectionViewAppearanceFeedback>)arg2;
- (void)cardSectionViewDidDisappearForCardSection:(id <CRCardSection>)arg1 withDisappearanceFeedback:(id <CRCardSectionViewDisappearanceFeedback>)arg2;
- (void)cardSectionViewDidInvalidateSizeForCardSection:(id <CRCardSection>)arg1;
- (void)cardSectionViewWillAppearForCardSection:(id <CRCardSection>)arg1 withAppearanceFeedback:(id <CRCardSectionViewAppearanceFeedback>)arg2;
- (void)cardViewDidAppearForCard:(id <CRCard>)arg1 withAppearanceFeedback:(id <CRCardViewAppearanceFeedback>)arg2;
- (void)cardViewDidDisappearForCard:(id <CRCard>)arg1 withDisappearanceFeedback:(id <CRCardViewDisappearanceFeedback>)arg2;
- (void)cardViewWillAppearForCard:(id <CRCard>)arg1 withAppearanceFeedback:(id <CRCardViewAppearanceFeedback>)arg2;
- (void)commandWasPerformed:(id <CRCommandEngagementFeedback>)arg1;
- (void)controllerForCard:(id <CRCard>)arg1 didReceiveAsyncCard:(id <CRCard>)arg2 withAsyncCardReceiptFeedback:(id <CRAsyncCardReceiptFeedback>)arg3;
- (void)controllerForCard:(id <CRCard>)arg1 didRequestAsyncCard:(id <CRCard>)arg2 withAsyncCardRequestFeedback:(id <CRAsyncCardRequestFeedback>)arg3;
- (bool)shouldHandleEngagement:(id <CRCardSectionEngagementFeedback>)arg1 forCardSection:(id <CRCardSection>)arg2;
- (void)userDidEngageCardSection:(id <CRCardSection>)arg1 withEngagementFeedback:(id <CRCardSectionEngagementFeedback>)arg2;
- (void)userDidReportFeedback:(id <CRUserReportRequestFeedback>)arg1 fromCardSection:(id <CRCardSection>)arg2;

@end
