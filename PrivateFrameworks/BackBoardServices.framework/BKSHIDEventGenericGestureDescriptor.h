/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

@interface BKSHIDEventGenericGestureDescriptor : BKSHIDEventDescriptor {
    unsigned int  _genericGestureType;
    bool  _isWildcard;
}

@property (nonatomic, readonly) unsigned int genericGestureType;

+ (id)descriptorForAnyGenericGestureType;
+ (id)descriptorWithGenericGestureType:(unsigned int)arg1;
+ (bool)supportsSecureCoding;

- (void)appendDescriptionToFormatter:(id)arg1;
- (bool)describes:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)genericGestureType;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithGenericGestureType:(unsigned int)arg1;
- (bool)isEqual:(id)arg1;
- (bool)requiresFuzzyMatching;

@end