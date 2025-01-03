/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIReviewInAppRatingAnimatedTransitioning : NSObject <UIViewControllerAnimatedTransitioning> {
    bool  _presentation;
    UIViewController * _viewController;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isPresentation) bool presentation;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIViewController *viewController;

- (void).cxx_destruct;
- (void)_animateTransition:(id)arg1 completionBlock:(id /* block */)arg2;
- (id)_presentedViewControllerForContext:(id)arg1;
- (void)animateTransition:(id)arg1;
- (bool)isPresentation;
- (void)setPresentation:(bool)arg1;
- (void)setViewController:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (id)viewController;

@end
