/* Generated by RuntimeBrowser.
 */

@protocol CNTUCallProvider <NSObject>

@required

- (NSString *)bundleIdentifier;
- (<CNTUDialRequest> *)dialRequestForHandle:(CNHandle *)arg1 contact:(CNContact *)arg2 video:(bool)arg3;
- (bool)doesContactHaveSupportedHandles:(CNContact *)arg1;
- (bool)isEligibleDefaultApp;
- (NSString *)localizedName;
- (void)setIsEligibleDefaultApp:(bool)arg1;
- (NSSet *)supportedHandleTypes;
- (bool)supportsAudio;
- (bool)supportsVideo;

@end