/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUBrushStroke : NSObject <NSCopying, NSMutableCopying> {
    struct { 
        struct { 
            long long x; 
            long long y; 
        } origin; 
        struct { 
            long long width; 
            long long height; 
        } size; 
    }  _clipRect;
    NSMutableData * _data;
    struct { 
        struct { 
            long long x; 
            long long y; 
        } origin; 
        struct { 
            long long width; 
            long long height; 
        } size; 
    }  _extent;
    float  _opacity;
    long long  _pressureMode;
    float  _radius;
    float  _softness;
}

@property (nonatomic, readonly) struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; } clipRect;
@property (nonatomic, readonly) struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; } extent;
@property (nonatomic) float opacity;
@property (nonatomic, readonly) long long pointCount;
@property (nonatomic) long long pressureMode;
@property (nonatomic) float radius;
@property (nonatomic) float softness;

+ (id)brushStrokeFromDictionary:(id)arg1;
+ (id)dictionaryFromBrushStroke:(id)arg1;

- (void).cxx_destruct;
- (id)_createDataFromPointArray:(id)arg1;
- (id)_createPointArrayFromData:(id)arg1;
- (void)_initializeWithRadius:(float)arg1 softness:(float)arg2 opacity:(float)arg3 extent:(struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })arg4 clipRect:(struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })arg5 data:(id)arg6 pressureMode:(long long)arg7;
- (void)_updateExtent;
- (id)ciImageTiled:(bool)arg1 closed:(bool)arg2 pressureMode:(long long)arg3;
- (id)ciImageTiled:(bool)arg1 closed:(bool)arg2 pressureMode:(long long)arg3 filled:(bool)arg4;
- (struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })clipRect;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })extent;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToBrushStroke:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)nu_updateDigest:(id)arg1;
- (float)opacity;
- (struct { float x1; float x2; float x3; })pointAtIndex:(long long)arg1;
- (long long)pointCount;
- (id)points;
- (long long)pressureMode;
- (float)radius;
- (void)setOpacity:(float)arg1;
- (void)setPressureMode:(long long)arg1;
- (void)setRadius:(float)arg1;
- (void)setSoftness:(float)arg1;
- (float)softness;
- (void)writeToTIFFAtPath:(id)arg1 closed:(bool)arg2 pressureMode:(long long)arg3;

@end
