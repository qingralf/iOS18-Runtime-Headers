/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsFeed.framework/NewsFeed
 */

@interface NewsFeed.PuzzleEmbedViewController : UIViewController {
    void $__lazy_storage_$_contentEnvironment;
    void actionProvider;
    void activityIndicator;
    void bundleSubscriptionManager;
    void contentFrame;
    void delegate;
    void embedLocation;
    void errorProvider;
    void errorView;
    void feedConfiguration;
    void hasPuzzleDataLoadAttempted;
    void interactionProvider;
    void isResizable;
    void onEmbedInteraction;
    void onReuse;
    void presentationManager;
    void puzzleAccessArbiter;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  puzzleData;
    void puzzleDataManager;
    void puzzleDifficultyDescriptionProvider;
    void puzzleID;
    void puzzleLoadingStateMachine;
    void reuseIdentifier;
    void textInputTraits;
    void viewportSize;
    void webContentViewController;
}

@property (nonatomic, readonly) UIView *inputAccessoryView;

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)inputAccessoryView;
- (void)keyboardWillChangeFrameWithNotification:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end