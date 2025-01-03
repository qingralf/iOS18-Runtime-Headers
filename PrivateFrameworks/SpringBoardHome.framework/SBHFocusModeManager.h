/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

@interface SBHFocusModeManager : NSObject <SBFolderObserver> {
    SBHFocusMode * _activeFocusMode;
    SBIconListModel * _cachedDock;
    SBHFocusModeFeatureIntroductionItem * _focusModeFeatureIntroductionItem;
    NSMutableDictionary * _focusModesBySourceNumber;
    SBHIconManager * _iconManager;
    NSHashTable * _observers;
}

@property (nonatomic, retain) SBHFocusMode *activeFocusMode;
@property (nonatomic, retain) SBIconListModel *cachedDock;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) SBHFocusModeFeatureIntroductionItem *focusModeFeatureIntroductionItem;
@property (nonatomic, readonly) NSMutableDictionary *focusModesBySourceNumber;
@property (readonly) unsigned long long hash;
@property (nonatomic) SBHIconManager *iconManager;
@property (nonatomic, readonly) NSHashTable *observers;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_focusModesRequiringIntroduction;
- (void)_iconEditingDidChange:(id)arg1;
- (void)_iconModelDidChange:(id)arg1;
- (void)_notifyObserversOfActiveFocusModeChange;
- (void)_updateDockWithActiveFocusMode:(id)arg1 rootFolder:(id)arg2;
- (id)activeFocusMode;
- (void)addFocusModeRequiringIntroduction:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)applyFocusMode:(id)arg1;
- (id)cachedDock;
- (id)computeCurrentFocusMode;
- (void)dealloc;
- (void)dismissAllFocusModePopovers;
- (void)donateFocusMode:(id)arg1 fromSource:(long long)arg2;
- (id)focusModeFeatureIntroductionItem;
- (id)focusModesBySourceNumber;
- (void)folder:(id)arg1 didAddList:(id)arg2;
- (id)iconManager;
- (id)initWithIconManager:(id)arg1;
- (id)observers;
- (void)removeFocusModeRequiringIntroduction:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)setActiveFocusMode:(id)arg1;
- (void)setCachedDock:(id)arg1;
- (void)setFocusModeFeatureIntroductionItem:(id)arg1;
- (void)setIconManager:(id)arg1;
- (void)updateFocusModePopoverVisibility;

@end
