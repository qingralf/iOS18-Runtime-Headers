/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _DUIPreviewAndImageComponentUpdate : _DUIPreviewAndImageComponent <NSSecureCoding> {
    bool  _isFromSource;
}

@property (nonatomic) bool isFromSource;

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithPreviewAndImageComponent:(id)arg1 isFromSource:(bool)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isFromSource;
- (void)setIsFromSource:(bool)arg1;

@end