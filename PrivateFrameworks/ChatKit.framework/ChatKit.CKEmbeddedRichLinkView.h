/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface ChatKit.CKEmbeddedRichLinkView : UIView <CKTranscriptLinkCustomizationPickerDelegate, IMBalloonPluginDataSourceDelegate, UIEditMenuInteractionDelegate> {
    void delegate;
    void discardButton;
    void editMenuInteraction;
    void isPresentingEditMenu;
    void pluginEntryViewController;
    void richLinkDataSource;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  url;
}

- (void).cxx_destruct;
- (void)balloonPluginDataSourceDidChange:(id)arg1;
- (void)customizationPickerControllerDidDismiss:(id)arg1;
- (void)customizationPickerControllerDidPresent:(id)arg1;
- (void)customizationPickerControllerWillDismiss:(id)arg1;
- (void)customizationPickerControllerWillPresent:(id)arg1;
- (void)didTapDiscardButton;
- (void)didTapToPresentEditMenu:(id)arg1;
- (id)editMenuInteraction:(id)arg1 menuForConfiguration:(id)arg2 suggestedActions:(id)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })editMenuInteraction:(id)arg1 targetRectForConfiguration:(id)arg2;
- (void)editMenuInteraction:(id)arg1 willDismissMenuForConfiguration:(id)arg2 animator:(id)arg3;
- (void)editMenuInteraction:(id)arg1 willPresentMenuForConfiguration:(id)arg2 animator:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)pluginPayloadDidLoad:(id)arg1;
- (void)pluginPayloadWantsResize:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)transitionContextForCustomizationPickerController:(id)arg1;

@end
