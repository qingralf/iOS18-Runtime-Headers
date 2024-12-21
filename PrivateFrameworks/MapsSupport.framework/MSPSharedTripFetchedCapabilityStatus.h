/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

@interface MSPSharedTripFetchedCapabilityStatus : NSObject <NSSecureCoding> {
    unsigned long long  _capabilityType;
    double  _fetchedTimestamp;
    NSString * _serviceName;
    long long  _status;
    double  _ttl;
}

@property (getter=isBlocked, nonatomic, readonly) bool blocked;
@property (nonatomic, readonly) unsigned long long capabilityType;
@property (getter=isExpired, nonatomic, readonly) bool expired;
@property (getter=isFailedRequest, nonatomic, readonly) bool failedRequest;
@property (nonatomic, readonly) NSString *serviceName;
@property (nonatomic, readonly) long long status;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_updateTTL;
- (unsigned long long)capabilityType;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCapabilityType:(unsigned long long)arg1 serviceName:(id)arg2 status:(long long)arg3;
- (id)initWithCoder:(id)arg1;
- (bool)isBlocked;
- (bool)isEffectivelyEqualToStatus:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isExpired;
- (bool)isFailedRequest;
- (id)serviceName;
- (long long)status;

@end