/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMRecoverySession : NSObject <NSCopying, NSSecureCoding, SRSampleExporting> {
    double  fActivityEndTime;
    double  fHrMax;
    double  fHrMinAdjusted;
    double  fHrRecovery;
    double  fHrRecoveryReference;
    double  fLambda;
    double  fPeakHR;
    unsigned long long  fRecordId;
    double  fRecoveryOnsetTime;
    double  fSessionHrRecovery;
    NSDate * fStartDate;
    long long  fStatus;
    double  fSteadyStateHR;
    NSUUID * fWorkoutSessionId;
    long long  fWorkoutType;
}

@property (nonatomic, readonly) double activityEndTime;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double hrMax;
@property (nonatomic, readonly) double hrMinAdjusted;
@property (nonatomic, readonly) double hrRecovery;
@property (nonatomic, readonly) double hrRecoveryReference;
@property (nonatomic, readonly) double lambda;
@property (nonatomic, readonly) double peakHR;
@property (nonatomic, readonly) unsigned long long recordId;
@property (nonatomic, readonly) double recoveryOnsetTime;
@property (nonatomic, readonly) double sessionHrRecovery;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) long long status;
@property (nonatomic, readonly) double steadyStateHR;
@property (readonly) Class superclass;
@property (nonatomic, readonly, retain) NSUUID *workoutSessionId;
@property (nonatomic, readonly) long long workoutType;

+ (struct HRRecoverySession { unsigned long long x1; double x2; double x3; double x4; unsigned char x5[16]; long long x6; double x7; double x8; double x9; double x10; double x11; double x12; int x13; double x14; double x15; double x16; double x17; double x18; bool x19; bool x20; })inputFromPreparedStatement:(struct sqlite3_stmt { }*)arg1;
+ (bool)supportsSecureCoding;

- (double)activityEndTime;
- (id)binarySampleRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (double)hrMax;
- (double)hrMinAdjusted;
- (double)hrRecovery;
- (double)hrRecoveryReference;
- (id)initWithBinarySampleRepresentation:(id)arg1 metadata:(id)arg2 timestamp:(double)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecordId:(unsigned long long)arg1 startDate:(id)arg2 activityEndTime:(double)arg3 workoutSessionId:(id)arg4 workoutType:(long long)arg5 hrRecovery:(double)arg6 lambda:(double)arg7 hrMax:(double)arg8 hrMinAdjusted:(double)arg9 recoveryOnsetTime:(double)arg10 steadyStateHR:(double)arg11 status:(long long)arg12 sessionHrRecovery:(double)arg13 peakHR:(double)arg14 hrRecoveryReference:(double)arg15;
- (id)initWithSample:(struct HRRecoverySession { unsigned long long x1; double x2; double x3; double x4; unsigned char x5[16]; long long x6; double x7; double x8; double x9; double x10; double x11; double x12; int x13; double x14; double x15; double x16; double x17; double x18; bool x19; bool x20; })arg1;
- (bool)isEqual:(id)arg1;
- (double)lambda;
- (double)peakHR;
- (unsigned long long)recordId;
- (double)recoveryOnsetTime;
- (double)sessionHrRecovery;
- (id)sr_dictionaryRepresentation;
- (id)startDate;
- (long long)status;
- (double)steadyStateHR;
- (id)workoutSessionId;
- (long long)workoutType;

@end