/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFAutoFillInternalFeedbackCollectionViewController : UICollectionViewController <UICollectionViewDataSource, UICollectionViewDelegate, _SFAutoFillInternalFeedbackDetailQuestionTextFieldCellDelegate, _SFButtonCollectionViewListCellDelegate> {
    WBSAutoFillInternalFeedbackController * _feedbackController;
    id /* block */  _reportHandler;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) WBSAutoFillInternalFeedbackDiagnosticsData *diagnosticsData;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) id /* block */ reportHandler;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_createCollectionViewLayout;
- (void)_dismiss:(id)arg1;
- (void)_updateContinueInTapToRadarButton;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)collectionViewListCellButtonPressed:(id)arg1;
- (id)diagnosticsData;
- (id)initWithDiagnosticsData:(id)arg1 reportHandler:(id /* block */)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id /* block */)reportHandler;
- (void)textFieldCellTextDidChange:(id)arg1;
- (void)viewDidLoad;

@end
