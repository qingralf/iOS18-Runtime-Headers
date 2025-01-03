/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSAutoFillInternalFeedbackController : NSObject {
    NSMutableDictionary * _detailResponses;
    WBSAutoFillInternalFeedbackDiagnosticsData * _diagnosticsData;
    NSString * _knownWorkingBuild;
    bool  _regression;
    unsigned long long  _selectedAttachmentsType;
    unsigned long long  _selectedFeedbackCategory;
}

@property (nonatomic, readonly, copy) NSString *attachmentDetailsText;
@property (nonatomic, readonly) bool canContinueInTapToRadar;
@property (nonatomic, readonly, copy) NSURL *continueInTapToRadarURL;
@property (nonatomic, readonly, copy) NSOrderedSet *detailTypesForSelectedFeedbackCategory;
@property (nonatomic, readonly, copy) WBSAutoFillInternalFeedbackDiagnosticsData *diagnosticsData;
@property (nonatomic, copy) NSString *knownWorkingBuild;
@property (getter=isRegression, nonatomic) bool regression;
@property (nonatomic) unsigned long long selectedAttachmentsType;
@property (nonatomic) unsigned long long selectedFeedbackCategory;

+ (id)informativeText;
+ (id)isRegressionOptionText;
+ (id)knownWorkingBuildPlaceholderText;
+ (id)placeholderForFeedbackDetailType:(id)arg1;
+ (id)titleForAttachmentsType:(unsigned long long)arg1;
+ (id)titleForFeedbackCategory:(unsigned long long)arg1;
+ (id)titleForFeedbackDetailType:(id)arg1;
+ (id)titleText;

- (void).cxx_destruct;
- (id)_radarTitleComponentForDetails;
- (id)attachmentDetailsText;
- (bool)canContinueInTapToRadar;
- (id)continueInTapToRadarURL;
- (id)detailTypesForSelectedFeedbackCategory;
- (id)diagnosticsData;
- (id)initWithDiagnosticsData:(id)arg1;
- (bool)isRegression;
- (id)knownWorkingBuild;
- (id)responseForDetailType:(id)arg1;
- (unsigned long long)selectedAttachmentsType;
- (unsigned long long)selectedFeedbackCategory;
- (void)setKnownWorkingBuild:(id)arg1;
- (void)setRegression:(bool)arg1;
- (void)setResponse:(id)arg1 forDetailType:(id)arg2;
- (void)setSelectedAttachmentsType:(unsigned long long)arg1;
- (void)setSelectedFeedbackCategory:(unsigned long long)arg1;

@end
