/* Generated by RuntimeBrowser.
 */

@protocol LACFlagsProvider <NSObject, LACFlagsProviderDTO>

@required

- (bool)featureFlagApproveByMacEnabled;
- (bool)featureFlagApproveByMacFailureUIEnabled;
- (bool)featureFlagEssoniteClickEnabled;
- (bool)featureFlagPreboardDeveloperModeEnabled;
- (bool)featureFlagPreboardEnabled;
- (bool)featureFlagPreboardProtectedVariablesEnabled;
- (bool)featureFlagPreboardUPPEnabled;
- (bool)featureFlagSecureUIEnabled;
- (NSString *)flagCompanionMockDevicesKey;
- (NSString *)flagOnenessSessionActiveKey;
- (NSString *)flagOnenessSessionAuthenticationKey;
- (NSString *)flagPreboardModeKey;
- (NSString *)flagRunningInBATSKey;
- (NSString *)flagSecureUIMinDisplayTimeKey;
- (NSString *)flagSharedModeActiveKey;
- (NSString *)flagSharedModeLatencyKey;
- (NSNumber *)valueForFlagCompanionMockDevices;
- (NSNumber *)valueForFlagOnenessSessionActive;
- (NSData *)valueForFlagOnenessSessionAuthentication;
- (NSNumber *)valueForFlagPreboardMode;
- (NSNumber *)valueForFlagRunningInBATS;
- (NSNumber *)valueForFlagSecureUIMinDisplayTime;
- (NSNumber *)valueForFlagSharedModeActive;
- (NSNumber *)valueForFlagSharedModeLatency;

@end