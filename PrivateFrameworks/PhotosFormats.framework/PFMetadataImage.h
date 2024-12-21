/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
 */

@interface PFMetadataImage : PFMetadata {
    unsigned long long  _cachedImageSourcePrimaryImageIndex;
    NSDictionary * _cachedImageSourceProperties;
    NSString * _cameraSerialNumber;
    struct CGColorSpace { } * _cgColorSpace;
    struct CGImageMetadata { } * _cgImageMetadata;
    NSDictionary * _cgImageProperties;
    NSNumber * _exposureTime;
    NSNumber * _fNumber;
    NSData * _imageData;
    struct CGImageSource { } * _imageSource;
    NSNumber * _isSpatialMediaValue;
    NSNumber * _iso;
    NSNumber * _whiteBalance;
}

@property (nonatomic, retain) NSString *cameraSerialNumber;
@property (nonatomic, retain) NSDictionary *cgImageProperties;
@property (nonatomic, retain) NSNumber *exposureTime;
@property (nonatomic, retain) NSNumber *fNumber;
@property (nonatomic, retain) NSData *imageData;
@property (nonatomic) struct CGImageSource { }*imageSource;
@property (nonatomic, retain) NSNumber *iso;
@property (nonatomic, retain) NSNumber *whiteBalance;

+ (id)defaultOptionsForCGImageSource;
+ (id)stringByRemovingImageIoDotSuffixFromString:(id)arg1;

- (void).cxx_destruct;
- (id)GIFDelayTime;
- (id)HEICSDelayTime;
- (bool)_anyImageHasProcessingFlag:(unsigned long long)arg1;
- (void)_computeCameraSerialNumber;
- (void)_computeExposureTime;
- (void)_computeFNumberValue;
- (void)_computeISOSetting;
- (void)_computeWhiteBalanceValue;
- (bool)_configureWithImageData:(id)arg1 cacheImageSource:(bool)arg2 cacheImageData:(bool)arg3;
- (bool)_configureWithImageProperties:(id)arg1;
- (bool)_configureWithImageSource:(struct CGImageSource { }*)arg1 cacheImageSource:(bool)arg2;
- (bool)_configureWithImageURL:(id)arg1 cacheImageSource:(bool)arg2 cacheImageData:(bool)arg3;
- (bool)_customRenderedIsHDR;
- (id)_formatValue:(id)arg1 withPrecision:(unsigned long long)arg2;
- (bool)_hasFFCDimensions;
- (bool)_hasScreenshotDimensions;
- (id)_imageSourceProperties;
- (bool)_isSpatialStereoGroup:(id)arg1 inImageSource:(struct CGImageSource { }*)arg2;
- (id)_makeDateTimeProperties;
- (id)_makeGPSProperties;
- (id)_makeGeometryProperties;
- (id)altitudeRef;
- (id)artworkContentDescription;
- (id)brightness;
- (id)burstUuid;
- (id)cameraMake;
- (id)cameraModel;
- (id)cameraSerialNumber;
- (long long)cameraUsedForCapture;
- (id)captionAbstract;
- (struct CGColorSpace { }*)cgColorSpace;
- (struct CGImageMetadata { }*)cgImageMetadata;
- (id)cgImageProperties;
- (id)ciffDictionary;
- (bool)configureWithMetadataPlist:(id)arg1;
- (bool)containsCustomStylesMetadataBlob;
- (bool)containsSpatialCameraHEIFMetadata;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)credit;
- (long long)customRendered;
- (void)dealloc;
- (id)deferredPhotoProcessingIdentifier;
- (id)digitalZoomRatio;
- (void)enumerateRawThumbnailInfoWithBlock:(id /* block */)arg1;
- (id)exifAuxDictionary;
- (id)exifDictionary;
- (id)exposureBias;
- (id)exposureTime;
- (id)fNumber;
- (id)firmware;
- (void)fixupGPSWithDate:(id)arg1 time:(id)arg2;
- (id)flashCompensation;
- (bool)flashFired;
- (id)flashValue;
- (id)focalLength;
- (id)focalLengthIn35mm;
- (id)focusDistance;
- (id)focusMode;
- (id)focusPoints;
- (id)generativeAIImageType;
- (id)gifDictionary;
- (id)gpsDictionary;
- (id)gpsHPositioningError;
- (id)groupingUuid;
- (bool)hasDepthDataAndIsNotRenderedSDOF;
- (bool)hasHDRGainMap;
- (bool)hasISOGainMap;
- (bool)hasSmartStyle;
- (id)hdrGain;
- (id)hdrGainMap;
- (id)hdrGainMapPercentageValue;
- (id)imageCaptureRequestIdentifier;
- (id)imageData;
- (id)imageDirection;
- (id)imageDirectionRef;
- (struct CGImageSource { }*)imageSource;
- (id)imageSourceProxyData;
- (id)initWithEncodedImagePropertyData:(id)arg1 contentType:(id)arg2 timeZoneLookup:(id)arg3;
- (id)initWithImageData:(id)arg1 contentType:(id)arg2 options:(unsigned short)arg3 timeZoneLookup:(id)arg4 cacheImageSource:(bool)arg5 cacheImageData:(bool)arg6;
- (id)initWithImageProperties:(id)arg1 contentType:(id)arg2 options:(unsigned short)arg3 timeZoneLookup:(id)arg4;
- (id)initWithImageSource:(struct CGImageSource { }*)arg1 contentType:(id)arg2 options:(unsigned short)arg3 timeZoneLookup:(id)arg4 cacheImageSource:(bool)arg5;
- (id)initWithImageSourceProxyData:(id)arg1 contentType:(id)arg2 timeZoneLookup:(id)arg3;
- (id)initWithImageSourceProxyOrEncodedImagePropertyData:(id)arg1 contentType:(id)arg2 timeZoneLookup:(id)arg3;
- (id)initWithImageURL:(id)arg1 contentType:(id)arg2 options:(unsigned short)arg3 timeZoneLookup:(id)arg4 cacheImageSource:(bool)arg5 cacheImageData:(bool)arg6;
- (id)iptcDictionary;
- (bool)isAlchemist;
- (bool)isDeferredPhotoProxy;
- (bool)isDeferredPhotoProxyExpectingDepth;
- (bool)isEqual:(id)arg1;
- (bool)isFrontFacingCamera;
- (bool)isHDR;
- (bool)isHDR_ExtendedRange;
- (bool)isHDR_TS22028_5;
- (bool)isImage;
- (bool)isPanorama;
- (bool)isPhotoBooth;
- (bool)isPortrait;
- (bool)isProRAW;
- (bool)isSDOF;
- (bool)isScreenshot;
- (bool)isSpatialMedia;
- (bool)isSpatialOverCapture;
- (bool)isThreeImageStereoHEIC;
- (id)iso;
- (id)keywords;
- (id)lensMake;
- (id)lensMaximumMM;
- (id)lensMinimumMM;
- (id)lensModel;
- (id)lightSource;
- (id)livePhotoPairingIdentifier;
- (id)makerAppleDictionary;
- (id)makerCanonDictionary;
- (id)makerNikonDictionary;
- (id)metadataForImagePropertiesAtIndex:(unsigned long long)arg1;
- (id)meteringMode;
- (id)nrfSrlStatus;
- (id)originatingAssetIdentifier;
- (id)ownerName;
- (unsigned long long)photoCaptureFlags;
- (unsigned long long)photoProcessingFlags;
- (id)photoProcessingIdentifier;
- (unsigned long long)photosAppFeatureFlags;
- (id)playbackVariation;
- (id)plistForEncoding;
- (id)portraitInLandscapeCamera;
- (id)profileName;
- (id)ptpMediaMetadata;
- (id)rawDictionary;
- (id)renderOriginatingAssetIdentifier;
- (id)semanticStylePreset;
- (id)semanticStyleRenderingVersion;
- (id)semanticStyleToneBias;
- (id)semanticStyleWarmthBias;
- (void)setCameraSerialNumber:(id)arg1;
- (void)setCgImageMetadata:(struct CGImageMetadata { }*)arg1;
- (void)setCgImageProperties:(id)arg1;
- (void)setExposureTime:(id)arg1;
- (void)setFNumber:(id)arg1;
- (void)setImageData:(id)arg1;
- (void)setImageSource:(struct CGImageSource { }*)arg1;
- (void)setImageSourceProperties:(id)arg1;
- (void)setIso:(id)arg1;
- (void)setKeysAndValues:(id)arg1 inDictionary:(id)arg2;
- (void)setWhiteBalance:(id)arg1;
- (short)smartStyleCast;
- (id)smartStyleColorBias;
- (id)smartStyleExpectingReversibility;
- (id)smartStyleIntensity;
- (id)smartStyleIsReversible;
- (id)smartStyleRenderingVersion;
- (id)smartStyleToneBias;
- (id)software;
- (bool)sourceIsImageSourceProxy;
- (id)spatialOverCaptureIdentifier;
- (id)speedRef;
- (id)syndicationProperties;
- (id)tiffDictionary;
- (id)title;
- (id)userComment;
- (id)whiteBalance;
- (id)whiteBalanceIndex;

@end