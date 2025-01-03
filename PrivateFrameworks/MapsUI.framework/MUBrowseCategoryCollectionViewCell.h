/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MapsUI.framework/MapsUI
 */

@interface MUBrowseCategoryCollectionViewCell : UICollectionViewCell {
    MUBrowseCategoryItem * _browseItem;
    UIImageView * _highlightedImageView;
    UIImageView * _imageView;
    struct CGSize { 
        double width; 
        double height; 
    }  _preferredSize;
    UIFont * _preferredTitleLabelFont;
    UILabel * _titleLabel;
    NSLayoutConstraint * _titleLabelTopConstraint;
}

@property (nonatomic, retain) MUBrowseCategoryItem *browseItem;
@property (nonatomic, retain) UIImageView *highlightedImageView;
@property (nonatomic, retain) UIImageView *imageView;
@property (nonatomic) struct CGSize { double x1; double x2; } preferredSize;
@property (nonatomic, retain) UIFont *preferredTitleLabelFont;
@property (nonatomic, retain) UILabel *titleLabel;
@property (nonatomic, retain) NSLayoutConstraint *titleLabelTopConstraint;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (id)browseItem;
- (id)highlightedImageView;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)preferredLayoutAttributesFittingAttributes:(id)arg1;
- (struct CGSize { double x1; double x2; })preferredSize;
- (id)preferredTitleLabelFont;
- (void)prepareForReuse;
- (void)setBrowseItem:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setHighlightedImageView:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setPreferredSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPreferredTitleLabelFont:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setTitleLabelTextColor:(id)arg1;
- (void)setTitleLabelTopConstraint:(id)arg1;
- (id)titleLabel;
- (id)titleLabelTopConstraint;

@end
