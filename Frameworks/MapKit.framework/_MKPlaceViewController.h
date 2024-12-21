/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface _MKPlaceViewController : MKLayoutCardViewController <GEOLogContextDelegate, MKETAProviderDelegate, MKETAProviderObserver, MKPlaceCardActionControllerDelegate, MKPlaceCardHeaderViewControllerDelegate, MKPlaceCardPhotosControllerDelegate, MKPlaceHeaderButtonsViewControllerDelegate, MKPlaceInlineMapViewControllerDelegate, MKStackingViewControllerDelegate, _MKInfoCardAnalyticsDelegate, _MKPlaceCardConforming> {
    MKPlaceItemActionDataProvider * _actionDataProvider;
    MKPlaceActionManager * _actionManager;
    NSMapTable * _additionalViewControllers;
    NSObject<OS_dispatch_queue> * _analyticsQueue;
    GEOAutomobileOptions * _automobileOptions;
    struct CGPoint { 
        double x; 
        double y; 
    }  _beginAnalyticsScrollingPoint;
    MKPlaceHeaderButtonsViewController * _buttonsHeaderController;
    CNContact * _contact;
    CNContactStore * _contactStore;
    CNContactNavigationController<CNContactViewControllerPrivateDelegate> * _contactsNavigationController;
    double  _contentAlpha;
    GEOCyclingOptions * _cyclingOptions;
    MKETAProvider * _etaProvider;
    bool  _hasCheckedDistanceAvailability;
    bool  _hasContactOnlyMapItem;
    _MKPlaceActionButtonController * _headerAlternatePrimaryButtonController;
    _MKPlaceActionButtonController * _headerSecondaryButtonController;
    NSString * _headerTitle;
    MKPlaceCardHeaderViewController * _headerViewController;
    MKPlaceInfoViewController * _infoViewController;
    unsigned long long  _initialAppearanceSignpostID;
    MKPlaceInlineMapViewController * _inlineMapViewController;
    bool  _isUpdatingViewControllers;
    CLLocation * _location;
    unsigned long long  _options;
    CNContact * _originalContact;
    bool  _overrideDefaultShowRAP;
    MKPlaceCardFooterActionsViewController * _placeActionViewController;
    bool  _placeInBookmarks;
    bool  _placeInCollections;
    bool  _placeInShortcuts;
    <_MKPlaceItem> * _placeItem;
    <_MKPlaceViewControllerDelegate> * _placeViewControllerDelegate;
    id /* block */  _placeViewFeedbackAppLaunchHandler;
    <_MKPlaceViewControllerFeedbackDelegate> * _placeViewFeedbackDelegate;
    MKPlacePoisInlineMapViewController * _poisInlineMapViewController;
    bool  _showContactActions;
    GEOTransitOptions * _transitOptions;
    NSMutableArray * _viewDidAppearBlocks;
    GEOWalkingOptions * _walkingOptions;
    double  headerHeight;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *analyticsQueue;
@property (nonatomic, retain) GEOAutomobileOptions *automobileOptions;
@property (nonatomic, readonly) CNContact *contact;
@property (nonatomic) CNContactNavigationController<CNContactViewControllerPrivateDelegate> *contactsNavigationController;
@property (nonatomic, retain) GEOCyclingOptions *cyclingOptions;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic) bool disableReportAProblem;
@property (nonatomic) bool hasCheckedDistanceAvailability;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _MKPlaceActionButtonController *headerAlternatePrimaryButtonController;
@property (nonatomic) double headerHeight;
@property (nonatomic, retain) _MKPlaceActionButtonController *headerSecondaryButtonController;
@property (nonatomic, readonly) double headerSecondaryNameLabelPadding;
@property (nonatomic, copy) NSString *headerTitle;
@property (nonatomic) bool hideDirectionsButtons;
@property (nonatomic) bool hideInlineMap;
@property (nonatomic, retain) CLLocation *location;
@property (nonatomic, retain) MKMapItem *mapItem;
@property (nonatomic) unsigned long long options;
@property (nonatomic, retain) CNContact *originalContact;
@property (nonatomic) bool placeInBookmarks;
@property (nonatomic) bool placeInCollections;
@property (nonatomic) bool placeInShortcuts;
@property (nonatomic, readonly) <_MKPlaceItem> *placeItem;
@property (nonatomic) <_MKPlaceViewControllerDelegate> *placeViewControllerDelegate;
@property (nonatomic, copy) id /* block */ placeViewFeedbackAppLaunchHandler;
@property (nonatomic) <_MKPlaceViewControllerFeedbackDelegate> *placeViewFeedbackDelegate;
@property (nonatomic, readonly) UIScrollView *scrollView;
@property (nonatomic) bool showContactActions;
@property (nonatomic) bool showEditButton;
@property (nonatomic) bool showInlineMapInHeader;
@property (nonatomic) bool showNearbyApps;
@property (nonatomic) bool showReportAProblem;
@property (nonatomic) bool showShareActionsButton;
@property (nonatomic) bool showSimulateLocation;
@property (nonatomic) bool showTitleBar;
@property (readonly) Class superclass;
@property (nonatomic, retain) GEOTransitOptions *transitOptions;
@property (nonatomic, retain) NSMutableArray *viewDidAppearBlocks;
@property (nonatomic, retain) GEOWalkingOptions *walkingOptions;

- (void).cxx_destruct;
- (void)ETAProviderLocationUpdated:(id)arg1;
- (bool)_canShowWhileLocked;
- (void)_commonInit;
- (id)_contactForEditOperations;
- (id)_contactStore;
- (id)_createViewControllerForModule:(id)arg1;
- (void)_createViewControllers:(id)arg1;
- (void)_createViewControllersForBrand:(id)arg1;
- (void)_createViewControllersForShortPlacecard:(id)arg1;
- (void)_didResolveAttribution:(id)arg1;
- (void)_launchAttributionURLs:(id)arg1 withAttribution:(id)arg2 mapItem:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)_logClientAndServerLayouts:(id)arg1;
- (id)_mapTableKeyForSectionPosition:(long long)arg1;
- (int)_moduleTypeForViewController:(id)arg1;
- (void)_performWhenViewHasAppeared:(id /* block */)arg1;
- (void)_presentViewControllerWithInterfaceStyleCheck:(id)arg1;
- (long long)_sectionPositionForMapTableKey:(id)arg1;
- (void)_setDefaultViewControllers:(id)arg1;
- (bool)_shouldShowContactActions;
- (bool)_showReportAProblem;
- (void)_showShareSheet:(id)arg1;
- (id)_traits;
- (void)_updateViewControllers;
- (id)_viewControllerForClass:(Class)arg1;
- (void)addAdditionalViewController:(id)arg1 atPosition:(long long)arg2;
- (id)additionalViewControllersAtPosition:(long long)arg1;
- (bool)allowTransitLineSelection;
- (id)analyticsQueue;
- (unsigned long long)annotatedItemListDisplayStyle;
- (id)attributionsVC;
- (id)automobileOptions;
- (void)collectionIdentifierSelected:(id)arg1;
- (id)collectionViews;
- (id)contact;
- (id)contactsNavigationController;
- (double)contentAlpha;
- (id)createFooterActions;
- (id)createMenuActions;
- (int)currentMapViewTargetForAnalytics;
- (int)currentUITargetForAnalytics;
- (id)cyclingOptions;
- (void)dealloc;
- (bool)disableReportAProblem;
- (id)generateAvailableActionForAnalytics;
- (id)generateUnactionableUIElementsForAnalytics;
- (int)getPlaceCardTypeForAnalytics;
- (bool)hasCheckedDistanceAvailability;
- (id)headerAlternatePrimaryButtonController;
- (double)headerHeight;
- (id)headerSecondaryButtonController;
- (double)headerSecondaryNameLabelPadding;
- (id)headerTitle;
- (bool)hideDirectionsButtons;
- (bool)hideInlineMap;
- (id)hoursVC;
- (void)infoCardAnalyticsDidSelectAction:(int)arg1 eventValue:(id)arg2 feedbackDelegateSelector:(int)arg3;
- (void)infoCardAnalyticsDidSelectAction:(int)arg1 eventValue:(id)arg2 feedbackDelegateSelector:(int)arg3 actionRichProviderId:(id)arg4;
- (void)infoCardAnalyticsDidSelectAction:(int)arg1 target:(int)arg2 eventValue:(id)arg3 actionURL:(id)arg4 photoID:(id)arg5 feedbackDelegateSelector:(int)arg6 actionRichProviderId:(id)arg7;
- (void)infoCardAnalyticsDidSelectAction:(int)arg1 target:(int)arg2 eventValue:(id)arg3 actionURL:(id)arg4 photoID:(id)arg5 moduleMetadata:(id)arg6 feedbackDelegateSelector:(int)arg7 actionRichProviderId:(id)arg8;
- (void)infoCardAnalyticsDidSelectAction:(int)arg1 target:(int)arg2 eventValue:(id)arg3 feedbackDelegateSelector:(int)arg4 actionRichProviderId:(id)arg5;
- (void)infoCardAnalyticsDidSelectAction:(int)arg1 target:(int)arg2 eventValue:(id)arg3 moduleMetadata:(id)arg4 feedbackDelegateSelector:(int)arg5 actionRichProviderId:(id)arg6;
- (void)infoCardTransitAnalyticsDidSelectionAction:(int)arg1 resultIndex:(long long)arg2 targetID:(unsigned long long)arg3 transitSystem:(id)arg4 transitDepartureSequence:(id)arg5 transitCardCategory:(int)arg6 transitIncident:(id)arg7 feedbackDelegateSelector:(int)arg8;
- (id)infosVC;
- (id)init;
- (id)initWithContact:(id)arg1 mapItem:(id)arg2;
- (id)initWithContact:(id)arg1 mapItem:(id)arg2 options:(unsigned long long)arg3;
- (id)initWithMapItem:(id)arg1;
- (id)initWithMapItem:(id)arg1 options:(unsigned long long)arg2;
- (id)initWithPlaceItem:(id)arg1 options:(unsigned long long)arg2;
- (id)inlineMapVC;
- (bool)inlineMapViewControllerDidSelectMap:(id)arg1;
- (bool)isGuardianRestrictedCNContainer;
- (bool)isLayoutDynamic;
- (bool)isLoading;
- (id)location;
- (id)mapItem;
- (int)mapTypeForETAProvider:(id)arg1;
- (unsigned long long)options;
- (id)originalContact;
- (void)performAction:(id)arg1 options:(id)arg2 completion:(id /* block */)arg3;
- (id)photoVC;
- (void)placeActionManager:(id)arg1 didSelectAddOrEditNoteWithEnvironment:(id)arg2 selectedAdd:(bool)arg3;
- (void)placeActionManager:(id)arg1 didSelectAddOrRemoveFromLibraryWithEnvironment:(id)arg2 selectedAdd:(bool)arg3;
- (void)placeActionManager:(id)arg1 didSelectAddToContactsUsingEnvironment:(id)arg2;
- (void)placeActionManager:(id)arg1 didSelectAddToExistingContactWithEnvironment:(id)arg2;
- (void)placeActionManager:(id)arg1 didSelectAddToGuidesWithEnvironment:(id)arg2;
- (void)placeActionManager:(id)arg1 didSelectDirectionsWithEnvironment:(id)arg2;
- (void)placeActionManager:(id)arg1 didSelectShareFromView:(id)arg2;
- (void)placeActionManager:(id)arg1 didSelectShareWithEnvironment:(id)arg2;
- (void)placeCardActionControllerDidSelectAddPhoto:(id)arg1 presentingViewController:(id)arg2 sourceView:(id)arg3;
- (void)placeCardActionControllerDidSelectReportAProblem:(id)arg1 fromView:(id)arg2 isQuickAction:(bool)arg3;
- (void)placeCardActionControllerDidSelectViewAllPhotos:(id)arg1 presentingViewController:(id)arg2;
- (double)placeCardHeaderViewControllerTrailingConstantForTitle:(id)arg1;
- (void)placeCardPhotosController:(id)arg1 didSelectViewPhotoWithID:(id)arg2 presentingViewController:(id)arg3;
- (void)placeCardWillCloseFromClientType:(unsigned long long)arg1;
- (void)placeHeaderButtonsViewController:(id)arg1 didSelectPrimaryType:(unsigned long long)arg2 withView:(id)arg3;
- (bool)placeInBookmarks;
- (bool)placeInCollections;
- (bool)placeInShortcuts;
- (id)placeItem;
- (id)placeViewControllerDelegate;
- (id /* block */)placeViewFeedbackAppLaunchHandler;
- (id)placeViewFeedbackDelegate;
- (id)poisInlineMapVC;
- (long long)preferredStatusBarStyle;
- (void)removeAdditionalViewController:(id)arg1;
- (void)setAllowTransitLineSelection:(bool)arg1;
- (void)setAutomobileOptions:(id)arg1;
- (void)setContactsNavigationController:(id)arg1;
- (void)setContentAlpha:(double)arg1;
- (void)setContentVisibility:(long long)arg1;
- (void)setCyclingOptions:(id)arg1;
- (void)setDisableReportAProblem:(bool)arg1;
- (void)setHasCheckedDistanceAvailability:(bool)arg1;
- (void)setHeaderAlternatePrimaryButtonController:(id)arg1;
- (void)setHeaderHeight:(double)arg1;
- (void)setHeaderSecondaryButtonController:(id)arg1;
- (void)setHeaderTitle:(id)arg1;
- (void)setHideDirectionsButtons:(bool)arg1;
- (void)setHideInlineMap:(bool)arg1;
- (void)setLocation:(id)arg1;
- (void)setMapItem:(id)arg1;
- (void)setMapItem:(id)arg1 contact:(id)arg2 updateOriginalContact:(bool)arg3;
- (void)setOptions:(unsigned long long)arg1;
- (void)setOriginalContact:(id)arg1;
- (void)setPlaceInBookmarks:(bool)arg1;
- (void)setPlaceInCollections:(bool)arg1;
- (void)setPlaceInShortcuts:(bool)arg1;
- (void)setPlaceItem:(id)arg1;
- (void)setPlaceItem:(id)arg1 updateOriginalContact:(bool)arg2;
- (void)setPlaceViewControllerDelegate:(id)arg1;
- (void)setPlaceViewFeedbackAppLaunchHandler:(id /* block */)arg1;
- (void)setPlaceViewFeedbackDelegate:(id)arg1;
- (void)setShowAddToPersonalGuides:(bool)arg1;
- (void)setShowContactActions:(bool)arg1;
- (void)setShowEditButton:(bool)arg1;
- (void)setShowInlineMapInHeader:(bool)arg1;
- (void)setShowNearbyApps:(bool)arg1;
- (void)setShowReportAProblem:(bool)arg1;
- (void)setShowShareActionsButton:(bool)arg1;
- (void)setShowSimulateLocation:(bool)arg1;
- (void)setShowTitleBar:(bool)arg1;
- (void)setTransitOptions:(id)arg1;
- (void)setUseCompactPhotosView:(bool)arg1;
- (void)setViewDidAppearBlocks:(id)arg1;
- (void)setWalkingOptions:(id)arg1;
- (bool)shouldDisplayBrowseCategoryVC;
- (bool)showAddToPersonalGuides;
- (bool)showContactActions;
- (void)showContentIfLoaded;
- (bool)showEditButton;
- (bool)showInlineMapInHeader;
- (bool)showNearbyApps;
- (bool)showReportAProblem;
- (bool)showShareActionsButton;
- (bool)showSimulateLocation;
- (bool)showTitleBar;
- (double)stackingViewController:(id)arg1 heightForSeparatorBetweenUpperViewController:(id)arg2 andLowerViewController:(id)arg3;
- (double)stackingViewController:(id)arg1 minimumVisibleSurfacePercentForAnalyticsSelection:(id)arg2;
- (id)stackingViewController:(id)arg1 scrollViewForViewController:(id)arg2;
- (bool)stackingViewController:(id)arg1 showsTitleForViewController:(id)arg2;
- (void)stackingViewControllerDidLayoutViewControllers:(id)arg1;
- (id)transitOptions;
- (void)updateCollectionViewsAnimated:(bool)arg1;
- (void)updateContentAlpha;
- (void)updateHeaderTitle;
- (bool)useCompactPhotosView;
- (void)viewDidAppear:(bool)arg1;
- (id)viewDidAppearBlocks;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (id)walkingOptions;

@end