/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

@interface WFQuantityValue : NSObject <NSSecureCoding> {
    NSDecimalNumber * _magnitude;
    NSString * _unitString;
}

@property (nonatomic, readonly) NSDecimalNumber *magnitude;
@property (nonatomic, readonly, copy) NSString *unitString;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMagnitude:(id)arg1 unitString:(id)arg2;
- (id)magnitude;
- (id)unitString;

@end
