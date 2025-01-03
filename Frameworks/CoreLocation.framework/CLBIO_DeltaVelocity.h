/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

@interface CLBIO_DeltaVelocity : NSObject <NSCopying, NSSecureCoding> {
    double  _X;
    double  _Y;
    double  _Z;
}

@property (nonatomic, readonly) double X;
@property (nonatomic, readonly) double Y;
@property (nonatomic, readonly) double Z;

+ (bool)supportsSecureCoding;

- (double)X;
- (double)Y;
- (double)Z;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithX:(double)arg1 Y:(double)arg2 Z:(double)arg3;
- (bool)isEqual:(id)arg1;

@end
