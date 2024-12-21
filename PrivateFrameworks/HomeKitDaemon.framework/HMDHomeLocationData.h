/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemonLegacy.framework/HomeKitDaemonLegacy
 */

@interface HMDHomeLocationData : HMFObject <NSSecureCoding> {
    CLLocation * _location;
    NSNumber * _locationSource;
    NSDate * _locationUpdateTimestamp;
}

@property (readonly) CLLocation *location;
@property (readonly) NSNumber *locationSource;
@property (readonly) NSDate *locationUpdateTimestamp;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocation:(id)arg1 locationUpdateTimestamp:(id)arg2 locationSource:(id)arg3;
- (id)location;
- (id)locationSource;
- (id)locationUpdateTimestamp;

@end