/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXGMetalRecordingFrameStartEventSerializable : NSObject <PXGTungstenRecordingSerializable> {
    void _renderOrigin;
    double  _screenScale;
    struct CGSize { 
        double width; 
        double height; 
    }  _viewSize;
}

@property (nonatomic) void renderOrigin;
@property (nonatomic) double screenScale;
@property (nonatomic) struct CGSize { double x1; double x2; } viewSize;

- (id)createSerializableObject;
- (id)initWithSerializableObject:(id)arg1;
- (void)renderOrigin;
- (double)screenScale;
- (void)setRenderOrigin;
- (void)setScreenScale:(double)arg1;
- (void)setViewSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })viewSize;

@end