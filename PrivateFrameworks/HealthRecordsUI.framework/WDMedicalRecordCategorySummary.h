/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
 */

@interface WDMedicalRecordCategorySummary : NSObject <WDMedicalRecordSummarizable> {
    NSMutableArray * _allDisplayItems;
    NSMutableOrderedSet * _allRecords;
    NSMutableOrderedSet * _allStandaloneRecords;
    long long  _categoryType;
    <WDMedicalRecordSummaryDelegate> * _delegate;
    bool  _dirty;
    bool  _displayingTruncatedRecords;
    NSMutableOrderedSet * _panels;
    NSMutableDictionary * _panelsToRecords;
    HRProfile * _profile;
    NSObject<OS_dispatch_queue> * _resourceQueue;
    bool  _showCategoryTitle;
    NSObject<OS_dispatch_queue> * _summaryQueue;
    NSMutableArray * _truncatedDisplayItems;
    long long  _truncatedMedicalRecordCount;
    unsigned long long  _truncationDisplayItemOffset;
    NSMutableArray * _visibleDisplayItems;
}

@property (nonatomic, retain) NSMutableArray *allDisplayItems;
@property (nonatomic, retain) NSMutableOrderedSet *allRecords;
@property (nonatomic, retain) NSMutableOrderedSet *allStandaloneRecords;
@property (nonatomic) long long categoryType;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <WDMedicalRecordSummaryDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool dirty;
@property (nonatomic, readonly, copy) NSArray *displayItems;
@property (nonatomic) bool displayingTruncatedRecords;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableOrderedSet *panels;
@property (nonatomic, retain) NSMutableDictionary *panelsToRecords;
@property (nonatomic, retain) HRProfile *profile;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *resourceQueue;
@property (nonatomic) bool showCategoryTitle;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *summaryQueue;
@property (nonatomic, readonly, copy) NSString *summarySortString;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSMutableArray *truncatedDisplayItems;
@property (nonatomic) long long truncatedMedicalRecordCount;
@property (nonatomic) unsigned long long truncationDisplayItemOffset;
@property (nonatomic, retain) NSMutableArray *visibleDisplayItems;

- (void).cxx_destruct;
- (id)_appendixItemForCount:(long long)arg1;
- (void)_displayItemsForGenericRecord:(id)arg1 previous:(id)arg2 next:(id)arg3 completion:(id /* block */)arg4;
- (id)_displayItemsForGenericRecord:(id)arg1 previous:(id)arg2 next:(id)arg3 signedClinicalDataRecord:(id)arg4;
- (void)_displayItemsForObservation:(id)arg1 previous:(id)arg2 next:(id)arg3 completion:(id /* block */)arg4;
- (void)_displayItemsForPanel:(id)arg1 completion:(id /* block */)arg2;
- (void)_displayItemsForRecord:(id)arg1 previous:(id)arg2 next:(id)arg3 completion:(id /* block */)arg4;
- (void)_displayItemsForUnknownRecord:(id)arg1 completion:(id /* block */)arg2;
- (void)_rqueue_determinStandaloneRecords;
- (void)_rqueue_recomputeIfNeeded;
- (void)_rqueue_setNeedsCompute;
- (bool)_shouldConsiderRecordTruncation:(id)arg1;
- (void)addMedicalRecord:(id)arg1;
- (long long)additionalDisplayItemCount;
- (long long)additionalRecordCount;
- (id)allDisplayItems;
- (id)allRecords;
- (id)allStandaloneRecords;
- (long long)categoryType;
- (id)delegate;
- (bool)dirty;
- (id)displayItems;
- (bool)displayingTruncatedRecords;
- (id)initWithProfile:(id)arg1 categoryType:(long long)arg2 showCategoryTitle:(bool)arg3 delegate:(id)arg4;
- (id)panels;
- (id)panelsToRecords;
- (id)profile;
- (void)recomputeIfNeeded;
- (id)resourceQueue;
- (void)setAllDisplayItems:(id)arg1;
- (void)setAllRecords:(id)arg1;
- (void)setAllStandaloneRecords:(id)arg1;
- (void)setCategoryType:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDirty:(bool)arg1;
- (void)setDisplayingTruncatedRecords:(bool)arg1;
- (void)setNeedsRecompute;
- (void)setPanels:(id)arg1;
- (void)setPanelsToRecords:(id)arg1;
- (void)setProfile:(id)arg1;
- (void)setResourceQueue:(id)arg1;
- (void)setShowCategoryTitle:(bool)arg1;
- (void)setSummaryQueue:(id)arg1;
- (void)setTruncatedDisplayItems:(id)arg1;
- (void)setTruncatedMedicalRecordCount:(long long)arg1;
- (void)setTruncationDisplayItemOffset:(unsigned long long)arg1;
- (void)setVisibleDisplayItems:(id)arg1;
- (bool)showCategoryTitle;
- (void)showTruncatedRecords;
- (id)summaryQueue;
- (id)summarySortString;
- (id)truncatedDisplayItems;
- (long long)truncatedMedicalRecordCount;
- (unsigned long long)truncationDisplayItemOffset;
- (id)visibleDisplayItems;

@end