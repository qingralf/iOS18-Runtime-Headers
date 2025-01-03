/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNMeCardSharingAvatarViewController : UIViewController {
    UIActivityIndicatorView * _activityIndicator;
    UILabel * _addPhotoLabel;
    UIView * _avatarContainerView;
    <CNMeCardSharingAvatarProvider> * _avatarProvider;
    CNAvatarViewController * _avatarViewController;
    CAShapeLayer * _circularLayer;
    <CNMeCardSharingAvatarViewControllerDelegate> * _delegate;
    <CNAvatarImageProvider> * _fallbackImageProvider;
    bool  _hasImage;
    UIImageView * _imageView;
    bool  _isWaitingForPosterPreviews;
    long long  _mode;
    bool  _needsReload;
    _TtC10ContactsUI49CNPosterOnboardingSettingsAnimationViewController * _posterAnimationController;
    bool  _posterPreviewsGenerationTimedOut;
    UITapGestureRecognizer * _tapGestureRecognizer;
}

@property (nonatomic, retain) UIActivityIndicatorView *activityIndicator;
@property (nonatomic, retain) UILabel *addPhotoLabel;
@property (nonatomic, retain) UIView *avatarContainerView;
@property (nonatomic, retain) <CNMeCardSharingAvatarProvider> *avatarProvider;
@property (nonatomic, retain) CNAvatarViewController *avatarViewController;
@property (nonatomic, retain) CAShapeLayer *circularLayer;
@property (nonatomic) <CNMeCardSharingAvatarViewControllerDelegate> *delegate;
@property (nonatomic, retain) <CNAvatarImageProvider> *fallbackImageProvider;
@property (nonatomic) bool hasImage;
@property (nonatomic, retain) UIImageView *imageView;
@property (nonatomic, readonly) bool isPosterAnimationPausable;
@property (nonatomic, readonly) bool isPosterAnimationPaused;
@property (nonatomic) bool isWaitingForPosterPreviews;
@property (nonatomic) long long mode;
@property (nonatomic) bool needsReload;
@property (nonatomic, retain) _TtC10ContactsUI49CNPosterOnboardingSettingsAnimationViewController *posterAnimationController;
@property (nonatomic) bool posterPreviewsGenerationTimedOut;
@property (nonatomic, retain) UITapGestureRecognizer *tapGestureRecognizer;

- (void).cxx_destruct;
- (id)activityIndicator;
- (id)addPhotoLabel;
- (void)addPosterAnimationController:(id)arg1;
- (void)addPosterAnimationLoadingSpinner;
- (id)avatarContainerView;
- (id)avatarProvider;
- (id)avatarViewController;
- (id)circularLayer;
- (void)configureSubviews;
- (id)delegate;
- (void)didTapAvatarView:(id)arg1;
- (id)fallbackImageProvider;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForContainerView;
- (bool)hasImage;
- (id)imageView;
- (id)initWithAvatarProvider:(id)arg1;
- (id)initWithAvatarProvider:(id)arg1 mode:(long long)arg2;
- (bool)isPosterAnimationPausable;
- (bool)isPosterAnimationPaused;
- (bool)isWaitingForPosterPreviews;
- (void)loadView;
- (long long)mode;
- (bool)needsReload;
- (struct CGSize { double x1; double x2; })portraitScreenSize;
- (id)posterAnimationController;
- (bool)posterPreviewsGenerationTimedOut;
- (void)reload;
- (void)reloadAvatarImage;
- (void)reloadPosterImage;
- (void)removePosterAnimationController;
- (void)removePosterAnimationLoadingSpinner;
- (void)setActivityIndicator:(id)arg1;
- (void)setAddPhotoLabel:(id)arg1;
- (void)setAvatarContainerView:(id)arg1;
- (void)setAvatarProvider:(id)arg1;
- (void)setAvatarViewController:(id)arg1;
- (void)setCircularLayer:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFallbackImageProvider:(id)arg1;
- (void)setHasImage:(bool)arg1;
- (void)setImageView:(id)arg1;
- (void)setIsWaitingForPosterPreviews:(bool)arg1;
- (void)setMode:(long long)arg1;
- (void)setNeedsReload:(bool)arg1;
- (void)setPosterAnimationController:(id)arg1;
- (void)setPosterPreviewsGenerationTimedOut:(bool)arg1;
- (void)setTapGestureRecognizer:(id)arg1;
- (bool)showsPosterAnimation;
- (id)tapGestureRecognizer;
- (void)togglePosterAnimation;
- (void)updateImageAnimated:(bool)arg1 newImage:(id)arg2 placeHolder:(bool)arg3 additionalAnimatedChanges:(id /* block */)arg4;
- (void)updateViewsToUseGeneratedAvatarImage:(id)arg1 forSize:(struct CGSize { double x1; double x2; })arg2;
- (void)updateViewsToUseGeneratedImage:(id)arg1 forSize:(struct CGSize { double x1; double x2; })arg2 usingFallback:(bool)arg3;
- (void)updateViewsToUseGeneratedPosterImage:(id)arg1 forSize:(struct CGSize { double x1; double x2; })arg2;
- (void)updateWithAvatarProvider:(id)arg1;
- (void)viewDidLoad;
- (void)viewIsAppearing:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end
