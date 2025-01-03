/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SPOwner.framework/SPOwner
 */

@interface SPDelegatedLocationResult : NSObject <NSSecureCoding> {
    NSDate * _lastUploadTimestamp;
    NSDictionary * _locationsByUuids;
}

@property (nonatomic, copy) NSDate *lastUploadTimestamp;
@property (nonatomic, copy) NSDictionary *locationsByUuids;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithResults:(id)arg1;
- (id)initWithTimestamp:(id)arg1;
- (id)lastUploadTimestamp;
- (id)locationsByUuids;
- (void)setLastUploadTimestamp:(id)arg1;
- (void)setLocationsByUuids:(id)arg1;

@end
