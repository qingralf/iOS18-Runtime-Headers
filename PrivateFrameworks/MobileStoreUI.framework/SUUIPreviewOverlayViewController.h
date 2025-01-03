/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileStoreUI.framework/MobileStoreUI
 */

@interface SUUIPreviewOverlayViewController : SUUIViewController <SUUIArtworkRequestDelegate, SUUIItemStateCenterObserver, SUUILayoutCacheDelegate, UIGestureRecognizerDelegate> {
    long long  _backgroundStyle;
    IKAppDocument * _document;
    SUUILayoutCache * _layoutCache;
    SUUIViewElementLayoutContext * _layoutContext;
    SUUIHorizontalLockupView * _lockupView;
    SUPlayerStatus * _previewStatus;
    UITapGestureRecognizer * _tapGestureRecognizer;
}

@property (nonatomic) long long backgroundStyle;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_layoutCache;
- (double)_overlayWidth;
- (void)_tapAction:(id)arg1;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (long long)backgroundStyle;
- (void)dealloc;
- (void)documentDidUpdate:(id)arg1;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)initWithDocument:(id)arg1;
- (void)itemStateCenter:(id)arg1 itemStatesChanged:(id)arg2;
- (void)layoutCacheDidFinishBatch:(id)arg1;
- (void)loadView;
- (void)prepareOverlayView;
- (void)reloadOverlayView;
- (void)setBackgroundStyle:(long long)arg1;
- (void)showPreviewProgressWithStatus:(id)arg1 animated:(bool)arg2;

@end
