/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriSharedUI.framework/SiriSharedUI
 */

@interface SiriSharedUI.SiriSharedUISmartDialogInteractionManager : NSObject <SRUIFCardLoadingObserver, VRXInteractionDelegate> {
    void delegate;
    void isLoadingCard;
    void popoverViewController;
    void previousCard;
}

- (void).cxx_destruct;
- (void)didEndEditing;
- (void)informHostOfViewResize:(struct CGSize { double x1; double x2; })arg1;
- (id)init;
- (void)navigateWithPluginModelData:(id)arg1 bundleName:(id)arg2;
- (void)navigateWithResponseData:(id)arg1;
- (void)performAceCommand:(id)arg1;
- (void)performSFCommand:(id)arg1;
- (void)performShowResponse:(id)arg1;
- (id)presentingViewController;
- (void)submitIFMessagePayload:(id)arg1;
- (void)willBeginEditing;

@end