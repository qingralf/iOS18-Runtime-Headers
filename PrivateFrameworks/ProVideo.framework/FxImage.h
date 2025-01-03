/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

@interface FxImage : NSObject <NSCopying> {
    struct FxImagePriv { struct { unsigned long long x_1_1_1; unsigned long long x_1_1_2; unsigned long long x_1_1_3; unsigned long long x_1_1_4; unsigned long long x_1_1_5; unsigned long long x_1_1_6; unsigned long long x_1_1_7; bool x_1_1_8; double x_1_1_9; } x1; unsigned long long x2; unsigned long long x3; double x4; double x5; unsigned long long x6; int (*x7)(); void *x8; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_9_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_9_1_2; } x9; struct FxRect { int x_10_1_1; int x_10_1_2; int x_10_1_3; int x_10_1_4; } x10; id x11; struct CGColorSpace {} *x12; int x13; unsigned long long x14; } * _imagePriv;
}

+ (id)alloc;
+ (void)setColorSpaceVendor:(int (*)arg1;

- (bool)_verifyImage;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (unsigned long long)bytes;
- (unsigned long long)colorInfo;
- (struct CGColorSpace { }*)colorSpace;
- (bool)containsPointX:(int)arg1 Y:(int)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned long long)depth;
- (struct FxRect { int x1; int x2; int x3; int x4; })dod;
- (unsigned long long)dynamicRangeType;
- (int)eyeType;
- (unsigned long long)field;
- (unsigned long long)fieldOrder;
- (unsigned long long)fxColorPrimaries;
- (unsigned long long)height;
- (struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; bool x8; double x9; })imageInfo;
- (unsigned long long)imageType;
- (id)init;
- (id)initWithInfo:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; bool x8; double x9; })arg1;
- (id)inversePixelTransform;
- (bool)isPremultiplied;
- (unsigned long long)nclcValue;
- (unsigned long long)numActiveChannels;
- (unsigned long long)origin;
- (double)pixelAspect;
- (unsigned long long)pixelFormat;
- (id)pixelTransform;
- (double)scaleX;
- (double)scaleY;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setBytes:(unsigned long long)arg1;
- (void)setColorInfo:(unsigned long long)arg1;
- (void)setColorSpace:(struct CGColorSpace { }*)arg1;
- (void)setDeallocCallback:(int (*)arg1 refcon:(void*)arg2;
- (void)setDepth:(unsigned long long)arg1;
- (void)setDod:(struct FxRect { int x1; int x2; int x3; int x4; })arg1;
- (void)setDynamicRangeType:(unsigned long long)arg1;
- (void)setEyeType:(int)arg1;
- (void)setField:(unsigned long long)arg1;
- (void)setFieldOrder:(unsigned long long)arg1;
- (void)setFxColorPrimaries:(unsigned long long)arg1;
- (void)setHeight:(unsigned long long)arg1;
- (void)setImageType:(unsigned long long)arg1;
- (void)setIsPremultiplied:(bool)arg1;
- (void)setNCLCValue:(unsigned long long)arg1;
- (void)setNumActiveChannels:(unsigned long long)arg1;
- (void)setOrigin:(unsigned long long)arg1;
- (void)setPixelAspect:(double)arg1;
- (void)setPixelFormat:(unsigned long long)arg1;
- (void)setPixelTransform:(id)arg1;
- (void)setScaleX:(double)arg1;
- (void)setScaleY:(double)arg1;
- (void)setWidth:(unsigned long long)arg1;
- (void)setWidth:(unsigned long long)arg1 andHeight:(unsigned long long)arg2;
- (unsigned long long)size;
- (unsigned long long)version;
- (unsigned long long)width;

@end
