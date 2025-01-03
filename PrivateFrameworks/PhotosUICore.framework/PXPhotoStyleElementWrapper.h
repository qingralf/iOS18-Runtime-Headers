/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPhotoStyleElementWrapper : NSObject <NSCopying> {
    PXPhotoStyleElement * _underlyingStyleElement;
}

+ (id)allDefaultStyles;
+ (id)wrapperWithPhotoStyleElement:(id)arg1;

- (void).cxx_destruct;
- (id)cast;
- (double)color;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)defaultColor;
- (double)defaultIntensity;
- (id)defaultName;
- (double)defaultTone;
- (bool)hasNonDefaultValues;
- (id)identifier;
- (id)initWithPhotoStyleElement:(id)arg1;
- (double)intensity;
- (void)resetToDefault;
- (id)style;
- (double)tone;
- (void)updateWithTone:(double)arg1 color:(double)arg2 intensity:(double)arg3;

@end
