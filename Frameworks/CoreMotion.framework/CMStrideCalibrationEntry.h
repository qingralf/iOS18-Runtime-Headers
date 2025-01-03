/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMStrideCalibrationEntry : NSObject <NSCopying, NSSecureCoding, SRSampleExporting> {
    struct CLStrideCalEntry { 
        int recordId; 
        double startTime; 
        unsigned int pacebin; 
        double kvalue; 
        double kvalueTrack; 
        double score; 
        double endTime; 
        double distance; 
        int steps; 
        int session; 
        double speed; 
        double percentGrade; 
        int gpsSource; 
        double timestamp; 
        double runningFormStrideLength; 
        int runningFormStrideLengthMetrics; 
    }  _strideCalStruct;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double distance;
@property (nonatomic, readonly) double endTime;
@property (nonatomic, readonly) long long gpsSource;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double kvalue;
@property (nonatomic, readonly) double kvalueTrack;
@property (nonatomic, readonly) double meanRunningStrideLength;
@property (nonatomic, readonly) long long numberRunningStrideLengthSamples;
@property (nonatomic, readonly) double percentGrade;
@property (nonatomic, readonly) unsigned long long recordId;
@property (nonatomic, readonly) int session;
@property (nonatomic, readonly) double speed;
@property (nonatomic, readonly) double startTime;
@property (nonatomic, readonly) int steps;
@property (readonly) Class superclass;

+ (struct CLStrideCalEntry { int x1; double x2; unsigned int x3; double x4; double x5; double x6; double x7; double x8; int x9; int x10; double x11; double x12; int x13; double x14; double x15; int x16; })inputFromPreparedStatement:(struct sqlite3_stmt { }*)arg1;
+ (bool)supportsSecureCoding;

- (id)binarySampleRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (double)distance;
- (void)encodeWithCoder:(id)arg1;
- (double)endTime;
- (long long)gpsSource;
- (id)initWithBinarySampleRepresentation:(id)arg1 metadata:(id)arg2 timestamp:(double)arg3;
- (id)initWithCLStrideCalEntry:(struct CLStrideCalEntry { int x1; double x2; unsigned int x3; double x4; double x5; double x6; double x7; double x8; int x9; int x10; double x11; double x12; int x13; double x14; double x15; int x16; })arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (double)kvalue;
- (double)kvalueTrack;
- (double)meanRunningStrideLength;
- (long long)numberRunningStrideLengthSamples;
- (unsigned int)pacebin;
- (double)percentGrade;
- (unsigned long long)recordId;
- (double)score;
- (int)session;
- (double)speed;
- (id)sr_dictionaryRepresentation;
- (double)startTime;
- (int)steps;

@end
