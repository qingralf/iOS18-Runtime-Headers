/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKDataCollectorState : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _collectionType;
    long long  _priority;
}

@property (readonly) unsigned long long collectionType;
@property (readonly) long long priority;

+ (bool)supportsSecureCoding;

- (id)cloneWithNewPriority:(long long)arg1;
- (id)cloneWithNewType:(unsigned long long)arg1;
- (unsigned long long)collectionType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(unsigned long long)arg1 priority:(long long)arg2;
- (bool)isEqual:(id)arg1;
- (long long)priority;

@end