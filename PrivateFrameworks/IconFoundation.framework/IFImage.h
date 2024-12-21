/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IconFoundation.framework/IconFoundation
 */

@interface IFImage : NSObject <ISScalableCompositorResource, NSCopying, NSSecureCoding> {
    CALayer * _CALayer;
    NSData * _data;
    bool  _largest;
}

@property (retain) CALayer *CALayer;
@property (readonly) struct CGImage { }*CGImage;
@property (readonly) NSData *bitmapData;
@property (readonly) struct CGImage { }*cgImage;
@property (readonly) NSData *data;
@property (retain) NSData *data;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) double dimension;
@property (readonly) unsigned long long hash;
@property struct CGSize { double x1; double x2; } iconSize;
@property bool largest;
@property struct CGSize { double x1; double x2; } minimumSize;
@property (readonly) struct CGSize { double x1; double x2; } pixelSize;
@property (readonly) bool placeholder;
@property bool placeholder;
@property (readonly) double scale;
@property (readonly) struct CGSize { double x1; double x2; } size;
@property (readonly) Class superclass;
@property (readonly) NSUUID *uuid;
@property unsigned long long validationFlags;
@property (readonly) NSData *validationToken;

// Image: /System/Library/PrivateFrameworks/IconFoundation.framework/IconFoundation

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)createCALayereWithIFImageData:(id)arg1;
+ (struct CGImage { }*)createCGImageWithBitmapData:(id)arg1;
+ (struct CGImage { }*)createCGImageWithIFImageData:(id)arg1;
+ (struct CGColorSpace { }*)defaultCGColorSpace;
+ (struct CGImage { }*)escapingCGImageWithCGImage:(struct CGImage { }*)arg1;
+ (id)imageWithContentsOfURL:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)CALayer;
- (id)_init;
- (bool)_isDummyCALayerEnabled;
- (id)bitmapData;
- (struct CGImage { }*)cgImage;
- (id)data;
- (id)data;
- (double)dimension;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCGImage:(struct CGImage { }*)arg1 scale:(double)arg2;
- (id)initWithCGImage:(struct CGImage { }*)arg1 scale:(double)arg2 minimumSize:(struct CGSize { double x1; double x2; })arg3 placeholder:(bool)arg4;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentsOfURL:(id)arg1;
- (id)initWithContentsOfURL:(id)arg1 scale:(double)arg2;
- (id)initWithData:(id)arg1 uuid:(id)arg2;
- (id)initWithData:(id)arg1 uuid:(id)arg2 validationToken:(id)arg3;
- (bool)largest;
- (struct CGSize { double x1; double x2; })pixelSize;
- (bool)placeholder;
- (void)setCALayer:(id)arg1;
- (void)setData:(id)arg1;
- (void)setLargest:(bool)arg1;
- (id)uuid;
- (id)validationToken;
- (bool)writeToURL:(id)arg1;

// Image: /System/Library/PrivateFrameworks/IconServices.framework/IconServices

+ (id)_applyTreatmentsAndCacheResultForResource:(id)arg1 descriptor:(id)arg2 description:(id)arg3;
+ (id)_debugPlaceholderImageWithImageDescriptor:(id)arg1 markAsPlaceholder:(bool)arg2 fallbackTypeID:(id)arg3 referenceIcon:(id)arg4;
+ (id)_placeholderImageWithImageDescriptor:(id)arg1 markAsPlaceholder:(bool)arg2 fallbackTypeID:(id)arg3 referenceIcon:(id)arg4;

- (id)imageForSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2;

@end