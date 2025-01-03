/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SafetyMonitor.framework/SafetyMonitor
 */

@interface SMLocation : NSObject <NSSecureCoding> {
    double  _altitude;
    NSDate * _date;
    double  _hunc;
    NSUUID * _identifier;
    double  _latitude;
    double  _longitude;
    int  _referenceFrame;
    double  _vunc;
}

@property (nonatomic, readonly) double altitude;
@property (nonatomic, readonly, copy) NSDate *date;
@property (nonatomic, readonly) double hunc;
@property (nonatomic, readonly, copy) NSUUID *identifier;
@property (nonatomic, readonly) double latitude;
@property (nonatomic, readonly) double longitude;
@property (nonatomic) int referenceFrame;
@property (nonatomic, readonly) double vunc;

+ (bool)isCLLocationValid:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (double)altitude;
- (id)date;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (double)hunc;
- (id)identifier;
- (id)initWithCLLocation:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithIdentifier:(id)arg1 latitude:(double)arg2 longitude:(double)arg3 hunc:(double)arg4 altitude:(double)arg5 vunc:(double)arg6 date:(id)arg7;
- (bool)isEqual:(id)arg1;
- (bool)isEquivalent:(id)arg1;
- (bool)isValid;
- (double)latitude;
- (double)longitude;
- (id)outputToDictionary;
- (int)referenceFrame;
- (void)setReferenceFrame:(int)arg1;
- (double)vunc;

@end
