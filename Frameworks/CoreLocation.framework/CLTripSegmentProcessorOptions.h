/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

@interface CLTripSegmentProcessorOptions : NSObject <NSCopying, NSSecureCoding> {
    bool  _createSparseDataFromOneHzData;
    bool  _isNetworkAccessAllowed;
    bool  _isSimulatedSparseProcessing;
    bool  _runInertialIntegrator;
    bool  _runLinearInterpolator;
    bool  _runMapIntegrator;
    bool  _shouldRecordDataInFileForReplay;
    double  _timeBetweenReconstructedPointsSeconds;
    NSString * _tripSegmentRecorderLoggingDirectory;
    bool  _useParticleMapMatcherForSnappingInMapIntegrator;
    bool  _useXPCServiceForMapQuery;
}

@property (nonatomic, readonly) bool createSparseDataFromOneHzData;
@property (nonatomic, readonly) bool isNetworkAccessAllowed;
@property (nonatomic, readonly) bool isSimulatedSparseProcessing;
@property (nonatomic, readonly) bool runInertialIntegrator;
@property (nonatomic, readonly) bool runLinearInterpolator;
@property (nonatomic, readonly) bool runMapIntegrator;
@property (nonatomic, readonly) bool shouldRecordDataInFileForReplay;
@property (nonatomic, readonly) double timeBetweenReconstructedPointsSeconds;
@property (nonatomic, readonly) NSString *tripSegmentRecorderLoggingDirectory;
@property (nonatomic, readonly) bool useParticleMapMatcherForSnappingInMapIntegrator;
@property (nonatomic, readonly) bool useXPCServiceForMapQuery;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)createSparseDataFromOneHzData;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isNetworkAccessAllowed;
- (bool)isSimulatedSparseProcessing;
- (bool)runInertialIntegrator;
- (bool)runLinearInterpolator;
- (bool)runMapIntegrator;
- (void)setCreateSparseDataFromOneHzData:(bool)arg1;
- (void)setNetworkAccessAllowed:(bool)arg1;
- (void)setRunInertialIntegrator:(bool)arg1;
- (void)setRunLinearInterpolator:(bool)arg1;
- (void)setRunMapIntegrator:(bool)arg1;
- (void)setSimulatedSparseProcessing:(bool)arg1;
- (void)setTimeBetweenReconstructedPointsSeconds:(double)arg1;
- (void)setTripSegmentRecorderLoggingDirectory:(id)arg1;
- (void)setUseParticleMapMatcherForSnappingInMapIntegrator:(bool)arg1;
- (void)setUseXPCService:(bool)arg1;
- (void)setshouldRecordDataInFileForReplay:(bool)arg1;
- (bool)shouldRecordDataInFileForReplay;
- (double)timeBetweenReconstructedPointsSeconds;
- (id)tripSegmentRecorderLoggingDirectory;
- (bool)useParticleMapMatcherForSnappingInMapIntegrator;
- (bool)useXPCServiceForMapQuery;

@end
