/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHImageRequestOptions : NSObject <NSCopying, PHMediaRequestThreadingOptions> {
    bool  _allowPlaceholder;
    id /* block */  _cachingCompleteHandler;
    bool  _cannotReturnSmallerImage;
    bool  _chooseAlchemist;
    long long  _deliveryMode;
    long long  _downloadIntent;
    long long  _downloadPriority;
    struct CGSize { 
        double width; 
        double height; 
    }  _fallbackTargetSizeIfRequestedSizeNotLocallyAvailable;
    bool  _ignoreProcessWideRepairLimits;
    bool  _includeHDRGainMap;
    bool  _includeHDRGainMapInIntermediateImage;
    long long  _loadingMode;
    bool  _networkAccessAllowed;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _normalizedCropRect;
    bool  _onlyUseFetchedAssetPropertiesDuringChoosing;
    long long  _opportunisticDegradedImagesToReturn;
    bool  _preferHDR;
    id /* block */  _progressHandler;
    int  _requestID;
    long long  _resizeMode;
    NSObject<OS_dispatch_queue> * _resultHandlerQueue;
    bool  _synchronous;
    double  _targetHDRHeadroom;
    bool  _useAsyncForFastOpportunisticResult;
    bool  _useLimitedLibraryMode;
    bool  _useLowMemoryMode;
    long long  _version;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _videoFrameTime;
}

@property (nonatomic) bool allowPlaceholder;
@property (nonatomic) bool allowSecondaryDegradedImage;
@property (nonatomic) bool allowSecondaryOpportunisticImage;
@property (nonatomic, copy) id /* block */ cachingCompleteHandler;
@property (nonatomic) bool cannotReturnSmallerImage;
@property (nonatomic) bool chooseAlchemist;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) long long deliveryMode;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long downloadIntent;
@property (nonatomic) long long downloadPriority;
@property (nonatomic) struct CGSize { double x1; double x2; } fallbackTargetSizeIfRequestedSizeNotLocallyAvailable;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool ignoreProcessWideRepairLimits;
@property (nonatomic) bool includeHDRGainMap;
@property (nonatomic) bool includeHDRGainMapInIntermediateImage;
@property (nonatomic) long long loadingMode;
@property (getter=isNetworkAccessAllowed, nonatomic) bool networkAccessAllowed;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } normalizedCropRect;
@property (nonatomic) bool onlyUseFetchedAssetPropertiesDuringChoosing;
@property (nonatomic) long long opportunisticDegradedImagesToReturn;
@property (nonatomic) bool preferHDR;
@property (nonatomic, copy) id /* block */ progressHandler;
@property (nonatomic) long long resizeMode;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *resultHandlerQueue;
@property (readonly) Class superclass;
@property (getter=isSynchronous, nonatomic) bool synchronous;
@property (nonatomic) double targetHDRHeadroom;
@property (nonatomic) bool useAsyncForFastOpportunisticResult;
@property (nonatomic) bool useLimitedLibraryMode;
@property (nonatomic) bool useLowMemoryMode;
@property (nonatomic) long long version;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } videoFrameTime;

// Image: /System/Library/Frameworks/Photos.framework/Photos

- (void).cxx_destruct;
- (bool)allowPlaceholder;
- (bool)allowSecondaryDegradedImage;
- (bool)allowSecondaryOpportunisticImage;
- (id /* block */)cachingCompleteHandler;
- (bool)cannotReturnSmallerImage;
- (bool)chooseAlchemist;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)deliveryMode;
- (id)description;
- (long long)downloadIntent;
- (long long)downloadPriority;
- (struct CGSize { double x1; double x2; })fallbackTargetSizeIfRequestedSizeNotLocallyAvailable;
- (bool)ignoreProcessWideRepairLimits;
- (bool)includeHDRGainMap;
- (bool)includeHDRGainMapInIntermediateImage;
- (id)init;
- (bool)isNetworkAccessAllowed;
- (bool)isSynchronous;
- (long long)loadingMode;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })normalizedCropRect;
- (bool)onlyUseFetchedAssetPropertiesDuringChoosing;
- (long long)opportunisticDegradedImagesToReturn;
- (bool)preferHDR;
- (id /* block */)progressHandler;
- (long long)resizeMode;
- (id)resultHandlerQueue;
- (void)setAllowPlaceholder:(bool)arg1;
- (void)setAllowSecondaryDegradedImage:(bool)arg1;
- (void)setAllowSecondaryOpportunisticImage:(bool)arg1;
- (void)setCachingCompleteHandler:(id /* block */)arg1;
- (void)setCannotReturnSmallerImage:(bool)arg1;
- (void)setChooseAlchemist:(bool)arg1;
- (void)setDeliveryMode:(long long)arg1;
- (void)setDownloadIntent:(long long)arg1;
- (void)setDownloadPriority:(long long)arg1;
- (void)setFallbackTargetSizeIfRequestedSizeNotLocallyAvailable:(struct CGSize { double x1; double x2; })arg1;
- (void)setIgnoreProcessWideRepairLimits:(bool)arg1;
- (void)setIncludeHDRGainMap:(bool)arg1;
- (void)setIncludeHDRGainMapInIntermediateImage:(bool)arg1;
- (void)setLoadingMode:(long long)arg1;
- (void)setNetworkAccessAllowed:(bool)arg1;
- (void)setNormalizedCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setOnlyUseFetchedAssetPropertiesDuringChoosing:(bool)arg1;
- (void)setOpportunisticDegradedImagesToReturn:(long long)arg1;
- (void)setPreferHDR:(bool)arg1;
- (void)setProgressHandler:(id /* block */)arg1;
- (void)setResizeMode:(long long)arg1;
- (void)setResultHandlerQueue:(id)arg1;
- (void)setSynchronous:(bool)arg1;
- (void)setTargetHDRHeadroom:(double)arg1;
- (void)setUseAsyncForFastOpportunisticResult:(bool)arg1;
- (void)setUseLimitedLibraryMode:(bool)arg1;
- (void)setUseLowMemoryMode:(bool)arg1;
- (void)setVersion:(long long)arg1;
- (void)setVideoFrameTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (double)targetHDRHeadroom;
- (bool)useAsyncForFastOpportunisticResult;
- (bool)useLimitedLibraryMode;
- (bool)useLowMemoryMode;
- (long long)version;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })videoFrameTime;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

+ (id)px_searchRequestOptions;

@end
