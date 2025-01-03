/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCVideoRuleCollectionsScreenAirplayEmbedded : VCVideoRuleCollectionsScreenAirplay {
    <VCHardwareSettingsEmbeddedProtocol> * _hardwareSettings;
}

+ (id)sharedInstance;

- (void)initSupportedPayloads;
- (id)initWithHardwareSettings:(id)arg1;
- (void)selectPreferredRule:(id)arg1 screenSize:(struct CGSize { double x1; double x2; })arg2;
- (bool)setupH264Rules;
- (bool)setupHEVCRules;
- (bool)setupRules;

@end
