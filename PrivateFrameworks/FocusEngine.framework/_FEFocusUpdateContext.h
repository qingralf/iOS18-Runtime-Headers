/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FocusEngine.framework/FocusEngine
 */

@interface _FEFocusUpdateContext : NSObject {
    <_FEFocusEnvironment> * _commonAncestorEnvironment;
    _FEFocusEnvironmentScrollableContainerTuple * _commonEnvironmentScrollableContainer;
    bool  _deferredUpdate;
    _FEFocusItemInfo * _destinationItemInfo;
    double  _destinationViewDistanceOffscreen;
    struct { 
        unsigned int isValid : 1; 
        unsigned int hasValidated : 1; 
        unsigned int shouldUpdateDestinationItem : 1; 
        unsigned int sourceItemMayRemainFocused : 1; 
        unsigned int didResolveCommonAncestorEnvironment : 1; 
    }  _flags;
    <_FEFocusBehavior> * _focusBehavior;
    _UIDynamicFocusGroupMap * _focusGroupMap;
    _FEFocusMapSearchInfo * _focusMapSearchInfo;
    _FEFocusMovementInfo * _focusMovement;
    bool  _focusRedirectedByGuide;
    _FEFocusGuide * _focusedGuide;
    <_FEFocusEnvironment> * _initialDestinationEnvironment;
    NSString * _nextFocusedGroupIdentifier;
    _FEDebugLogReport * _preferredFocusReport;
    NSString * _previouslyFocusedGroupIdentifier;
    NSArray * _regionMapSnapshots;
    UIImage * _regionMapSnapshotsVisualRepresentation;
    <_FEFocusUpdateRequesting> * _request;
    _FEFocusItemInfo * _sourceItemInfo;
    _FEDebugIssueReport * _validationReport;
}

@property (getter=_commonAncestorEnvironment, nonatomic, readonly) <_FEFocusEnvironment> *commonAncestorEnvironment;
@property (getter=_commonEnvironmentScrollableContainer, setter=_setCommonEnvironmentScrollableContainer:, nonatomic, retain) _FEFocusEnvironmentScrollableContainerTuple *commonEnvironmentScrollableContainer;
@property (getter=_isDeferredUpdate, setter=_setDeferredUpdate:, nonatomic) bool deferredUpdate;
@property (getter=_destinationItemInfo, nonatomic, readonly, copy) _FEFocusItemInfo *destinationItemInfo;
@property (getter=_destinationViewDistanceOffscreen, setter=_setDestinationViewDistanceOffscreen:, nonatomic) double destinationViewDistanceOffscreen;
@property (nonatomic, readonly) <_FEFocusBehavior> *focusBehavior;
@property (getter=_focusGroupMap, setter=_setFocusGroupMap:, nonatomic, retain) _UIDynamicFocusGroupMap *focusGroupMap;
@property (nonatomic, readonly) unsigned long long focusHeading;
@property (getter=_focusMapSearchInfo, setter=_setFocusMapSearchInfo:, nonatomic, retain) _FEFocusMapSearchInfo *focusMapSearchInfo;
@property (getter=_focusMovement, nonatomic, readonly) _FEFocusMovementInfo *focusMovement;
@property (getter=_focusRedirectedByGuide, nonatomic, readonly) bool focusRedirectedByGuide;
@property (getter=_focusVelocity, nonatomic, readonly) struct CGVector { double x1; double x2; } focusVelocity;
@property (getter=_focusedGuide, nonatomic, readonly) _FEFocusGuide *focusedGuide;
@property (getter=_groupFilter, nonatomic, readonly) long long groupFilter;
@property (getter=_initialDestinationEnvironment, nonatomic, readonly) <_FEFocusEnvironment> *initialDestinationEnvironment;
@property (getter=_nextFocusedGroupIdentifier, nonatomic, readonly) NSString *nextFocusedGroupIdentifier;
@property (nonatomic, readonly) <_FEFocusItem> *nextFocusedItem;
@property (getter=_preferredFocusReport, setter=_setPreferredFocusReport:, nonatomic, retain) _FEDebugLogReport *preferredFocusReport;
@property (getter=_previouslyFocusedGroupIdentifier, nonatomic, readonly) NSString *previouslyFocusedGroupIdentifier;
@property (nonatomic, readonly) <_FEFocusItem> *previouslyFocusedItem;
@property (getter=_regionMapSnapshots, setter=_setRegionMapSnapshots:, nonatomic, retain) NSArray *regionMapSnapshots;
@property (getter=_regionMapSnapshotsVisualRepresentation, nonatomic, readonly) UIImage *regionMapSnapshotsVisualRepresentation;
@property (getter=_request, nonatomic, readonly) <_FEFocusUpdateRequesting> *request;
@property (getter=_sourceItemInfo, nonatomic, readonly, copy) _FEFocusItemInfo *sourceItemInfo;
@property (getter=_validationReport, setter=_setValidationReport:, nonatomic, retain) _FEDebugIssueReport *validationReport;

+ (id)_defaultValidationReportFormatter;

- (void).cxx_destruct;
- (void)_cacheFocusBehavior;
- (id)_commonAncestorEnvironment;
- (id)_commonEnvironmentScrollableContainer;
- (id)_destinationItemInfo;
- (double)_destinationViewDistanceOffscreen;
- (void)_didUpdateFocus;
- (id)_focusGroupMap;
- (id)_focusMapSearchInfo;
- (id)_focusMapSnapshotDebugInfoArray;
- (id)_focusMovement;
- (bool)_focusRedirectedByGuide;
- (struct CGVector { double x1; double x2; })_focusVelocity;
- (id)_focusedGuide;
- (long long)_groupFilter;
- (id)_initWithContext:(id)arg1;
- (id)_initWithFocusMovementRequest:(id)arg1 nextFocusedItem:(id)arg2;
- (id)_initWithFocusUpdateRequest:(id)arg1;
- (id)_initialDestinationEnvironment;
- (bool)_isDeferredUpdate;
- (bool)_isFilteredToGroup;
- (bool)_isValidInFocusSystem:(id)arg1;
- (id)_nextFocusedGroupIdentifier;
- (id)_preferredFocusReport;
- (id)_previouslyFocusedGroupIdentifier;
- (id)_publicRegionMapSnapshots;
- (id)_regionMapSnapshots;
- (id)_regionMapSnapshotsVisualRepresentation;
- (id)_request;
- (void)_restoreRestrictedFocusMovementWithMovement:(id)arg1;
- (void)_setCommonEnvironmentScrollableContainer:(id)arg1;
- (void)_setDeferredUpdate:(bool)arg1;
- (void)_setDestinationViewDistanceOffscreen:(double)arg1;
- (void)_setFocusGroupMap:(id)arg1;
- (void)_setFocusMapSearchInfo:(id)arg1;
- (void)_setFocusRedirectedByGuide:(bool)arg1;
- (void)_setFocusedGuide:(id)arg1;
- (void)_setInitialDestinationEnvironment:(id)arg1;
- (void)_setPreferredFocusReport:(id)arg1;
- (void)_setRegionMapSnapshots:(id)arg1;
- (void)_setSourceItemInfo:(id)arg1;
- (void)_setValidationReport:(id)arg1;
- (id)_sourceItemInfo;
- (void)_updateDestinationItemIfNeeded;
- (void)_updateWithFocusGroupMap:(id)arg1;
- (bool)_validate;
- (id)_validationReport;
- (void)_willUpdateFocusFromFocusedItem:(id)arg1;
- (id)debugQuickLookObject;
- (id)description;
- (id)focusBehavior;
- (unsigned long long)focusHeading;
- (id)init;
- (id)nextFocusedItem;
- (id)previouslyFocusedItem;

@end
