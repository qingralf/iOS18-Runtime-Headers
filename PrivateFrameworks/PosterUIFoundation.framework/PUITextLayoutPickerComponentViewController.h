/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PosterUIFoundation.framework/PosterUIFoundation
 */

@interface PUITextLayoutPickerComponentViewController : UIViewController {
    NSArray * _cellViews;
    <PUITextLayoutPickerComponentViewControllerDelegate> * _delegate;
    NSArray * _heightCellConstraints;
    double  _largestItemHeight;
    PUITextLayoutSet * _layouts;
    PUIStylePickerButton * _selectedCellView;
    unsigned long long  _selectedLayout;
    UIStackView * _stackView;
    bool  _usingSmallerSizing;
}

@property (nonatomic, copy) NSArray *cellViews;
@property (nonatomic) <PUITextLayoutPickerComponentViewControllerDelegate> *delegate;
@property (nonatomic, readonly) double estimatedHeight;
@property (nonatomic, copy) NSArray *heightCellConstraints;
@property (nonatomic) double largestItemHeight;
@property (nonatomic, readonly, copy) PUITextLayoutSet *layouts;
@property (nonatomic, retain) PUIStylePickerButton *selectedCellView;
@property (nonatomic) unsigned long long selectedLayout;
@property (nonatomic, retain) UIStackView *stackView;
@property (getter=isUsingSmallerSizing, nonatomic) bool usingSmallerSizing;

- (void).cxx_destruct;
- (double)cellHeight;
- (id)cellViewFor:(unsigned long long)arg1 largestItemHeight:(double*)arg2;
- (id)cellViews;
- (id)delegate;
- (double)estimatedHeight;
- (id)heightCellConstraints;
- (id)initWithLayout:(unsigned long long)arg1;
- (id)initWithLayouts:(id)arg1 selectedLayout:(unsigned long long)arg2;
- (bool)isUsingSmallerSizing;
- (bool)isUsingVerticalLanguage;
- (double)largestItemHeight;
- (id)layouts;
- (void)loadView;
- (id)selectedCellView;
- (unsigned long long)selectedLayout;
- (void)setCellViews:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHeightCellConstraints:(id)arg1;
- (void)setLargestItemHeight:(double)arg1;
- (void)setSelectedCellView:(id)arg1;
- (void)setSelectedLayout:(unsigned long long)arg1;
- (void)setStackView:(id)arg1;
- (void)setUsingSmallerSizing:(bool)arg1;
- (void)setselectedLayout:(unsigned long long)arg1;
- (id)stackView;
- (void)updateLayoutForCurrentSize;
- (void)viewDidLayoutSubviews;

@end
