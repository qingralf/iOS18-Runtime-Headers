/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NightingaleTraining.framework/NightingaleTraining
 */

@interface NgtMenstrualAlgorithmsAnalysis : NSObject <NSSecureCoding> {
    NgtMenstrualAlgorithmsDeviationAnalysis * _deviationAnalysis;
    NSArray * _fertilityPredictions;
    bool  _isUserInactive;
    NSArray * _menstruationPredictions;
    NgtMenstrualAlgorithmsStats * _stats;
    NgtMenstrualAlgorithmsTelemetry * _telemetry;
}

@property (nonatomic, retain) NgtMenstrualAlgorithmsDeviationAnalysis *deviationAnalysis;
@property (nonatomic, retain) NSArray *fertilityPredictions;
@property (nonatomic) bool isUserInactive;
@property (nonatomic, retain) NSArray *menstruationPredictions;
@property (nonatomic, retain) NgtMenstrualAlgorithmsStats *stats;
@property (nonatomic, retain) NgtMenstrualAlgorithmsTelemetry *telemetry;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)deviationAnalysis;
- (void)encodeWithCoder:(id)arg1;
- (id)fertilityPredictions;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isUserInactive;
- (id)menstruationPredictions;
- (void)setDeviationAnalysis:(id)arg1;
- (void)setFertilityPredictions:(id)arg1;
- (void)setIsUserInactive:(bool)arg1;
- (void)setMenstruationPredictions:(id)arg1;
- (void)setStats:(id)arg1;
- (void)setTelemetry:(id)arg1;
- (id)stats;
- (id)telemetry;

@end
