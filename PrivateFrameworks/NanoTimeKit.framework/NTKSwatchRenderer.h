/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKit.framework/NanoTimeKit
 */

@interface NTKSwatchRenderer : NSObject {
    NSCache * _swatchCache;
}

+ (id)_sharedRenderer;
+ (id)cachedSwatchForKey:(id)arg1;
+ (bool)containsSwatchForKey:(id)arg1;
+ (id)renderSwatchForView:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 device:(id)arg3 key:(id)arg4 using:(unsigned long long)arg5;
+ (void)renderSwatchForView:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 device:(id)arg3 key:(id)arg4 using:(unsigned long long)arg5 completion:(id /* block */)arg6;

- (void).cxx_destruct;
- (id)_ca_renderSwatchUsingCARenderServer:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 forDevice:(id)arg3;
- (id)_cachedSwatchImageForKey:(id)arg1;
- (id)_init;
- (bool)_isCATransactionCommitting;
- (id)_renderSwatchForView:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 device:(id)arg3 key:(id)arg4 using:(unsigned long long)arg5;
- (void)_renderSwatchForView:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 device:(id)arg3 key:(id)arg4 using:(unsigned long long)arg5 completion:(id /* block */)arg6;
- (void)_setSwatchImage:(id)arg1 forKey:(id)arg2;
- (id)_ui_renderSwatchUsingUIGraphicsImageRenderer:(id)arg1;

@end