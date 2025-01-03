/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

@interface BKSHIDEventDeferringRule : NSObject <BSDescriptionStreamable, NSCopying, NSSecureCoding> {
    _BKSHIDEventDeferringRuleIdentity * _identity;
    BKSHIDEventDeferringPredicate * _predicate;
    NSString * _reason;
    BKSHIDEventDeferringTarget * _target;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) _BKSHIDEventDeferringRuleIdentity *identity;
@property (nonatomic, readonly, copy) BKSHIDEventDeferringPredicate *predicate;
@property (nonatomic, readonly, copy) NSString *reason;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) BKSHIDEventDeferringTarget *target;

+ (id)ruleForDeferringEventsMatchingPredicate:(id)arg1 toTarget:(id)arg2 withReason:(id)arg3 seed:(unsigned int)arg4 pid:(int)arg5;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithPredicate:(id)arg1 target:(id)arg2 reason:(id)arg3 identity:(id)arg4;
- (void)appendDescriptionToFormatter:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identity;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (long long)mostRecentFirstCompare:(id)arg1;
- (id)predicate;
- (id)reason;
- (id)target;
- (long long)weightedDeferringRuleCompare:(id)arg1;

@end
