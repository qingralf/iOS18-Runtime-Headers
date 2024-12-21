/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKVideoView : WKCompositingView {
    WebAVPlayerLayerView * _playerView;
}

@property (nonatomic, readonly) CALayer *playerLayer;

+ (Class)layerClass;

- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 playerView:(id)arg2;
- (void)layoutSubviews;
- (id)playerLayer;

@end