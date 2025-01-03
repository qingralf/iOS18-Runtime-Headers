/* Generated by RuntimeBrowser.
 */

@protocol IASessionMetadataProtocol <NSSecureCoding, NSObject>

@required

- (NSString *)appBundleId;
- (NSUUID *)appSessionId;
- (void)setAppBundleId:(NSString *)arg1;
- (void)setAppSessionId:(NSUUID *)arg1;
- (void)setTextInputSessionId:(NSUUID *)arg1;
- (void)setTimestamp:(NSDate *)arg1;
- (NSUUID *)textInputSessionId;
- (NSDate *)timestamp;

@end
