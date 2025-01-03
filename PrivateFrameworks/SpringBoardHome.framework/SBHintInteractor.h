/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

@interface SBHintInteractor : NSObject <SBViewControllerInteractiveTransitioning, UIInteractionProgressObserver> {
    struct { 
        struct { 
            double value; 
            bool inclusive; 
        } start; 
        struct { 
            double value; 
            bool inclusive; 
        } end; 
    }  _hintInterval;
    UIInteractionProgress * _interactionProgress;
    <SBViewControllerContextTransitioning> * _transitionContext;
}

@property (nonatomic, readonly) long long completionCurve; /* unknown property attribute: ? */
@property (nonatomic, readonly) double completionSpeed; /* unknown property attribute: ? */
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIInteractionProgress *interactionProgress;
@property (nonatomic, readonly) double maxHintProgress;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool wantsInteractiveStart; /* unknown property attribute: ? */

- (void).cxx_destruct;
- (void)_updateInteractionPercentComplete:(double)arg1;
- (void)cancelTransition;
- (void)finishInteractiveTransition;
- (id)initWithInteractionProgress:(id)arg1 maxHintProgress:(double)arg2;
- (id)interactionProgress;
- (void)interactionProgress:(id)arg1 didEnd:(bool)arg2;
- (void)interactionProgressDidUpdate:(id)arg1;
- (double)maxHintProgress;
- (void)startInteractiveTransition:(id)arg1;
- (bool)supportsRestarting;
- (void)updateTransition:(double)arg1;

@end
