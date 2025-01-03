/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

@interface CTLazuliOperationError : NSObject <NSCopying, NSSecureCoding> {
    long long  _value;
}

@property (nonatomic) long long value;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithReflection:(const struct OperationError { int x1; }*)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToCTLazuliOperationError:(id)arg1;
- (void)setValue:(long long)arg1;
- (long long)value;

@end
