/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIPreviewInteractionCrossBlurViewControllerTransition : NSObject <_UIPreviewInteractionViewControllerTransition> {
    bool  _dismissTransition;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _finalPlatterRect;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _initialPlatterRect;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (getter=isDismissTransition, nonatomic) bool dismissTransition;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) UITargetedPreview *sourcePreview; /* unknown property attribute: ? */
@property (readonly) Class superclass;

- (bool)isDismissTransition;
- (void)performAppearanceTransitionFromView:(id)arg1 toView:(id)arg2 containerView:(id)arg3;
- (void)performDisappearanceTransitionFromView:(id)arg1 toView:(id)arg2 containerView:(id)arg3;
- (void)performTransitionFromView:(id)arg1 toView:(id)arg2 containerView:(id)arg3;
- (void)prepareAppearanceTransitionFromView:(id)arg1 toView:(id)arg2 containerView:(id)arg3;
- (void)prepareDisappearanceTransitionFromView:(id)arg1 toView:(id)arg2 containerView:(id)arg3;
- (void)prepareTransitionFromView:(id)arg1 toView:(id)arg2 containerView:(id)arg3;
- (void)setDismissTransition:(bool)arg1;
- (void)transitionDidEnd:(bool)arg1;

@end
