/* Generated by RuntimeBrowser.
 */

@protocol PPKMarkupContainerViewControllerDelegate

@optional

- (void)markupContainerViewController:(PPKMarkupContainerViewController *)arg1 contentFrameDidChange:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)markupContainerViewController:(PPKMarkupContainerViewController *)arg1 detectedFormInContent:(bool)arg2 withAutofill:(bool)arg3;
- (void)markupContainerViewController:(PPKMarkupContainerViewController *)arg1 didDismissViewControllerWithAnimation:(bool)arg2;
- (void)markupContainerViewController:(PPKMarkupContainerViewController *)arg1 openFormFilling:(bool)arg2;
- (bool)markupContainerViewController:(PPKMarkupContainerViewController *)arg1 shouldOpenLink:(NSURL *)arg2;
- (void)markupContainerViewController:(PPKMarkupContainerViewController *)arg1 thumbnailViewDidCollapse:(bool)arg2;
- (void)markupContainerViewController:(PPKMarkupContainerViewController *)arg1 updateChromeWithAnimation:(bool)arg2;
- (void)markupContainerViewController:(PPKMarkupContainerViewController *)arg1 wantsToEnterFullscreen:(bool)arg2;
- (void)markupContainerViewController:(PPKMarkupContainerViewController *)arg1 willPresentViewControllerWithAnimation:(bool)arg2;
- (void)markupContainerViewControllerActiveAnalysisInteractionTypesDidChange:(PPKMarkupContainerViewController *)arg1;
- (void)markupContainerViewControllerAvailableAnalysisResultTypesDidChange:(PPKMarkupContainerViewController *)arg1;
- (void)markupContainerViewControllerDidChangeContent:(PPKMarkupContainerViewController *)arg1 enablingMarkup:(bool)arg2;
- (bool)shouldAllowEditingContents:(PPKMarkupContainerViewController *)arg1;

@end