/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpeakerRecognition.framework/SpeakerRecognition
 */

@interface CSVTUISelfLoggingDigitalZeroReporter : NSObject <CSDigitalZeroReporting> {
    bool  _isMaxNumContinuousZerosOverThreshold;
    NSString * _locale;
    int  _maxNumAllowedContinuousZeros;
    int  _maxNumContinuousZeros;
    int  _pageNumber;
    NSString * _phId;
    int  _sessionStatus;
    NSUUID * _siriSetupID;
    NSString * _vtAssetConfigVersion;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (int)_getStageStatusFromTrainingManagerSessionStatus:(int)arg1;
- (bool)digitalZeroDetected;
- (id)initWithSiriSetupID:(id)arg1 PageNumber:(int)arg2 withPhId:(id)arg3 withLocale:(id)arg4 withVTAssetConfigVersion:(id)arg5 withSessionStatus:(int)arg6;
- (void)logDigitalZeroDetectionComplete;
- (void)reportDigitalZerosWithAudioZeroRun:(float)arg1;

@end
