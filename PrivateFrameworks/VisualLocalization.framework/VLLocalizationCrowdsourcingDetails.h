/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VisualLocalization.framework/VisualLocalization
 */

@interface VLLocalizationCrowdsourcingDetails : NSObject <NSSecureCoding> {
    double  _resultPoseRotation;
    double  _resultPoseTranslation;
    _VLStatistics * _statistics;
}

@property (nonatomic, readonly) unsigned long long descriptorDimension;
@property (nonatomic, readonly) unsigned long long frameCount;
@property (nonatomic, readonly) int*inlierIndices;
@property (nonatomic, readonly) unsigned long long inliersCount;
@property (nonatomic, readonly) float*perFrameCalibrationMatrices;
@property (nonatomic, readonly) float*perFrameDistortion;
@property (nonatomic, readonly) float*perFrameVioPoses;
@property (nonatomic, readonly) int*perFrameVioStatusCodes;
@property (nonatomic, readonly) float*points2D;
@property (nonatomic, readonly) double*points3D;
@property (nonatomic, readonly) double*resultPoseRotation;
@property (nonatomic, readonly) double*resultPoseTranslation;
@property (nonatomic, readonly) double*slamOrigin;
@property (nonatomic, readonly) char *slamTrackDescriptors;
@property (nonatomic, readonly) short*slamTrackImageIndices;
@property (nonatomic, readonly) short*slamTrackObservations;
@property (nonatomic, readonly) float*slamTracks;
@property (nonatomic, readonly) float*slamTracks2D;
@property (nonatomic, readonly) unsigned long long slamTracksCount;
@property (nonatomic, readonly) _VLStatistics *statistics;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)descriptorDimension;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)frameCount;
- (id)initWithCoder:(id)arg1;
- (id)initWithStats:(id)arg1 resultTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg2;
- (int*)inlierIndices;
- (unsigned long long)inliersCount;
- (float*)perFrameCalibrationMatrices;
- (float*)perFrameDistortion;
- (float*)perFrameVioPoses;
- (int*)perFrameVioStatusCodes;
- (float*)points2D;
- (double*)points3D;
- (double*)resultPoseRotation;
- (double*)resultPoseTranslation;
- (double*)slamOrigin;
- (char *)slamTrackDescriptors;
- (short*)slamTrackImageIndices;
- (short*)slamTrackObservations;
- (float*)slamTracks;
- (float*)slamTracks2D;
- (unsigned long long)slamTracksCount;
- (id)statistics;

@end