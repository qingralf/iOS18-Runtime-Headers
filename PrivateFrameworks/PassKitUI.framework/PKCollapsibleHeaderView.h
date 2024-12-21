/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKCollapsibleHeaderView : UIView <UISearchBarDelegate> {
    UIActivityIndicatorView * _activityIndicator;
    double  _additionalBottomPadding;
    double  _additionalCollapsibleHeight;
    double  _additionalTopPadding;
    LAUICheckmarkLayer * _checkmarkLayer;
    <PKCollapsibleHeaderViewDelegate> * _delegate;
    struct CGSize { 
        double width; 
        double height; 
    }  _imageSize;
    double  _maxHeight;
    double  _minHeight;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _readableContentInsets;
    bool  _removeAdditionalTopPadding;
    UISearchBar * _searchBar;
    bool  _showCheckmark;
    bool  _showSearchBar;
    bool  _showSpinner;
    UILabel * _subtitleLabel;
    bool  _titleAccessoriesEnabled;
    UIFont * _titleFont;
    PKTrailingAccessoryLabel * _titleLabel;
    NSString * _titleText;
    UIView * _topArtView;
}

@property (nonatomic) double additionalBottomPadding;
@property (nonatomic) double additionalCollapsibleHeight;
@property (nonatomic) double additionalTopPadding;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <PKCollapsibleHeaderViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, readonly) double maxHeight;
@property (nonatomic, readonly) double minHeight;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } readableContentInsets;
@property (nonatomic) bool removeAdditionalTopPadding;
@property (nonatomic) bool showCheckmark;
@property (nonatomic) bool showSearchBar;
@property (nonatomic) bool showSpinner;
@property (readonly) Class superclass;
@property (nonatomic) bool titleAccessoriesEnabled;
@property (nonatomic, retain) UIFont *titleFont;
@property (nonatomic, retain) UIView *topArtView;

- (void).cxx_destruct;
- (void)_contentSizeCategoryDidChange;
- (void)_dynamicUserInterfaceTraitDidChange;
- (struct { double x1; double x2; double x3; double x4; double x5; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 isTemplateLayout:(bool)arg2;
- (double)_maxTitleWidthInsideFrameWidth:(double)arg1 reserveSpace:(bool)arg2;
- (void)_setLabelFonts;
- (double)_titleTopPadding;
- (double)_topArtTopPadding;
- (void)_updateCheckmarkColor;
- (double)additionalBottomPadding;
- (double)additionalCollapsibleHeight;
- (double)additionalTopPadding;
- (id)delegate;
- (struct { double x1; double x2; double x3; double x4; double x5; })heightBoundsForWidth:(double)arg1;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)image;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (double)maxHeight;
- (double)minHeight;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })readableContentInsets;
- (bool)removeAdditionalTopPadding;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (bool)searchBarShouldBeginEditing:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (void)setAdditionalBottomPadding:(double)arg1;
- (void)setAdditionalCollapsibleHeight:(double)arg1;
- (void)setAdditionalTopPadding:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setReadableContentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setRemoveAdditionalTopPadding:(bool)arg1;
- (void)setSearchBarDefaultText:(id)arg1;
- (void)setShowCheckmark:(bool)arg1;
- (void)setShowSearchBar:(bool)arg1;
- (void)setShowSpinner:(bool)arg1;
- (void)setTitle:(id)arg1 subtitle:(id)arg2;
- (void)setTitleAccessoriesEnabled:(bool)arg1;
- (void)setTitleFont:(id)arg1;
- (void)setTopArtView:(id)arg1;
- (bool)showCheckmark;
- (void)showCheckmark:(bool)arg1 animated:(bool)arg2;
- (bool)showSearchBar;
- (bool)showSpinner;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (bool)titleAccessoriesEnabled;
- (id)titleFont;
- (id)topArtView;
- (void)updateTitleLabelText;

@end