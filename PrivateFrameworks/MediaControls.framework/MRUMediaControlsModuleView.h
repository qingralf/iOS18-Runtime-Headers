/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
 */

@interface MRUMediaControlsModuleView : SBFTouchPassThroughView {
    UIView * _alertView;
    MRUMediaControlsModuleBackgroundView * _backgroundView;
    UICollectionView * _collectionView;
    UICollectionViewFlowLayout * _collectionViewLayout;
    MRUMediaControlsModuleContainerView * _containerView;
    CCUIModuleContentMetrics * _contentMetrics;
    double  _contentScale;
    double  _cornerRadius;
    bool  _expanded;
    long long  _layout;
    MRUMediaControlsModuleMoreButton * _moreButton;
    CCUICAPackageView * _previewView;
    bool  _showAlertView;
    bool  _showMoreButton;
    bool  _showPreviewView;
    MRUVisualStylingProvider * _stylingProvider;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _transitionFrame;
    bool  _transitioning;
}

@property (nonatomic, retain) UIView *alertView;
@property (nonatomic, readonly) MRUMediaControlsModuleBackgroundView *backgroundView;
@property (nonatomic, readonly) UICollectionView *collectionView;
@property (nonatomic, readonly) UICollectionViewFlowLayout *collectionViewLayout;
@property (nonatomic, readonly) MRUMediaControlsModuleContainerView *containerView;
@property (nonatomic, retain) CCUIModuleContentMetrics *contentMetrics;
@property (nonatomic) double contentScale;
@property (nonatomic) double cornerRadius;
@property (getter=isExpanded, nonatomic) bool expanded;
@property (nonatomic) long long layout;
@property (nonatomic, readonly) MRUMediaControlsModuleMoreButton *moreButton;
@property (nonatomic, retain) CCUICAPackageView *previewView;
@property (nonatomic) bool showAlertView;
@property (nonatomic) bool showMoreButton;
@property (nonatomic) bool showPreviewView;
@property (nonatomic, readonly) MRUVisualStylingProvider *stylingProvider;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } transitionFrame;
@property (getter=isTransitioning, nonatomic) bool transitioning;

- (void).cxx_destruct;
- (id)alertView;
- (id)backgroundView;
- (id)collectionView;
- (id)collectionViewLayout;
- (id)containerView;
- (id)contentMetrics;
- (double)contentScale;
- (double)cornerRadius;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isExpanded;
- (bool)isTransitioning;
- (long long)layout;
- (void)layoutSubviews;
- (id)moreButton;
- (id)previewView;
- (void)setAlertView:(id)arg1;
- (void)setContentMetrics:(id)arg1;
- (void)setContentScale:(double)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setExpanded:(bool)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setLayout:(long long)arg1;
- (void)setPreviewView:(id)arg1;
- (void)setShowAlertView:(bool)arg1;
- (void)setShowMoreButton:(bool)arg1;
- (void)setShowPreviewView:(bool)arg1;
- (void)setStylingProvider:(id)arg1;
- (void)setTransitionFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setTransitioning:(bool)arg1;
- (bool)showAlertView;
- (bool)showMoreButton;
- (bool)showPreviewView;
- (id)stylingProvider;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })transitionFrame;
- (void)updateCollectionViewContentInset;
- (void)updateVisibility;

@end