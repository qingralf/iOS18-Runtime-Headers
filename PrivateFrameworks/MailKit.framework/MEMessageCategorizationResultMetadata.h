/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MailKit.framework/MailKit
 */

@interface MEMessageCategorizationResultMetadata : NSObject <NSSecureCoding> {
    NSString * _experimentDeploymentID;
    NSString * _experimentID;
    NSString * _experimentTreatmentID;
    NSString * _finalRuleVersion;
    NSString * _modelVersion;
    NSArray * _reasonCodes;
    NSString * _rolloutDeploymentID;
    NSString * _rolloutFactorPackID;
    NSString * _rolloutID;
    double  _score;
    NSString * _senderModelVersion;
    double  _senderScore;
    NSString * _tsModelVersion;
    double  _tsScore;
}

@property (nonatomic, readonly) NSString *experimentDeploymentID;
@property (nonatomic, readonly) NSString *experimentID;
@property (nonatomic, readonly) NSString *experimentTreatmentID;
@property (nonatomic, readonly) NSString *finalRuleVersion;
@property (nonatomic, readonly) NSString *modelVersion;
@property (nonatomic, readonly) NSArray *reasonCodes;
@property (nonatomic, readonly) NSString *rolloutDeploymentID;
@property (nonatomic, readonly) NSString *rolloutFactorPackID;
@property (nonatomic, readonly) NSString *rolloutID;
@property (nonatomic, readonly) double score;
@property (nonatomic, readonly) NSString *senderModelVersion;
@property (nonatomic, readonly) double senderScore;
@property (nonatomic, readonly) NSString *tsModelVersion;
@property (nonatomic, readonly) double tsScore;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)experimentDeploymentID;
- (id)experimentID;
- (id)experimentTreatmentID;
- (id)finalRuleVersion;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithScore:(double)arg1 senderScore:(double)arg2 tsScore:(double)arg3 reasonCodes:(id)arg4 modelVersion:(id)arg5 senderModelVersion:(id)arg6 tsModelVersion:(id)arg7 finalRuleVersion:(id)arg8 experimentID:(id)arg9 experimentDeploymentID:(id)arg10 experimentTreatmentID:(id)arg11 rolloutID:(id)arg12 rolloutDeploymentID:(id)arg13 rolloutFactorPackID:(id)arg14;
- (bool)isEqual:(id)arg1;
- (id)modelVersion;
- (id)reasonCodes;
- (id)rolloutDeploymentID;
- (id)rolloutFactorPackID;
- (id)rolloutID;
- (double)score;
- (id)senderModelVersion;
- (double)senderScore;
- (id)stringRepresentationWithError:(id*)arg1;
- (id)tsModelVersion;
- (double)tsScore;

@end