/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/NearbyInteraction.framework/NearbyInteraction
 */

@interface NIRegionPredicate : NSObject <NSCopying, NSSecureCoding> {
    bool  _coarseEstimation;
    long long  _devicePresencePreset;
    NSString * _name;
    long long  _preferredUpdateRate;
    float  _radius;
    long long  _regionSizeCategory;
    bool  _requiresUserIntent;
}

@property bool coarseEstimation;
@property (readonly) NSString *name;
@property long long preferredUpdateRate;
@property (readonly) float radius;
@property long long regionSizeCategory;
@property bool requiresUserIntent;

+ (bool)_isExecuteRegion:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)coarseEstimation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionInternal;
- (long long)devicePresencePreset;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 devicePresencePreset:(long long)arg2;
- (id)initWithName:(id)arg1 radius:(float)arg2;
- (id)initWithName:(id)arg1 radius:(float)arg2 preferredUpdateRate:(long long)arg3;
- (id)initWithName:(id)arg1 radius:(float)arg2 preferredUpdateRate:(long long)arg3 requiresUserIntent:(bool)arg4;
- (id)initWithName:(id)arg1 radius:(float)arg2 preferredUpdateRate:(long long)arg3 requiresUserIntent:(bool)arg4 devicePresencePreset:(long long)arg5;
- (id)initWithName:(id)arg1 regionSizeCategory:(long long)arg2 radius:(float)arg3 preferredUpdateRate:(long long)arg4 requiresUserIntent:(bool)arg5;
- (id)initWithName:(id)arg1 regionSizeCategory:(long long)arg2 radius:(float)arg3 preferredUpdateRate:(long long)arg4 requiresUserIntent:(bool)arg5 coarseEstimation:(bool)arg6 devicePresencePreset:(long long)arg7;
- (id)initWithName:(id)arg1 regionSizeCategory:(long long)arg2 radius:(float)arg3 preferredUpdateRate:(long long)arg4 requiresUserIntent:(bool)arg5 devicePresencePreset:(long long)arg6;
- (bool)isEqual:(id)arg1;
- (id)name;
- (long long)preferredUpdateRate;
- (float)radius;
- (long long)regionSizeCategory;
- (bool)requiresUserIntent;
- (void)setCoarseEstimation:(bool)arg1;
- (void)setDevicePresencePreset:(long long)arg1;
- (void)setPreferredUpdateRate:(long long)arg1;
- (void)setRegionSizeCategory:(long long)arg1;
- (void)setRequiresUserIntent:(bool)arg1;
- (id)shortDescription;

@end
