/* Generated by RuntimeBrowser.
 */

@protocol NUAuxiliaryImageProperties <NSObject, NSCopying>

@required

- (NSDictionary *)auxiliaryCoreGraphicsInfoDictionary:(out id*)arg1;
- (struct CGImageMetadata { }*)auxiliaryDataInfoMetadata;
- (<NUAuxiliaryImage> *)auxiliaryImage:(out id*)arg1;
- (NSString *)auxiliaryImageTypeCGIdentifier;
- (<NUAuxiliaryImage> *)auxiliaryImageWithSourceOptions:(NSDictionary *)arg1 subsampleFactor:(long long*)arg2 error:(out id*)arg3;
- (NUColorSpace *)colorSpace;
- (struct CGImageMetadata { }*)compatibilityMetadata;
- (AVCameraCalibrationData *)depthCameraCalibrationData;
- (NUPixelFormat *)pixelFormat;
- (struct { long long x1; long long x2; })size;

@end