/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

@interface PKRecognitionDataCollectionViewController : UIViewController <PKHandwritingDataCollecting, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {
    UICollectionView * _collectionView;
    NSLayoutConstraint * _collectionViewHeightConstraint;
    UILabel * _descriptionLabel;
    NSArray * _drawingImages;
    NSArray * _drawings;
    NSDictionary * _metadata;
    UIScrollView * _scrollView;
}

@property (nonatomic, retain) UICollectionView *collectionView;
@property (nonatomic, retain) NSLayoutConstraint *collectionViewHeightConstraint;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UILabel *descriptionLabel;
@property (nonatomic, retain) NSArray *drawingImages;
@property (nonatomic, retain) NSArray *drawings;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSDictionary *metadata;
@property (nonatomic, retain) UIScrollView *scrollView;
@property (readonly) Class superclass;
@property (readonly) UIViewController *viewController;

- (void).cxx_destruct;
- (void)adjustCollectionViewHeight;
- (id)collectionView;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionViewHeightConstraint;
- (id)descriptionLabel;
- (id)drawingImages;
- (id)drawings;
- (id)initWithDrawings:(id)arg1 metadata:(id)arg2;
- (id)metadata;
- (id)saveDataForDrawings:(id)arg1 baseURL:(id)arg2 shouldSaveRecognitionData:(bool)arg3;
- (id)scrollView;
- (void)setCollectionView:(id)arg1;
- (void)setCollectionViewHeightConstraint:(id)arg1;
- (void)setDescriptionLabel:(id)arg1;
- (void)setDrawingImages:(id)arg1;
- (void)setDrawings:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setScrollView:(id)arg1;
- (void)submitFeedback;
- (id)synchronousImageForDrawing:(id)arg1;
- (id)viewController;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
