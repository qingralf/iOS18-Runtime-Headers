/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKPhotoGridTapbackView : UIView <CKBalloonViewDelegate, CKGradientReferenceView, PXGDecorationView> {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _clippingRect;
    unsigned long long  _decorationOptions;
    bool  _needsAnimation;
    CKAggregateAcknowledgmentBalloonView * _tapbackBalloonView;
    PXAssetReference * _userData;
}

@property (nonatomic, readonly) bool canUnloadWhenInvisible; /* unknown property attribute: ? */
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } clippingRect;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) unsigned long long decorationOptions;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isFloating; /* unknown property attribute: ? */
@property (nonatomic) bool needsAnimation;
@property (nonatomic, readonly) bool shouldReuseWhenInvisible; /* unknown property attribute: ? */
@property (readonly) Class superclass;
@property (nonatomic, retain) CKAggregateAcknowledgmentBalloonView *tapbackBalloonView;
@property (nonatomic, copy) PXAssetReference *userData;

- (void).cxx_destruct;
- (id)_imAggregateAcknowledgmentChatItem;
- (void)_setupBalloonView;
- (void)_tearDownBalloonView;
- (id)asset;
- (void)balloonView:(id)arg1 userDidDragOutsideBalloonWithPoint:(struct CGPoint { double x1; double x2; })arg2;
- (Class)balloonViewClass;
- (void)balloonViewDoubleTapped:(id)arg1;
- (void)balloonViewLongTouched:(id)arg1;
- (void)balloonViewSelected:(id)arg1 withModifierFlags:(long long)arg2 selectedText:(id)arg3;
- (void)balloonViewShouldCopyToPasteboard:(id)arg1;
- (void)balloonViewShowInlineReply:(id)arg1;
- (void)balloonViewTapped:(id)arg1 withModifierFlags:(long long)arg2 selectedText:(id)arg3;
- (void)balloonViewTextViewDidChangeSelection:(id)arg1 selectedText:(id)arg2 textView:(id)arg3;
- (void)becomeReusable;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })clippingRect;
- (unsigned long long)decorationOptions;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })gradientFrame;
- (id)gradientReferenceView;
- (void)interactionStartedFromPreviewItemControllerInBalloonView:(id)arg1;
- (void)interactionStoppedFromPreviewItemControllerInBalloonView:(id)arg1;
- (bool)invertTail;
- (bool)isDisplayedInGridView;
- (bool)isFromMe;
- (void)layoutSubviews;
- (void)liveBalloonTouched:(id)arg1;
- (bool)needsAnimation;
- (void)performInsertion:(id /* block */)arg1;
- (void)prepareForReuse;
- (void)setClippingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDecorationOptions:(unsigned long long)arg1;
- (void)setNeedsAnimation:(bool)arg1;
- (void)setTapbackBalloonView:(id)arg1;
- (void)setUserData:(id)arg1;
- (bool)shouldAnimate;
- (id)tapbackBalloonView;
- (id)tapbackUserData;
- (id)userData;

@end