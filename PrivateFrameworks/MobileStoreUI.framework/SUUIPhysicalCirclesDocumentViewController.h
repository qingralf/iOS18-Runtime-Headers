/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileStoreUI.framework/MobileStoreUI
 */

@interface SUUIPhysicalCirclesDocumentViewController : SUUIViewController <SUUIArtworkRequestDelegate, SUUIDocumentViewController, SUUIOnboardingAffiliationCirclesDelegate, SUUIPhysicalCirclesTemplateDelegate, UIGestureRecognizerDelegate> {
    SUUIOnboardingAffiliationCirclesViewController * _circlesViewController;
    SUUIOnboardingFooterView * _footerView;
    NSMapTable * _imageRequests;
    UIGestureRecognizer * _interactivePopGestureRecognizer;
    SUUIOnboardingProgressView * _progressView;
    SUUIResourceLoader * _resourceLoader;
    SUUIPhysicalCirclesTemplateViewElement * _templateElement;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_affiliationItemsWithCircleItemElements:(id)arg1;
- (void)_footerLeftButtonAction:(id)arg1;
- (void)_footerRightButtonAction:(id)arg1;
- (id)_leftFooterButtonElement;
- (void)_loadImagesWithReason:(long long)arg1;
- (id)_profileImageElement;
- (void)_reloadFooterViewAnimated:(bool)arg1;
- (void)_reloadInstructionsView;
- (id)_rightFooterButtonElement;
- (void)_styleAttributedString:(id)arg1 withStyle:(id)arg2;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (void)dealloc;
- (void)documentDidUpdate:(id)arg1;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)initWithPhysicalCirclesTemplateViewElement:(id)arg1;
- (void)loadView;
- (void)onboardingCircles:(id)arg1 didRemoveAffiliationItem:(id)arg2;
- (void)onboardingCircles:(id)arg1 didSelectAffiliationItem:(id)arg2 atIndex:(long long)arg3;
- (void)physicalCirclesDOMFeature:(id)arg1 didRequestAnimation:(id)arg2;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(bool)arg1;

@end
