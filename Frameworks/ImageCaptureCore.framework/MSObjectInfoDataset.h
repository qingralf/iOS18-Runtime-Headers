/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ImageCaptureCore.framework/ImageCaptureCore
 */

@interface MSObjectInfoDataset : NSObject {
    unsigned int  _associationDesc;
    unsigned short  _associationType;
    unsigned long long  _captureDate_tvsec;
    NSString * _filename;
    unsigned int  _imageBitDepth;
    unsigned short  _imageOrientation;
    unsigned int  _imagePixHeight;
    unsigned int  _imagePixWidth;
    unsigned long long  _modificationDate_tvsec;
    unsigned long long  _objectCompressedSize;
    unsigned short  _objectFormat;
    unsigned int  _objectHandle;
    unsigned int  _parentObject;
    unsigned short  _protectionStatus;
    unsigned int  _sequenceNumber;
    unsigned int  _storageID;
    unsigned int  _thumbCompressedSize;
    unsigned short  _thumbFormat;
    unsigned int  _thumbOffset;
    unsigned int  _thumbPixHeight;
    unsigned int  _thumbPixWidth;
}

@property (nonatomic) unsigned int associationDesc;
@property (nonatomic) unsigned short associationType;
@property (nonatomic) unsigned long long captureDate_tvsec;
@property (nonatomic, readonly, copy) NSData *content;
@property (nonatomic, copy) NSString *filename;
@property (nonatomic) unsigned int imageBitDepth;
@property (nonatomic) unsigned short imageOrientation;
@property (nonatomic) unsigned int imagePixHeight;
@property (nonatomic) unsigned int imagePixWidth;
@property (nonatomic) unsigned long long modificationDate_tvsec;
@property (nonatomic) unsigned long long objectCompressedSize;
@property (nonatomic) unsigned short objectFormat;
@property (nonatomic) unsigned int objectHandle;
@property (nonatomic) unsigned int parentObject;
@property (nonatomic) unsigned short protectionStatus;
@property (nonatomic) unsigned int sequenceNumber;
@property (nonatomic) unsigned int storageID;
@property (nonatomic) unsigned int thumbCompressedSize;
@property (nonatomic) unsigned short thumbFormat;
@property (nonatomic) unsigned int thumbOffset;
@property (nonatomic) unsigned int thumbPixHeight;
@property (nonatomic) unsigned int thumbPixWidth;

- (void).cxx_destruct;
- (unsigned int)associationDesc;
- (unsigned short)associationType;
- (unsigned long long)captureDate_tvsec;
- (id)content;
- (void)contentLength:(unsigned int*)arg1 bufferLength:(unsigned int*)arg2;
- (id)filename;
- (unsigned int)imageBitDepth;
- (unsigned short)imageOrientation;
- (unsigned int)imagePixHeight;
- (unsigned int)imagePixWidth;
- (id)init;
- (id)initWithBytes:(char *)arg1 length:(unsigned int)arg2;
- (id)initWithData:(id)arg1;
- (unsigned long long)modificationDate_tvsec;
- (unsigned long long)objectCompressedSize;
- (unsigned short)objectFormat;
- (unsigned int)objectHandle;
- (unsigned int)parentObject;
- (unsigned short)protectionStatus;
- (unsigned int)sequenceNumber;
- (void)setAssociationDesc:(unsigned int)arg1;
- (void)setAssociationType:(unsigned short)arg1;
- (void)setCaptureDate_tvsec:(unsigned long long)arg1;
- (void)setFilename:(id)arg1;
- (void)setImageBitDepth:(unsigned int)arg1;
- (void)setImageOrientation:(unsigned short)arg1;
- (void)setImagePixHeight:(unsigned int)arg1;
- (void)setImagePixWidth:(unsigned int)arg1;
- (void)setModificationDate_tvsec:(unsigned long long)arg1;
- (void)setObjectCompressedSize:(unsigned long long)arg1;
- (void)setObjectFormat:(unsigned short)arg1;
- (void)setObjectHandle:(unsigned int)arg1;
- (void)setParentObject:(unsigned int)arg1;
- (void)setProtectionStatus:(unsigned short)arg1;
- (void)setSequenceNumber:(unsigned int)arg1;
- (void)setStorageID:(unsigned int)arg1;
- (void)setThumbCompressedSize:(unsigned int)arg1;
- (void)setThumbFormat:(unsigned short)arg1;
- (void)setThumbOffset:(unsigned int)arg1;
- (void)setThumbPixHeight:(unsigned int)arg1;
- (void)setThumbPixWidth:(unsigned int)arg1;
- (unsigned int)storageID;
- (unsigned int)thumbCompressedSize;
- (unsigned short)thumbFormat;
- (unsigned int)thumbOffset;
- (unsigned int)thumbPixHeight;
- (unsigned int)thumbPixWidth;

@end
