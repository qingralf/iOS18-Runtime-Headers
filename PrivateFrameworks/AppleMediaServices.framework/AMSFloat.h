/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSFloat : NSObject <NSSecureCoding> {
    float  _value;
}

@property (readonly) float value;

+ (id)floatWithFloat:(float)arg1;
+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFloat:(float)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToFloat:(id)arg1;
- (float)value;

@end