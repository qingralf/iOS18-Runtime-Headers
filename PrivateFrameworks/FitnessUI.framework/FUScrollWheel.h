/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

@interface FUScrollWheel : UIView <UIScrollViewDelegate> {
    UIView * _bottomDividerView;
    unsigned long long  _currentIndex;
    <FUScrollWheelDataSource> * _dataSource;
    <FUScrollWheelDelegate> * _delegate;
    UIFont * _font;
    long long  _itemTitleAligmnent;
    bool  _loaded;
    UIImageView * _maskLayer;
    unsigned long long  _numberOfRows;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _previousRange;
    NSMutableArray * _reusableLabelsQueue;
    UIScrollView * _scrollView;
    double  _scrollWheelLabelHeight;
    double  _scrollWheelLabelPageSize;
    bool  _shouldRegenerateOpacityMask;
    UIView * _topDividerView;
    NSMutableDictionary * _usedLabels;
}

@property (nonatomic) unsigned long long currentIndex;
@property (nonatomic) <FUScrollWheelDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <FUScrollWheelDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIFont *font;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long itemTitleAligmnent;
@property (nonatomic, retain) UIScrollView *scrollView;
@property (nonatomic) double scrollWheelLabelPageSize;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_alertDidChangeToCurrentIndex:(unsigned long long)arg1;
- (id)_dequeueLabel;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForLabelAtIndex:(unsigned long long)arg1;
- (void)_generateOpacityMask;
- (void)_layoutScrollView;
- (unsigned long long)_numberOfRows;
- (void)_recycleAllLabels;
- (void)_recycleLabel:(id)arg1 forKey:(id)arg2;
- (void)_reuseLabelsWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 contentOffset:(struct CGPoint { double x1; double x2; })arg2;
- (void)_setActiveScrollwheelIfNotActive;
- (double)_startingLocation;
- (id)_textForLabelAtIndex:(unsigned long long)arg1;
- (void)_textSizeDidChange;
- (id)_titleForItemAtIndex:(unsigned long long)arg1;
- (double)_yPositionForLabelAtIndex:(unsigned long long)arg1;
- (unsigned long long)currentIndex;
- (id)dataSource;
- (void)dealloc;
- (id)delegate;
- (id)font;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (long long)itemTitleAligmnent;
- (void)layoutSubviews;
- (void)reloadData;
- (id)scrollView;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(bool)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg3;
- (double)scrollWheelLabelPageSize;
- (void)setActiveScrollWheel;
- (void)setCurrentIndex:(unsigned long long)arg1;
- (void)setCurrentIndex:(unsigned long long)arg1 animated:(bool)arg2;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHidden:(bool)arg1;
- (void)setItemTitleAligmnent:(long long)arg1;
- (void)setScrollView:(id)arg1;
- (void)setScrollWheelLabelPageSize:(double)arg1;
- (void)willMoveToSuperview:(id)arg1;

@end
