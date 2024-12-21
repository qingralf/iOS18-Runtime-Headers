/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MicroLocation.framework/MicroLocation
 */

@interface ULServiceMetaInfo : NSObject <NSCopying, NSSecureCoding> {
    NSNumber * _numberOfBLESources;
    NSNumber * _numberOfClustersLearnedInModel;
    NSNumber * _numberOfFingerprintsAfterPruning;
    NSNumber * _numberOfFingerprintsBeforePruning;
    NSNumber * _numberOfInputValidFingerprints;
    NSNumber * _numberOfInputValidFingerprintsLabeled;
    NSNumber * _numberOfInputValidFingerprintsUnLabeled;
    NSNumber * _numberOfRecordingTriggersAtCurrentLocationOfInterest;
    NSNumber * _numberOfUWBSources;
    NSNumber * _numberOfWiFiAccessPoints;
}

@property (nonatomic, retain) NSNumber *numberOfBLESources;
@property (nonatomic, retain) NSNumber *numberOfClustersLearnedInModel;
@property (nonatomic, retain) NSNumber *numberOfFingerprintsAfterPruning;
@property (nonatomic, retain) NSNumber *numberOfFingerprintsBeforePruning;
@property (nonatomic, retain) NSNumber *numberOfInputValidFingerprints;
@property (nonatomic, retain) NSNumber *numberOfInputValidFingerprintsLabeled;
@property (nonatomic, retain) NSNumber *numberOfInputValidFingerprintsUnLabeled;
@property (nonatomic, retain) NSNumber *numberOfRecordingTriggersAtCurrentLocationOfInterest;
@property (nonatomic, retain) NSNumber *numberOfUWBSources;
@property (nonatomic, retain) NSNumber *numberOfWiFiAccessPoints;

+ (id)new;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithNumClustersLearnedInModel:(id)arg1 numRecordingTriggersAtCurrentLOI:(id)arg2 numInputValidFingerprints:(id)arg3 numInputValidFingerprintsLabeled:(id)arg4 numInputValidFingerprintsUnlabeled:(id)arg5 numFingerprintsBeforePruning:(id)arg6 numFingerprintsAfterPruning:(id)arg7 numWiFiAccessPoints:(id)arg8 numBLESources:(id)arg9 numUWBSources:(id)arg10;
- (bool)isEqual:(id)arg1;
- (id)numberOfBLESources;
- (id)numberOfClustersLearnedInModel;
- (id)numberOfFingerprintsAfterPruning;
- (id)numberOfFingerprintsBeforePruning;
- (id)numberOfInputValidFingerprints;
- (id)numberOfInputValidFingerprintsLabeled;
- (id)numberOfInputValidFingerprintsUnLabeled;
- (id)numberOfRecordingTriggersAtCurrentLocationOfInterest;
- (id)numberOfUWBSources;
- (id)numberOfWiFiAccessPoints;
- (void)setNumberOfBLESources:(id)arg1;
- (void)setNumberOfClustersLearnedInModel:(id)arg1;
- (void)setNumberOfFingerprintsAfterPruning:(id)arg1;
- (void)setNumberOfFingerprintsBeforePruning:(id)arg1;
- (void)setNumberOfInputValidFingerprints:(id)arg1;
- (void)setNumberOfInputValidFingerprintsLabeled:(id)arg1;
- (void)setNumberOfInputValidFingerprintsUnLabeled:(id)arg1;
- (void)setNumberOfRecordingTriggersAtCurrentLocationOfInterest:(id)arg1;
- (void)setNumberOfUWBSources:(id)arg1;
- (void)setNumberOfWiFiAccessPoints:(id)arg1;

@end