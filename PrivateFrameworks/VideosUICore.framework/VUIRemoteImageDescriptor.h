/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideosUICore.framework/VideosUICore
 */

@interface VUIRemoteImageDescriptor : NSObject {
    NSString * _accessibilityText;
    bool  _animatesShadowChanges;
    double  _aspectRatio;
    UIColor * _backgroundColor;
    UIColor * _borderColor;
    struct _VUICornerRadii { 
        double topLeft; 
        double topRight; 
        double bottomLeft; 
        double bottomRight; 
    }  _borderRadii;
    double  _borderWidth;
    struct CGSize { 
        double width; 
        double height; 
    }  _boundingSize;
    bool  _clearsExisting;
    struct CGSize { 
        double width; 
        double height; 
    }  _containerSize;
    bool  _continuousBorder;
    NSString * _cropCode;
    unsigned long long  _decoratorType;
    bool  _displayScaleIsPointMultiplier;
    struct CGSize { 
        double width; 
        double height; 
    }  _downloadSize;
    NSString * _extension;
    UIColor * _highlightColor;
    bool  _loadsImmediately;
    bool  _optimizedImageRendering;
    NSString * _p3Specifier;
    UIColor * _placeholderColor;
    NSString * _placeholderSrc;
    long long  _preferredVibrancy;
    bool  _renderAsTemplate;
    long long  _scaleMode;
    NSShadow * _shadow;
    bool  _sizeComputationOnly;
    NSString * _src;
    bool  _templated;
    UIColor * _tintColor;
}

@property (nonatomic, copy) NSString *accessibilityText;
@property (nonatomic) bool animatesShadowChanges;
@property (nonatomic, readonly) double aspectRatio;
@property (nonatomic, retain) UIColor *backgroundColor;
@property (nonatomic, retain) UIColor *borderColor;
@property (nonatomic) struct _VUICornerRadii { double x1; double x2; double x3; double x4; } borderRadii;
@property (nonatomic) double borderWidth;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } boundingSize;
@property (nonatomic) bool clearsExisting;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } containerSize;
@property (nonatomic) bool continuousBorder;
@property (nonatomic, copy) NSString *cropCode;
@property (nonatomic) unsigned long long decoratorType;
@property (nonatomic) bool displayScaleIsPointMultiplier;
@property (nonatomic) struct CGSize { double x1; double x2; } downloadSize;
@property (nonatomic, copy) NSString *extension;
@property (nonatomic, retain) UIColor *highlightColor;
@property (nonatomic) bool loadsImmediately;
@property (nonatomic) bool optimizedImageRendering;
@property (nonatomic, copy) NSString *p3Specifier;
@property (nonatomic, retain) UIColor *placeholderColor;
@property (nonatomic, copy) NSString *placeholderSrc;
@property (nonatomic) long long preferredVibrancy;
@property (getter=shouldRenderAsTemplate, nonatomic) bool renderAsTemplate;
@property (nonatomic) long long scaleMode;
@property (nonatomic, retain) NSShadow *shadow;
@property (nonatomic) bool sizeComputationOnly;
@property (nonatomic, readonly) NSString *src;
@property (getter=isTemplated, nonatomic) bool templated;
@property (nonatomic, retain) UIColor *tintColor;

- (void).cxx_destruct;
- (id)accessibilityText;
- (bool)animatesShadowChanges;
- (double)aspectRatio;
- (id)backgroundColor;
- (id)borderColor;
- (struct _VUICornerRadii { double x1; double x2; double x3; double x4; })borderRadii;
- (double)borderWidth;
- (struct CGSize { double x1; double x2; })boundingSize;
- (bool)clearsExisting;
- (struct CGSize { double x1; double x2; })containerSize;
- (bool)continuousBorder;
- (id)cropCode;
- (unsigned long long)decoratorType;
- (bool)displayScaleIsPointMultiplier;
- (struct CGSize { double x1; double x2; })downloadSize;
- (id)extension;
- (id)highlightColor;
- (id)initWithSrc:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;
- (id)initWithSrc:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 containerSize:(struct CGSize { double x1; double x2; })arg3;
- (bool)isTemplated;
- (bool)loadsImmediately;
- (bool)optimizedImageRendering;
- (id)p3Specifier;
- (id)placeholderColor;
- (id)placeholderSrc;
- (long long)preferredVibrancy;
- (long long)scaleMode;
- (void)setAccessibilityText:(id)arg1;
- (void)setAnimatesShadowChanges:(bool)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setBorderColor:(id)arg1;
- (void)setBorderRadii:(struct _VUICornerRadii { double x1; double x2; double x3; double x4; })arg1;
- (void)setBorderWidth:(double)arg1;
- (void)setClearsExisting:(bool)arg1;
- (void)setContinuousBorder:(bool)arg1;
- (void)setCropCode:(id)arg1;
- (void)setDecoratorType:(unsigned long long)arg1;
- (void)setDisplayScaleIsPointMultiplier:(bool)arg1;
- (void)setDownloadSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setExtension:(id)arg1;
- (void)setHighlightColor:(id)arg1;
- (void)setLoadsImmediately:(bool)arg1;
- (void)setOptimizedImageRendering:(bool)arg1;
- (void)setP3Specifier:(id)arg1;
- (void)setPlaceholderColor:(id)arg1;
- (void)setPlaceholderSrc:(id)arg1;
- (void)setPreferredVibrancy:(long long)arg1;
- (void)setRenderAsTemplate:(bool)arg1;
- (void)setScaleMode:(long long)arg1;
- (void)setShadow:(id)arg1;
- (void)setSizeComputationOnly:(bool)arg1;
- (void)setTemplated:(bool)arg1;
- (void)setTintColor:(id)arg1;
- (id)shadow;
- (bool)shouldRenderAsTemplate;
- (bool)sizeComputationOnly;
- (id)src;
- (id)tintColor;

@end
