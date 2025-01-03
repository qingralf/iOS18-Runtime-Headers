/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIContextMenuView : UIView <UIGestureRecognizerDelegate> {
    bool  _allowsBackgroundViewInteraction;
    NSDate * _appearanceDate;
    unsigned long long  _attachmentEdge;
    NSTimer * _autoNavigationTimer;
    NSTimer * _autoUnhighlightTimer;
    UICollectionViewDiffableDataSource * _collectionViewDataSource;
    <_UIContextMenuViewDelegate> * _delegate;
    _UIContextMenuNode * _departingNode;
    UISelectionFeedbackGenerator * _feedbackGenerator;
    bool  _hasTrackingTouch;
    unsigned long long  _hierarchyStyle;
    UIHoverGestureRecognizer * _highlightHoverGestureRecognizer;
    NSTimer * _hoverAutoExitTimer;
    _UIVelocityIntegrator * _hoverVelocityIntegrator;
    _UIContextMenuNode * _hoveredNode;
    bool  _isComputingPreferredSize;
    <_UIContextMenuHierarchyLayout> * _layout;
    struct CGSize { 
        double width; 
        double height; 
    }  _maxContainerSize;
    double  _preferredScrollTruncationDetent;
    bool  _retainHighlightOnMenuNavigation;
    bool  _reversesActionOrder;
    bool  _scrubbingEnabled;
    _UIContextMenuSelectionDelayGestureRecognizer * _selectionDelayGestureRecognizer;
    _UIContinuousSelectionGestureRecognizer * _selectionGestureRecognizer;
    bool  _shouldAvoidInputViews;
    bool  _showsShadow;
    _UIContextMenuLinkedList * _submenus;
    NSIndexPath * _unselectableIndexPath;
    struct CGSize { 
        double width; 
        double height; 
    }  _visibleContentSize;
    bool  _wantsFocusDeferralIfSupported;
}

@property (nonatomic) bool allowsBackgroundViewInteraction;
@property (nonatomic, retain) NSDate *appearanceDate;
@property (nonatomic) unsigned long long attachmentEdge;
@property (nonatomic, retain) NSTimer *autoNavigationTimer;
@property (nonatomic, retain) NSTimer *autoUnhighlightTimer;
@property (nonatomic, retain) UICollectionViewDiffableDataSource *collectionViewDataSource;
@property (nonatomic, readonly) _UIContextMenuListView *currentListView;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <_UIContextMenuViewDelegate> *delegate;
@property (nonatomic, retain) _UIContextMenuNode *departingNode;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UISelectionFeedbackGenerator *feedbackGenerator;
@property (nonatomic) bool hasTrackingTouch;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long hierarchyStyle;
@property (nonatomic, retain) UIHoverGestureRecognizer *highlightHoverGestureRecognizer;
@property (nonatomic, retain) NSTimer *hoverAutoExitTimer;
@property (nonatomic, retain) _UIVelocityIntegrator *hoverVelocityIntegrator;
@property (nonatomic, retain) _UIContextMenuNode *hoveredNode;
@property (nonatomic) bool isComputingPreferredSize;
@property (nonatomic, retain) <_UIContextMenuHierarchyLayout> *layout;
@property (nonatomic) struct CGSize { double x1; double x2; } maxContainerSize;
@property (nonatomic) double preferredScrollTruncationDetent;
@property (nonatomic) bool retainHighlightOnMenuNavigation;
@property (nonatomic) bool reversesActionOrder;
@property (nonatomic) bool scrubbingEnabled;
@property (nonatomic, retain) _UIContextMenuSelectionDelayGestureRecognizer *selectionDelayGestureRecognizer;
@property (nonatomic, retain) _UIContinuousSelectionGestureRecognizer *selectionGestureRecognizer;
@property (nonatomic) bool shouldAvoidInputViews;
@property (nonatomic) bool showsShadow;
@property (nonatomic, retain) _UIContextMenuLinkedList *submenus;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSIndexPath *unselectableIndexPath;
@property (nonatomic) struct CGSize { double x1; double x2; } visibleContentSize;
@property (nonatomic, readonly) NSArray *visibleMenus;
@property (nonatomic) bool wantsFocusDeferralIfSupported;

- (void).cxx_destruct;
- (bool)_allowsChangingFirstResponderForFocusUpdateWithContext:(id)arg1;
- (void)_clearAutoNavigationTimer;
- (void)_clearHoverAutoExitTimer;
- (void)_displayMenu:(id)arg1 inPlaceOfMenu:(id)arg2 updateType:(unsigned long long)arg3 alongsideAnimations:(id /* block */)arg4;
- (void)_handleEscapeKey:(id)arg1;
- (void)_handleHoverGestureRecognizer:(id)arg1;
- (void)_handleLeftArrowKey:(id)arg1;
- (void)_handleMenuPressGesture:(id)arg1;
- (void)_handleRightArrowKey:(id)arg1;
- (void)_handleSelectPressGesture:(id)arg1;
- (void)_handleSelectionForElement:(id)arg1;
- (void)_handleSelectionGesture:(id)arg1;
- (id)_newListViewWithMenu:(id)arg1 position:(unsigned long long)arg2;
- (void)_performActionForElement:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_rectOfNodeParentElement:(id)arg1;
- (void)_selectPreviousMenuIfPossible;
- (void)_setAutoNavigationTimerIfNecessaryForElement:(id)arg1 isTrackpadHover:(bool)arg2;
- (void)_setHighlightedIndexPath:(id)arg1 playFeedback:(bool)arg2 atLocation:(struct CGPoint { double x1; double x2; })arg3 allowAutoNavigation:(bool)arg4;
- (void)_setHoverAutoExitTimer;
- (void)_testing_tapAnAction;
- (bool)_touchSupportsAutoNavigation:(id)arg1;
- (void)_updateSelectionGestureAllowableMovementForGestureBeginningAtIndexPath:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })activeSubmenuFrameInCoordinateSpace:(id)arg1;
- (bool)allowsBackgroundViewInteraction;
- (id)appearanceDate;
- (unsigned long long)attachmentEdge;
- (id)autoNavigationTimer;
- (id)autoUnhighlightTimer;
- (bool)canBecomeFirstResponder;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (double)closestScrollTruncationDetentToHeight:(double)arg1;
- (id)collectionViewDataSource;
- (id)currentListView;
- (id)delegate;
- (id)departingNode;
- (void)didCompleteMenuAppearanceAnimation;
- (void)didMoveToWindow;
- (void)displayMenu:(id)arg1 updateType:(unsigned long long)arg2 alongsideAnimations:(id /* block */)arg3;
- (id)feedbackGenerator;
- (void)flashScrollIndicators;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (bool)hasTrackingTouch;
- (unsigned long long)hierarchyStyle;
- (id)highlightHoverGestureRecognizer;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)hoverAutoExitTimer;
- (id)hoverVelocityIntegrator;
- (id)hoveredListView;
- (id)hoveredNode;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isComputingPreferredSize;
- (id)keyCommands;
- (bool)kickstartActionScrubbingWithGesture:(id)arg1;
- (id)layout;
- (void)layoutSubviews;
- (struct CGSize { double x1; double x2; })maxContainerSize;
- (struct CGSize { double x1; double x2; })preferredContentSizeWithinContainerSize:(struct CGSize { double x1; double x2; })arg1;
- (id)preferredFocusEnvironments;
- (double)preferredScrollTruncationDetent;
- (void)replaceVisibleMenu:(id)arg1 withMenu:(id)arg2 alongsideAnimations:(id /* block */)arg3;
- (bool)retainHighlightOnMenuNavigation;
- (bool)reversesActionOrder;
- (void)scrollToFirstSignificantAction;
- (bool)scrubbingEnabled;
- (id)selectionDelayGestureRecognizer;
- (id)selectionGestureRecognizer;
- (void)setAllowsBackgroundViewInteraction:(bool)arg1;
- (void)setAppearanceDate:(id)arg1;
- (void)setAttachmentEdge:(unsigned long long)arg1;
- (void)setAutoNavigationTimer:(id)arg1;
- (void)setAutoUnhighlightTimer:(id)arg1;
- (void)setCollectionViewDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDepartingNode:(id)arg1;
- (void)setFeedbackGenerator:(id)arg1;
- (void)setHasTrackingTouch:(bool)arg1;
- (void)setHierarchyStyle:(unsigned long long)arg1;
- (void)setHighlightHoverGestureRecognizer:(id)arg1;
- (void)setHoverAutoExitTimer:(id)arg1;
- (void)setHoverVelocityIntegrator:(id)arg1;
- (void)setHoveredNode:(id)arg1;
- (void)setIsComputingPreferredSize:(bool)arg1;
- (void)setLayout:(id)arg1;
- (void)setMaxContainerSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPreferredScrollTruncationDetent:(double)arg1;
- (void)setRetainHighlightOnMenuNavigation:(bool)arg1;
- (void)setReversesActionOrder:(bool)arg1;
- (void)setScrubbingEnabled:(bool)arg1;
- (void)setSelectionDelayGestureRecognizer:(id)arg1;
- (void)setSelectionGestureRecognizer:(id)arg1;
- (void)setShouldAvoidInputViews:(bool)arg1;
- (void)setShowsShadow:(bool)arg1;
- (void)setSubmenus:(id)arg1;
- (void)setUnselectableIndexPath:(id)arg1;
- (void)setUserInteractionEnabled:(bool)arg1;
- (void)setVisibleContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setWantsFocusDeferralIfSupported:(bool)arg1;
- (bool)shouldAvoidInputViews;
- (bool)showsShadow;
- (id)submenus;
- (id)unselectableIndexPath;
- (struct CGSize { double x1; double x2; })visibleContentSize;
- (id)visibleMenus;
- (bool)wantsFocusDeferralIfSupported;

@end
