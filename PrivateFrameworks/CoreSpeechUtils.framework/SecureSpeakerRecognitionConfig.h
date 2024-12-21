/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSpeechUtils.framework/CoreSpeechUtils
 */

@interface SecureSpeakerRecognitionConfig : NSObject {
    void combinationWeight;
    void implicitProfileDeltaThreshold;
    void implicitProfileThreshold;
    void implicitTrainingEnabled;
    void implicitVTThreshold;
    void maxEnrollmentUtterances;
    void numPruningRetentionUtt;
    void phraseConfig;
    void pruningExplicitPSRThreshold;
    void pruningExplicitSATThreshold;
    void pruningPSRThreshold;
    void pruningSATThreshold;
    void psrConfigString;
    void psrMemoryIndex;
    void satConfigString;
    void satMemoryIndex;
    void useTDTIEnrollment;
}

@property (nonatomic, readonly) float combinationWeight;
@property (nonatomic, readonly) float implicitProfileDeltaThreshold;
@property (nonatomic, readonly) float implicitProfileThreshold;
@property (nonatomic, readonly) bool implicitTrainingEnabled;
@property (nonatomic, readonly) float implicitVTThreshold;
@property (nonatomic, readonly) long long maxEnrollmentUtterances;
@property (nonatomic, readonly) long long numPruningRetentionUtt;
@property (nonatomic, readonly) NSArray *phraseConfig;
@property (nonatomic, readonly) float pruningExplicitPSRThreshold;
@property (nonatomic, readonly) float pruningExplicitSATThreshold;
@property (nonatomic, readonly) float pruningPSRThreshold;
@property (nonatomic, readonly) float pruningSATThreshold;
@property (nonatomic, copy) NSString *psrConfigString;
@property (nonatomic, readonly) SecureMemoryIndex *psrMemoryIndex;
@property (nonatomic, copy) NSString *satConfigString;
@property (nonatomic, readonly) SecureMemoryIndex *satMemoryIndex;
@property (nonatomic, readonly) bool useTDTIEnrollment;

- (void).cxx_destruct;
- (float)combinationWeight;
- (float)implicitProfileDeltaThreshold;
- (float)implicitProfileThreshold;
- (bool)implicitTrainingEnabled;
- (float)implicitVTThreshold;
- (id)init;
- (id)initWithNumPruningRetentionUtt:(long long)arg1 pruningExplicitSATThreshold:(float)arg2 pruningExplicitPSRThreshold:(float)arg3 pruningSATThreshold:(float)arg4 pruningPSRThreshold:(float)arg5 combinationWeight:(float)arg6 implicitProfileThreshold:(float)arg7 implicitProfileDeltaThreshold:(float)arg8 implicitVTThreshold:(float)arg9 maxEnrollmentUtterances:(long long)arg10 implicitTrainingEnabled:(bool)arg11 useTDTIEnrollment:(bool)arg12 phraseConfig:(id)arg13 satMemoryIndex:(id)arg14 psrMemoryIndex:(id)arg15 satConfig:(id)arg16 psrConfig:(id)arg17;
- (long long)maxEnrollmentUtterances;
- (long long)numPruningRetentionUtt;
- (id)phraseConfig;
- (float)pruningExplicitPSRThreshold;
- (float)pruningExplicitSATThreshold;
- (float)pruningPSRThreshold;
- (float)pruningSATThreshold;
- (id)psrConfigString;
- (id)psrMemoryIndex;
- (id)satConfigString;
- (id)satMemoryIndex;
- (void)setPsrConfigString:(id)arg1;
- (void)setSatConfigString:(id)arg1;
- (bool)useTDTIEnrollment;

@end