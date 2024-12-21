/* Generated by RuntimeBrowser.
 */

@protocol TUScreenShareAttributes <NSObject, NSSecureCoding>

@required

+ (long long)currentDeviceFamily;
+ (long long)currentDeviceHomeButtonType;
+ (id)defaultAttributes;
+ (NSNumber *)defaultCornerRadius;
+ (NSNumber *)defaultDisplayScale;
+ (NSNumber *)defaultScaleFactor;
+ (NSValue *)defaultSystemRootLayerTransform;

- (NSNumber *)cornerRadius;
- (long long)deviceFamily;
- (long long)deviceHomeButtonType;
- (NSNumber *)displayID;
- (NSNumber *)displayScale;
- (NSNumber *)frameRate;
- (id)initWithAttributes:(id <TUScreenShareAttributes>)arg1;
- (bool)isSignificantChangeFromAttributes:(id <TUScreenShareAttributes>)arg1;
- (bool)isWindowed;
- (NSValue *)originalResolution;
- (NSNumber *)scaleFactor;
- (void)setCornerRadius:(NSNumber *)arg1;
- (void)setDeviceFamily:(long long)arg1;
- (void)setDeviceHomeButtonType:(long long)arg1;
- (void)setDisplayID:(NSNumber *)arg1;
- (void)setDisplayScale:(NSNumber *)arg1;
- (void)setFrameRate:(NSNumber *)arg1;
- (void)setOriginalResolution:(NSValue *)arg1;
- (void)setScaleFactor:(NSNumber *)arg1;
- (void)setStyle:(long long)arg1;
- (void)setSystemRootLayerTransform:(NSValue *)arg1;
- (void)setWindowUUID:(NSUUID *)arg1;
- (void)setWindowed:(bool)arg1;
- (long long)style;
- (NSValue *)systemRootLayerTransform;
- (NSUUID *)windowUUID;

@end