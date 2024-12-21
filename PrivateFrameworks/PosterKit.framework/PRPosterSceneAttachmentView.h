/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PosterKit.framework/PosterKit
 */

@interface PRPosterSceneAttachmentView : PRRenderingView {
    PUIPosterSceneAttachment * _attachment;
    CALayerHost * _layerHost;
}

@property (nonatomic, retain) PUIPosterSceneAttachment *attachment;

- (void).cxx_destruct;
- (void)_teardownContentLayer;
- (id)attachment;
- (id)contentLayer;
- (void)invalidate;
- (bool)isEmpty;
- (id)layerHost;
- (void)layoutSubviews;
- (void)setAttachment:(id)arg1;

@end