/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreAutoLayout.framework/CoreAutoLayout
 */

@interface NSLayoutConstraint : NSObject <NSISConstraint> {
    float  _coefficient;
    double  _constant;
    id  _container;
    id  _firstAnchor;
    unsigned long long  _layoutConstraintFlags;
    double  _loweredConstant;
    id  _markerAndPositiveExtraVar;
    id  _negativeExtraVar;
    float  _priority;
    id  _secondAnchor;
}

@property (setter=_setAssociatedRuleNode:) _NSConstraintDescriptionLayoutRuleNode *_associatedRuleNode;
@property (setter=_setContainerDeclaredConstraint:) bool _containerDeclaredConstraint;
@property (readonly, copy) NSSet *_referencedLayoutItems;
@property (getter=isActive) bool active;
@property double constant;
@property id container;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (getter=_encodedConstant, setter=_setEncodedConstant:) _NSLayoutConstraintConstant *encodedConstant;
@property (setter=_setFirstAnchor:, copy) NSLayoutAnchor *firstAnchor;
@property (readonly) long long firstAttribute;
@property (readonly) id firstItem;
@property (readonly) bool hasBeenLowered;
@property (readonly) unsigned long long hash;
@property (copy) NSString *identifier;
@property (getter=_loweredConstantNeedsUpdate, setter=_setLoweredConstantNeedsUpdate:, nonatomic) bool loweredConstantNeedsUpdate;
@property (setter=_setMultiplier:) double multiplier;
@property float priority;
@property (setter=_setRelation:) long long relation;
@property (setter=_setSecondAnchor:, copy) NSLayoutAnchor *secondAnchor;
@property (readonly) long long secondAttribute;
@property (readonly) id secondItem;
@property bool shouldBeArchived;
@property (readonly) Class superclass;
@property (copy) NSString *symbolicConstant;
@property double symbolicConstantMultiplier;
@property (readonly) double unsatisfaction;

// Image: /System/Library/PrivateFrameworks/CoreAutoLayout.framework/CoreAutoLayout

+ (double)_constraintConstantLimit;
+ (id)_findCommonAncestorOfItem:(id)arg1 andItem:(id)arg2;
+ (void)_setLegacyDecodingOnly:(bool)arg1;
+ (void)activateConstraints:(id)arg1;
+ (id)constraintWithAnchor:(id)arg1 relatedBy:(long long)arg2 constant:(double)arg3;
+ (id)constraintWithAnchor:(id)arg1 relatedBy:(long long)arg2 toAnchor:(id)arg3 multiplier:(double)arg4 constant:(double)arg5;
+ (id)constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 constant:(double)arg4;
+ (id)constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5;
+ (id)constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5 constant:(double)arg6;
+ (id)constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5 multiplier:(double)arg6;
+ (id)constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5 multiplier:(double)arg6 constant:(double)arg7;
+ (id)constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5 multiplier:(double)arg6 symbolicConstant:(id)arg7;
+ (id)constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5 multiplier:(double)arg6 symbolicConstant:(id)arg7 symbolicConstantMultiplier:(double)arg8;
+ (id)constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5 multiplier:(double)arg6 symbolicConstant:(id)arg7 theme:(id)arg8;
+ (id)constraintsWithVisualFormat:(id)arg1 options:(unsigned long long)arg2 metrics:(id)arg3 views:(id)arg4;
+ (void)deactivateConstraints:(id)arg1;

- (void)_addToEngine:(id)arg1;
- (bool)_addToEngine:(id)arg1 integralizationAdjustment:(double)arg2 mutuallyExclusiveConstraints:(id*)arg3;
- (bool)_addToEngine:(id)arg1 mutuallyExclusiveConstraints:(id*)arg2;
- (double)_allowedMagnitudeForIntegralizationAdjustment;
- (id)_associatedRuleNode;
- (void)_clearWeakContainerReference;
- (id)_constantDescriptionForDTrace;
- (id)_constraintByReplacingItem:(id)arg1 withItem:(id)arg2;
- (id)_constraintByReplacingView:(id)arg1 withView:(id)arg2;
- (int)_constraintType;
- (id)_constraintValueCopy;
- (unsigned long long)_constraintValueHashIncludingConstant:(bool)arg1 includeOtherMutableProperties:(bool)arg2;
- (bool)_containerDeclaredConstraint;
- (void)_containerGeometryDidChange;
- (bool)_describesSameRestrictionAsConstraint:(id)arg1;
- (id)_descriptionforSymbolicConstant;
- (bool)_effectiveConstant:(double*)arg1 error:(id*)arg2;
- (struct CGSize { double x1; double x2; })_engineToContainerScalingCoefficients;
- (bool)_existsInEngine:(id)arg1;
- (id)_explainUnsatisfaction;
- (void)_forceSatisfactionMeasuringUnsatisfactionChanges:(id*)arg1 andMutuallyExclusiveConstraints:(id*)arg2;
- (double)_fudgeIncrement;
- (id)_identifier;
- (bool)_isEqualToConstraintValue:(id)arg1 includingConstant:(bool)arg2 includeOtherMutableProperties:(bool)arg3;
- (bool)_isFudgeable;
- (bool)_isIBPrototypingLayoutConstraint;
- (bool)_lowerIntoExpression:(id)arg1 reportingConstantIsRounded:(bool*)arg2;
- (bool)_loweredConstantIsRounded;
- (bool)_loweredConstantNeedsUpdate;
- (id)_loweredExpression;
- (id)_markerAndPositiveExtraVar;
- (bool)_nsib_isRedundant;
- (bool)_nsib_isRedundantInEngine:(id)arg1;
- (id)_priorityDescription;
- (id)_referencedLayoutItems;
- (bool)_referencesLayoutItem:(id)arg1;
- (void)_removeFromEngine:(id)arg1;
- (void)_setActive:(bool)arg1 mutuallyExclusiveConstraints:(id*)arg2;
- (void)_setAssociatedRuleNode:(id)arg1;
- (void)_setContainerDeclaredConstraint:(bool)arg1;
- (void)_setFirstAnchor:(id)arg1;
- (void)_setFirstItem:(id)arg1 attribute:(long long)arg2;
- (void)_setLoweredConstantNeedsUpdate:(bool)arg1;
- (void)_setMultiplier:(double)arg1;
- (void)_setMutablePropertiesFromConstraint:(id)arg1;
- (void)_setRelation:(long long)arg1;
- (void)_setSecondAnchor:(id)arg1;
- (void)_setSecondItem:(id)arg1 attribute:(long long)arg2;
- (void)_setSymbolicConstant:(id)arg1;
- (id)_symbolicConstant;
- (void)_tryToActivateMeasuringUnsatisfactionChanges:(id*)arg1 andMutuallyExclusiveConstraints:(id*)arg2;
- (id)animations;
- (double)constant;
- (id)container;
- (void)dealloc;
- (id)description;
- (id)descriptionAccessory;
- (void)encodeWithCoder:(id)arg1;
- (id)firstAnchor;
- (long long)firstAttribute;
- (id)firstItem;
- (bool)hasBeenLowered;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isActive;
- (double)multiplier;
- (id)nsis_descriptionOfVariable:(id)arg1;
- (int)nsis_orientationHintForVariable:(id)arg1;
- (void)nsis_valueOfVariable:(id)arg1 didChangeInEngine:(id)arg2;
- (bool)nsis_valueOfVariableIsUserObservable:(id)arg1;
- (float)priority;
- (double)priorityForVariable:(id)arg1;
- (long long)relation;
- (id)secondAnchor;
- (long long)secondAttribute;
- (id)secondItem;
- (void)setActive:(bool)arg1;
- (void)setAnimations:(id)arg1;
- (void)setConstant:(double)arg1;
- (void)setContainer:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setPriority:(float)arg1;
- (void)setShouldBeArchived:(bool)arg1;
- (void)setSymbolicConstant:(id)arg1;
- (void)setSymbolicConstantMultiplier:(double)arg1;
- (bool)shouldBeArchived;
- (id)symbolicConstant;
- (double)symbolicConstantMultiplier;
- (double)unsatisfaction;

// Image: /System/Library/Frameworks/AVKit.framework/AVKit

+ (id)avkit_constraintsFromEdgesOfItem:(id)arg1 toEdgesOfItem:(id)arg2;
+ (id)avkit_constraintsFromEdgesOfItem:(id)arg1 toLeadingAnchor:(id)arg2 topAnchor:(id)arg3 trailingAnchor:(id)arg4 bottomAnchor:(id)arg5 priority:(float)arg6;
+ (id)avkit_constraintsFromLeadingAndTrailingEdgesOfItem:(id)arg1 toEdgesOfItem:(id)arg2;
+ (id)avkit_constraintsFromTopAndBottomEdgesOfItem:(id)arg1 toEdgesOfItem:(id)arg2;

// Image: /System/Library/Frameworks/AuthenticationServices.framework/AuthenticationServices

+ (id)as_constraintsMatchingFrameOfView:(id)arg1 withFrameOfView:(id)arg2;
+ (id)as_constraintsMatchingFrameOfView:(id)arg1 withFrameOfView:(id)arg2 edgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg3;

// Image: /System/Library/Frameworks/QuickLook.framework/QuickLook

- (id)ql_activatedConstraint;

// Image: /System/Library/PrivateFrameworks/AccessibilityUIUtilities.framework/AccessibilityUIUtilities

+ (id)ax_constraintsToMakeItem:(id)arg1 sameDimensionsAsItem:(id)arg2;
+ (id)ax_constraintsToMakeView:(id)arg1 sameDimensionsAsView:(id)arg2;

- (id)ax_copyWithPriority:(float)arg1;
- (void)ax_removeFromContainer;

// Image: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI

+ (id)ak_constraintsForView:(id)arg1 equalToLayoutGuide:(id)arg2;
+ (id)ak_constraintsForView:(id)arg1 equalToView:(id)arg2;

// Image: /System/Library/PrivateFrameworks/ClipUIServices.framework/ClipUIServices

+ (void)cps_if:(bool)arg1 thenActivate:(id)arg2 elseActivate:(id)arg3;
+ (void)cps_if:(bool)arg1 thenActivateConstraints:(id)arg2 elseActivateConstraints:(id)arg3;

- (id)cps_setPriority:(float)arg1;

// Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI

+ (id)_gkBaselineConstraintsForViewsFontsLeadings:(id)arg1 superview:(id)arg2 options:(long long)arg3;
+ (id)_gkConstraintForView:(id)arg1 baselineAlignedUnderView:(id)arg2 offsetBy:(double)arg3;
+ (id)_gkConstraintForView:(id)arg1 centeredXInView:(id)arg2;
+ (id)_gkConstraintForView:(id)arg1 centeredYInView:(id)arg2;
+ (id)_gkConstraintForView:(id)arg1 equalsAttribute:(long long)arg2 ofView:(id)arg3;
+ (id)_gkConstraintForView:(id)arg1 withConstantHeight:(double)arg2;
+ (id)_gkConstraintForView:(id)arg1 withConstantWidth:(double)arg2;
+ (id)_gkConstraintForView:(id)arg1 withHeightDerivedFromView:(id)arg2 insetBy:(double)arg3;
+ (id)_gkConstraintForView:(id)arg1 withWidthDerivedFromView:(id)arg2 insetBy:(double)arg3;
+ (id)_gkConstraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5 multiplier:(double)arg6 leading:(double)arg7 fontTextStyle:(id)arg8;
+ (id)_gkConstraintsForView:(id)arg1 centeredXInView:(id)arg2 enforceMargin:(double)arg3;
+ (id)_gkConstraintsForView:(id)arg1 withinView:(id)arg2 insets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg3;
+ (id)_gkConstraintsForViews:(id)arg1 alignedByAttribute:(long long)arg2;
+ (id)_gkConstraintsForViews:(id)arg1 contiguouslyLaidOutVertically:(bool)arg2 overlap:(double)arg3 withinView:(id)arg4 insets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg5;
+ (id)_gkConstraintsForViews:(id)arg1 contiguouslyLaidOutVertically:(bool)arg2 overlap:(double)arg3 withinView:(id)arg4 insets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg5 applyOrthogonalConstraints:(bool)arg6;
+ (void)_gkInstallEdgeConstraintsForLayoutGuide:(id)arg1 containedWithinParentView:(id)arg2;
+ (void)_gkInstallEdgeConstraintsForView:(id)arg1 containedWithinParentView:(id)arg2;
+ (void)_gkInstallEdgeConstraintsForView:(id)arg1 containedWithinParentView:(id)arg2 edgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg3;
+ (void)_gkInstallEdgeConstraintsForView:(id)arg1 containedWithinParentView:(id)arg2 margin:(double)arg3;

// Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI

+ (id)hu_constraintsSizingAnchorProvider:(id)arg1 toAnchorProvider:(id)arg2;

- (id)hu_constraintWithPriority:(float)arg1;

// Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation

+ (id)constraintsByAttachingView:(id)arg1 toView:(id)arg2 alongEdges:(unsigned long long)arg3 insets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg4;
+ (id)constraintsByAttachingView:(id)arg1 toView:(id)arg2 inCorner:(unsigned long long)arg3 offset:(struct UIOffset { double x1; double x2; })arg4;
+ (id)constraintsByCenteringAndContainingView:(id)arg1 inView:(id)arg2 insets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg3;
+ (id)constraintsByCenteringView:(id)arg1 withView:(id)arg2 alongAxes:(unsigned long long)arg3 offset:(struct UIOffset { double x1; double x2; })arg4;
+ (id)constraintsBySizingView:(id)arg1 toSize:(struct CGSize { double x1; double x2; })arg2;

// Image: /System/Library/PrivateFrameworks/MapsUI.framework/MapsUI

+ (void)_mapsui_activateLayouts:(id)arg1;
+ (void)_mapsui_activateLayouts:(id)arg1 constraints:(id)arg2;
+ (void)_mapsui_deactivateLayouts:(id)arg1;
+ (void)_mapsui_deactivateLayouts:(id)arg1 constraints:(id)arg2;
+ (void)_mapsui_internal_activateLayouts:(id)arg1;
+ (void)_mapsui_internal_activateLayouts:(id)arg1 constraints:(id)arg2;
+ (void)_mapsui_internal_deactivateLayouts:(id)arg1;
+ (void)_mapsui_internal_deactivateLayouts:(id)arg1 constraints:(id)arg2;

// Image: /System/Library/PrivateFrameworks/MobileSafari.framework/MobileSafari

+ (void)sf_setConstraints:(id)arg1 active:(bool)arg2;

- (id)sf_withPriority:(float)arg1;

// Image: /System/Library/PrivateFrameworks/NetAppsUtilitiesUI.framework/NetAppsUtilitiesUI

+ (bool)naui_areConstraints:(id)arg1 equalToConstraints:(id)arg2;
+ (id)naui_constraintsByAttachingView:(id)arg1 toView:(id)arg2 alongEdges:(unsigned long long)arg3 insets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg4;
+ (id)naui_constraintsByAttachingView:(id)arg1 toView:(id)arg2 alongEdges:(unsigned long long)arg3 relatedBy:(long long)arg4 insets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg5;
+ (id)naui_constraintsByCenteringView:(id)arg1 withView:(id)arg2 alongAxes:(unsigned long long)arg3 offset:(struct UIOffset { double x1; double x2; })arg4;
+ (id)naui_constraintsBySizingView:(id)arg1 toSize:(struct CGSize { double x1; double x2; })arg2;
+ (id)naui_constraintsWithVisualFormat:(id)arg1 options:(unsigned long long)arg2 metrics:(id)arg3 views:(id)arg4 label:(id)arg5;
+ (id)naui_viewsInConstraints:(id)arg1;

- (id)naui_debugIdentifierWithBaseLabel:(id)arg1;
- (bool)naui_isEqualToConstraint:(id)arg1;
- (void)naui_setIdentifierWithLabel:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI

+ (id)ic_constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5 multiplier:(double)arg6 constant:(double)arg7 priority:(float)arg8;
+ (id)ic_constraints:(id)arg1 affectingViews:(id)arg2;
+ (id)ic_widthLayoutConstraintsForView:(id)arg1 minValue:(double)arg2;
+ (id)ic_widthLayoutConstraintsForView:(id)arg1 minValue:(double)arg2 maxValue:(double)arg3;

// Image: /System/Library/PrivateFrameworks/Pegasus.framework/Pegasus

+ (id)PG_constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5 multiplier:(double)arg6 constant:(double)arg7 priority:(float)arg8;

// Image: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI

+ (id)safari_constraintsMatchingFrameOfView:(id)arg1 withFrameOfView:(id)arg2;
+ (id)safari_constraintsMatchingFrameOfView:(id)arg1 withFrameOfView:(id)arg2 directionalInsets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg3;
+ (id)safari_constraintsMatchingFrameOfView:(id)arg1 withFrameOfView:(id)arg2 edgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg3;

// Image: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI

+ (id)st_constraintsForView:(id)arg1 equalToView:(id)arg2;

// Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI

+ (id)st_constraintsForView:(id)arg1 equalToLayoutGuide:(id)arg2;

// Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices

- (id)SBUISA_withPriority:(float)arg1;

// Image: /System/Library/PrivateFrameworks/SystemStatusUI.framework/SystemStatusUI

- (id)_ui_constraintWithPriority:(float)arg1;

// Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI

+ (id)constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5 multiplier:(double)arg6 constant:(double)arg7 priority:(float)arg8;

// Image: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit

- (void)tk_removeFromContainer;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (bool)_UIWantsMarginAttributeSupport;
+ (double)_constraintConstantLimit;

- (id)_debuggableEquationBaseDescription;
- (id)_debuggableEquationDescriptionWithoutLegend;
- (id)_debuggableEquationLegendDescription;
- (id)_encodedConstant;
- (id)_ola_dimensionItem;
- (id)_ola_dimensionRefItem;
- (void)_setEncodedConstant:(id)arg1;
- (id)_ui_constraintWithPriority:(float)arg1;

// Image: /System/Library/PrivateFrameworks/WorkflowUICore.framework/WorkflowUICore

- (id)wf_withPriority:(float)arg1;

@end
