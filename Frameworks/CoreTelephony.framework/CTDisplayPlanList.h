/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

@interface CTDisplayPlanList : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _plans;
}

@property (nonatomic, readonly) NSArray *plans;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDisplayPlans:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)plans;

@end
