/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
 */

@interface FigPointCloudDataCaptureConnectionConfiguration : FigVideoCaptureConnectionConfiguration {
    bool  _pointCloudOutputDisabled;
    int  _projectorMode;
    bool  _supplementalPointCloudData;
}

@property (nonatomic) bool pointCloudOutputDisabled;
@property (nonatomic) int projectorMode;
@property (nonatomic) bool supplementalPointCloudData;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyXPCEncoding;
- (id)description;
- (id)initWithXPCEncoding:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)pointCloudOutputDisabled;
- (int)projectorMode;
- (void)setPointCloudOutputDisabled:(bool)arg1;
- (void)setProjectorMode:(int)arg1;
- (void)setSupplementalPointCloudData:(bool)arg1;
- (bool)supplementalPointCloudData;

@end