/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BannerKit.framework/BannerKit
 */

@interface BNBannerSourceListenerHostedPresentableViewController : BNBannerSourceListenerPresentableViewController <BNBannerSourceListenerHostedPresentable> {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _bannerContentOutsets;
    BSAnimationSettings * _bannerSizeTransitionAnimationSettings;
    bool  _isClippingEnabled;
    <BNPanGestureProxy> * _panGestureProxy;
    FBScene * _scene;
    <UIScenePresenter> * _scenePresenter;
    <UITraitChangeRegistration> * _traitChangeRegistration;
}

@property (nonatomic, readonly) int bannerAppearState;
@property (getter=isContentHosted, nonatomic, readonly) bool contentHosted; /* unknown property attribute: ? */
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <BNBannerSourceListenerPresentableDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isDraggingDismissalEnabled, nonatomic, readonly) bool draggingDismissalEnabled; /* unknown property attribute: ? */
@property (getter=isDraggingInteractionEnabled, nonatomic, readonly) bool draggingInteractionEnabled; /* unknown property attribute: ? */
@property (readonly) unsigned long long hash;
@property (getter=isHostedContent, nonatomic, readonly) bool hostedContent;
@property (nonatomic, readonly, copy) NSSet *preferredBackgroundActivitiesToSuppress; /* unknown property attribute: ? */
@property (nonatomic, readonly) <BNPresentable> *presentable;
@property (nonatomic, readonly) long long presentableBehavior; /* unknown property attribute: ? */
@property (nonatomic) <BNPresentableContext> *presentableContext; /* unknown property attribute: ? */
@property (nonatomic, readonly) long long presentableType; /* unknown property attribute: ? */
@property (nonatomic, readonly) bool providesHostedContent;
@property (getter=isReady, nonatomic, readonly) bool ready;
@property (nonatomic, readonly, copy) NSString *requestIdentifier;
@property (nonatomic, readonly, copy) NSString *requesterIdentifier;
@property (nonatomic, readonly) FBScene *scene;
@property (readonly) Class superclass;
@property (getter=isTouchOutsideDismissalEnabled, nonatomic, readonly) bool touchOutsideDismissalEnabled; /* unknown property attribute: ? */
@property (nonatomic, readonly, copy) NSUUID *uniqueIdentifier; /* unknown property attribute: ? */
@property (nonatomic, readonly, copy) NSUUID *uniquePresentableIdentifier; /* unknown property attribute: ? */
@property (nonatomic, readonly) UIViewController *viewController; /* unknown property attribute: ? */

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (void)_handleUserInterfaceStyleTraitChange:(id)arg1;
- (void)_makeReadyIfPossibleWithScene:(id)arg1;
- (void)_setReadyCompletion:(id /* block */)arg1;
- (id /* block */)_tearDownSceneBlock:(id)arg1;
- (void)_tearDownSceneIfNecessary;
- (void)_tearDownSceneInfrastructureIfNecessary;
- (void)_tearDownScenePresenterIfNecessary;
- (void)_updateBannerContentOutsetsWithScene:(id)arg1;
- (void)_updateClippingWithScene:(id)arg1;
- (void)_updatePreferredContentSizeWithScene:(id)arg1 transitionContext:(id)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })bannerContentOutsets;
- (id)bannerSizeTransitionAnimationSettings;
- (void)bannerSourceListenerPresentableViewControllerViewDidChangeSize:(id)arg1;
- (void)dealloc;
- (void)draggingDidBeginWithGestureProxy:(id)arg1;
- (id)initWithSpecification:(id)arg1 serviceDomain:(id)arg2 scene:(id)arg3 readyCompletion:(id /* block */)arg4;
- (id)initWithWithSpecification:(id)arg1 serviceDomain:(id)arg2 scene:(id)arg3 readyCompletion:(id /* block */)arg4;
- (void)invalidate;
- (bool)isClippingEnabled;
- (bool)isDraggingDismissalEnabled;
- (bool)isDraggingInteractionEnabled;
- (bool)isHostedContent;
- (bool)isReady;
- (bool)isTouchOutsideDismissalEnabled;
- (id)preferredBackgroundActivitiesToSuppress;
- (id)presentableDescription;
- (void)presentableDidAppearAsBanner:(id)arg1;
- (void)presentableDidDisappearAsBanner:(id)arg1 withReason:(id)arg2;
- (void)presentableWillAppearAsBanner:(id)arg1;
- (void)presentableWillDisappearAsBanner:(id)arg1 withReason:(id)arg2;
- (void)presentableWillNotAppearAsBanner:(id)arg1 withReason:(id)arg2;
- (bool)providesHostedContent;
- (id)scene;
- (void)scene:(id)arg1 didReceiveActions:(id)arg2;
- (void)scene:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 oldClientSettings:(id)arg3 transitionContext:(id)arg4;
- (void)sceneContentStateDidChange:(id)arg1;
- (void)sceneDidInvalidate:(id)arg1;
- (void)userInteractionDidEndForBannerForPresentable:(id)arg1;
- (void)userInteractionWillBeginForBannerForPresentable:(id)arg1;
- (id)viewController;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
