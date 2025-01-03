/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PosterBoardUIServices.framework/PosterBoardUIServices
 */

@interface PRUISAnalysisServiceResponse : NSObject <BSDescriptionProviding, NSCopying, NSSecureCoding> {
    NSDictionary * _reports;
    NSUUID * _requestIdentifier;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSUUID *requestIdentifier;
@property (nonatomic, readonly) NSSet *requestedAnalyses;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRequestIdentifier:(id)arg1 reports:(id)arg2;
- (id)requestIdentifier;
- (id)requestedAnalyses;
- (id)resultForAnalysis:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
