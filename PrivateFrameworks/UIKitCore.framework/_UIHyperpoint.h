/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIHyperpoint : NSObject <NSCopying, NSSecureCoding, _UIHyperregion, _UIHyperregion_Internal> {
    unsigned long long  __dimensions;
    double * __value;
}

@property (nonatomic, readonly) unsigned long long _dimensions;
@property (nonatomic, readonly) const double*_value;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)keyPathsForValuesAffectingSelf;
+ (bool)supportsSecureCoding;

- (void)_closestPoint:(double*)arg1 toPoint:(const double*)arg2;
- (void)_copyValue:(const double*)arg1;
- (unsigned long long)_dimensions;
- (void)_mutateValue:(id /* block */)arg1;
- (const double*)_value;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDimensions:(unsigned long long)arg1;
- (id)initWithValue:(const double*)arg1 dimensions:(unsigned long long)arg2;
- (id)initWithValue:(const double*)arg1 objCType:(const char *)arg2;
- (bool)isEqual:(id)arg1;

@end
