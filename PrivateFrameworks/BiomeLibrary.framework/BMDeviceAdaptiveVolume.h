/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BiomeLibrary.framework/BiomeLibrary
 */

@interface BMDeviceAdaptiveVolume : BMEventBase <BMStoreData> {
    unsigned int  _DRCappSelfVoiceFlag;
    unsigned int  _DRCenablementBit;
    unsigned int  _DRCwindFlag;
    NSString * _activeAirpodsSerialNumber;
    NSString * _activeAppName;
    unsigned int  _activeStreamFlag;
    unsigned int  _adjustedAutoAncGain;
    unsigned int  _anchorEnv;
    unsigned int  _anchorVol;
    unsigned int  _bigWindowSize;
    unsigned int  _budActivity;
    unsigned int  _cdEngagementFlag;
    unsigned int  _controllerVersion;
    unsigned int  _currentVolumePrct;
    unsigned int  _dataVersion;
    int  _desiredDeltaE;
    unsigned int  _downlinkdBA;
    unsigned int  _drumDRC;
    unsigned int  _drumdBA;
    unsigned int  _drumdBAPredicted;
    unsigned int  _drumdBK;
    NSArray * _envSpectralData32B;
    unsigned int  _fit;
    unsigned int  _fixedAutoAncGain;
    unsigned int  _focusMode;
    unsigned int  _guardrailsAvoidFlag;
    bool  _hasActiveStreamFlag;
    bool  _hasAdjustedAutoAncGain;
    bool  _hasAnchorEnv;
    bool  _hasAnchorVol;
    bool  _hasBigWindowSize;
    bool  _hasBudActivity;
    bool  _hasCdEngagementFlag;
    bool  _hasControllerVersion;
    bool  _hasCurrentVolumePrct;
    bool  _hasDRCappSelfVoiceFlag;
    bool  _hasDRCenablementBit;
    bool  _hasDRCwindFlag;
    bool  _hasDesiredDeltaE;
    bool  _hasDownlinkdBA;
    bool  _hasDrumDRC;
    bool  _hasDrumdBA;
    bool  _hasDrumdBAPredicted;
    bool  _hasDrumdBK;
    bool  _hasFit;
    bool  _hasFixedAutoAncGain;
    bool  _hasFocusMode;
    bool  _hasGuardrailsAvoidFlag;
    bool  _hasHeadphoneMode;
    bool  _hasInstdBA;
    bool  _hasInstdBC;
    bool  _hasLastEMediadBA;
    bool  _hasLastESiridBA;
    bool  _hasLastETelephonydBA;
    bool  _hasLastUserVolChangeType;
    bool  _hasLastVolMediaPrct;
    bool  _hasLastVolSiriPrct;
    bool  _hasLastVolTelephonyPrct;
    bool  _hasLocation;
    bool  _hasLocationType;
    bool  _hasManualVolumeChangeFlag;
    bool  _hasMediaType;
    bool  _hasMinMaxCutFlag;
    bool  _hasNonCAListeningMode;
    bool  _hasOnStartPredictionFlag;
    bool  _hasPersonalizationCoeff;
    bool  _hasPersonalizationParamMistakes;
    bool  _hasPersonalizationParamSnr;
    bool  _hasPredVolMediaPrct;
    bool  _hasPredVolSiriPrct;
    bool  _hasPredVolTelephonyPrct;
    bool  _hasPvFeatureEnableFlag;
    bool  _hasRefMicdBA;
    bool  _hasRefMicdBC;
    bool  _hasRoutedDRCGain;
    bool  _hasSingleBudFlag;
    bool  _hasSmallWindowSize;
    bool  _hasSmoothEae;
    bool  _hasSourceActivity;
    bool  _hasSpeechPresenceProbability;
    bool  _hasStreamType;
    bool  _hasStreamingAppBundleId;
    bool  _hasTimestamp;
    bool  _hasUnsignedPredVolMediaPrct;
    bool  _hasUnsignedPredVolSiriPrct;
    bool  _hasUnsignedPredVolTelephonyPrct;
    bool  _hasVolumeChangeFlag;
    bool  _hasWindProb;
    bool  _hasWindSpeechAggressorFlag;
    bool  _hasWindStrength;
    bool  _hasWind_prob;
    bool  _hasWind_strength;
    unsigned int  _headphoneMode;
    unsigned int  _instdBA;
    unsigned int  _instdBC;
    unsigned int  _lastEMediadBA;
    unsigned int  _lastESiridBA;
    unsigned int  _lastETelephonydBA;
    unsigned int  _lastUserVolChangeType;
    unsigned int  _lastVolMediaPrct;
    unsigned int  _lastVolSiriPrct;
    unsigned int  _lastVolTelephonyPrct;
    unsigned int  _location;
    unsigned int  _locationType;
    unsigned int  _manualVolumeChangeFlag;
    unsigned int  _mediaType;
    unsigned int  _minMaxCutFlag;
    NSArray * _noiseType4B;
    unsigned int  _nonCAListeningMode;
    unsigned int  _onStartPredictionFlag;
    unsigned int  _personalizationCoeff;
    int  _personalizationParamMistakes;
    int  _personalizationParamSnr;
    int  _predVolMediaPrct;
    int  _predVolSiriPrct;
    int  _predVolTelephonyPrct;
    unsigned int  _pvFeatureEnableFlag;
    unsigned int  _refMicdBA;
    unsigned int  _refMicdBC;
    unsigned int  _routedDRCGain;
    unsigned int  _singleBudFlag;
    unsigned int  _smallWindowSize;
    unsigned int  _smoothEae;
    unsigned int  _sourceActivity;
    unsigned int  _speechPresenceProbability;
    unsigned int  _streamType;
    unsigned int  _streamingAppBundleId;
    unsigned int  _timestamp;
    unsigned int  _unsignedPredVolMediaPrct;
    unsigned int  _unsignedPredVolSiriPrct;
    unsigned int  _unsignedPredVolTelephonyPrct;
    unsigned int  _volumeChangeFlag;
    unsigned int  _windProb;
    unsigned int  _windSpeechAggressorFlag;
    unsigned int  _windStrength;
}

@property (nonatomic, readonly) unsigned int DRCappSelfVoiceFlag;
@property (nonatomic, readonly) unsigned int DRCenablementBit;
@property (nonatomic, readonly) unsigned int DRCwindFlag;
@property (nonatomic, readonly) NSString *activeAirpodsSerialNumber;
@property (nonatomic, readonly) NSString *activeAppName;
@property (nonatomic, readonly) unsigned int activeStreamFlag;
@property (nonatomic, readonly) unsigned int adjustedAutoAncGain;
@property (nonatomic, readonly) unsigned int anchorEnv;
@property (nonatomic, readonly) unsigned int anchorVol;
@property (nonatomic, readonly) unsigned int bigWindowSize;
@property (nonatomic, readonly) unsigned int budActivity;
@property (nonatomic, readonly) unsigned int cdEngagementFlag;
@property (nonatomic, readonly) unsigned int controllerVersion;
@property (nonatomic, readonly) unsigned int currentVolumePrct;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) int desiredDeltaE;
@property (nonatomic, readonly) unsigned int downlinkdBA;
@property (nonatomic, readonly) unsigned int drumDRC;
@property (nonatomic, readonly) unsigned int drumdBA;
@property (nonatomic, readonly) unsigned int drumdBAPredicted;
@property (nonatomic, readonly) unsigned int drumdBK;
@property (nonatomic, readonly) NSArray *envSpectralData32B;
@property (nonatomic, readonly) NSArray *envSpectralData_32B;
@property (nonatomic, readonly) unsigned int fit;
@property (nonatomic, readonly) unsigned int fixedAutoAncGain;
@property (nonatomic, readonly) unsigned int focusMode;
@property (nonatomic, readonly) unsigned int guardrailsAvoidFlag;
@property (nonatomic) bool hasActiveStreamFlag;
@property (nonatomic) bool hasAdjustedAutoAncGain;
@property (nonatomic) bool hasAnchorEnv;
@property (nonatomic) bool hasAnchorVol;
@property (nonatomic) bool hasBigWindowSize;
@property (nonatomic) bool hasBudActivity;
@property (nonatomic) bool hasCdEngagementFlag;
@property (nonatomic) bool hasControllerVersion;
@property (nonatomic) bool hasCurrentVolumePrct;
@property (nonatomic) bool hasDRCappSelfVoiceFlag;
@property (nonatomic) bool hasDRCenablementBit;
@property (nonatomic) bool hasDRCwindFlag;
@property (nonatomic) bool hasDesiredDeltaE;
@property (nonatomic) bool hasDownlinkdBA;
@property (nonatomic) bool hasDrumDRC;
@property (nonatomic) bool hasDrumdBA;
@property (nonatomic) bool hasDrumdBAPredicted;
@property (nonatomic) bool hasDrumdBK;
@property (nonatomic) bool hasFit;
@property (nonatomic) bool hasFixedAutoAncGain;
@property (nonatomic) bool hasFocusMode;
@property (nonatomic) bool hasGuardrailsAvoidFlag;
@property (nonatomic) bool hasHeadphoneMode;
@property (nonatomic) bool hasInstdBA;
@property (nonatomic) bool hasInstdBC;
@property (nonatomic) bool hasLastEMediadBA;
@property (nonatomic) bool hasLastESiridBA;
@property (nonatomic) bool hasLastETelephonydBA;
@property (nonatomic) bool hasLastUserVolChangeType;
@property (nonatomic) bool hasLastVolMediaPrct;
@property (nonatomic) bool hasLastVolSiriPrct;
@property (nonatomic) bool hasLastVolTelephonyPrct;
@property (nonatomic) bool hasLocation;
@property (nonatomic) bool hasLocationType;
@property (nonatomic) bool hasManualVolumeChangeFlag;
@property (nonatomic) bool hasMediaType;
@property (nonatomic) bool hasMinMaxCutFlag;
@property (nonatomic) bool hasNonCAListeningMode;
@property (nonatomic) bool hasOnStartPredictionFlag;
@property (nonatomic) bool hasPersonalizationCoeff;
@property (nonatomic) bool hasPersonalizationParamMistakes;
@property (nonatomic) bool hasPersonalizationParamSnr;
@property (nonatomic) bool hasPredVolMediaPrct;
@property (nonatomic) bool hasPredVolSiriPrct;
@property (nonatomic) bool hasPredVolTelephonyPrct;
@property (nonatomic) bool hasPvFeatureEnableFlag;
@property (nonatomic) bool hasRefMicdBA;
@property (nonatomic) bool hasRefMicdBC;
@property (nonatomic) bool hasRoutedDRCGain;
@property (nonatomic) bool hasSingleBudFlag;
@property (nonatomic) bool hasSmallWindowSize;
@property (nonatomic) bool hasSmoothEae;
@property (nonatomic) bool hasSourceActivity;
@property (nonatomic) bool hasSpeechPresenceProbability;
@property (nonatomic) bool hasStreamType;
@property (nonatomic) bool hasStreamingAppBundleId;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasUnsignedPredVolMediaPrct;
@property (nonatomic) bool hasUnsignedPredVolSiriPrct;
@property (nonatomic) bool hasUnsignedPredVolTelephonyPrct;
@property (nonatomic) bool hasVolumeChangeFlag;
@property (nonatomic) bool hasWindProb;
@property (nonatomic) bool hasWindSpeechAggressorFlag;
@property (nonatomic) bool hasWindStrength;
@property (nonatomic) bool hasWind_prob;
@property (nonatomic) bool hasWind_strength;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned int headphoneMode;
@property (nonatomic, readonly) unsigned int instdBA;
@property (nonatomic, readonly) unsigned int instdBC;
@property (nonatomic, readonly) unsigned int lastEMediadBA;
@property (nonatomic, readonly) unsigned int lastESiridBA;
@property (nonatomic, readonly) unsigned int lastETelephonydBA;
@property (nonatomic, readonly) unsigned int lastUserVolChangeType;
@property (nonatomic, readonly) unsigned int lastVolMediaPrct;
@property (nonatomic, readonly) unsigned int lastVolSiriPrct;
@property (nonatomic, readonly) unsigned int lastVolTelephonyPrct;
@property (nonatomic, readonly) unsigned int location;
@property (nonatomic, readonly) unsigned int locationType;
@property (nonatomic, readonly) unsigned int manualVolumeChangeFlag;
@property (nonatomic, readonly) unsigned int mediaType;
@property (nonatomic, readonly) unsigned int minMaxCutFlag;
@property (nonatomic, readonly) NSArray *noiseType4B;
@property (nonatomic, readonly) NSArray *noiseType_4B;
@property (nonatomic, readonly) unsigned int nonCAListeningMode;
@property (nonatomic, readonly) unsigned int onStartPredictionFlag;
@property (nonatomic, readonly) unsigned int personalizationCoeff;
@property (nonatomic, readonly) int personalizationParamMistakes;
@property (nonatomic, readonly) int personalizationParamSnr;
@property (nonatomic, readonly) int predVolMediaPrct;
@property (nonatomic, readonly) int predVolSiriPrct;
@property (nonatomic, readonly) int predVolTelephonyPrct;
@property (nonatomic, readonly) unsigned int pvFeatureEnableFlag;
@property (nonatomic, readonly) unsigned int refMicdBA;
@property (nonatomic, readonly) unsigned int refMicdBC;
@property (nonatomic, readonly) unsigned int routedDRCGain;
@property (nonatomic, readonly) unsigned int singleBudFlag;
@property (nonatomic, readonly) unsigned int smallWindowSize;
@property (nonatomic, readonly) unsigned int smoothEae;
@property (nonatomic, readonly) unsigned int sourceActivity;
@property (nonatomic, readonly) unsigned int speechPresenceProbability;
@property (nonatomic, readonly) unsigned int streamType;
@property (nonatomic, readonly) unsigned int streamingAppBundleId;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned int timestamp;
@property (nonatomic, readonly) unsigned int unsignedPredVolMediaPrct;
@property (nonatomic, readonly) unsigned int unsignedPredVolSiriPrct;
@property (nonatomic, readonly) unsigned int unsignedPredVolTelephonyPrct;
@property (nonatomic, readonly) unsigned int volumeChangeFlag;
@property (nonatomic, readonly) unsigned int windProb;
@property (nonatomic, readonly) unsigned int windSpeechAggressorFlag;
@property (nonatomic, readonly) unsigned int windStrength;
@property (nonatomic, readonly) unsigned int wind_prob;
@property (nonatomic, readonly) unsigned int wind_strength;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (unsigned int)latestDataVersion;
+ (id)protoFields;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (unsigned int)DRCappSelfVoiceFlag;
- (unsigned int)DRCenablementBit;
- (unsigned int)DRCwindFlag;
- (id)_envSpectralData32BJSONArray;
- (id)_envSpectralData_32BJSONArray;
- (id)_noiseType4BJSONArray;
- (id)_noiseType_4BJSONArray;
- (id)activeAirpodsSerialNumber;
- (id)activeAppName;
- (unsigned int)activeStreamFlag;
- (unsigned int)adjustedAutoAncGain;
- (unsigned int)anchorEnv;
- (unsigned int)anchorVol;
- (unsigned int)bigWindowSize;
- (unsigned int)budActivity;
- (unsigned int)cdEngagementFlag;
- (unsigned int)controllerVersion;
- (unsigned int)currentVolumePrct;
- (unsigned int)dataVersion;
- (id)description;
- (int)desiredDeltaE;
- (unsigned int)downlinkdBA;
- (unsigned int)drumDRC;
- (unsigned int)drumdBA;
- (unsigned int)drumdBAPredicted;
- (unsigned int)drumdBK;
- (id)envSpectralData32B;
- (id)envSpectralData_32B;
- (unsigned int)fit;
- (unsigned int)fixedAutoAncGain;
- (unsigned int)focusMode;
- (unsigned int)guardrailsAvoidFlag;
- (bool)hasActiveStreamFlag;
- (bool)hasAdjustedAutoAncGain;
- (bool)hasAnchorEnv;
- (bool)hasAnchorVol;
- (bool)hasBigWindowSize;
- (bool)hasBudActivity;
- (bool)hasCdEngagementFlag;
- (bool)hasControllerVersion;
- (bool)hasCurrentVolumePrct;
- (bool)hasDRCappSelfVoiceFlag;
- (bool)hasDRCenablementBit;
- (bool)hasDRCwindFlag;
- (bool)hasDesiredDeltaE;
- (bool)hasDownlinkdBA;
- (bool)hasDrumDRC;
- (bool)hasDrumdBA;
- (bool)hasDrumdBAPredicted;
- (bool)hasDrumdBK;
- (bool)hasFit;
- (bool)hasFixedAutoAncGain;
- (bool)hasFocusMode;
- (bool)hasGuardrailsAvoidFlag;
- (bool)hasHeadphoneMode;
- (bool)hasInstdBA;
- (bool)hasInstdBC;
- (bool)hasLastEMediadBA;
- (bool)hasLastESiridBA;
- (bool)hasLastETelephonydBA;
- (bool)hasLastUserVolChangeType;
- (bool)hasLastVolMediaPrct;
- (bool)hasLastVolSiriPrct;
- (bool)hasLastVolTelephonyPrct;
- (bool)hasLocation;
- (bool)hasLocationType;
- (bool)hasManualVolumeChangeFlag;
- (bool)hasMediaType;
- (bool)hasMinMaxCutFlag;
- (bool)hasNonCAListeningMode;
- (bool)hasOnStartPredictionFlag;
- (bool)hasPersonalizationCoeff;
- (bool)hasPersonalizationParamMistakes;
- (bool)hasPersonalizationParamSnr;
- (bool)hasPredVolMediaPrct;
- (bool)hasPredVolSiriPrct;
- (bool)hasPredVolTelephonyPrct;
- (bool)hasPvFeatureEnableFlag;
- (bool)hasRefMicdBA;
- (bool)hasRefMicdBC;
- (bool)hasRoutedDRCGain;
- (bool)hasSingleBudFlag;
- (bool)hasSmallWindowSize;
- (bool)hasSmoothEae;
- (bool)hasSourceActivity;
- (bool)hasSpeechPresenceProbability;
- (bool)hasStreamType;
- (bool)hasStreamingAppBundleId;
- (bool)hasTimestamp;
- (bool)hasUnsignedPredVolMediaPrct;
- (bool)hasUnsignedPredVolSiriPrct;
- (bool)hasUnsignedPredVolTelephonyPrct;
- (bool)hasVolumeChangeFlag;
- (bool)hasWindProb;
- (bool)hasWindSpeechAggressorFlag;
- (bool)hasWindStrength;
- (bool)hasWind_prob;
- (bool)hasWind_strength;
- (unsigned int)headphoneMode;
- (id)initByReadFrom:(id)arg1;
- (id)initWithControllerVersion:(id)arg1 refMicdBA:(id)arg2 refMicdBC:(id)arg3 drumdBA:(id)arg4 drumdBK:(id)arg5 drumdBAPredicted:(id)arg6 downlinkdBA:(id)arg7 currentVolumePrct:(id)arg8 lastUserVolChangeType:(id)arg9 headphoneMode:(id)arg10 streamType:(id)arg11 windSpeechAggressorFlag:(id)arg12 volumeChangeFlag:(id)arg13 speechPresenceProbability:(id)arg14 personalizationParamSnr:(id)arg15 personalizationParamMistakes:(id)arg16 lastEMediadBA:(id)arg17 lastVolMediaPrct:(id)arg18 lastETelephonydBA:(id)arg19 lastVolTelephonyPrct:(id)arg20 lastESiridBA:(id)arg21 lastVolSiriPrct:(id)arg22 smoothEae:(id)arg23 desiredDeltaE:(id)arg24 predVolMediaPrct:(id)arg25 predVolTelephonyPrct:(id)arg26 predVolSiriPrct:(id)arg27 onStartPredictionFlag:(id)arg28 guardrailsAvoidFlag:(id)arg29 minMaxCutFlag:(id)arg30 manualVolumeChangeFlag:(id)arg31 bigWindowSize:(id)arg32 smallWindowSize:(id)arg33 activeAppName:(id)arg34 activeAirpodsSerialNumber:(id)arg35;
- (id)initWithControllerVersion:(id)arg1 refMicdBA:(id)arg2 refMicdBC:(id)arg3 drumdBA:(id)arg4 drumdBK:(id)arg5 drumdBAPredicted:(id)arg6 downlinkdBA:(id)arg7 currentVolumePrct:(id)arg8 lastUserVolChangeType:(id)arg9 headphoneMode:(id)arg10 streamType:(id)arg11 windSpeechAggressorFlag:(id)arg12 volumeChangeFlag:(id)arg13 speechPresenceProbability:(id)arg14 personalizationParamSnr:(id)arg15 personalizationParamMistakes:(id)arg16 lastEMediadBA:(id)arg17 lastVolMediaPrct:(id)arg18 lastETelephonydBA:(id)arg19 lastVolTelephonyPrct:(id)arg20 lastESiridBA:(id)arg21 lastVolSiriPrct:(id)arg22 smoothEae:(id)arg23 desiredDeltaE:(id)arg24 predVolMediaPrct:(id)arg25 predVolTelephonyPrct:(id)arg26 predVolSiriPrct:(id)arg27 onStartPredictionFlag:(id)arg28 guardrailsAvoidFlag:(id)arg29 minMaxCutFlag:(id)arg30 manualVolumeChangeFlag:(id)arg31 bigWindowSize:(id)arg32 smallWindowSize:(id)arg33 activeAppName:(id)arg34 activeAirpodsSerialNumber:(id)arg35 anchorVol:(id)arg36 anchorEnv:(id)arg37 personalizationCoeff:(id)arg38 unsignedPredVolMediaPrct:(id)arg39 unsignedPredVolTelephonyPrct:(id)arg40 unsignedPredVolSiriPrct:(id)arg41 singleBudFlag:(id)arg42 cdEngagementFlag:(id)arg43 activeStreamFlag:(id)arg44 pvFeatureEnableFlag:(id)arg45 envSpectralData32B:(id)arg46 windStrength:(id)arg47 windProb:(id)arg48 mediaType:(id)arg49 sourceActivity:(id)arg50 budActivity:(id)arg51 location:(id)arg52 locationType:(id)arg53 focusMode:(id)arg54 streamingAppBundleId:(id)arg55 noiseType4B:(id)arg56 instdBA:(id)arg57 instdBC:(id)arg58 nonCAListeningMode:(id)arg59 fit:(id)arg60 fixedAutoAncGain:(id)arg61 adjustedAutoAncGain:(id)arg62 timestamp:(id)arg63 DRCenablementBit:(id)arg64 DRCwindFlag:(id)arg65 DRCappSelfVoiceFlag:(id)arg66 drumDRC:(id)arg67 routedDRCGain:(id)arg68;
- (id)initWithControllerVersion:(id)arg1 refMicdBA:(id)arg2 refMicdBC:(id)arg3 drumdBA:(id)arg4 drumdBK:(id)arg5 drumdBAPredicted:(id)arg6 downlinkdBA:(id)arg7 currentVolumePrct:(id)arg8 lastUserVolChangeType:(id)arg9 headphoneMode:(id)arg10 streamType:(id)arg11 windSpeechAggressorFlag:(id)arg12 volumeChangeFlag:(id)arg13 speechPresenceProbability:(id)arg14 personalizationParamSnr:(id)arg15 personalizationParamMistakes:(id)arg16 lastEMediadBA:(id)arg17 lastVolMediaPrct:(id)arg18 lastETelephonydBA:(id)arg19 lastVolTelephonyPrct:(id)arg20 lastESiridBA:(id)arg21 lastVolSiriPrct:(id)arg22 smoothEae:(id)arg23 desiredDeltaE:(id)arg24 predVolMediaPrct:(id)arg25 predVolTelephonyPrct:(id)arg26 predVolSiriPrct:(id)arg27 onStartPredictionFlag:(id)arg28 guardrailsAvoidFlag:(id)arg29 minMaxCutFlag:(id)arg30 manualVolumeChangeFlag:(id)arg31 bigWindowSize:(id)arg32 smallWindowSize:(id)arg33 activeAppName:(id)arg34 activeAirpodsSerialNumber:(id)arg35 anchorVol:(id)arg36 anchorEnv:(id)arg37 personalizationCoeff:(id)arg38 unsignedPredVolMediaPrct:(id)arg39 unsignedPredVolTelephonyPrct:(id)arg40 unsignedPredVolSiriPrct:(id)arg41 singleBudFlag:(id)arg42 cdEngagementFlag:(id)arg43 activeStreamFlag:(id)arg44 pvFeatureEnableFlag:(id)arg45 envSpectralData_32B:(id)arg46 wind_strength:(id)arg47 wind_prob:(id)arg48 mediaType:(id)arg49 sourceActivity:(id)arg50 budActivity:(id)arg51 location:(id)arg52 locationType:(id)arg53 focusMode:(id)arg54 streamingAppBundleId:(id)arg55 noiseType_4B:(id)arg56 instdBA:(id)arg57 instdBC:(id)arg58 nonCAListeningMode:(id)arg59 fit:(id)arg60 fixedAutoAncGain:(id)arg61 adjustedAutoAncGain:(id)arg62 timestamp:(id)arg63 DRCenablementBit:(id)arg64 DRCwindFlag:(id)arg65 DRCappSelfVoiceFlag:(id)arg66;
- (id)initWithControllerVersion:(id)arg1 refMicdBA:(id)arg2 refMicdBC:(id)arg3 drumdBA:(id)arg4 drumdBK:(id)arg5 drumdBAPredicted:(id)arg6 downlinkdBA:(id)arg7 currentVolumePrct:(id)arg8 lastUserVolChangeType:(id)arg9 headphoneMode:(id)arg10 streamType:(id)arg11 windSpeechAggressorFlag:(id)arg12 volumeChangeFlag:(id)arg13 speechPresenceProbability:(id)arg14 personalizationParamSnr:(id)arg15 personalizationParamMistakes:(id)arg16 lastEMediadBA:(id)arg17 lastVolMediaPrct:(id)arg18 lastETelephonydBA:(id)arg19 lastVolTelephonyPrct:(id)arg20 lastESiridBA:(id)arg21 lastVolSiriPrct:(id)arg22 smoothEae:(id)arg23 desiredDeltaE:(id)arg24 predVolMediaPrct:(id)arg25 predVolTelephonyPrct:(id)arg26 predVolSiriPrct:(id)arg27 onStartPredictionFlag:(id)arg28 guardrailsAvoidFlag:(id)arg29 minMaxCutFlag:(id)arg30 manualVolumeChangeFlag:(id)arg31 bigWindowSize:(id)arg32 smallWindowSize:(id)arg33 activeAppName:(id)arg34 activeAirpodsSerialNumber:(id)arg35 anchorVol:(id)arg36 anchorEnv:(id)arg37 personalizationCoeff:(id)arg38 unsignedPredVolMediaPrct:(id)arg39 unsignedPredVolTelephonyPrct:(id)arg40 unsignedPredVolSiriPrct:(id)arg41 singleBudFlag:(id)arg42 cdEngagementFlag:(id)arg43 activeStreamFlag:(id)arg44 pvFeatureEnableFlag:(id)arg45 envSpectralData_32B:(id)arg46 wind_strength:(id)arg47 wind_prob:(id)arg48 mediaType:(id)arg49 sourceActivity:(id)arg50 budActivity:(id)arg51 location:(id)arg52 locationType:(id)arg53 focusMode:(id)arg54 streamingAppBundleId:(id)arg55 noiseType_4B:(id)arg56 instdBA:(id)arg57 instdBC:(id)arg58 nonCAListeningMode:(id)arg59 fit:(id)arg60 fixedAutoAncGain:(id)arg61 adjustedAutoAncGain:(id)arg62 timestamp:(id)arg63 DRCenablementBit:(id)arg64 DRCwindFlag:(id)arg65 DRCappSelfVoiceFlag:(id)arg66 drumDRC:(id)arg67;
- (id)initWithControllerVersion:(id)arg1 refMicdBA:(id)arg2 refMicdBC:(id)arg3 drumdBA:(id)arg4 drumdBK:(id)arg5 drumdBAPredicted:(id)arg6 downlinkdBA:(id)arg7 currentVolumePrct:(id)arg8 lastUserVolChangeType:(id)arg9 headphoneMode:(id)arg10 streamType:(id)arg11 windSpeechAggressorFlag:(id)arg12 volumeChangeFlag:(id)arg13 speechPresenceProbability:(id)arg14 personalizationParamSnr:(id)arg15 personalizationParamMistakes:(id)arg16 lastEMediadBA:(id)arg17 lastVolMediaPrct:(id)arg18 lastETelephonydBA:(id)arg19 lastVolTelephonyPrct:(id)arg20 lastESiridBA:(id)arg21 lastVolSiriPrct:(id)arg22 smoothEae:(id)arg23 desiredDeltaE:(id)arg24 predVolMediaPrct:(id)arg25 predVolTelephonyPrct:(id)arg26 predVolSiriPrct:(id)arg27 onStartPredictionFlag:(id)arg28 guardrailsAvoidFlag:(id)arg29 minMaxCutFlag:(id)arg30 manualVolumeChangeFlag:(id)arg31 bigWindowSize:(id)arg32 smallWindowSize:(id)arg33 activeAppName:(id)arg34 activeAirpodsSerialNumber:(id)arg35 anchorVol:(id)arg36 anchorEnv:(id)arg37 personalizationCoeff:(id)arg38 unsignedPredVolMediaPrct:(id)arg39 unsignedPredVolTelephonyPrct:(id)arg40 unsignedPredVolSiriPrct:(id)arg41 singleBudFlag:(id)arg42 cdEngagementFlag:(id)arg43 activeStreamFlag:(id)arg44 pvFeatureEnableFlag:(id)arg45 envSpectralData_32B:(id)arg46 wind_strength:(id)arg47 wind_prob:(id)arg48 mediaType:(id)arg49 sourceActivity:(id)arg50 budActivity:(id)arg51 location:(id)arg52 locationType:(id)arg53 focusMode:(id)arg54 streamingAppBundleId:(id)arg55 noiseType_4B:(id)arg56 instdBA:(id)arg57 instdBC:(id)arg58 nonCAListeningMode:(id)arg59 fit:(id)arg60 fixedAutoAncGain:(id)arg61 adjustedAutoAncGain:(id)arg62 timestamp:(id)arg63 DRCenablementBit:(id)arg64 DRCwindFlag:(id)arg65 DRCappSelfVoiceFlag:(id)arg66 drumDRC:(id)arg67 routedDRCGain:(id)arg68;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (unsigned int)instdBA;
- (unsigned int)instdBC;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (unsigned int)lastEMediadBA;
- (unsigned int)lastESiridBA;
- (unsigned int)lastETelephonydBA;
- (unsigned int)lastUserVolChangeType;
- (unsigned int)lastVolMediaPrct;
- (unsigned int)lastVolSiriPrct;
- (unsigned int)lastVolTelephonyPrct;
- (unsigned int)location;
- (unsigned int)locationType;
- (unsigned int)manualVolumeChangeFlag;
- (unsigned int)mediaType;
- (unsigned int)minMaxCutFlag;
- (id)noiseType4B;
- (id)noiseType_4B;
- (unsigned int)nonCAListeningMode;
- (unsigned int)onStartPredictionFlag;
- (unsigned int)personalizationCoeff;
- (int)personalizationParamMistakes;
- (int)personalizationParamSnr;
- (int)predVolMediaPrct;
- (int)predVolSiriPrct;
- (int)predVolTelephonyPrct;
- (unsigned int)pvFeatureEnableFlag;
- (unsigned int)refMicdBA;
- (unsigned int)refMicdBC;
- (unsigned int)routedDRCGain;
- (id)serialize;
- (void)setHasActiveStreamFlag:(bool)arg1;
- (void)setHasAdjustedAutoAncGain:(bool)arg1;
- (void)setHasAnchorEnv:(bool)arg1;
- (void)setHasAnchorVol:(bool)arg1;
- (void)setHasBigWindowSize:(bool)arg1;
- (void)setHasBudActivity:(bool)arg1;
- (void)setHasCdEngagementFlag:(bool)arg1;
- (void)setHasControllerVersion:(bool)arg1;
- (void)setHasCurrentVolumePrct:(bool)arg1;
- (void)setHasDRCappSelfVoiceFlag:(bool)arg1;
- (void)setHasDRCenablementBit:(bool)arg1;
- (void)setHasDRCwindFlag:(bool)arg1;
- (void)setHasDesiredDeltaE:(bool)arg1;
- (void)setHasDownlinkdBA:(bool)arg1;
- (void)setHasDrumDRC:(bool)arg1;
- (void)setHasDrumdBA:(bool)arg1;
- (void)setHasDrumdBAPredicted:(bool)arg1;
- (void)setHasDrumdBK:(bool)arg1;
- (void)setHasFit:(bool)arg1;
- (void)setHasFixedAutoAncGain:(bool)arg1;
- (void)setHasFocusMode:(bool)arg1;
- (void)setHasGuardrailsAvoidFlag:(bool)arg1;
- (void)setHasHeadphoneMode:(bool)arg1;
- (void)setHasInstdBA:(bool)arg1;
- (void)setHasInstdBC:(bool)arg1;
- (void)setHasLastEMediadBA:(bool)arg1;
- (void)setHasLastESiridBA:(bool)arg1;
- (void)setHasLastETelephonydBA:(bool)arg1;
- (void)setHasLastUserVolChangeType:(bool)arg1;
- (void)setHasLastVolMediaPrct:(bool)arg1;
- (void)setHasLastVolSiriPrct:(bool)arg1;
- (void)setHasLastVolTelephonyPrct:(bool)arg1;
- (void)setHasLocation:(bool)arg1;
- (void)setHasLocationType:(bool)arg1;
- (void)setHasManualVolumeChangeFlag:(bool)arg1;
- (void)setHasMediaType:(bool)arg1;
- (void)setHasMinMaxCutFlag:(bool)arg1;
- (void)setHasNonCAListeningMode:(bool)arg1;
- (void)setHasOnStartPredictionFlag:(bool)arg1;
- (void)setHasPersonalizationCoeff:(bool)arg1;
- (void)setHasPersonalizationParamMistakes:(bool)arg1;
- (void)setHasPersonalizationParamSnr:(bool)arg1;
- (void)setHasPredVolMediaPrct:(bool)arg1;
- (void)setHasPredVolSiriPrct:(bool)arg1;
- (void)setHasPredVolTelephonyPrct:(bool)arg1;
- (void)setHasPvFeatureEnableFlag:(bool)arg1;
- (void)setHasRefMicdBA:(bool)arg1;
- (void)setHasRefMicdBC:(bool)arg1;
- (void)setHasRoutedDRCGain:(bool)arg1;
- (void)setHasSingleBudFlag:(bool)arg1;
- (void)setHasSmallWindowSize:(bool)arg1;
- (void)setHasSmoothEae:(bool)arg1;
- (void)setHasSourceActivity:(bool)arg1;
- (void)setHasSpeechPresenceProbability:(bool)arg1;
- (void)setHasStreamType:(bool)arg1;
- (void)setHasStreamingAppBundleId:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasUnsignedPredVolMediaPrct:(bool)arg1;
- (void)setHasUnsignedPredVolSiriPrct:(bool)arg1;
- (void)setHasUnsignedPredVolTelephonyPrct:(bool)arg1;
- (void)setHasVolumeChangeFlag:(bool)arg1;
- (void)setHasWindProb:(bool)arg1;
- (void)setHasWindSpeechAggressorFlag:(bool)arg1;
- (void)setHasWindStrength:(bool)arg1;
- (void)setHasWind_prob:(bool)arg1;
- (void)setHasWind_strength:(bool)arg1;
- (unsigned int)singleBudFlag;
- (unsigned int)smallWindowSize;
- (unsigned int)smoothEae;
- (unsigned int)sourceActivity;
- (unsigned int)speechPresenceProbability;
- (unsigned int)streamType;
- (unsigned int)streamingAppBundleId;
- (unsigned int)timestamp;
- (unsigned int)unsignedPredVolMediaPrct;
- (unsigned int)unsignedPredVolSiriPrct;
- (unsigned int)unsignedPredVolTelephonyPrct;
- (unsigned int)volumeChangeFlag;
- (unsigned int)windProb;
- (unsigned int)windSpeechAggressorFlag;
- (unsigned int)windStrength;
- (unsigned int)wind_prob;
- (unsigned int)wind_strength;
- (void)writeTo:(id)arg1;

@end