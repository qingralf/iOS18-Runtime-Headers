/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _DUIPreviewAndImageComponent : NSObject <NSCopying, NSSecureCoding> {
    _DUIImageComponent * _imageComponent;
    unsigned long long  _index;
    _DUIPreview * _preview;
}

@property (nonatomic, retain) _DUIImageComponent *imageComponent;
@property (nonatomic) unsigned long long index;
@property (nonatomic, retain) _DUIPreview *preview;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)imageComponent;
- (unsigned long long)index;
- (id)initWithCoder:(id)arg1;
- (id)initWithPreviewAndImageComponent:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)preview;
- (void)setImageComponent:(id)arg1;
- (void)setIndex:(unsigned long long)arg1;
- (void)setPreview:(id)arg1;

@end
