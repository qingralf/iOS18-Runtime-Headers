/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPassFrontFaceView : PKPassFaceView {
    PKBarcodeStickerView * _barcodeView;
    long long  _bottomRightItem;
    UIView * _bottomRightItemView;
    PKLinkedAppIconView * _linkedApp;
    UILabel * _logoLabel;
    bool  _relevancyActive;
    bool  _showsBarcodeView;
    bool  _showsLinkedApp;
    bool  _showsLiveBalance;
}

@property (nonatomic, readonly) PKBarcodeStickerView *barcodeView;
@property (nonatomic) long long bottomRightItem;
@property (nonatomic, readonly) PKLinkedAppIconView *linkedApp;
@property (getter=isRelevancyActive, nonatomic) bool relevancyActive;
@property (nonatomic) bool showsBarcodeView;
@property (nonatomic) bool showsLinkedApp;
@property (nonatomic) bool showsLiveBalance;

- (void).cxx_destruct;
- (void)_positionBarcodeView;
- (id)_rebucketAuxiliaryFields:(id)arg1;
- (id)_relevantBuckets;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })barcodeFrame;
- (id)barcodeView;
- (long long)bottomRightItem;
- (struct CGSize { double x1; double x2; })contentSize;
- (void)createBodyContentViews;
- (id)createContactlessLogoView;
- (id)createExpiredLabel;
- (void)createHeaderContentViews;
- (id)headerTemplate;
- (id)initWithStyle:(long long)arg1;
- (void)insertContentView:(id)arg1 ofType:(long long)arg2;
- (bool)isRelevancyActive;
- (void)layoutSubviews;
- (id)linkedApp;
- (id)passFaceTemplate;
- (void)setBottomRightItem:(long long)arg1;
- (void)setRelevancyActive:(bool)arg1;
- (void)setShowsBarcodeView:(bool)arg1;
- (void)setShowsBarcodeView:(bool)arg1 animated:(bool)arg2;
- (void)setShowsLinkedApp:(bool)arg1;
- (void)setShowsLiveBalance:(bool)arg1;
- (bool)showsBarcodeView;
- (bool)showsLinkedApp;
- (bool)showsLiveBalance;
- (id)templateForHeaderBucket;
- (id)templateForLayoutMode:(long long)arg1;
- (void)updateValidity;

@end
