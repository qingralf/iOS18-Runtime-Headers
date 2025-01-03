/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKBitmapConversionDescriptor : NSObject {
    id /* block */  _alphaInfoTransform;
    unsigned char  _bitsPerComponent;
    unsigned int  _byteOrder;
    struct CGColorSpace { } * _colorSpace;
    id /* block */  _colorTransformPolicy;
    bool  _floatingComponents;
}

@property (nonatomic, copy) id /* block */ alphaInfoTransform;
@property (nonatomic, readonly) unsigned char bitsPerComponent;
@property (nonatomic, readonly) unsigned int byteOrder;
@property (nonatomic, readonly) struct CGColorSpace { }*colorSpace;
@property (nonatomic, readonly, copy) id /* block */ colorTransformPolicy;
@property (nonatomic) bool floatingComponents;

+ (id)create;
+ (id)create16Float;
+ (id)create32Float;
+ (id)create8Uint;

- (void).cxx_destruct;
- (id /* block */)alphaInfoTransform;
- (unsigned char)bitsPerComponent;
- (unsigned int)byteOrder;
- (struct CGColorSpace { }*)colorSpace;
- (id /* block */)colorTransformPolicy;
- (bool)convertContext:(id)arg1;
- (id)convertFromContext:(id)arg1;
- (id)convertImage:(struct CGImage { }*)arg1;
- (void)dealloc;
- (bool)floatingComponents;
- (id)init;
- (void)setAlphaInfoTransform:(id /* block */)arg1;
- (void)setBitsPerComponent:(unsigned char)arg1 withByteOrder:(unsigned int)arg2;
- (void)setColorSpace:(struct CGColorSpace { }*)arg1 withPolicy:(id /* block */)arg2;
- (void)setFloatingComponents:(bool)arg1;

@end
