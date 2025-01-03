/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Visage.framework/Visage
 */

@interface VGHRTFFaceFrameData : NSObject {
    IOSurface * _depthImage;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[3]; 
    }  _depthIntrinsics;
    NSArray * _landmarks;
    IOSurface * _rgbImage;
}

@property (nonatomic, retain) IOSurface *depthImage;
@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; } depthIntrinsics;
@property (nonatomic, retain) NSArray *landmarks;
@property (nonatomic, retain) IOSurface *rgbImage;

- (void).cxx_destruct;
- (id)depthImage;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })depthIntrinsics;
- (id)initEmpty;
- (id)landmarks;
- (id)rgbImage;
- (void)setDepthImage:(id)arg1;
- (void)setDepthIntrinsics:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg1;
- (void)setLandmarks:(id)arg1;
- (void)setRgbImage:(id)arg1;

@end
