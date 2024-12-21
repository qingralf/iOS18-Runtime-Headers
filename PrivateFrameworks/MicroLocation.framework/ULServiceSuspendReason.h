/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MicroLocation.framework/MicroLocation
 */

@interface ULServiceSuspendReason : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _suspendReasonEnum;
}

@property (nonatomic) unsigned long long suspendReasonEnum;

+ (id)new;
+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithSuspendReasonEnum:(unsigned long long)arg1;
- (bool)isEqual:(id)arg1;
- (void)setSuspendReasonEnum:(unsigned long long)arg1;
- (unsigned long long)suspendReasonEnum;

@end