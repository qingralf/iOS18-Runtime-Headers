/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKFullScreenBalloonViewController : CKViewController <CKAdaptivePresentedControllerProtocol, UIGestureRecognizerDelegate> {
    bool  _beganDismissing;
    CKMessagePartChatItem * _chatItem;
    <CKFullScreenBalloonViewControllerDelegate> * _delegate;
    CKFullScreenBalloonViewDisplayConfiguration * _displayConfiguration;
    bool  _followsParentBalloonView;
    BOOL  _forcedOrientation;
    bool  _hasInsertedCatalystEmoji;
    bool  _hasPerformedInitialAnimations;
    UIView * _keyboardSnapshotView;
    bool  _preserveModalPresentationStyle;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _preservedBoundsInBalloonWindowAtAppearance;
    UIButton * _replyButton;
    UIGestureRecognizer * _tapRecognizer;
    UIView * _tintView;
    bool  _useForcedOrientation;
    bool  _wantsWindowedPresentation;
    bool  _willPresentInlineReplies;
}

@property (nonatomic) bool beganDismissing;
@property (nonatomic, readonly) CKMessagePartChatItem *chatItem;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <CKFullScreenBalloonViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) CKFullScreenBalloonViewDisplayConfiguration *displayConfiguration;
@property (nonatomic) bool followsParentBalloonView;
@property (nonatomic) BOOL forcedOrientation;
@property (nonatomic) bool hasInsertedCatalystEmoji;
@property (nonatomic) bool hasPerformedInitialAnimations;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIView *keyboardSnapshotView;
@property (nonatomic) bool preserveModalPresentationStyle;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } preservedBoundsInBalloonWindowAtAppearance;
@property (nonatomic, retain) UIButton *replyButton;
@property (nonatomic) bool shouldHidePresentingWindow; /* unknown property attribute: ? */
@property (readonly) Class superclass;
@property (nonatomic, readonly) CKMessagePartChatItem *supplementaryLayoutChatItem;
@property (nonatomic, readonly) id supplementaryLayoutContext;
@property (nonatomic, retain) UIGestureRecognizer *tapRecognizer;
@property (nonatomic, readonly) UIView *tintView;
@property (nonatomic) bool useForcedOrientation;
@property (nonatomic) bool wantsWindowedPresentation;
@property (nonatomic) bool willPresentInlineReplies;

- (void).cxx_destruct;
- (void)_performClosingAnimationsAnimated:(bool)arg1 withSendAnimation:(bool)arg2 duration:(double)arg3 withCompletion:(id /* block */)arg4;
- (void)addTapRecognizerWithTarget:(id)arg1 action:(SEL)arg2;
- (bool)beganDismissing;
- (void)beginDismissal;
- (id)chatItem;
- (bool)constrainToPresentingVCBounds;
- (void)dealloc;
- (id)delegate;
- (void)dismissImmediatelyWithNoAnimations;
- (void)dismissTapGestureRecognized:(id)arg1;
- (id)displayConfiguration;
- (bool)followsParentBalloonView;
- (bool)forceWindowedPresentation;
- (BOOL)forcedOrientation;
- (bool)gestureRecognizer:(id)arg1 shouldReceivePress:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (bool)hasInsertedCatalystEmoji;
- (bool)hasPerformedInitialAnimations;
- (void)hideTint:(bool)arg1 duration:(double)arg2;
- (id)initWithChatItem:(id)arg1 delegate:(id)arg2;
- (id)initWithChatItem:(id)arg1 displayConfiguration:(id)arg2 delegate:(id)arg3;
- (id)keyboardSnapshotView;
- (void)performCancelAnimationWithCompletion:(id /* block */)arg1;
- (void)performClosingAnimationsAnimated:(bool)arg1 withSendAnimation:(bool)arg2 withCompletion:(id /* block */)arg3;
- (void)performInitialAnimations;
- (void)performSendAndCloseAnimationWithCompletion:(id /* block */)arg1;
- (bool)preserveModalPresentationStyle;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })preservedBoundsInBalloonWindowAtAppearance;
- (void)removeTapRecognizer;
- (id)replyButton;
- (void)replyButtonPressed:(id)arg1;
- (void)setBeganDismissing:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFollowsParentBalloonView:(bool)arg1;
- (void)setForcedOrientation:(BOOL)arg1;
- (void)setHasInsertedCatalystEmoji:(bool)arg1;
- (void)setHasPerformedInitialAnimations:(bool)arg1;
- (void)setKeyboardSnapshotView:(id)arg1;
- (void)setPreserveModalPresentationStyle:(bool)arg1;
- (void)setPreservedBoundsInBalloonWindowAtAppearance:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setReplyButton:(id)arg1;
- (void)setStickerVisibility:(bool)arg1 forStickerChatItemGUID:(id)arg2;
- (void)setTapRecognizer:(id)arg1;
- (void)setUseForcedOrientation:(bool)arg1;
- (void)setWantsWindowedPresentation:(bool)arg1;
- (void)setWillPresentInlineReplies:(bool)arg1;
- (void)setupReplyButton;
- (bool)shouldAutorotate;
- (bool)shouldShowTapbackAttribution;
- (bool)shouldShowTapbackPicker;
- (void)showAllStickers;
- (id)supplementaryLayoutChatItem;
- (id)supplementaryLayoutContext;
- (id)tapRecognizer;
- (id)tintView;
- (void)updateBalloonViewFrame;
- (void)updateStickersAnimated:(bool)arg1;
- (bool)useForcedOrientation;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (id)viewToAlignWith;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;
- (bool)wantsWindowedPresentation;
- (bool)willPresentInlineReplies;

@end
