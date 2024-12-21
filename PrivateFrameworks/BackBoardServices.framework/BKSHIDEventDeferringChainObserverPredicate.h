/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

@interface BKSHIDEventDeferringChainObserverPredicate : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    BKSHIDEventDisplay * _display;
    BKSHIDEventDeferringEnvironment * _environment;
}

@property (nonatomic, readonly) BKSHIDEventDisplay *display;
@property (nonatomic, readonly) BKSHIDEventDeferringEnvironment *environment;

+ (id)build:(id /* block */)arg1;
+ (id)new;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)display;
- (void)encodeWithCoder:(id)arg1;
- (id)environment;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;

@end