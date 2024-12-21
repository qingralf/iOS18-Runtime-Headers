/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Matter.framework/Matter
 */

@interface MTRCameraAVStreamManagementClusterSnapshotParamsStruct : NSObject <NSCopying> {
    NSNumber * _imageCodec;
    NSNumber * _maxFrameRate;
    MTRCameraAVStreamManagementClusterVideoResolutionStruct * _resolution;
}

@property (nonatomic, copy) NSNumber *imageCodec;
@property (nonatomic, copy) NSNumber *maxFrameRate;
@property (nonatomic, copy) MTRCameraAVStreamManagementClusterVideoResolutionStruct *resolution;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)imageCodec;
- (id)init;
- (id)maxFrameRate;
- (id)resolution;
- (void)setImageCodec:(id)arg1;
- (void)setMaxFrameRate:(id)arg1;
- (void)setResolution:(id)arg1;

@end