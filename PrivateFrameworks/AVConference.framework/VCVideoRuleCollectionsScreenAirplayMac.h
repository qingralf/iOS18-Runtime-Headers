/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCVideoRuleCollectionsScreenAirplayMac : VCVideoRuleCollectionsScreenAirplay {
    <VCHardwareSettingsMacProtocol> * _hardwareSettings;
}

+ (id)sharedInstance;

- (void)initSupportedPayloads;
- (id)initWithHardwareSettings:(id)arg1;
- (bool)setupH264Rules;
- (bool)setupHEVCRules;
- (bool)setupRules;

@end
