/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIAnimationCoordinator : NSObject <UIViewControllerAnimatedTransitioning> {
    id /* block */  _animator;
    id /* block */  _completion;
    UIView * _containerView;
    double  _duration;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _endFrame;
    UIPercentDrivenInteractiveTransition * _interactiveTransition;
    id /* block */  _preperation;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _startFrame;
    NSMutableDictionary * _stash;
    _UIViewControllerOneToOneTransitionContext * _transitionContext;
    UIViewController * _viewController;
}

@property (nonatomic, copy) id /* block */ animator;
@property (nonatomic, copy) id /* block */ completion;
@property (nonatomic, retain) UIView *containerView;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic) double duration;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } endFrame;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ preperation;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } startFrame;
@property (nonatomic, readonly, retain) NSMutableDictionary *stash;
@property (readonly) Class superclass;
@property (nonatomic, readonly, retain) _UIViewControllerOneToOneTransitionContext *transitionContext;
@property (nonatomic, retain) UIViewController *viewController;

- (void).cxx_destruct;
- (void)_updateTransitionContext;
- (void)animate;
- (void)animateInteractively;
- (void)animateTransition:(id)arg1;
- (void)animationEnded:(bool)arg1;
- (id /* block */)animator;
- (void)cancelInteractiveAnimation;
- (id /* block */)completion;
- (id)containerView;
- (void)dealloc;
- (double)duration;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })endFrame;
- (void)finishInteractiveAnimation;
- (id /* block */)preperation;
- (void)setAnimator:(id /* block */)arg1;
- (void)setCompletion:(id /* block */)arg1;
- (void)setContainerView:(id)arg1;
- (void)setDuration:(double)arg1;
- (void)setEndFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setPreperation:(id /* block */)arg1;
- (void)setStartFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setViewController:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })startFrame;
- (id)stash;
- (id)transitionContext;
- (double)transitionDuration:(id)arg1;
- (void)updateInteractiveProgress:(double)arg1;
- (id)viewController;

@end
