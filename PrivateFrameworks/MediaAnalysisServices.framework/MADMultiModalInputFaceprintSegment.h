/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaAnalysisServices.framework/MediaAnalysisServices
 */

@interface MADMultiModalInputFaceprintSegment : MADMultiModalInputSegment {
    VNFaceprint * _faceprint;
}

@property (nonatomic, readonly) VNFaceprint *faceprint;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)faceprint;
- (id)initWithCoder:(id)arg1;
- (id)initWithFaceprint:(id)arg1;
- (long long)type;

@end