/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

@interface CSVoiceTriggerAssetHandlerDarwin : CSVoiceTriggerAssetHandler <CSLanguageCodeUpdateMonitorDelegate, CSRemoteAssetManagerDelegate> {
    CSAsset * _cachedAsset;
}

@property (retain) CSAsset *cachedAsset;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)CSLanguageCodeUpdateMonitor:(id)arg1 didReceiveLanguageCodeChanged:(id)arg2;
- (void)CSRemoteAssetManagerDidDownloadNewAsset:(id)arg1;
- (void)_checkNewAssetAvailability;
- (void)_getVoiceTriggerAssetFromAssetManager:(id /* block */)arg1;
- (id)cachedAsset;
- (void)getVoiceTriggerAssetWithEndpointId:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (void)setCachedAsset:(id)arg1;
- (void)start;

@end
