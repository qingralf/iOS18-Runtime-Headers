/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NearbySessions.framework/NearbySessions
 */

@interface NearbySessions.NearbyAdvertisement : NSObject <NSSecureCoding> {
    void $__lazy_storage_$_dataSource;
    void activityType;
    void contactID;
    void deviceColor;
    void deviceID;
    void deviceModel;
    void displayName;
    void handle;
    void identifier;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  scannerID;
    void userInfo;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long hash;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
