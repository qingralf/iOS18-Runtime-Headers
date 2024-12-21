/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIMultiscriptCandidateViewController : UIViewController <UIKeyboardAutocorrectionObserver, UIPredictiveViewController> {
    TIAutocorrectionList * _cachedCandidates;
    UIMultiscriptCandidateView * _candidateView;
    UIViewController<UIPredictiveViewController> * _currentViewController;
    bool  _updatingCandidates;
}

@property (nonatomic, retain) TIAutocorrectionList *cachedCandidates;
@property (nonatomic, retain) UIMultiscriptCandidateView *candidateView;
@property (nonatomic, retain) UIViewController<UIPredictiveViewController> *currentViewController;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *displayedCandidates; /* unknown property attribute: ? */
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) bool updatingCandidates;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (id)alternativeCandidateAction;
- (id)alternativeCandidates;
- (void)autocorrectionController:(id)arg1 didUpdateAutocorrectionList:(id)arg2;
- (void)autocorrectionControllerDidClearAutocorrections:(id)arg1;
- (void)autocorrectionListDidChange;
- (id)cachedCandidates;
- (id)candidateView;
- (id)currentViewController;
- (void)dealloc;
- (id)displayedCandidates;
- (bool)hidesExpandableButton;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (bool)isVisibleForInputDelegate:(id)arg1 inputViews:(id)arg2;
- (void)loadView;
- (long long)overrideUserInterfaceStyle;
- (id)predictionView;
- (double)preferredHeightForTraitCollection:(id)arg1;
- (void)reloadArrangedSubviews;
- (bool)requiresKeyboard;
- (void)setCachedCandidates:(id)arg1;
- (void)setCandidateView:(id)arg1;
- (void)setCurrentViewController:(id)arg1;
- (void)setUpdatingCandidates:(bool)arg1;
- (bool)updatingCandidates;
- (void)viewWillAppear:(bool)arg1;

@end