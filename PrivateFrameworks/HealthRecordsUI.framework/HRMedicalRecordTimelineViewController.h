/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
 */

@interface HRMedicalRecordTimelineViewController : UICollectionViewController <HKClinicalIngestionStateListener, HKCloudSyncObserverDelegate, HKInteractiveChartViewObserver, HKSidebarSelectionIdentifierProviding> {
    void $__lazy_storage_$_accountStateProvider;
    void $__lazy_storage_$_clinicalAccountStore;
    void $__lazy_storage_$_contentStatusView;
    void $__lazy_storage_$_dataProvider;
    void $__lazy_storage_$_dataSource;
    void $__lazy_storage_$_dataSourceProvider;
    void account;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  accountId;
    void accountStateCancellable;
    void additionalPredicatesPerSampleType;
    void category;
    void chartLoaded;
    void cloudSyncActive;
    void cloudSyncObserver;
    void conceptIdentifier;
    void displayItemProvider;
    void displayState;
    void gradientColorProvider;
    void gradientSubscriber;
    void gradientView;
    void indexManagerState;
    void indexManagerStateCancellable;
    void ingestionState;
    void ingestionStateCancellable;
    void isDisplayingRemovedRecords;
    void observer;
    void ontologyConcept;
    void overrideTitle;
    void preloadedRemovedRecords;
    void profile;
    void queryReturnedCancellable;
    void showExportButton;
    void showGradientBackgroundForAllRecordsRoom;
    void userDomainConcept;
}

@property (nonatomic, readonly) NSString *sidebarSelectionIdentifier;

- (void).cxx_destruct;
- (void)clinicalIngestionStore:(id)arg1 ingestionStateDidUpdateTo:(long long)arg2;
- (void)cloudSyncObserver:(id)arg1 syncDidStartWithProgress:(id)arg2;
- (void)cloudSyncObserver:(id)arg1 syncFailedWithError:(id)arg2;
- (void)cloudSyncObserverStatusUpdated:(id)arg1 status:(id)arg2;
- (void)cloudSyncObserverSyncCompleted:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 contextMenuConfigurationForItemAtIndexPath:(id)arg2 point:(struct CGPoint { double x1; double x2; })arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (bool)collectionView:(id)arg1 selectionFollowsFocusForItemAtIndexPath:(id)arg2;
- (bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)configureDisplayTypes:(id)arg1 timeScope:(long long)arg2 stackOffset:(long long)arg3;
- (void)dealloc;
- (void)didTapExportPDFButton;
- (void)didUpdateSeriesWithNewValueRange:(id)arg1;
- (void)didUpdateVisibleValueRange:(id)arg1 changeContext:(long long)arg2;
- (void)fetchMoreData;
- (id)initWithCoder:(id)arg1;
- (id)initWithCollectionViewLayout:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithProfile:(id)arg1 accountId:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)reloadData;
- (void)reloadDataWithDelay:(double)arg1;
- (void)reloadDataWithNotification:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)sidebarSelectionIdentifier;
- (void)tapToRadarWithSender:(id)arg1;
- (void)updateSystemStatusView;
- (void)viewDidLoad;
- (void)viewIsAppearing:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end
