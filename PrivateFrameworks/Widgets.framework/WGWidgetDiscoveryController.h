/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Widgets.framework/Widgets
 */

@interface WGWidgetDiscoveryController : NSObject <LSApplicationWorkspaceObserverProtocol, WGWidgetDataSourceObserver, WGWidgetListEditViewControllerDataSource, WGWidgetListEditViewControllerDelegate> {
    NSMutableDictionary * _archive;
    NSObject<OS_dispatch_queue> * _archiveWriteQueue;
    NSMutableDictionary * _dataSourceIdentifiersToDatumIdentifiers;
    <WGWidgetDebugging> * _debuggingHandler;
    NSMutableSet * _defaultEnabledIDs;
    <WGWidgetDiscoveryControllerDelegate> * _delegate;
    NSMutableDictionary * _identifiersToDataSources;
    NSMutableDictionary * _identifiersToDatums;
    NSMutableDictionary * _identifiersToWidgetInfos;
    NSObject<OS_dispatch_queue> * _newWidgetsCountPostQueue;
    NSPointerArray * _observers;
    NSMutableArray * _orderedEnabledTodayIdentifiers;
    NSMutableArray * _orderedEnabledWidgetsIdentifiers;
    NSArray * _orderedVisibleTodayIdentifiers;
    NSArray * _orderedVisibleWidgetsIdentifiers;
    WGWidgetPersistentStateController * _persistentStateController;
    WGWidgetListEditViewController * _presentedEditViewController;
    id  _presentedEditViewControllerStatusBarAssertion;
    bool  _shouldPurgeNonASTCSnapshots;
    bool  _shouldPurgeNonCAMLSnapshots;
    WGWidgetStatsController * _statsController;
    NSMutableDictionary * _widgetIDsToPendingTestCompletions;
    NSMutableDictionary * _widgetIDsToPendingTestTearDowns;
    NSMutableDictionary * _widgetIDsToWidgets;
}

@property (nonatomic) bool bootstrapFavoriteWidgets;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <WGWidgetDebugging> *debuggingHandler;
@property (nonatomic) <WGWidgetDiscoveryControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (setter=_setPresentedEditViewController:, nonatomic) WGWidgetListEditViewController *presentedEditViewController;
@property (getter=_presentedEditViewControllerStatusBarAssertion, setter=_setPresentedEditViewControllerStatusBarAssertion:, nonatomic, retain) id presentedEditViewControllerStatusBarAssertion;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSMutableDictionary *widgetIDsToPendingTestCompletions;
@property (nonatomic, retain) NSMutableDictionary *widgetIDsToPendingTestTearDowns;
@property (getter=_widgetIDsToWidgets, nonatomic, readonly) NSMutableDictionary *widgetIDsToWidgets;

+ (long long)layoutModeForSize:(struct CGSize { double x1; double x2; })arg1;

- (void).cxx_destruct;
- (void)_addDefaultPinnedWidgets;
- (void)_applicationIconChanged:(id)arg1;
- (void)_beginObservingDataSourcesIfNecessary;
- (void)_calculateAndPostNewWidgetsCount;
- (void)_dataSourcesDidChange:(id)arg1;
- (id)_defaultGroupForWidgetWithIdentifier:(id)arg1;
- (id)_disabledIdentifiers;
- (void)_externalSourceRequestsInsertionOfWidgetWithIdentifier:(id)arg1 insertAtTop:(bool)arg2;
- (id)_groupForWidgetWithIdentifier:(id)arg1;
- (id)_insertWidgetWithIdentifier:(id)arg1 atTop:(bool)arg2;
- (void)_invalidateVisibleIdentifiersForGroup:(id)arg1;
- (void)_invalidateWidgetListEditViewControllerStatusBarAssertion:(id)arg1;
- (bool)_isApplicationLockedOutWithProxy:(id)arg1;
- (bool)_isElementWithIdentifierEnabled:(id)arg1;
- (bool)_isElementWithIdentifierFavorited:(id)arg1;
- (bool)_isElementWithIdentifierKnown:(id)arg1;
- (id)_newWidgetListEditViewController;
- (id)_newWidgetListEditViewControllerStatusBarAssertion;
- (id)_newWidgetWithIdentifier:(id)arg1 delegate:(id)arg2;
- (int)_nextSequenceNumber;
- (void)_notifyObserversOfOrderChangeForWidgetIdentifiers:(id)arg1;
- (void)_notifyObserversOfSignificantWidgetsChange;
- (void)_notifyObserversOfVisibilityChange:(bool)arg1 ofWidgetWithIdentifier:(id)arg2 inGroup:(id)arg3;
- (id)_orderedEnabledIdentifiersForGroup:(id)arg1;
- (id)_orderedEnabledWidgetIdentifiersForGroup:(id)arg1 includingNoContent:(bool)arg2;
- (id)_orderedVisibleIdentifiersForGroup:(id)arg1;
- (id)_orderedVisibleIdentifiersForTodayGroup;
- (id)_orderedVisibleIdentifiersForWidgetGroup;
- (id)_preferredViewControllerForPresentingFromViewController:(id)arg1;
- (id)_presentedEditViewControllerStatusBarAssertion;
- (void)_removeWidgetWithIdentifier:(id)arg1;
- (void)_requestUnlockWithCompletion:(id /* block */)arg1;
- (bool)_setEnabled:(bool)arg1 forElementWithIdentifier:(id)arg2;
- (void)_setPresentedEditViewController:(id)arg1;
- (void)_setPresentedEditViewControllerStatusBarAssertion:(id)arg1;
- (void)_setWidgetsPinned:(bool)arg1;
- (void)_updateFavoriteWidgetIDs:(id)arg1;
- (void)_updateLockedOutStateForWidget:(id)arg1;
- (void)_updateLockedOutStateForWidget:(id)arg1 withContainingAppProxy:(id)arg2;
- (id)_updatePublicationStateOfDatumWithIdentifier:(id)arg1 visibilityChanged:(bool)arg2 contentStateChanged:(bool)arg3 insertAtTop:(bool)arg4 notifyingObservers:(bool)arg5;
- (void)_widget:(id)arg1 withIdentifier:(id)arg2 didRemoveSnapshotAtURL:(id)arg3;
- (id)_widgetIDsToWidgets;
- (long long)_widgetListEditViewControllerStatusBarLegibilityStyle;
- (void)_widgetListEditViewControllerWillDisappear:(id)arg1;
- (void)_widgetViewControllerDidRemoveSnapshot:(id)arg1;
- (void)_widgetViewControllerRequestsAdd:(id)arg1;
- (void)addDiscoveryObserver:(id)arg1;
- (bool)alwaysShowsFavoriteWidgets;
- (bool)areWidgetsPinned;
- (bool)areWidgetsPinnedForWidgetListEditViewController:(id)arg1;
- (void)beginDiscovery;
- (bool)bootstrapFavoriteWidgets;
- (void)debugWidgetWithBundleID:(id)arg1 options:(id)arg2 completion:(id /* block */)arg3;
- (id)debuggingHandler;
- (id)delegate;
- (void)deviceManagementPolicyDidChange:(id)arg1;
- (id)disabledInterfaceItemIdentifiersForWidgetListEditViewController:(id)arg1;
- (id)disabledWidgetIdentifiers;
- (void)dismissWidgetListEditViewController:(id)arg1 animated:(bool)arg2 withCompletion:(id /* block */)arg3;
- (void)dismissWidgetListEditViewControllerAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (id)enabledWidgetIdentifiersForAllGroups;
- (id)favoriteWidgetIdentifiers;
- (id)groupsForWidgetListEditViewController:(id)arg1;
- (void)handleWidgetLaunchRecommendation:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (void)invalidateVisibleIdentifiers;
- (bool)isElementWithIdentifierFavorited:(id)arg1;
- (long long)largestAvailableDisplayModeForWidget:(id)arg1;
- (long long)largestAvailableDisplayModeForWidgetWithIdentifier:(id)arg1;
- (long long)layoutModeForWidgetListEditViewController:(id)arg1;
- (void)noteWidgetsPinningViewControllerDidDismiss:(bool)arg1;
- (void)presentWidgetListEditViewControllerFromViewController:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (id)presentedEditViewController;
- (void)registerIdentifierForRefreshEvents:(id)arg1;
- (void)remoteViewControllerDidConnectForWidgetViewController:(id)arg1;
- (void)remoteViewControllerViewDidAppearForWidgetViewController:(id)arg1;
- (void)removeDiscoveryObserver:(id)arg1;
- (void)removeWidgetIdentifiersFromToday:(id)arg1;
- (void)requestRefreshForWidget:(id)arg1 afterDate:(id)arg2;
- (void)setBootstrapFavoriteWidgets:(bool)arg1;
- (void)setDebuggingHandler:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHasContent:(bool)arg1 forWidgetWithIdentifier:(id)arg2;
- (void)setLargestAvailableDisplayMode:(long long)arg1 forWidgetWithIdentifier:(id)arg2;
- (void)setUserSpecifiedDisplayMode:(long long)arg1 forWidgetWithIdentifier:(id)arg2;
- (void)setWidgetIDsToPendingTestCompletions:(id)arg1;
- (void)setWidgetIDsToPendingTestTearDowns:(id)arg1;
- (void)setWidgetLoggingEnabled:(bool)arg1;
- (void)setWidgetSnapshotTimestampsEnabled:(bool)arg1;
- (bool)shouldPurgeArchivedSnapshotsForWidget:(id)arg1;
- (bool)shouldPurgeNonASTCSnapshotsForWidget:(id)arg1;
- (bool)shouldPurgeNonCAMLSnapshotsForWidget:(id)arg1;
- (bool)shouldRemoveSnapshotWhenNotVisibleForWidget:(id)arg1;
- (bool)shouldShowWidgetsPinButtonForWidgetListEditViewController:(id)arg1;
- (bool)shouldShowWidgetsPinningTeachingView;
- (id)todayWidgetIdentifiers;
- (void)unregisterIdentifierForRefreshEvents:(id)arg1;
- (long long)userSpecifiedDisplayModeForWidget:(id)arg1;
- (long long)userSpecifiedDisplayModeForWidgetWithIdentifier:(id)arg1;
- (id)visibleWidgetIdentifiersForGroup:(id)arg1;
- (unsigned long long)visibleWidgetsCount;
- (void)widget:(id)arg1 didChangeLargestAvailableDisplayMode:(long long)arg2;
- (void)widget:(id)arg1 didChangeUserSpecifiedDisplayMode:(long long)arg2;
- (void)widget:(id)arg1 didEncounterProblematicSnapshotAtURL:(id)arg2;
- (void)widget:(id)arg1 didRemoveSnapshotAtURL:(id)arg2;
- (void)widgetDataSource:(id)arg1 removeDatum:(id)arg2;
- (void)widgetDataSource:(id)arg1 replaceWithDatum:(id)arg2;
- (void)widgetEditListViewController:(id)arg1 traitCollectionDidChange:(id)arg2;
- (id)widgetIDsToPendingTestCompletions;
- (id)widgetIDsToPendingTestTearDowns;
- (void)widgetListEditViewController:(id)arg1 acknowledgeInterfaceItemsWithIdentifiers:(id)arg2;
- (id)widgetListEditViewController:(id)arg1 defaultGroupForItemWithIdentifier:(id)arg2;
- (void)widgetListEditViewController:(id)arg1 didChangeWidgetsPinning:(bool)arg2;
- (void)widgetListEditViewController:(id)arg1 didReorderItemsWithIdentifiersInGroups:(id)arg2;
- (id)widgetListEditViewController:(id)arg1 displayNameForItemWithIdentifier:(id)arg2;
- (bool)widgetListEditViewController:(id)arg1 isItemWithIdentifierEnabled:(id)arg2;
- (bool)widgetListEditViewController:(id)arg1 isItemWithIdentifierFavorited:(id)arg2;
- (bool)widgetListEditViewController:(id)arg1 isItemWithIdentifierNew:(id)arg2;
- (id)widgetListEditViewController:(id)arg1 itemIdentifiersForGroup:(id)arg2;
- (void)widgetListEditViewController:(id)arg1 requestsIconForItemWithIdentifier:(id)arg2 withHandler:(id /* block */)arg3;
- (void)widgetListEditViewController:(id)arg1 setEnabled:(bool)arg2 forItemsWithIdentifiers:(id)arg3;
- (void)widgetListEditViewController:(id)arg1 updateFavoritesToIdentifiers:(id)arg2;
- (bool)widgetListEditViewControllerShouldIncludeInternalWidgets:(id)arg1;
- (bool)widgetListEditViewControllerShouldShowFavorites:(id)arg1;
- (void)widgetViewControllerNeedsToBeRegisteredForRefreshNotification:(id)arg1;
- (void)widgetViewControllerNeedsToBeUnregisteredForRefreshNotification:(id)arg1;
- (id)widgetWithIdentifier:(id)arg1 delegate:(id)arg2 forRequesterWithIdentifier:(id)arg3;

@end
