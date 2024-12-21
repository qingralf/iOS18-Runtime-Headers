/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUIDocumentUIConfigurationModal : VUIDocumentUIConfiguration {
    bool  _modalOverModalAllowed;
    bool  _presentOnPresentingVC;
}

@property (getter=isModalOverModalAllowed, nonatomic) bool modalOverModalAllowed;
@property (getter=shouldPresentOnPresentingViewController, nonatomic) bool presentOnPresentingVC;

- (bool)isModalOverModalAllowed;
- (void)setModalOverModalAllowed:(bool)arg1;
- (void)setPresentOnPresentingVC:(bool)arg1;
- (bool)shouldPresentOnPresentingViewController;

@end