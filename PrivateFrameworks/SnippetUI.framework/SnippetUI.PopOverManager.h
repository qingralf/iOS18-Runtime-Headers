/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SnippetUI.framework/SnippetUI
 */

@interface SnippetUI.PopOverManager : NSObject <UIPopoverPresentationControllerDelegate> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _selection;
    void isPopOverPresented;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  layout;
    void popOverVC;
}

- (void).cxx_destruct;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1;
- (id)init;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (bool)popoverPresentationControllerShouldDismissPopover:(id)arg1;
- (void)prepareForPopoverPresentation:(id)arg1;

@end
