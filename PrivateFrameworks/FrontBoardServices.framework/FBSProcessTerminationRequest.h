/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSProcessTerminationRequest : NSObject <BSDescriptionProviding, NSCopying> {
    long long  _exceptionCode;
    NSString * _explanation;
    NSString * _label;
    unsigned long long  _options;
    <FBSProcess> * _process;
    long long  _reportType;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic) long long exceptionCode;
@property (nonatomic, copy) NSString *explanation;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *label;
@property (nonatomic) unsigned long long options;
@property (nonatomic) <FBSProcess> *process;
@property (nonatomic) long long reportType;
@property (readonly) Class superclass;

+ (id)requestForProcess:(id)arg1 withLabel:(id)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (long long)exceptionCode;
- (void)execute;
- (id)explanation;
- (id)label;
- (unsigned long long)options;
- (id)process;
- (long long)reportType;
- (void)setExceptionCode:(long long)arg1;
- (void)setExplanation:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setOptions:(unsigned long long)arg1;
- (void)setProcess:(id)arg1;
- (void)setReportType:(long long)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
