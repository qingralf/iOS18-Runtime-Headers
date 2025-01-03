/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

@interface MLStateConstraint : NSObject <MLFeatureValueConstraint, NSSecureCoding> {
    NSArray * _bufferShape;
    long long  _dataType;
}

@property (nonatomic, readonly) NSArray *bufferShape;
@property (nonatomic, readonly) long long dataType;

+ (id)constraintWithBufferShape:(id)arg1 dataType:(long long)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bufferShape;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)dataType;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithShape:(id)arg1 dataType:(long long)arg2 shapeConstraint:(id)arg3 defaultOptionalValue:(id)arg4;
- (bool)isAllowedDataType:(long long)arg1 error:(id*)arg2;
- (bool)isAllowedShape:(id)arg1 error:(id*)arg2;
- (bool)isAllowedValue:(id)arg1 error:(id*)arg2;
- (id)shape;

@end
