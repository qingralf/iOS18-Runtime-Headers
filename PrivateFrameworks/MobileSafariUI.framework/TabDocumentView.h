/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileSafariUI.framework/MobileSafariUI
 */

@interface TabDocumentView : UIView {
    <TabDocumentViewGeometryProviding> * _geometryProvider;
    UIView * _interactionHint;
    UIVisualEffectView * _interactionHintBackground;
    NSLayoutConstraint * _interactionHintTopAnchor;
    long long  _interactiveGeometryUpdateCount;
    UIView * _readerTransitionContainerView;
    WKWebView * _readerWebView;
    bool  _showingReader;
    WKWebView * _webView;
}

@property (getter=isAnimatingInteractiveGeometryChanges, nonatomic, readonly) bool animatingInteractiveGeometryChanges;
@property (nonatomic, readonly) struct { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct UIEdgeInsets { double x_2_1_1; double x_2_1_2; double x_2_1_3; double x_2_1_4; } x2; struct UIEdgeInsets { double x_3_1_1; double x_3_1_2; double x_3_1_3; double x_3_1_4; } x3; struct SFScrollIndicatorInsets { struct UIEdgeInsets { double x_1_2_1; double x_1_2_2; double x_1_2_3; double x_1_2_4; } x_4_1_1; struct UIEdgeInsets { double x_2_2_1; double x_2_2_2; double x_2_2_3; double x_2_2_4; } x_4_1_2; } x4; struct CGSize { double x_5_1_1; double x_5_1_2; } x5; struct CGSize { double x_6_1_1; double x_6_1_2; } x6; struct CGSize { double x_7_1_1; double x_7_1_2; } x7; struct UIEdgeInsets { double x_8_1_1; double x_8_1_2; double x_8_1_3; double x_8_1_4; } x8; bool x9; double x10; } currentGeometry;
@property (nonatomic) <TabDocumentViewGeometryProviding> *geometryProvider;
@property (nonatomic, retain) WKWebView *readerWebView;
@property (nonatomic, readonly) double scrollDistance;
@property (getter=isShowingReader, nonatomic, readonly) bool showingReader;
@property (nonatomic) bool showsInteractionHint;
@property (nonatomic, retain) WKWebView *webView;

- (void).cxx_destruct;
- (void)_performReaderTransitionWithCompletion:(id /* block */)arg1;
- (void)applyGeometry:(struct { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct UIEdgeInsets { double x_2_1_1; double x_2_1_2; double x_2_1_3; double x_2_1_4; } x2; struct UIEdgeInsets { double x_3_1_1; double x_3_1_2; double x_3_1_3; double x_3_1_4; } x3; struct SFScrollIndicatorInsets { struct UIEdgeInsets { double x_1_2_1; double x_1_2_2; double x_1_2_3; double x_1_2_4; } x_4_1_1; struct UIEdgeInsets { double x_2_2_1; double x_2_2_2; double x_2_2_3; double x_2_2_4; } x_4_1_2; } x4; struct CGSize { double x_5_1_1; double x_5_1_2; } x5; struct CGSize { double x_6_1_1; double x_6_1_2; } x6; struct CGSize { double x_7_1_1; double x_7_1_2; } x7; struct UIEdgeInsets { double x_8_1_1; double x_8_1_2; double x_8_1_3; double x_8_1_4; } x8; bool x9; double x10; })arg1 toWebView:(id)arg2;
- (void)applyGeometryToWebView:(id)arg1;
- (void)beginInteractiveGeometryChanges;
- (struct { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct UIEdgeInsets { double x_2_1_1; double x_2_1_2; double x_2_1_3; double x_2_1_4; } x2; struct UIEdgeInsets { double x_3_1_1; double x_3_1_2; double x_3_1_3; double x_3_1_4; } x3; struct SFScrollIndicatorInsets { struct UIEdgeInsets { double x_1_2_1; double x_1_2_2; double x_1_2_3; double x_1_2_4; } x_4_1_1; struct UIEdgeInsets { double x_2_2_1; double x_2_2_2; double x_2_2_3; double x_2_2_4; } x_4_1_2; } x4; struct CGSize { double x_5_1_1; double x_5_1_2; } x5; struct CGSize { double x_6_1_1; double x_6_1_2; } x6; struct CGSize { double x_7_1_1; double x_7_1_2; } x7; struct UIEdgeInsets { double x_8_1_1; double x_8_1_2; double x_8_1_3; double x_8_1_4; } x8; bool x9; double x10; })currentGeometry;
- (void)endInteractiveGeometryChanges;
- (void)ensureContentOffsetWithinContentInsets;
- (id)geometryProvider;
- (bool)isAnimatingInteractiveGeometryChanges;
- (bool)isShowingReader;
- (void)layoutSubviews;
- (id)readerWebView;
- (double)scrollDistance;
- (void)setGeometryProvider:(id)arg1;
- (void)setInteractionHintPresented:(bool)arg1 animated:(bool)arg2;
- (void)setReaderWebView:(id)arg1;
- (void)setShowingReader:(bool)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)setShowsInteractionHint:(bool)arg1;
- (void)setWebView:(id)arg1;
- (void)setWebViewGeometryNeedsUpdate;
- (bool)showsInteractionHint;
- (id)webView;

@end
