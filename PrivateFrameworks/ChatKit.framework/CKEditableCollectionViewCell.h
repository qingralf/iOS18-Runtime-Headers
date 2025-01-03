/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKEditableCollectionViewCell : UICollectionViewCell <CKTranscriptCellProtocol> {
    bool  __ck_editing;
    double  _associatedItemOffset;
    UIImageView * _checkmark;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _contentAlignmentRect;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentInsets;
    double  _drawerPercentRevealed;
    long long  _editingStyle;
    bool  _isAnimatingInDarkEffect;
    bool  _isInReplyContext;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _marginInsets;
    BOOL  _orientation;
    bool  _shouldReturnActualVEV;
    bool  _wantsDrawerLayout;
}

@property (getter=_ck_isEditing, setter=_ck_setEditing:, nonatomic) bool _ck_editing;
@property (nonatomic) double associatedItemOffset;
@property (nonatomic, retain) UIImageView *checkmark;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentAlignmentInsets;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } contentAlignmentRect;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInsets;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic) double drawerPercentRevealed;
@property (nonatomic) long long editingStyle;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isAnimatingInDarkEffect;
@property (nonatomic) bool isInReplyContext;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } marginInsets;
@property (nonatomic) BOOL orientation;
@property (nonatomic) bool shouldReturnActualVEV;
@property (readonly) Class superclass;
@property (nonatomic) bool wantsDrawerLayout;

+ (Class)_contentViewClass;

- (void).cxx_destruct;
- (void)_animateVisibility:(bool)arg1 completion:(id /* block */)arg2;
- (bool)_ck_isEditing;
- (void)_ck_setEditing:(bool)arg1;
- (void)_ck_setEditing:(bool)arg1 animated:(bool)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_horizontalSafeAreaInsets;
- (void)_updateVisibility:(bool)arg1;
- (void)addFilter:(id)arg1;
- (double)associatedItemOffset;
- (id)checkmark;
- (void)clearFilters;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentAlignmentInsets;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentAlignmentRect;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInsets;
- (id)contentView;
- (id)description;
- (double)drawerPercentRevealed;
- (long long)editingStyle;
- (bool)isAnimatingInDarkEffect;
- (bool)isInReplyContext;
- (void)layoutSubviews;
- (void)layoutSubviewsForAlignmentContents;
- (void)layoutSubviewsForContents;
- (void)layoutSubviewsForDrawer;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })marginInsets;
- (BOOL)orientation;
- (void)performHide:(id /* block */)arg1;
- (void)performInsertion:(id /* block */)arg1;
- (void)performReload:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)performRemoval:(id /* block */)arg1;
- (void)performReveal:(id /* block */)arg1;
- (void)performRevealAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (void)setAssociatedItemOffset:(double)arg1;
- (void)setCheckmark:(id)arg1;
- (void)setContentAlignmentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setContentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setDrawerPercentRevealed:(double)arg1;
- (void)setEditingStyle:(long long)arg1;
- (void)setEffect:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setIsAnimatingInDarkEffect:(bool)arg1;
- (void)setIsInReplyContext:(bool)arg1;
- (void)setMarginInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setOrientation:(BOOL)arg1;
- (void)setSelected:(bool)arg1;
- (void)setShouldReturnActualVEV:(bool)arg1;
- (void)setWantsDrawerLayout:(bool)arg1;
- (bool)shouldReturnActualVEV;
- (void)updateCheckmarkImage;
- (bool)wantsDrawerLayout;

@end
