/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

@interface IMCTSMSUtilitiesManager : NSObject {
    int  _mmsEnabledToken;
    int  _rcsEnabledToken;
}

@property (nonatomic) int mmsEnabledToken;
@property (nonatomic) int rcsEnabledToken;

+ (id)sharedManager;

- (id)carrierBundleValueForKeyHierarchy:(id)arg1 phoneNumber:(id)arg2 simID:(id)arg3;
- (id)carrierNameForPhoneNumber:(id)arg1;
- (id)countryCodeForPhoneNumber:(id)arg1 simID:(id)arg2;
- (id)countryCodeForSimSlot:(long long)arg1;
- (unsigned long long)iMessageMaxTransferAudioFileSizeForWifiForPhoneNumber:(unsigned long long*)arg1 cellSize:(unsigned long long*)arg2 serverConfigurationBag:(id)arg3 phoneNumber:(id)arg4 simID:(id)arg5;
- (void)iMessageMaxTransferFileSizeForWifiForPhoneNumber:(unsigned long long*)arg1 cellSize:(unsigned long long*)arg2 serverConfigurationBag:(id)arg3 phoneNumber:(id)arg4 simID:(id)arg5;
- (unsigned long long)iMessageMaxTransferVideoFileSizeForWifiForPhoneNumber:(unsigned long long*)arg1 cellSize:(unsigned long long*)arg2 serverConfigurationBag:(id)arg3 phoneNumber:(id)arg4 simID:(id)arg5;
- (id)init;
- (bool)isEagerUploadEnabledForPhoneNumber:(id)arg1 simID:(id)arg2;
- (bool)messagesFilteringSettingForPreferedSubscription;
- (bool)mmsDefaultEnabledForPhoneNumber:(id)arg1 simID:(id)arg2;
- (bool)mmsEagerUploadDisabledInCarrierBundleForPhoneNumber:(id)arg1 simID:(id)arg2;
- (id)mmsEmailAddressToMatchForPhoneNumber:(id)arg1 simID:(id)arg2;
- (bool)mmsEnabledForPhoneNumber:(id)arg1 simID:(id)arg2;
- (int)mmsEnabledToken;
- (bool)mmsGroupTextOnlyMessagesSendAsMMSForPhoneNumber:(id)arg1 simID:(id)arg2;
- (bool)mmsGroupTextReplicationSupportedForPhoneNumber:(id)arg1 simID:(id)arg2;
- (bool)mmsGroupTextReplicationSupportsSMILContentLocationForPhoneNumber:(id)arg1 simID:(id)arg2;
- (int)mmsMaxImageDimensionForPhoneNumber:(id)arg1 simID:(id)arg2;
- (int)mmsMaxRecipientsForPhoneNumber:(id)arg1 simID:(id)arg2;
- (double)mmsMaximumAudioDurationForPhoneNumber:(id)arg1 simID:(id)arg2;
- (double)mmsMaximumDurationWithPreset:(id)arg1 phoneNumber:(id)arg2 simID:(id)arg3;
- (int)mmsMaximumMessageByteCountForPhoneNumber:(id)arg1 simID:(id)arg2;
- (int)mmsMaximumSlideCountForPhoneNumber:(id)arg1 simID:(id)arg2;
- (double)mmsMaximumVideoDurationForPhoneNumber:(id)arg1 simID:(id)arg2;
- (bool)mmsRestrictedModeEnabledForPhoneNumber:(id)arg1 simID:(id)arg2;
- (bool)mmsRestrictedModeEnabledForPhoneNumber:(id)arg1 simID:(id)arg2 reset:(bool)arg3;
- (bool)mmsSupportedAndConfiguredForPhoneNumber:(id)arg1 simID:(id)arg2;
- (bool)mmsSupportsH264VideoForPhoneNumber:(id)arg1 simID:(id)arg2;
- (id)myCTPhoneNumber;
- (id)phoneNumbersEnabledForMultipleSubscriptionDevice;
- (int)rcsEnabledToken;
- (unsigned long long)readAttachmentPreviewTranscodingQualitySizeCarrierValueForPhoneNumber:(id)arg1 simID:(id)arg2;
- (bool)readDisablePreviewTranscodingQualityOnWRMCarrierValueForPhoneNumber:(id)arg1 simID:(id)arg2;
- (bool)readDisablePreviewTranscodingQualityOnWiFiCarrierValueForPhoneNumber:(id)arg1 simID:(id)arg2;
- (bool)readEnablePreviewTranscodingQualityCarrierValueForPhoneNumber:(id)arg1 simID:(id)arg2;
- (bool)readMMSUserOverrideForPhoneNumber:(id)arg1 simID:(id)arg2;
- (void)registerServiceCapabilityNotifications;
- (void)setMmsEnabledToken:(int)arg1;
- (void)setRcsEnabledToken:(int)arg1;
- (bool)shouldShowMMSEmailAddress:(id)arg1 simID:(id)arg2;
- (bool)shouldUploadToMMCS:(id)arg1;
- (bool)smsAllowCaseSensitiveSenderIDForPhoneNumber:(id)arg1;
- (void)synchronizeMMSCapabilityToWatch:(bool)arg1;
- (void)synchronizePreferredSubscriptionMMSCapabilityToWatch;
- (id)uniqueIdentifierForPhoneNumber:(id)arg1 simID:(id)arg2;

@end