/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKPlaceCardActionsViewController : MKPlaceSectionViewController <MKPlaceCardActionSectionViewDelegate, _MKInfoCardChildViewControllerAnalyticsDelegate, _MKStackViewDelegate> {
    NSArray * _actionItemArray;
    MKPlaceActionManager * _actionManager;
    bool  _allowRowSelection;
    bool  _haveTwoColumns;
    <_MKPlaceViewControllerDelegate> * _placeViewControllerDelegate;
    bool  _showTopButtonSeparator;
    bool  _showTopSeparator;
    bool  _useMarginLayout;
    bool  _useSmallFonts;
    NSArray * _viewArray;
}

@property (nonatomic, copy) NSArray *actionItemArray;
@property (nonatomic) MKPlaceActionManager *actionManager;
@property (nonatomic) bool allowRowSelection;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool haveTwoColumns;
@property (nonatomic) <_MKPlaceViewControllerDelegate> *placeViewControllerDelegate;
@property (nonatomic) bool showTopButtonSeparator;
@property (nonatomic) bool showTopSeparator;
@property (readonly) Class superclass;
@property (nonatomic) bool useMarginLayout;
@property (nonatomic) bool useSmallFonts;
@property (nonatomic, retain) NSArray *viewArray;

- (void).cxx_destruct;
- (id)_makePlaceActionButton;
- (void)_setUpSectionViews;
- (id)actionItemArray;
- (id)actionManager;
- (bool)allowRowSelection;
- (bool)haveTwoColumns;
- (id)infoCardChildPossibleActions;
- (id)infoCardChildUnactionableUIElements;
- (id)init;
- (void)placeCardActionSectionView:(id)arg1 buttonWithActionItemPressed:(id)arg2;
- (id)placeViewControllerDelegate;
- (void)sectionView:(id)arg1 didSelectRow:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)setActionItemArray:(id)arg1;
- (void)setActionManager:(id)arg1;
- (void)setAllowRowSelection:(bool)arg1;
- (void)setHaveTwoColumns:(bool)arg1;
- (void)setPlaceViewControllerDelegate:(id)arg1;
- (void)setShowTopButtonSeparator:(bool)arg1;
- (void)setShowTopSeparator:(bool)arg1;
- (void)setUseMarginLayout:(bool)arg1;
- (void)setUseSmallFonts:(bool)arg1;
- (void)setViewArray:(id)arg1;
- (bool)showTopButtonSeparator;
- (bool)showTopSeparator;
- (bool)useMarginLayout;
- (bool)useSmallFonts;
- (id)viewArray;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;

@end
