/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/NearbyInteraction.framework/NearbyInteraction
 */

@interface NISystemState : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _uwbExtendedDistanceAvailability;
    unsigned long long  _uwbPreciseDistanceAvailability;
}

@property (nonatomic) unsigned long long uwbExtendedDistanceAvailability;
@property (nonatomic) unsigned long long uwbPreciseDistanceAvailability;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionInternal;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithUWBPreciseDistanceAvailability:(unsigned long long)arg1 uwbExtendedDistanceAvailability:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (void)setUwbExtendedDistanceAvailability:(unsigned long long)arg1;
- (void)setUwbPreciseDistanceAvailability:(unsigned long long)arg1;
- (unsigned long long)uwbExtendedDistanceAvailability;
- (unsigned long long)uwbPreciseDistanceAvailability;

@end