/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIAlertControllerPhoneTVMacView : _UIAlertControllerView <UIInterfaceActionHandlerInvocationDelegate, UIScrollViewDelegate, UISpringLoadedInteractionSupporting, _UIAlertControllerContentViewControllerObserving, _UIAlertControllerLayoutObserving> {
    NSLayoutConstraint * _actionGroupEqualsContentViewWidthConstraint;
    bool  _actionScrubbingEnabled;
    struct CGPoint { 
        double x; 
        double y; 
    }  _actionSelectionInitialLocation;
    _UIAlertControllerActionViewMetrics * _actionViewMetrics;
    NSMutableArray * _actionViews;
    bool  _actionsReversed;
    UIAlertController * _alertController;
    struct { 
        unsigned int hasAppliedTitleAndMessageLabelVibrantContainerViewConstraints : 1; 
        unsigned int hasAppliedTitleConstraints : 1; 
        unsigned int hasAppliedMessageConstraints : 1; 
        unsigned int hasAppliedDetailConstraints : 1; 
        unsigned int presentedAsPopover : 1; 
        unsigned int hasDimmingView : 1; 
        unsigned int cancelActionIsDiscrete : 1; 
        unsigned int shouldHaveBackdropView : 1; 
        unsigned int alignsToKeyboard : 1; 
        unsigned int hasCachedLargestActionDimension : 1; 
        unsigned int needsActionsChangedHandling : 1; 
        unsigned int needsUpdateForPropertyChange : 1; 
    }  _alertControllerViewFlags;
    UIView * _backdropView;
    long long  _batchActionChangesInProgressCount;
    NSLayoutConstraint * _centerXConstraint;
    NSLayoutConstraint * _centerYConstraint;
    NSLayoutConstraint * _contentScrollViewBottomConstraint;
    NSLayoutConstraint * _contentScrollViewMaximumHeightConstraint;
    NSLayoutConstraint * _contentScrollViewMaximumWidthConstraint;
    UIView * _contentView;
    NSLayoutConstraint * _contentViewBottomConstraint;
    UIView * _contentViewControllerContainerView;
    NSLayoutConstraint * _contentViewControllerContainerViewHeightConstraint;
    NSLayoutConstraint * _contentViewControllerContainerViewTopAlignmentConstraint;
    NSLayoutConstraint * _contentViewControllerContainerViewWidthConstraint;
    NSLayoutConstraint * _contentViewControllerViewBottomConstraint;
    NSLayoutConstraint * _contentViewControllerViewLeftConstraint;
    NSLayoutConstraint * _contentViewControllerViewRightConstraint;
    NSLayoutConstraint * _contentViewControllerViewTopConstraint;
    NSLayoutConstraint * _contentViewMaxHeightConstraint;
    NSLayoutConstraint * _contentViewTopConstraint;
    UIView * _contentViewTopItemsView;
    UILabel * _detailMessageLabel;
    NSLayoutConstraint * _detailMessageLabelTopAlignmentConstraint;
    UIView * _dimmingView;
    NSArray * _dimmingViewConstraints;
    NSArray * _dimmingViewConstraintsForActionSheetStyle;
    NSArray * _dimmingViewConstraintsForAlertStyle;
    NSArray * _dimmingViewForegroundViewBottomConstraints;
    NSArray * _dimmingViewForegroundViewTopConstraints;
    NSLayoutConstraint * _discreteActionGroupViewHorizontalLayoutTrailingConstraint;
    _UIAlertControllerInterfaceActionGroupView * _discreteCancelActionGroupView;
    NSLayoutConstraint * _discreteCancelActionViewHeightConstraint;
    NSLayoutConstraint * _discreteCancelActionViewLeadingConstraint;
    NSLayoutConstraint * _discreteCancelActionViewTopConstraint;
    NSLayoutConstraint * _discreteCancelActionViewWidthConstraint;
    UIAlertAction * _effectivePreferredAction;
    NSLayoutConstraint * _foregroundViewWidthConstraint;
    UIView * _headerContentViewControllerContainerView;
    NSLayoutConstraint * _headerContentViewControllerContainerViewTopAlignmentConstraint;
    NSLayoutConstraint * _headerContentViewControllerPreferredHeightConstraint;
    NSLayoutConstraint * _headerContentViewControllerPreferredWidthConstraint;
    NSLayoutConstraint * _heightConstraint;
    UIView * _keyboardLayoutAlignmentAvailableSpaceView;
    _UIKeyboardLayoutAlignmentView * _keyboardLayoutAlignmentView;
    struct CGSize { 
        double width; 
        double height; 
    }  _largestActionDimension;
    long long  _layoutRequiresPositionUpdateCount;
    struct CGSize { 
        double width; 
        double height; 
    }  _layoutSize;
    NSLayoutConstraint * _mainActionButtonSequenceViewHeightConstraint;
    NSLayoutConstraint * _mainActionButtonSequenceViewHorizontalAlignmentConstraint;
    NSLayoutConstraint * _mainActionButtonSequenceViewWidthConstraint;
    _UIAlertControllerInterfaceActionGroupView * _mainInterfaceActionsGroupView;
    UILabel * _messageLabel;
    _UIFlexibleConstantConstraintSet * _messageLabelTopAlignmentConstraints;
    NSArray * _noDimmingViewConstraints;
    double  _offset;
    bool  _presentationContextPrefersCancelActionShown;
    UIView * _separatedHeaderContentViewControllerContainerView;
    NSLayoutConstraint * _separatedHeaderContentViewControllerContainerViewBottomConstraint;
    NSLayoutConstraint * _separatedHeaderContentViewControllerContainerViewWidthConstraint;
    bool  _springLoaded;
    UIView * _textFieldViewControllerContainerView;
    NSLayoutConstraint * _textFieldViewControllerContainerViewHeightConstraint;
    _UIFlexibleConstantConstraintSet * _textFieldViewControllerContainerViewTopAlignmentConstraints;
    NSLayoutConstraint * _textFieldViewControllerContainerViewWidthConstraint;
    NSLayoutConstraint * _textFieldViewControllerViewBottomConstraint;
    NSLayoutConstraint * _textFieldViewControllerViewLeftConstraint;
    NSLayoutConstraint * _textFieldViewControllerViewRightConstraint;
    NSLayoutConstraint * _textFieldViewControllerViewTopConstraint;
    UIVisualEffectView * _titleAndMessageLabelVibrantContainerView;
    NSArray * _titleAndMessageLabelVibrantContainerViewVerticalConstraints;
    UILabel * _titleLabel;
    _UIFlexibleConstantConstraintSet * _titleLabelTopAlignmentConstraints;
    UIAlertControllerVisualStyle * _visualStyle;
    NSLayoutConstraint * _widthConstraint;
}

@property (retain) NSLayoutConstraint *actionGroupEqualsContentViewWidthConstraint;
@property (nonatomic) bool actionScrubbingEnabled;
@property (nonatomic, retain) _UIAlertControllerActionViewMetrics *actionViewMetrics;
@property bool cancelActionIsDiscrete;
@property (retain) NSLayoutConstraint *centerXConstraint;
@property (retain) NSLayoutConstraint *centerYConstraint;
@property (retain) NSLayoutConstraint *contentScrollViewBottomConstraint;
@property (retain) NSLayoutConstraint *contentScrollViewMaximumHeightConstraint;
@property (retain) NSLayoutConstraint *contentScrollViewMaximumWidthConstraint;
@property (retain) NSLayoutConstraint *contentViewBottomConstraint;
@property (retain) NSLayoutConstraint *contentViewControllerContainerViewHeightConstraint;
@property (retain) NSLayoutConstraint *contentViewControllerContainerViewTopAlignmentConstraint;
@property (retain) NSLayoutConstraint *contentViewControllerContainerViewWidthConstraint;
@property (retain) NSLayoutConstraint *contentViewControllerViewBottomConstraint;
@property (retain) NSLayoutConstraint *contentViewControllerViewLeftConstraint;
@property (retain) NSLayoutConstraint *contentViewControllerViewRightConstraint;
@property (retain) NSLayoutConstraint *contentViewControllerViewTopConstraint;
@property (retain) NSLayoutConstraint *contentViewMaxHeightConstraint;
@property (retain) NSLayoutConstraint *contentViewTopConstraint;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (retain) NSLayoutConstraint *detailMessageLabelTopAlignmentConstraint;
@property (retain) NSLayoutConstraint *discreteActionGroupViewHorizontalLayoutTrailingConstraint;
@property (retain) NSLayoutConstraint *discreteCancelActionViewHeightConstraint;
@property (retain) NSLayoutConstraint *discreteCancelActionViewLeadingConstraint;
@property (retain) NSLayoutConstraint *discreteCancelActionViewTopConstraint;
@property (retain) NSLayoutConstraint *discreteCancelActionViewWidthConstraint;
@property (retain) NSLayoutConstraint *foregroundViewWidthConstraint;
@property (readonly) unsigned long long hash;
@property (retain) NSLayoutConstraint *headerContentViewControllerContainerViewTopAlignmentConstraint;
@property (retain) NSLayoutConstraint *heightConstraint;
@property (getter=_layoutSize, setter=_setLayoutSize:, nonatomic) struct CGSize { double x1; double x2; } layoutSize;
@property (retain) NSLayoutConstraint *mainActionButtonSequenceViewHeightConstraint;
@property (retain) NSLayoutConstraint *mainActionButtonSequenceViewHorizontalAlignmentConstraint;
@property (retain) NSLayoutConstraint *mainActionButtonSequenceViewWidthConstraint;
@property (retain) _UIFlexibleConstantConstraintSet *messageLabelTopAlignmentConstraints;
@property (nonatomic) double offset;
@property (nonatomic) bool presentationContextPrefersCancelActionShown;
@property (retain) NSLayoutConstraint *separatedHeaderContentViewControllerContainerViewBottomConstraint;
@property (retain) NSLayoutConstraint *separatedHeaderContentViewControllerContainerViewWidthConstraint;
@property (getter=isSpringLoaded, nonatomic) bool springLoaded;
@property (readonly) Class superclass;
@property (retain) NSLayoutConstraint *textFieldViewControllerContainerViewHeightConstraint;
@property (retain) _UIFlexibleConstantConstraintSet *textFieldViewControllerContainerViewTopAlignmentConstraints;
@property (retain) NSLayoutConstraint *textFieldViewControllerContainerViewWidthConstraint;
@property (retain) NSLayoutConstraint *textFieldViewControllerViewBottomConstraint;
@property (retain) NSLayoutConstraint *textFieldViewControllerViewLeftConstraint;
@property (retain) NSLayoutConstraint *textFieldViewControllerViewRightConstraint;
@property (retain) NSLayoutConstraint *textFieldViewControllerViewTopConstraint;
@property (retain) NSArray *titleAndMessageLabelVibrantContainerViewVerticalConstraints;
@property (retain) _UIFlexibleConstantConstraintSet *titleLabelTopAlignmentConstraints;
@property (retain) NSLayoutConstraint *widthConstraint;

+ (void)initialize;
+ (bool)requiresConstraintBasedLayout;

- (void).cxx_destruct;
- (void)_UIAppearance_setAlignsToKeyboard:(bool)arg1;
- (void)_UIAppearance_setHasDimmingView:(bool)arg1;
- (void)_UIAppearance_setPresentationContextPrefersCancelActionShown:(bool)arg1;
- (void)_UIAppearance_setPresentedAsPopover:(bool)arg1;
- (void)_UIAppearance_setShouldHaveBackdropView:(bool)arg1;
- (id)__cancelActionView;
- (void)_accessibilityColorsChanged;
- (void)_actionLayoutDirectionChanged;
- (bool)_actionLayoutIsVertical;
- (void)_actionsChanged;
- (bool)_actionsReversed;
- (void)_addContentViewControllerToViewHierarchyIfNecessary;
- (void)_addHeaderContentViewControllerToViewHierarchyIfNecessary;
- (void)_addSeparatedHeaderContentViewControllerToViewHierarchyIfNecessary;
- (void)_applyContentViewControllerContainerViewConstraints;
- (void)_applyDetailMessageConstraints;
- (void)_applyHeaderContentViewControllerContainerViewConstraints;
- (void)_applyISEngineLayoutValuesToBoundsOnly:(bool)arg1;
- (void)_applyKeyboardAlignmentViewsConstraints;
- (void)_applyMessageConstraints;
- (void)_applySeparatedContentViewControllerContainerViewContraints;
- (void)_applyTextFieldViewControllerContainerViewConstraints;
- (void)_applyTitleAndMessageLabelVibrantContainerViewConstraints;
- (void)_applyTitleConstraints;
- (void)_applyViewConstraints;
- (void)_associateActionsWithActionViews;
- (id)_attributedDetailMessage;
- (id)_attributedMessage;
- (id)_attributedTitle;
- (double)_availableWidthForHorizontalLayout:(bool)arg1;
- (bool)_buttonsAreTopMost;
- (bool)_canLayOutActionsHorizontally;
- (void)_configureActionGroupViewToAllowHorizontalLayout:(bool)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_contentInsets;
- (void)_contentSizeChanged;
- (struct CGSize { double x1; double x2; })_contentViewControllerSize;
- (void)_disableAllowGroupOpacitiyIfNecessaryAlongsideTransitionCoordinator:(id)arg1;
- (id)_discreteCancelActionView;
- (id)_effectivePreferredAction;
- (void)_ensureActionViewRepresentationsHaveMetrics;
- (id)_focusedAction;
- (bool)_forceLayoutEngineSolutionInRationalEdges;
- (bool)_hasAttributedMessage;
- (bool)_hasAttributedTitle;
- (bool)_hasDetailMessage;
- (bool)_hasDiscreteCancelAction;
- (bool)_hasMessage;
- (bool)_hasTextFields;
- (bool)_hasTitle;
- (bool)_horizontalLayoutCanUseFullWidth;
- (double)_idealLayoutWidth;
- (id)_indexesOfActionSectionSeparators;
- (id)_interfaceActionForAlertAction:(id)arg1 inActionGroupView:(id)arg2;
- (id)_interfaceActionRepresentationForAlertAlertAction:(id)arg1;
- (struct CGSize { double x1; double x2; })_itemSizeForHorizontalLayout:(bool)arg1;
- (struct CGSize { double x1; double x2; })_itemSizeForHorizontalLayout:(bool)arg1 visualStyleRequiresActionRepresentationToFitItemSize:(bool*)arg2;
- (double)_labelHorizontalInsets;
- (void)_layoutAndPositionInParentIfNeeded;
- (struct CGSize { double x1; double x2; })_layoutSize;
- (double)_layoutWidthForHorizontalLayout:(bool)arg1;
- (struct CGSize { double x1; double x2; })_mainActionButtonSequenceViewSizeForHorizontalLayout:(bool)arg1 itemSize:(struct CGSize { double x1; double x2; })arg2;
- (double)_marginBetweenInterfaceActionGroups;
- (double)_maximumWidthUsingAccessibilityWidthIfActionsAreTruncated:(double)arg1;
- (struct CGSize { double x1; double x2; })_minimumSizeForAllActions;
- (double)_minimumWidthFittingAlertContents;
- (id)_newStyledBackgroundView;
- (long long)_numberOfActionsForMainActionButtonSequenceView;
- (void)_performBatchActionChangesWithBlock:(id /* block */)arg1;
- (id)_preferredActionView;
- (void)_prepareContentView;
- (void)_prepareContentViewControllerContainerView;
- (void)_prepareContentViewTopItemsView;
- (void)_prepareDetailMessageLabel;
- (void)_prepareDimmingView;
- (void)_prepareDimmingViewConstraints;
- (void)_prepareDiscreteCancelActionGroupView;
- (void)_prepareForWindowDealloc;
- (void)_prepareForWindowHostingSceneRemoval;
- (void)_prepareHeaderContentViewControllerContainerView;
- (void)_prepareKeyboardLayoutAlignmentViews;
- (void)_prepareMainInterfaceActionsGroupView;
- (void)_prepareMesssageLabel;
- (void)_prepareSeparateContentViewControllerContainerView;
- (void)_prepareTextFieldViewControllerContainerView;
- (void)_prepareTitleAndMessageLabelVibrantContainer;
- (void)_prepareTitleLabel;
- (void)_prepareViewsAndAddConstraints;
- (id)_presentableAlertActions;
- (void)_propertiesChanged;
- (void)_recomputeActionMetrics;
- (void)_recomputeAlertControllerWidth;
- (void)_reevaluateSuperviewSizingConstraints;
- (void)_reloadInterfaceActionViewRepresentations;
- (void)_reloadInterfaceActionsGroupViewPreferredAction;
- (void)_removeContentViewControllerViewFromHierarchy;
- (void)_removeHeaderContentViewControllerViewFromHierarchy;
- (void)_removeSeparatedHeaderContentViewControllerFromHierarchy;
- (void)_scrollInitialActionToVisibleForPresentation;
- (void)_setActionsReversed:(bool)arg1;
- (void)_setAttributedDetailMessage:(id)arg1;
- (void)_setAttributedMessage:(id)arg1;
- (void)_setAttributedTitle:(id)arg1;
- (void)_setLayoutSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_setMessage:(id)arg1;
- (void)_setTitle:(id)arg1;
- (void)_setVisualStyle:(id)arg1;
- (void)_setupHorizontalConstraintsForLabelView:(id)arg1;
- (bool)_shouldAllowPassthroughToLayersBehindUsForTouches:(id)arg1;
- (bool)_shouldHaveCancelActionInMainActionButtonSequenceView;
- (struct CGSize { double x1; double x2; })_sizeForLayoutWidthDetermination;
- (void)_sizeOfContentViewControllerChanged;
- (void)_sizeOfHeaderContentViewControllerChanged;
- (void)_sizeOfTextFieldViewControllerChanged;
- (double)_spaceRequiredForActionSectionsSpacing;
- (id)_textFieldViewController;
- (void)_textFieldsChanged;
- (bool)_titleAndMessageLabelUseVibrancy;
- (id)_unlocalizedOrderedPresentableAlertActionViewRepresentations;
- (id)_unlocalizedOrderedPresentableAlertActions;
- (void)_updateActionViewHeight;
- (void)_updateActionViewVisualStyle:(id)arg1;
- (void)_updateActionsGroupPresentationStyles;
- (void)_updateBackdropView:(bool)arg1;
- (void)_updateCancelActionBeingDiscrete;
- (void)_updateConstraintConstants;
- (void)_updateConstraintSpacingForExternalOffset;
- (void)_updateContentView;
- (void)_updateDetailLabelContents;
- (void)_updateDetailLabelFontSize;
- (void)_updateForPropertyChangeIfNeeded;
- (void)_updateInsets;
- (void)_updateLabelFontSizes;
- (void)_updateLabelProperties;
- (void)_updateLabelTextColor;
- (void)_updateMainGroupViewProperties;
- (void)_updateMainScrollableHeaderViewHasRealContent;
- (void)_updateMessageLabelContents;
- (void)_updateMessageLabelFontSize;
- (void)_updatePreferredAction;
- (void)_updateStyleForIdiomChange:(bool)arg1;
- (void)_updateTintColor;
- (void)_updateTitleLabelContents;
- (void)_updateTitleLabelFontSize;
- (double)_verticalLayoutWidth;
- (id)_vibrancyEffectForTitleAndMessageLabel;
- (id)_visualStyle;
- (void)_willMoveToWindow:(id)arg1;
- (id)actionGroupEqualsContentViewWidthConstraint;
- (bool)actionScrubbingEnabled;
- (id)actionViewMetrics;
- (id)actions;
- (id)alertController;
- (bool)alignsToKeyboard;
- (void)beginTrackingSessionByTakingOverForSystemProvidedGestureRecognizer:(id)arg1;
- (id)cancelAction;
- (bool)cancelActionIsDiscrete;
- (id)centerXConstraint;
- (id)centerYConstraint;
- (void)configureForDismissAlongsideTransitionCoordinator:(id)arg1;
- (void)configureForPresentAlongsideTransitionCoordinator:(id)arg1;
- (id)contentScrollViewBottomConstraint;
- (id)contentScrollViewMaximumHeightConstraint;
- (id)contentScrollViewMaximumWidthConstraint;
- (id)contentViewBottomConstraint;
- (id)contentViewController;
- (id)contentViewControllerContainerViewHeightConstraint;
- (id)contentViewControllerContainerViewTopAlignmentConstraint;
- (id)contentViewControllerContainerViewWidthConstraint;
- (id)contentViewControllerViewBottomConstraint;
- (id)contentViewControllerViewLeftConstraint;
- (id)contentViewControllerViewRightConstraint;
- (id)contentViewControllerViewTopConstraint;
- (id)contentViewMaxHeightConstraint;
- (id)contentViewTopConstraint;
- (void)dealloc;
- (void)deselectAllActions;
- (id)detailMessageLabelTopAlignmentConstraint;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (id)discreteActionGroupViewHorizontalLayoutTrailingConstraint;
- (id)discreteCancelActionViewHeightConstraint;
- (id)discreteCancelActionViewLeadingConstraint;
- (id)discreteCancelActionViewTopConstraint;
- (id)discreteCancelActionViewWidthConstraint;
- (double)effectAlpha;
- (id)foregroundViewWidthConstraint;
- (bool)hasDimmingView;
- (bool)hasDiscreteHorizontalCancelAction;
- (id)headerContentViewController;
- (id)headerContentViewControllerContainerViewTopAlignmentConstraint;
- (id)heightConstraint;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)interfaceAction:(id)arg1 invokeActionHandler:(id /* block */)arg2 completion:(id /* block */)arg3;
- (bool)isSpringLoaded;
- (id)mainActionButtonSequenceViewHeightConstraint;
- (id)mainActionButtonSequenceViewHorizontalAlignmentConstraint;
- (id)mainActionButtonSequenceViewWidthConstraint;
- (id)message;
- (id)messageLabelTopAlignmentConstraints;
- (double)offset;
- (id)preferredFocusedView;
- (bool)presentationContextPrefersCancelActionShown;
- (bool)presentedAsPopover;
- (void)safeAreaInsetsDidChange;
- (id)separatedHeaderContentViewController;
- (id)separatedHeaderContentViewControllerContainerViewBottomConstraint;
- (id)separatedHeaderContentViewControllerContainerViewWidthConstraint;
- (void)setActionGroupEqualsContentViewWidthConstraint:(id)arg1;
- (void)setActionScrubbingEnabled:(bool)arg1;
- (void)setActionViewMetrics:(id)arg1;
- (void)setAlertController:(id)arg1;
- (void)setAlignsToKeyboard:(bool)arg1;
- (void)setCancelActionIsDiscrete:(bool)arg1;
- (void)setCenterXConstraint:(id)arg1;
- (void)setCenterYConstraint:(id)arg1;
- (void)setContentScrollViewBottomConstraint:(id)arg1;
- (void)setContentScrollViewMaximumHeightConstraint:(id)arg1;
- (void)setContentScrollViewMaximumWidthConstraint:(id)arg1;
- (void)setContentViewBottomConstraint:(id)arg1;
- (void)setContentViewControllerContainerViewHeightConstraint:(id)arg1;
- (void)setContentViewControllerContainerViewTopAlignmentConstraint:(id)arg1;
- (void)setContentViewControllerContainerViewWidthConstraint:(id)arg1;
- (void)setContentViewControllerViewBottomConstraint:(id)arg1;
- (void)setContentViewControllerViewLeftConstraint:(id)arg1;
- (void)setContentViewControllerViewRightConstraint:(id)arg1;
- (void)setContentViewControllerViewTopConstraint:(id)arg1;
- (void)setContentViewMaxHeightConstraint:(id)arg1;
- (void)setContentViewTopConstraint:(id)arg1;
- (void)setDetailMessageLabelTopAlignmentConstraint:(id)arg1;
- (void)setDiscreteActionGroupViewHorizontalLayoutTrailingConstraint:(id)arg1;
- (void)setDiscreteCancelActionViewHeightConstraint:(id)arg1;
- (void)setDiscreteCancelActionViewLeadingConstraint:(id)arg1;
- (void)setDiscreteCancelActionViewTopConstraint:(id)arg1;
- (void)setDiscreteCancelActionViewWidthConstraint:(id)arg1;
- (void)setEffectAlpha:(double)arg1;
- (void)setForegroundViewWidthConstraint:(id)arg1;
- (void)setHasDimmingView:(bool)arg1;
- (void)setHeaderContentViewControllerContainerViewTopAlignmentConstraint:(id)arg1;
- (void)setHeightConstraint:(id)arg1;
- (void)setMainActionButtonSequenceViewHeightConstraint:(id)arg1;
- (void)setMainActionButtonSequenceViewHorizontalAlignmentConstraint:(id)arg1;
- (void)setMainActionButtonSequenceViewWidthConstraint:(id)arg1;
- (void)setMessageLabelTopAlignmentConstraints:(id)arg1;
- (void)setOffset:(double)arg1;
- (void)setPresentationContextPrefersCancelActionShown:(bool)arg1;
- (void)setPresentedAsPopover:(bool)arg1;
- (void)setSeparatedHeaderContentViewControllerContainerViewBottomConstraint:(id)arg1;
- (void)setSeparatedHeaderContentViewControllerContainerViewWidthConstraint:(id)arg1;
- (void)setShouldHaveBackdropView:(bool)arg1;
- (void)setSpringLoaded:(bool)arg1;
- (void)setTextFieldViewControllerContainerViewHeightConstraint:(id)arg1;
- (void)setTextFieldViewControllerContainerViewTopAlignmentConstraints:(id)arg1;
- (void)setTextFieldViewControllerContainerViewWidthConstraint:(id)arg1;
- (void)setTextFieldViewControllerViewBottomConstraint:(id)arg1;
- (void)setTextFieldViewControllerViewLeftConstraint:(id)arg1;
- (void)setTextFieldViewControllerViewRightConstraint:(id)arg1;
- (void)setTextFieldViewControllerViewTopConstraint:(id)arg1;
- (void)setTintAdjustmentMode:(long long)arg1;
- (void)setTitleAndMessageLabelVibrantContainerViewVerticalConstraints:(id)arg1;
- (void)setTitleLabelTopAlignmentConstraints:(id)arg1;
- (void)setWidthConstraint:(id)arg1;
- (bool)shouldHaveBackdropView;
- (bool)shouldUpdateFocusInContext:(id)arg1;
- (bool)showsCancelAction;
- (id)textFieldViewControllerContainerViewHeightConstraint;
- (id)textFieldViewControllerContainerViewTopAlignmentConstraints;
- (id)textFieldViewControllerContainerViewWidthConstraint;
- (id)textFieldViewControllerViewBottomConstraint;
- (id)textFieldViewControllerViewLeftConstraint;
- (id)textFieldViewControllerViewRightConstraint;
- (id)textFieldViewControllerViewTopConstraint;
- (id)textFields;
- (long long)tintAdjustmentMode;
- (id)title;
- (id)titleAndMessageLabelVibrantContainerViewVerticalConstraints;
- (id)titleLabelTopAlignmentConstraints;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)updateConstraints;
- (void)updateObservations:(id)arg1;
- (id)widthConstraint;

@end