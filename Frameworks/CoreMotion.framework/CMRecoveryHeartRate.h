/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMRecoveryHeartRate : NSObject <NSCopying, NSSecureCoding, SRSampleExporting> {
    double  fHeartRate;
    double  fHeartRateConfidence;
    unsigned long long  fRecordId;
    NSDate * fStartDate;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double heartRate;
@property (nonatomic, readonly) double heartRateConfidence;
@property (nonatomic, readonly) unsigned long long recordId;
@property (nonatomic, readonly) NSDate *startDate;
@property (readonly) Class superclass;

+ (struct HRRecoveryInputHR { unsigned long long x1; double x2; double x3; double x4; })inputFromPreparedStatement:(struct sqlite3_stmt { }*)arg1;
+ (bool)supportsSecureCoding;

- (id)binarySampleRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (double)heartRate;
- (double)heartRateConfidence;
- (id)initWithBinarySampleRepresentation:(id)arg1 metadata:(id)arg2 timestamp:(double)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecordId:(unsigned long long)arg1 startDate:(id)arg2 heartRate:(double)arg3 heartRateConfidence:(double)arg4;
- (id)initWithSample:(struct HRRecoveryInputHR { unsigned long long x1; double x2; double x3; double x4; })arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)recordId;
- (id)sr_dictionaryRepresentation;
- (id)startDate;

@end
