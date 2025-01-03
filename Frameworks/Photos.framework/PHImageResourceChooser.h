/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHImageResourceChooser : NSObject {
    bool  _allowChoosingNonLocalVideoKeyFrameResource;
    bool  _allowHints;
    <PHResourceChooserAsset> * _asset;
    PHImageRequestBehaviorSpec * _behaviorSpec;
    id  _context;
    struct CGSize { 
        double width; 
        double height; 
    }  _desiredSize;
    bool  _didCheckForLocalVideoKeyFrame;
    PHResourceChooserListResourceInfo * _fallbackInfo;
    double  _fallbackRequestedScaleIfPreferredResourceNotLocallyAvailable;
    bool  _hasLocalVideoKeyFrameInNonHintResources;
    bool  _isCloudSharedMode;
    PHResourceChooserList * _list;
    NSString * _loggingPrefix;
    bool  _needsReset;
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
    double  _requiredScale;
    id /* block */  _resourceHandler;
}

@property (nonatomic) bool allowChoosingNonLocalVideoKeyFrameResource;
@property (nonatomic) bool allowHints;
@property (nonatomic, retain) PHImageRequestBehaviorSpec *behaviorSpec;
@property (nonatomic) id context;
@property (nonatomic) struct CGSize { double x1; double x2; } desiredSize;
@property (nonatomic) double fallbackRequestedScaleIfPreferredResourceNotLocallyAvailable;
@property (nonatomic) bool isCloudSharedMode;
@property (nonatomic, retain) NSString *loggingPrefix;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } normalizedCropRect;
@property (nonatomic, copy) id /* block */ resourceHandler;

+ (id)_bagFromInfo:(id)arg1 asset:(id)arg2 behaviorSpec:(id)arg3 requiredScale:(double)arg4 bagVendor:(id)arg5 assetIDContainerVendor:(id)arg6;
+ (unsigned long long)_chooserSourceOptionsFromBehaviorSpec:(id)arg1 allowHints:(bool)arg2;
+ (id)_resourceVersionsFromImageRequestVersion:(long long)arg1 assetHasAdjustments:(bool)arg2;
+ (void)initialize;

- (void).cxx_destruct;
- (Class)_policyHandlerClassForCurrentPolicy;
- (id)_requestInfo;
- (void)_reset;
- (bool)_resourceInfoPassesTestForImageDerivativeOfVideo:(id)arg1;
- (void)_updateCachedGeometry;
- (bool)allowChoosingNonLocalVideoKeyFrameResource;
- (bool)allowHints;
- (id)behaviorSpec;
- (id)context;
- (struct CGSize { double x1; double x2; })desiredSize;
- (double)fallbackRequestedScaleIfPreferredResourceNotLocallyAvailable;
- (id)initWithAsset:(id)arg1 resourceHandler:(id /* block */)arg2;
- (id)initWithChooserList:(id)arg1 asset:(id)arg2 resourceHandler:(id /* block */)arg3;
- (bool)isCloudSharedMode;
- (id)loggingPrefix;
- (void)moveFirst;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })normalizedCropRect;
- (void)presentNextQualifyingResource;
- (void)reset;
- (id /* block */)resourceHandler;
- (void)setAllowChoosingNonLocalVideoKeyFrameResource:(bool)arg1;
- (void)setAllowHints:(bool)arg1;
- (void)setBehaviorSpec:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setDesiredSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setFallbackRequestedScaleIfPreferredResourceNotLocallyAvailable:(double)arg1;
- (void)setIsCloudSharedMode:(bool)arg1;
- (void)setLoggingPrefix:(id)arg1;
- (void)setNormalizedCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setResourceHandler:(id /* block */)arg1;

@end
