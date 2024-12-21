/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
 */

@interface WBSScribbleController : NSObject <WBSUserDefinedContentBlockerManagerObserver> {
    NSMutableDictionary * _activeGlobalActionsByDatabaseID;
    WBSUserDefinedContentBlocker * _contentBlockerForCurrentHost;
    <WBSScribbleControllerDelegate> * _delegate;
    bool  _elementSelectionEnabled;
    bool  _isGettingElementAtPoint;
    bool  _isScribbling;
    bool  _isUpdatingShouldMakePageScrollableAndInteractable;
    struct CGPoint { 
        double x; 
        double y; 
    }  _lastRequestLocation;
    unsigned long long  _numberOfElementsHiddenByPaintingAvoidance;
    unsigned long long  _numberOfHiddenElementsInheritedFromNormalBrowsing;
    WBSScribbleQuirks * _quirksForCurrentSession;
    NSMutableArray * _scribbleElementsForGlobalActionsFromCurrentSession;
    NSMutableArray * _scribbleElementsFromCurrentSession;
    WBSScribbleElement * _selectedScribbleElement;
    bool  _shouldMakePageScrollableAndInteractable;
    bool  _startedScribblingWithHiddenItems;
    NSMutableArray * _targetedElementsHiddenByValidation;
    NSMutableArray * _targetedElementsHiddenFromCurrentSession;
    NSMutableArray * _targetedElementsToHideUsingDisplayNone;
    double  _validatingDelay;
    NSTimer * _validatingTimer;
    WBSScribbleValidator * _validator;
    WKWebView * _webView;
}

@property (nonatomic, readonly) bool canHideContentInWebView;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <WBSScribbleControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool elementSelectionEnabled;
@property (nonatomic, readonly) bool hasPendingRequest;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isScribbling;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } lastRequestLocation;
@property (nonatomic, readonly) unsigned long long numberOfAllHiddenElements;
@property (nonatomic, readonly) unsigned long long numberOfChangesFromCurrentSession;
@property (nonatomic, readonly) WBSScribbleElement *selectedScribbleElement;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_applyQuirksToRequest:(id)arg1;
- (void)_applyWebCompatibilityFixups;
- (id)_currentUserContentControllers;
- (void)_disableHiddenActiveElementIfNeeded;
- (id)_elementsToValidate;
- (bool)_hasAnyHiddenElements;
- (void)_hideElementUsingPaintAvoidance:(id)arg1 completion:(id /* block */)arg2;
- (void)_makePageScrollableAndInteractableIfNeeded;
- (void)_rescheduleValidation;
- (void)_resetPaintAvoidanceForElements:(id)arg1 completion:(id /* block */)arg2;
- (bool)_shouldSkipValidation;
- (void)_stopValidationTimer;
- (id)_targetsHiddenByUserOrValidation;
- (void)_updateQuirksIfNeeded;
- (void)_updateUserStyleSheet;
- (void)_validateHiddenElements:(id /* block */)arg1;
- (id)cachedGlobalContentBlockerActions;
- (bool)canHideContentInWebView;
- (void)clearAllEdits;
- (id)delegate;
- (bool)elementSelectionEnabled;
- (void)endScribblingAndSaveChanges:(bool)arg1;
- (void)getElementAtPoint:(struct CGPoint { double x1; double x2; })arg1 completion:(id /* block */)arg2;
- (bool)hasPendingRequest;
- (void)hideSelectedElement;
- (id)initWithWebView:(id)arg1;
- (void)invalidate;
- (bool)isScribbling;
- (struct CGPoint { double x1; double x2; })lastRequestLocation;
- (void)loadContentBlockerForHost:(id)arg1;
- (unsigned long long)numberOfAllHiddenElements;
- (unsigned long long)numberOfChangesFromCurrentSession;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)reloadWithoutScribbleElements;
- (id)selectedScribbleElement;
- (void)setDelegate:(id)arg1;
- (void)setElementSelectionEnabled:(bool)arg1;
- (void)startScribblingWithCompletionHandler:(id /* block */)arg1;
- (void)startValidatingHiddenElements;
- (void)undoLastAction;
- (void)updateCountForElementsHiddenByPaintingAvoidance;
- (void)updateSelectionToPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)userDefinedContentBlockerManagerDidUpdateAllRules:(id)arg1;

@end