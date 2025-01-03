/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
 */

@interface RTPeopleDiscoveryServiceConfiguration : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _advertisingCapability;
    RTPeopleDensityCallbackConfiguration * _densityCallbackConfiguration;
    unsigned long long  _observationInterval;
    unsigned long long  _serviceLevel;
    unsigned long long  _storageDuration;
}

@property (nonatomic, readonly) unsigned long long advertisingCapability;
@property (nonatomic, readonly) RTPeopleDensityCallbackConfiguration *densityCallbackConfiguration;
@property (nonatomic, readonly) unsigned long long observationInterval;
@property (nonatomic, readonly) unsigned long long serviceLevel;
@property (nonatomic, readonly) unsigned long long storageDuration;

+ (unsigned long long)aggregateAdvertisingCapability:(unsigned long long)arg1 with:(unsigned long long)arg2;
+ (unsigned long long)aggregateObservationInterval:(unsigned long long)arg1 with:(unsigned long long)arg2;
+ (unsigned long long)aggregateServiceLevel:(unsigned long long)arg1 with:(unsigned long long)arg2;
+ (unsigned long long)aggregateStorageDuration:(unsigned long long)arg1 with:(unsigned long long)arg2;
+ (double)secondsForStorageDuration:(unsigned long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)advertisingCapability;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)densityCallbackConfiguration;
- (id)description;
- (id)descriptionDictionary;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithAdvertisingCapability:(unsigned long long)arg1 serviceLevel:(unsigned long long)arg2 observationInterval:(unsigned long long)arg3 storageDuration:(unsigned long long)arg4 densityCallbackConfiguration:(id)arg5;
- (id)initWithAggregation:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithServiceLevel:(unsigned long long)arg1 storageDuration:(unsigned long long)arg2 observationInterval:(unsigned long long)arg3 densityCallbackConfiguration:(id)arg4;
- (bool)isEqual:(id)arg1;
- (unsigned long long)observationInterval;
- (unsigned long long)serviceLevel;
- (bool)shouldAdvertise;
- (unsigned long long)storageDuration;

@end
