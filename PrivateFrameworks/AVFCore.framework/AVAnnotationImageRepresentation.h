/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
 */

@interface AVAnnotationImageRepresentation : AVAnnotationRepresentation {
    NSString * _fileType;
    NSData * _imageData;
}

@property (nonatomic, copy) NSString *fileType;
@property (nonatomic, copy) NSData *imageData;

- (id)_initWithPropertyList:(id)arg1 binaryData:(id)arg2;
- (id)_propertyListAndBinaryData:(id*)arg1;
- (void)dealloc;
- (id)description;
- (id)fileType;
- (unsigned long long)hash;
- (id)imageData;
- (id)initWithImageData:(id)arg1 fileType:(id)arg2;
- (bool)isEqual:(id)arg1;
- (void)setFileType:(id)arg1;
- (void)setImageData:(id)arg1;

@end