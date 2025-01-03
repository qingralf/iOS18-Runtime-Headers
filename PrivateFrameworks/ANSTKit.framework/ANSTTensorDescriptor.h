/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ANSTKit.framework/ANSTKit
 */

@interface ANSTTensorDescriptor : ANSTDescriptor {
    unsigned long long  _dataType;
    unsigned long long * _lengths;
    unsigned long long  _numberOfDimensions;
    unsigned long long * _strides;
}

@property (nonatomic, readonly) unsigned long long _minimumContiguousLength;
@property (nonatomic, readonly) unsigned long long dataType;
@property (nonatomic, readonly, copy) NSArray *lengths;
@property (nonatomic, readonly) unsigned long long numberOfDimensions;
@property (nonatomic, readonly) unsigned long long sizeInBytes;
@property (nonatomic, readonly, copy) NSArray *strides;

+ (bool)supportsSecureCoding;

- (unsigned long long)_minimumContiguousLength;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)dataType;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 dataType:(unsigned long long)arg2 lengths:(id)arg3 strides:(id)arg4 error:(id*)arg5;
- (id)initWithName:(id)arg1 dataType:(unsigned long long)arg2 numberOfDimensions:(unsigned long long)arg3 lengths:(const unsigned long long*)arg4 alignment:(unsigned long long)arg5 error:(id*)arg6;
- (id)initWithName:(id)arg1 dataType:(unsigned long long)arg2 numberOfDimensions:(unsigned long long)arg3 lengths:(const unsigned long long*)arg4 strides:(const unsigned long long*)arg5 error:(id*)arg6;
- (id)initWithName:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (unsigned long long)lengthOfDimensionAt:(unsigned long long)arg1;
- (id)lengths;
- (unsigned long long)numberOfDimensions;
- (unsigned long long)sizeInBytes;
- (unsigned long long)strideOfDimensionAt:(unsigned long long)arg1;
- (id)strides;

@end
