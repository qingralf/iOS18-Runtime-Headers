/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ANSTKit.framework/ANSTKit
 */

@interface ANSTPixelBufferDescriptor : ANSTDescriptor {
    NSDictionary * _pixelBufferAttributes;
}

@property (nonatomic, readonly) unsigned long long height;
@property (nonatomic, readonly, copy) NSDictionary *pixelBufferAttributes;
@property (nonatomic, readonly) unsigned int pixelFormatType;
@property (nonatomic, readonly) unsigned long long width;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (unsigned long long)height;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 error:(id*)arg2;
- (id)initWithName:(id)arg1 pixelBufferAttributes:(id)arg2 error:(id*)arg3;
- (id)initWithName:(id)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 pixelFormatType:(unsigned int)arg4 pixelBufferAttributes:(id)arg5 error:(id*)arg6;
- (bool)isEqual:(id)arg1;
- (id)pixelBufferAttributes;
- (unsigned int)pixelFormatType;
- (unsigned long long)width;

@end
